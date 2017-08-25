0prepare 변경 전 sysctl -w kernel.sem="1000 32000 128 512" ulimit -n 100000

0prepare 변경 후 sysctl -w kernel.sem="1000 32000 128 512"

#### sysctl -w kernel.pid_max=4194303

ulimit -n 100000

항목 설명

### 1. sysctl

-	sysctl 명령은 커널 변수의 값을 제어하여 시스템을 최적화할 수 있는 명령
-	sysctl은 시스템의 /proc/sys 디렉토리밑에 있는 커널 매개변수를 제어 /proc/sys 하위 디렉토리 구분 '/'는 '.'으로 대체

### 2. sysctl 명령어

-	/proc 디렉토리밑에 있는 항목들을 직접 편집하거나 echo 명령을 사용하는 것 외에 sysctl 명령을 이용하여 설정가능
-	사용법 sysctl option [파일명 or 파일명=값 등]
-	옵션 -a : 현재 커널 매개변수와 값을 보여줌 -p: sysctl 환경변수파일(/etc/sysctl.conf) 설정상태 표시 -n: 특정키값 표시 -w variable=value: 변수에 값 설정 -A: 테이블형태로 설정가능한 파라미터 표시 (-a와 동일)
-	커널매개변수 변경(vi, echo, sysctl)후 재부팅시 값 초기화 영구반영은 /etc/sysctl.conf 등록 , /etc/rc.d/rc.local파일 등록

### 3. sysctl -w kernel.sem="1000 32000 128 512"

-	ipcs -l : 현재 커널 매개변수 설정 표시

```
$ipcs -l
------ Messages Limits --------
max queues system wide = 32000 //MSGMNI
max size of message (bytes) = 8192 //MSGMAX
default max size of queue (bytes) = 16384 //MSGMNB

------ Shared Memory Limits --------
max number of segments = 4096 //SHMMNI
max seg size (kbytes) = 18014398509465599 //SHMMAX
max total shared memory (kbytes) = 18014398442373116 //SHMALL
min seg size (bytes) = 1

------ Semaphore Limits --------
max number of arrays = 32000 //SEMMNI
max semaphores per array = 32000 //SEMMSL
max semaphores system wide = 1024000000 //SEMMNS
max ops per semop call = 500 //SEMOPM
semaphore max value = 32767

$sudo vi /etc/sysctl.conf
          #Example for a computer with 16GB of RAM:
          kernel.shmmni=4096
          kernel.shmmax=17179869184
          kernel.shmall=8388608
          #kernel.sem=<SEMMSL> <SEMMNS> <SEMOPM> <SEMMNI>
          kernel.sem=250 256000 32 4096
          kernel.msgmni=16384
          kernel.msgmax=65536
          kernel.msgmnb=65536
$sysctl -p  --> /etc/sysctl.conf 설정값 로드
```

### 4.sysctl -w kernel.pid_max=4194303

```
$ cat /proc/sys/kernel/pid_max
32768
$ sysctl -w kernel.pid_max=4194303(2^22 64bit max pid value)
```

### 5.ulimit

-	ulimit는 프로세스의 자원 한도를 설정하는 명령
-	soft한도와 hard한도 두가지 sof t : 새로운 프로그램을 생성하면 기본으로 적용되는 한도 hard : 소프트한도에서 최대로 늘릴 수 있는 한도

### 6. ulimit 명령어 - 사용법 ulimit [옵션] 값 - 옵션 - a : 모든 제한 사항을 보여줌. -c : 최대 코어 파일 사이즈 -d : 프로세스 데이터 세그먼트의 최대 크기 -f : shell에 의해 만들어질 수 있는 파일의 최대 크기 -s : 최대 스택 크기 -p : 파이프 크기 -n : 오픈 파일의 최대수 -u : 오픈파일의 최대수 -v : 최대 가상메모리의 양 -S : soft 한도 -H : hard 한도 ulimit -n 100000 최대 오픈 파일

ulimit -u 변경 반영 안되어 --> sudo vi /etc/security/limit.conf 사용자명 hard nproc 개수 사용자명 soft nproc 개수
