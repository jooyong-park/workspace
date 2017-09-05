### Build options

```
$ scons -h
- debug: Debug (yes|no)
- asserts: Enable asserts (this flag is forced to 1 for debug=1) - - arch: Target Architecture (armv7a|arm64-v8a|arm64-v8.2-a|x86_32|x86_64)
- os: Target OS (linux|android|bare_metal)
- build: Build type (native|cross_compile)
- examples: Build example programs (yes|no)
- Werror: Enable/disable the -Werror compilation flag (yes|no)
- opencl: Enable OpenCL support (yes|no)
- neon: Enable Neon support (yes|no)
- embed_kernels: Embed OpenCL kernels in library binary (yes|no)
- set_soname: Set the library's soname and shlibversion (requires SCons 2.4 or above) (yes|no)
- openmp: Enable OpenMP backend (yes|no)
- cppthreads: Enable C++11 threads backend (yes|no)
- build_dir: Specify sub-folder for the build ( /path/to/build_dir )
- extra_cxx_flags: Extra CXX flags to be appended to the build command
- pmu: Enable PMU counters (yes|no)
- validation_tests: Build validation test programs (yes|no)
- benchmark_tests: Build benchmark test programs (yes|no)
```

Linux
-----

#### recommend GCCC toolchain

-	gcc-linaro-arm-linux-gnueabihf-4.9-2014.07_linux
-	gcc-linaro-4.9-2016.02-x86_64_aarch64-linux-gnu
-	gcc-linaro-6.3.1-2017.02-i686_aarch64-linux-gnu

32bit scons Werror=1 -j8 debug=1 neon=1 opencl=0 os=linux arch=armv7a

64bit scons Werror=1 -j8 debug=0 asserts=1 neon=0 opencl=1 embed_kernels=1 os=linux arch=arm64-v8a

benchmark, validation tests build Boost download http://www.boost.org/doc/libs/1_65_0/more/getting_started/index.html\`\`\` $ tar -xvf /path/to/boost_1_65_0.tar.bz2 $ cd path/to/boost_1_64_0 $ ./bootstrap.sh --help $ ./bootstrap.sh --prefix=path/to/installation/prefix $ sudo ./b2 install $ ./b2 --with-program_options --with-test link=static define=BOOST_TEST_ALTERNATIVE_INIT_API

cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=arm-linux-androideabi-clang++ -DBENCHMARK_ENABLE_LTO=false -DBENCHMARK_ENABLE_TESTING=false

cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=arm-linux-androideabi-clang++ -DBENCHMARK_ENABLE_LTO=false -DBENCHMARK_ENABLE_TESTING=false ..
