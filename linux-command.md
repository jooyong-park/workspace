tee
---

-	표준출력(stdout)을 화면과 파일로 동시에 출력하는 명령어

	$ df -h | tee df.txt

-	기존 파일 유지 내용 추가

	$ df -h | tee -a df.txt

-	출력+오류를 화면 출력,피일 기록

	$ make -C ${KDIR} -j ${CPU_JOB_NUM} 2>&1 | tee ${KDIR}/build.log

tee ![tee](./tee.png)
