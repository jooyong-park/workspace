커널 이미지만 변경 방법
-----------------------

현재 사용중인 커널 버전 확인

```
$ uname -r
$ cat /proc/version
```

리눅스 커널 이미지 버전 검색

```
$ sudo apt-cache search linux-image
```

설치 하려는 버전 다운로드

```
$ sudo apt-get install linux-image-버전
$ sudo reboot
```

커널 소드 다운로드 후 빌드 방법
-------------------------------

사용하고자 하는 커널 소스 다운로드

http://www.kernel.org

소스 이동 및 압축 풀기

```
$ cd /usr/src/
$ cp(mv) 다운로드 커널소스 -> 현재폴더
$ sudo xz -d 다운로드 커널소스
$ sudo tar xf 다운로드 커널소스
$ cd 압축 해제된 커널소스폴더
```

현재 사용중인 config 적용

```
$ cp /boot/config-현재커널명 ./.config
$ make menuconfig (config 변경 필요시)
```

커널 빌드

```
$ sudo make -kpkg --initrd --revision=xxx kernel_image
```

빌드 이미지 확인 및 적용

```
$ cd ..
$ ls
linux-image-빌드한버전.deb
$ sudo dpkg -i linux-image-빌드한버전.deb
$ sudo update-grub
$ reboot
```
