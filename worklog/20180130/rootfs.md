/ : 루트 디렉토리라 /bin : ls, cp와 같은 기본 명령어가 저장 /boot : 시스템 부팅시 필요한 파일 저장 /dev : 시스템의 장치 파일 저장 /etc : 시스템 설정 파일 저장 /home : 사용자의 기본 디렉토리 저장 /lib : 시스템의 공유 라이브러리 저장 /lost+found : fsck 명령어가 사용하는 디렉토리, 특정 파일의 위치를 결정할 수 없는 경우 이 디렉토리에 보관 - fsck : 파일 시스템의 이상 여부를 진단하고 복구 /mnt : 다른 장치를 마운트하기 위한 디렉토리 /proc : 가상 파일시스템, 실제로 디스크에 저장되지 않음, 프로세스에 대한 정보를 저장 /usr : 사용자가 설치한 응용 프로그램, 소스코드, 도움말 파일 등이 저장 /root : 슈퍼 유저인 root의 홈 디렉토리 /sbin : 슈퍼 유저가 사용하는 명령어가 저장 /var : 로그 파일, 프린터 스풀 파일, 시스템 동작 중에 변화하는 파일 저장

SUID와 SGID – 특정 파일을 실행시 해당 파일의 소유자 또는 그룹의 권한으로 실행

```
-rwsr-xr-x 1 root root 34696 2009-05-11 14:04 ping
```

• 파일의 소유자는 "root“, 소유자의 권한은 ”rws” • "s"가 SUID가 설정되어

리눅스 환경 설정 파일 – username:password:uid:gid:gecos:homedir:program – username : 계정명, 로그인시 사용되는 이름 – password : 패스워드가 암호화되어 저장 • 사용자가 패스워드를 변경시“passwd" 명령 사용 • 쉐도우(shadow) 패스워드 : "x"나 "\*"로 표시 – uid : 사용자 ID로 각 사용자에게 시스템이 부여하는 고유한 정수값 • 시스템에서 uid와 username는 1:1 대응 – gid : 사용자가 속해 있는 기본 그룹의 ID • 그룹의 ID에 따른 이름은 /etc/group에 정의 – gecos : 사용자의 실제 이름이나 사무실, 연락처 등의 부가 정보 • finger 명령이 사용자를 구별하기 위해 이 항목을 이용 – homedir : 각 사용자의 홈 디렉토리 • 홈 디렉토리 : 사용자가 로그인시 최초로 접근하는 디렉토리 – program : 사용자가 로그인한 후에 실행되는 프로그램 • 사용자가 지정한 쉘을 실행

• 파일 시스템 설정 – 설정파일 : /etc/fstab, /etc/mtab에 저장 – 파일시스템이 로컬 시스템에 한정되지 않음 – NFS(Network File System)과 같이 원격지 시스템에 대한 마운트 정보 역시 파일 시스템 설정에 기록 가능 – 로컬 파일 시스템에 대한 분석을 수행하기 전에 분석 대상 시스템에 설정되어 있는 파일 시스템 설정을 확인 – /etc/fstab • 시스템을 부팅하면서 각 장치를 자동으로 마운트할 때 사용 • "mount“ 명령에서 ”-a" 옵션을 사용할 경우 사용

```
FileSystem MountPoint Type Option1,Option2··· Dump Pass
```

– FileSystem : 마운트되는 장치의 이름 • NFS를 마운트하는 경우에는 원격지의 경로 – MountPoint : 마운트 지점 – Type : 파일시스템의 타입 – Option • ro/rw : 읽기 전용/읽기 쓰기 가능 • suid/nosuid : SUID 사용 가능/불가 • sgid/nosgid : SGID 사용 가능/불가 • exec/noexec : 실행 권한을 가진 파일의 실행 가능/불가 • quota/noquota : 사용자별 사용 용량 제한/제한하지 않음 • auto/noauto : 부팅할 때 자동 마운트 수행/수행하지 않음 • user/nouser : 일반 사용자도 마운트 가능/불가 – Dump : “dump“라는 도구를 이용하여 파일 시스템 백업 가능 여부 – Pass : 마운트시 파일 시스템 검사 여부 • 0 : 검사하지 않음, 1,2 : 파일 시스템 검사. Pass가 1 부터 검사

```
proc /proc proc defaults 0 0
UUID=42682e56-77f3-49b6-a2b3-94413bd74a0f / ext4 errors=remount-ro 0 1
UUID=6e6c1a88-8c7b-44ea-80e0-0560af0d3cb9 none swap sw 0 0
/dev/scd1 /media/cdrom0 udf,iso9660 user,noauto,exec,utf8 0 0
/dev/scd0 /media/cdrom1 udf,iso9660 user,noauto,exec,utf8 0 0
/dev/fd0 /media/floppy0 auto rw,user,noauto,exec,utf8 0 0
```

/proc 파일 시스템 – 리눅스 시스템이 동작하기 위한 커널 정보를 메모리에 계층 구조로 구현한 것 – 메모리에만 존재하며 일반 사용자 및 관리자가 커널의 데이터를 쉽게 접근할 수 있도록 한다. – 현재 동작 중인 프로세스 정보, CPU 사용, 인터럽트, I/O 포트 정보, 장치정보 등을 쉽게 가져올 수 있음 – /proc 파일 시스템의 내용은 시스템 정보와 프로세스 정보로 구분 – 숫자로 구성된 디렉토리 : 현재 동작하거나 시스템에서 동작했었던 프로세스 ID – 각 디렉토리 : 프로세스의 동작과 관련된 파일 – 그 외 : 시스템에 관련된 정보
