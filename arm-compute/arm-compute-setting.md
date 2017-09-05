ARM_-software/ComputeLibrary
============================

```
$ git clone https://github.com/ARM-software/ComputeLibrary.git
$ cd ComputeLibrary
```

### source tree

```
├── arm_compute --> All the arm_compute headers
│   ├── core
│   │   ├── CL
│   │   │   ├── CLKernels.h --> Includes all the OpenCL kernels at once
│   │   │   ├── CL specialisation of all the generic objects interfaces (ICLTensor, ICLImage, etc.)
│   │   │   ├── kernels --> Folder containing all the OpenCL kernels
│   │   │   │   └── CL*Kernel.h
│   │   │   └── OpenCL.h --> Wrapper to configure the Khronos OpenCL C++ header
│   │   ├── CPP
│   │   │   └── kernels --> Folder containing all the CPP kernels
│   │   │   │   └── CPP*Kernel.h
│   │   ├── NEON
│   │   │   ├── kernels --> Folder containing all the NEON kernels
│   │   │   │   └── NE*Kernel.h
│   │   │   └── NEKernels.h --> Includes all the NEON kernels at once
│   │   ├── All common basic types (Types.h, Window, Coordinates, Iterator, etc.)
│   │   ├── All generic objects interfaces (ITensor, IImage, etc.)
│   │   └── Objects metadata classes (ImageInfo, TensorInfo, MultiImageInfo)
│   └── runtime
│       ├── CL
│       │   ├── CL objects & allocators (CLArray, CLImage, CLTensor, etc.)
│       │   ├── functions --> Folder containing all the OpenCL functions
│       │   │   └── CL*.h
│       │   └── CLFunctions.h --> Includes all the OpenCL functions at once
│       ├── CPP
│       │   └── Scheduler.h --> Basic pool of threads to execute CPP/NEON code on several cores in parallel
│       ├── NEON
│       │   ├── functions --> Folder containing all the NEON functions
│       │   │   └── NE*.h
│       │   └── NEFunctions.h --> Includes all the NEON functions at once
│       └── Basic implementations of the generic object interfaces (Array, Image, Tensor, etc.)
├── documentation
│   ├── index.xhtml
│   └── ...
├── documentation.xhtml -> documentation/index.xhtml
├── examples
│   ├── cl_convolution.cpp
│   ├── neoncl_scale_median_gaussian.cpp
│   ├── neon_convolution.cpp
│   └── neon_scale.cpp
├── include
│   └── CL
│       └── Khronos OpenCL C headers and C++ wrapper
├── opencl-1.2-stubs
│   └── opencl_stubs.c
├── src
│   ├── core
│   │   └── ... (Same structure as headers)
│   │       └── CL
│   │           └── cl_kernels --> All the OpenCL kernels
│   └── runtime
│       └── ... (Same structure as headers)
├── tests
│   ├── All test related files shared between validation and benchmark
│   ├── CL --> OpenCL specific files (shared)
│   ├── NEON --> NEON specific files (shared)
│   ├── benchmark --> Sources for benchmarking
│   │   ├── Benchmark specific files
│   │   ├── main.cpp --> Entry point for benchmark test framework
│   │   ├── CL --> OpenCL benchmarking tests
│   │   └── NEON --> NEON benchmarking tests
│   ├── validation --> Sources for validation
│   │   ├── Validation specific files
│   │   ├── main.cpp --> Entry point for validation test framework
│   │   ├── CL --> OpenCL validation tests
│   │   ├── NEON --> NEON validation tests
│   │   └── UNIT --> Library validation tests
│   └── dataset --> Datasets defining common sets of input parameters
└── utils --> Boiler plate code used by examples
    └── Utils.h
```
