#kernel header 추출하기

make headers_install 명령을 통해서 사용자 영역에서 사용할 수 있는 kernel header 를 추출해낼 수 있다. kernel header 는 system call 이나 system call 과 연관된 구조체, 상수 등을 정의하는데 사용될 수 있다. glibc 나 uClibc 가 대표적으로 사용하고 있는 라이브러리이다.

사용법은 간단하다. header 가 어떤 CPU architecture 에 사용되지는지, 어디에 설치할지만 결정하면 다음과 같이 명령을 실행해주면 된다. 다음은 arm architecture 를 사용하고 /develop/header 위치에 설치할 경우에 대한 예이다.

make headers_install ARCH=arm INSTALL_HDR_PATH=/develop/header

모든 architecture 에 대한 header 를 추출해낼 수 있다. 일반적으로 특정 CPU 에 대해서 개발하는 경우에는 잘 사용하지 않겠지만, linux distribution 관리자에게는 유용한 기능일 수도 있겠다.

make headers_install_all

#initramfs 를 위한 참고자료읽어야 할 자료

Documentation/filesystems/ramfs-rootfs-initramfs.txt man cpio(1) Documentation/early-userspace/buffer-format.txt Documentation/early-userspace/README http://www.tldp.org/HOWTO/Bootdisk-HOWTO/ http://www.tldp.org/HOWTO/From-PowerUp-To-Bash-Prompt-HOWTO.html http://www.linuxfromscratch.org/ifs/view/stable/ http://studyfoss.egloos.com/5260213

#inimfs 이미지를 만들자

linux 2.6.x 대부터 추가된 새로운 기능중에 initramfs 라는 것이 있다. 이것은 root file system 으로 사용이 가능한 것인데, kernel 이미지 자체에 포함이 되는 것이 큰 차이점이다. 일종의 ram disk 개념으로 사용하는 것으로 보이는데, 기존의 ram disk 와는 다르게, kernel 이 초기화 중에 다뤄주는 부분이라 이미지 안의 내용에 따라 크기가 자동으로 관리가 된다는 장점이 있다. 즉, 기존의 init rd 의 경우에는 kernel 에 얼마의 크기로 만들어줘야 하는지를 알려줘야하고, 이미지 생성할 경우에도 이 크기를 잘 정해줘야 하는 번거로움이 있다. 또한, 이 ram disk 의 경우에는 한번 할당이 되면 system 이 shut down 이 될 때까지는 항상 일정 RAM 영역을 잡고 있게 되는 비효율적인 면도 가지고 있다. initramfs 는 이러한 단점들을 개선한 ram disk 라 볼 수 있겠다. initramfs 을 만들기 위해서는 booting 이 될 수 있는 형태로 만들어야 한다. 자세한 내용은 googling 을 해보거나, 다음 사이트 등을 참조하면 된다.

http://www.tldp.org/HOWTO/Bootdisk-HOWTO/x88.html

여기에서는 최소한으로 구축할 수 있는 환경을 만들어 보도록 한다. 기본적으로 필요한 root file system 의 디렉토리는 다음과 같다.

bin, dev, etc, lib, proc, sbin, sys, tmp, usr, newroot

usr 디렉토리 내부에는 또 두개의 디렉토리가 필요하다.

bin, sbin

booting 시에 필요한 실행 프로그램은 두 가지이다.

bin/busybox, init

busybox 는 static link 된 형태로 만들도록 하자.

symbolic link 는 초기에 script 실행되도록 하기 위해서 bin/sh 를 bin/busybox 에 연결된 형태로 만들어준다.

init 는 실행이 가능한 script 로 만들어줘야 한다. 기본적으로 동작이 가능한 내용을 첨부파일로 등록해뒀으니 이것을 참조해서 적절하게 수정하면 된다. 대체적인 흐름은, proc 및 sysfs 를 mount 해준다. 기본적인 device node 를 생성해주고, mdev 를 이용해서 현재 사용한 device node 를 구축해준다. /proc/cmdline 을 통해서 root 로 사용할 device 를 parsing 해서 initramfs 부팅 후에 다시 root device 로 switch root 를 하게 된다.

