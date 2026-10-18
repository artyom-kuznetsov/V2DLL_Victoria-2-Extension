// FUN_00a6a510 @ 00a6a510 body=[[00a6a510, 00a6a571] [00a6a575, 00a6a587]]


void FUN_00a6a510(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e4279c;
  local_8 = 0;
  FUN_00a6b410();
  FUN_00a6b3e0();
  *in_ECX = &PTR_FUN_00e427b0;
  local_8 = 1;
  tbb::internal::NFS_Free((void *)in_ECX[1]);
  *in_ECX = &PTR_FUN_00e4271c;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

