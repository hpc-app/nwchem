#include <stdio.h>
#include <stdlib.h>
#ifdef TCE_CUDA
#ifdef OLD_CUDA
#include <cuda_runtime_api.h>
#else
#include <cuda.h>
#endif
#endif
#ifdef TCE_HIP
#include <hip/hip_runtime_api.h>
#endif
#include "ga.h"
#include "typesf2c.h"
#ifdef TCE_CUDA
Integer FATR util_cuda_get_num_devices_(){
  int dev_count_check;
  cudaGetDeviceCount(&dev_count_check);
  return (Integer) dev_count_check;
}
#endif
#ifdef TCE_HIP
Integer FATR util_cuda_get_num_devices_(){
  int dev_count_check;
  hipGetDeviceCount(&dev_count_check);
  return (Integer) dev_count_check;
}
#endif
/* $Id$ */