이 switch root 를 위해서 root device 를 mount 할 point 가 필요한데, 이것이 newroot 라는 디렉토리이다. 이제 initramfs 용 root file system 이 구축이 되었으므로 kernel 에 포함시킬 수 있는 이미지 형태로 변환해줘야 한다. initramfs 작업을 한 최상위 디렉토리(etc, bin, proc... 이 있는 디렉토리) 로 가서 다음을 실행한다.

find . | cpio -H newc -o > ../initramfs.cpio

initramfs.cpio 라고 생성된 파일이 바로 initramfs 용으로 사용할 이미지가 된다.

#initramfs 를 kernel에 포함시키자

https://m.blog.naver.com/moonysl/140138603476

cod 앞서, initramfs 를 잘 만들었다면, 이것을 이용해서 booting 할 수 있도록 해줘야 한다. initramfs 는 kernel 이미지에 포함되는 것이므로, 이 설정 또한 kernel config 를 통해서 이미지 위치를 지정해주면 된다. 이미지를 추가해주는 방법은 아래의 그림과 같이 진입해서 설정해주면 된다.

#kbuild system ￼출력 파일 modules.order : ﻿ Makefiles 에 등장하는 module 들의 순서가 저장됨. modules.builtin : kernel 내로 builtin 되는 module 들의 list

환경 변수﻿ KCPPFLAGS : pre-processing 처리 시에 넘기는 옵션 AFLAGS_MODULE : $(AS) 에 대한 모듈 옵션 AFLAGS_KERNEL : buitin 되는 코드에 대한 $(AS) 옵션 KCFLAGS : C 컴파일러에 대한 옵션 CFLAGS_KERNEL : buitin 되는 코드에 대한 $$(CC) 옵션 CFLAGS_MODULE : $(CC) 에 대한 모듈 옵션 LDFLAGS_MODULE : 모듈 링크 시에 사용되는 옵션 KBUILD_VERBOSE : build 과정을 보여주는 부분에 대한 옵션(help 문서를 참조해야 함) KBUILD_EXTMOD : 외부 모듈을 build 할 경우 커널 소스를 검색하기 위한 설정

참고) 커널 소스 검색하기 위한 설정 방법 1. "M=..." 을 명령으로 넘긴다. 2. "KBUILD_EXTMOD" 환경 변수를 설정한다. 3. "SUBDIRS" 환경 변수를 설정한다. 1번의 경우가 가장 우선되는 설정이다.

KBUILD*OUTPUT : 커널 build 후 출력 디렉토리를 설정 KBUILD_DEBARCH : deb-pkg 용 설정(그냥 넘어가자) ARCH : build 할 architecture 설정(arm 계열은 arm, 32 bit 용 pc 계열은 i386) CROSS_COMPILE : binutils 파일의 고정된 이름 영역 CF : 잘 쓰이지 않는 옵션(그냥 넘어가자) INSTALL_PATH : kernel 과 system map 이 위치하게 되는 위치, 기본값은 /boot INSTALLKERNEL : make install 명령 사용시에 호출되는 script. 기본값은 installkernel MODLIB : module 이 설치되는 위치. 기본값은 $(INSTALL_MOD_PATH)/lib/modules/$(KERNELRELEASE) INSTALL_MOD_PATH : MODLIB 의 prefix INSTALL_MOD_STRIP : 모듈이 설치된 후 strip 되도록 설정. INSTALL_FW_PATH : firmware blobs 가 설치되는 위치(firmware 의 정체가 무엇인가?), 기본값은 $(INSTALL_MOD_PATH)/lib/firmware INSTALL_HDR_PATH : make headers** 실행 시에 사용자 영역의 header 가 설치되는 위치 KBUILD_MODPOST_WARM : 링크 단계에서 undefined symbols 경우에 error 를 회피할지의 여부를 설정 KBUILD_MODPOST_NOFINAL : 모듈 최종 링크 과정을 건너뛰는 설정. KBUILD_EXTRA_SYMBOLS : 다른 모듈로 부터의 symbol 을 사용하는 경우에 모듈 설정을 하기 위함. modules.txt 참조. ALLSOURCE_ARCHS : 하나 이상의 arch 를 지정하기 위한 설정(그냥 넘어가자) KBUILD_ENABLE_EXTRA_GCC_CHECKS : "W=1" 이상의 make 명령에서 gcc -W... 옵션을 가능하도록 설정. KBUILD_TIMESTAMP : UTS_VERSION 으로 설정되는 date string 을 덮어쓰는 기능. KBUILD_BUILD_USER, KBUILD_BUILD_HOST : 부팅 시와 /proc/version 에서 user@host 의 정보가 남도록 함.

