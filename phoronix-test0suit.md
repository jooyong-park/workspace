### How to install Phoronix Test Suite 7.2.1 on Ubuntu 16.04

```
$ wget http://phoronix-test-suite.com/releases/repo/pts.debian/files/phoronix-test-suite_7.2.1_all.deb

$ sudo apt-get install libxslt1.1 php-cli php-common php7.0-cli php7.0-zip php7.0-common php7.0-json php7.0-opcache php7.0-readline php7.0-xml

$sudo dpkg -i phoronix-test-suite_7.2.1_all.deb

$phoronix-test-suite list-available-tests
```

Phoronix Test Suite Benchmarking Overview
-----------------------------------------

Phoronix Test Suite Apache and Nginx Tests

```
Phoronix test suite includes Apache Benchmark 2.4.7, also called: pts/apache-1.6.1 This test is just a basic AB test that hammers Apache with lots of requests. I'm not sure what test file is being used, but I would assume Apache is just serving up a basic html file and AB tries to request the file as many times as possible in a given amount of time.

/usr/bin/phoronix-test-suite benchmark pts/apache
If the Phoronix apache test fails to install / download you may need to install bzip2 to get around the error.

There is also an NGINX performance test, called pts/nginx-1.1.0. This test also uses Apache benchmark, but this time NGINX is serving the requests, not apache. If you run into errors while running the test, and it fails to complete on Ubuntu. You might need to disable IPV6 in /etc/sysctl.conf.

/usr/bin/phoronix-test-suite benchmark pts/nginx

###If pts/nginx-1.1.0 fails to run on Ubuntu, run these commands to resolve the issue

echo "net.ipv6.conf.all.disable_ipv6 = 1" >> /etc/sysctl.conf
sysctl -p
/usr/bin/phoronix-test-suite benchmark pts/phpbench
```

Phoronix Compression and Decompression Tests

```
If you want to use Phoronix Test Suite to test out compression performance, you can use the 5 compress-* tests below. These tests are very CPU intensive, so make sure you have decent CPU cooling before you run a ton of compression tests.

/usr/bin/phoronix-test-suite benchmark pts/compress-7zip
/usr/bin/phoronix-test-suite benchmark pts/compress-gzip
/usr/bin/phoronix-test-suite benchmark pts/compress-lzma
/usr/bin/phoronix-test-suite benchmark pts/compress-pbzip2
If you want to use Phoronix Test Suite to test out decompression performance, you can use the 5 decompress-* tests below.

/usr/bin/phoronix-test-suite benchmark pts/system-decompress-bzip2
/usr/bin/phoronix-test-suite benchmark pts/system-decompress-gzip
/usr/bin/phoronix-test-suite benchmark pts/system-decompress-tiff
/usr/bin/phoronix-test-suite benchmark pts/system-decompress-xz
/usr/bin/phoronix-test-suite benchmark pts/system-decompress-zlib
```

Phoronix Media Encoding Tests

```
The tests below should give you a good idea about how well your server or CPU handles encoding.

/usr/bin/phoronix-test-suite benchmark pts/encode-ape
/usr/bin/phoronix-test-suite benchmark pts/encode-flac
/usr/bin/phoronix-test-suite benchmark pts/encode-mp3
/usr/bin/phoronix-test-suite benchmark pts/encode-ogg
/usr/bin/phoronix-test-suite benchmark pts/encode-opus
/usr/bin/phoronix-test-suite benchmark pts/encode-wavpack
Phoronix Test Suite also has an FFmpeg test which should help to give you a general idea of FFmpeg performance.

/usr/bin/phoronix-test-suite benchmark pts/ffmpeg
```

General Test Suites

```
You can find the full list of all the test run under the "CPU" test suite -- http://openbenchmarking.org/suite/pts/cpu

The test suites below contain multiple benchmarks which make up the suite. If you want to run a specific test, or only want to run one or two different tests then you should skip to the sections below.

phoronix-test-suite benchmark pts/cpu
phoronix-test-suite benchmark pts/cryptography
phoronix-test-suite benchmark pts/database
phoronix-test-suite benchmark pts/java
```

Suite tests (A lot of tests wrapped up into one)

```
## See what tests are available
phoronix-test-suite list-tests
## Basic CPU test
phoronix-test-suite benchmark pts/cpu
## Basic Disk test
phoronix-test-suite benchmark pts/disk
## Basic RAM test
phoronix-test-suite benchmark pts/memory
## Overall system test
phoronix-test-suite benchmark pts/linux-system
## Overall mobo test
phoronix-test-suite benchmark pts/server
```

Disk and File System Tests

```
##fio is an advanced disk benchmark that depends upon the kernel's AIO access library.
phoronix-test-suite benchmark pts/fio

##AIO-Stress is an a-synchronous I/O benchmark created by SuSE. Current this profile uses a 2048MB test file and a 64KB record size.
phoronix-test-suite benchmark pts/aio-stress

##Dbench is a benchmark designed by the Samba project as a free alternative to netbench, but dbench contains only file-system calls for testing the disk performance.
phoronix-test-suite benchmark pts/dbench

##The IOzone benchmark tests the hard disk drive / file-system performance.
phoronix-test-suite benchmark pts/iozone

##Compilebench tries to age a filesystem by simulating some of the disk IO common in creating, compiling, patching, stating and reading kernel trees. It indirectly measures how well filesystems can maintain directory locality as the disk fills up and directories age. This current test is setup to use the makej mode with 10 initial directories
phoronix-test-suite benchmark pts/compilebench
```

CPU Tests

```
##Smallpt is a C++ global illumination renderer written in less than 100 lines of code. Global illumination is done via unbiased Monte Carlo path tracing and there is multi-threading support via the OpenMP library.
phoronix-test-suite benchmark pts/smallpt

##This test measures the time needed to compress a file using Gzip compression.
phoronix-test-suite benchmark pts/compress-gzip

##Time how long it takes to calculate pi to varying lengths.
phoronix-test-suite benchmark pts/systester

##This is a benchmark of John The Ripper, which is a password cracker.
phoronix-test-suite benchmark pts/john-the-ripper

##This is a test of C-Ray, a simple raytracer designed to test the floating-point CPU performance. This test is multi-threaded (16 threads per core), will shoot 8 rays per pixel for anti-aliasing, and will generate a 1600 x 1200 image.
phoronix-test-suite benchmark pts/c-ray

##NPB, NAS Parallel Benchmarks, is a benchmark developed by NASA for high-end computer systems. This test profile currently uses the MPI version of NPB.
phoronix-test-suite benchmark pts/npb

##This is a test of ab, which is the Apache benchmark program. This test profile measures how many requests per second a given system can sustain when carrying out 700,000 requests with 100 requests being carried out concurrently.
phoronix-test-suite benchmark pts/apache
```

RAM and Cache Tests

```
##This benchmark tests the system memory (RAM) performance.
phoronix-test-suite benchmark pts/ramspeed

##This benchmark tests the system memory (RAM) performance.
phoronix-test-suite benchmark pts/stream

##CacheBench is designed to test the memory and cache bandwidth performance
phoronix-test-suite benchmark pts/cachebench

##PHPBench is a benchmark suite for PHP. It performs a large number of simple tests in order to bench various aspects of the PHP interpreter. PHPBench can be used to compare hardware, operating systems, PHP versions, PHP accelerators and caches, compiler options, etc.
phoronix-test-suite benchmark pts/phpbench
```

https://wiki.mikejung.biz/Phoronix_Test_Suite
