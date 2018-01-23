1.	ZIP
	-	압축하기 zip -rF (압축파일명).zip (압축할 폴더 또는 파일) r : 서브 디렉터리 까지 압축 F : 한글 이름을 가진 파일까지 압축

```
zip filename.zip ./*                 //현재 폴더에 전부를 압축할때 ./* 는 현재 폴더 전부를 의미
zip -r filename.zip ./* 	   //현재 폴더 하위에있는 폴더 포함하여 압축
```

```
- 압축 풀기
```

```
	unzip filename.zip
	unzip filename.zip -d /foldername/
```

1.	tar

	-	압축하기

```
	$ tar cf [압축파일명.tar] [압축할 파일/디렉토리]
```

```
- 압축 풀기
```

```
	$ tar xf [압축파일명.tar]
	$ tar -xvf filename.tar  -C  /folder/dest_folder_name/    #지정된 위치에 압축풀기
```

```
* tar 와 tar.gz 파일압축의 다른점 : 옵션에서 z 차이

옵션 : 'v' 옵션으로 실행 과정 출력
```

1.	tar.gz

	-	압축하기 $ tar zcf [압축파일명.tar.gz] [압축할 파일/디렉토리] $ tar -czvf 압축파일명.tar.gz 압축할파일/폴더1 압축할파일/폴더2 압축할파일/폴더3 ... $ tar -czvf images.tar.gz ./folder/a1.jpg ./folder/a2.jpg ./folder/a3.jpg $ tar -czvf --exclude=./folder/filename.jpg tarname.tar.gz ./folder # 예외 압축

	-	압축 풀기 $ tar xfz [압축파일명.tar.gz] $ tar -xzvf 압축되어있는파일명.tar.gz $ tar -zxvf filename.tar.gz -C /folder/dest_folder_name/ #지정된 위치에 압축풀기

	옵션 : 'z' 옵션이 gz 파일 압축풀기 옵션

2.	tar.bz2 압축률이 가장높음

	-	압축하기 $ tar jcvf [압축파일명.tar.bz2] [압축할 파일/디렉토리]

	-	압축 풀기 $ tar jxvf [압축파일명.tar.bz2] $ tar -jxvf filename.tar.bz2 -C /folder/dest_folder_name/

	옵션 : 'j' 옵션이 bz2 파일 압축풀기 옵션

3.	tar.xz - 이중으로 압축을 풀어야 한다.

	-	압축하기

	$ xz -d [압축파일명.tar.xz]

	$ tar -xf [압축파일명.tar]

문제점 : 압축 풀기 안될때 - unzip 이 안깔려 있을때 apt-get install unzip

차이점 : zip 과 tar 의 압축 경로 옵션 설정은 zip : -d, tar : -C

출처: http://webcreate.tistory.com/entry/리눅스-압축-파일-총정리-zip-tar-targz-tarbz2-압축풀기 [임베디드 | 라즈베리파이 | ARM | 리눅스 | Qt]
