// FUN_00a6a1a0 @ 00a6a1a0 body=[[00a6a1a0, 00a6a1cc]]


void * FUN_00a6a1a0(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = tbb::internal::NFS_Allocate(param_1,1,(void *)0x0);
  if (pvVar1 == (void *)0x0) {
    tbb::internal::throw_exception_v4(1);
  }
  return pvVar1;
}

