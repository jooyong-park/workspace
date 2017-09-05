[DOXYGEN] http://onecellboy.tistory.com/342

### Doxygen 이란?

-	doxygen는 코드상의 주석을 통해 문서를 만들어내는 프로그램이다. doxygen에 맞는 주석을 사용하면 따로 문서를 만들 필요 없이 주석만으로 문서를 만들 수 있기 때문에 문서 관리를 따로 할 필요가 없고 코드만 보고도 이해하기가 쉬워진다.

Doxygen 설치

```
$ sudo apt-get install doxygen doxygen-gui
```

Doxygen gui 실행

```
$ doxywizard
```

http://linuxspot.tistory.com/264 Doxygen 설정 파일(configuration file) 생성하기

```
$] doxygen -g

Configuration file `Doxyfile' created.
Now edit the configuration file and enter

  doxygen Doxyfile

to generate the documentation for your project
```

Doxygen 문서 생성하기 - 아래의 명령어를 이용해 문서화를 합니다.

```
  $] doxygen
```