#kernel Makefile Makefile 의 5개 부분 1. Makefile : top Makefile 2. .config : kernel 환경 설정 파일 3. arch/$(ARCH)/Makefile : architecture 에 따른 환경 설정 파일 4. scripts/Makefile.* : 공통적으로 사용되는 rules. 5. Kbuild Makefiles

Makefile 의 처리 과정 vmlinux (kernel image) 와 modules 를 build. build 되는 과정을 찾아가기 위해서는 arch/$(ARCH)/Makefile 로부터 시작하면 될 것 같다.

Kbuild 와 Makefile 의 우선 순위 kbuild 시에 사용되는 파일은 Makefile 과 Kbuild 파일임. 두 개가 동시에 존재할 경우에는 Kbuild 가 우선함.

target 모듈 지정

obj-y += foo.o

환경 설정에 따라 target 모듈에 추가할지 말지를 결정하도록 하기 위해서는 y 대신 변수를 지정해주면 됨.

obj-$(CONFIG_FOO) += foo.o

CONFIG_FOO 에는 y 와 m 이 들어갈 수 있으며, 이와 다른 값이 들어가는 경우에는 컴파일 되지 않음. y 인 경우에는 kernel 에 builtin 됨. m 인 경우에는 module 로써 build 를 하기 위한 설정임.

부분 모듈 추가 시키기

#fs/ext2/Makefile obj-$(CONFIG_EXT2_FS) += ext2.o ext2-y := balloc.o dir.o file.o ialloc.o inode.o ioctl.o \\ namei.o super.o symlink.o ext2-$(CONFIG_EXT2_FS_XATTR) += xattr.o xattr_user.o \\ xattr_trusted.o 위의 예에서 CONFIG_EXT2_FS 값에 따라 module 혹은 builtin, 제외가 선택이 되며, ext2 모듈에 ext2-y 로 지정된 오브젝트들이 링크됨. CONFIG_EXT2_FS_XATTR 값(추가시에는 y)에 따라서 선택적으로 링크될 수 있도록 설정.

library build 과정이 잘 이해되지 않는다. 일단 넘어가자.

subdirs 설정. 현 디렉토리에 소스가 존재하지 않고 sub-directory 로 관리하고자 할 경우에는 directory 자체를 obj-* 에 추가를 해준다.

#fs/Makefile obj-$(CONFIG_EXT2_FS) += ext2/

CONFIG_EXT2_FS 에는 y 나 m 이 올 수 있고, 이 값일 경우에는 build 시에 추가되며, 그렇지 않은 경우에는 제외된다.

ccflags-y, asflags-y, ldflags-y 컴파일 및 링크에 사용되는 옵션을 지정한다. EXTRA_CFLAGS, EXTRA_AFLAGS and EXTRA_LDFLAGS 와 동일하다.

drivers/acpi/Makefile
=====================

ccflags-y := -Os ccflags-$(CONFIG_ACPI_DEBUG) += -DACPI_DEBUG_OUTPUT

subdir-ccflags-y, subdir-asflags-y ccflags-y, asflags-y 와 동일한 기능을 하나, subdirectory 에도 공통으로 적용된다는 점에서 차이가 있다.

CFLAGS*$@, AFLAGS*$@ 파일 단위로 컴파일 옵션을 지정하고자 할 때 사용한다.

drivers/scsi/Makefile
=====================

CFLAGS_aha152x.o = -DAHA152X_STAT -DAUTOCONF CFLAGS_gdth.o = # -DDEBUG_GDTH=2 -D**SERIAL** -D**COM2** -DGDTH_STATISTICS
