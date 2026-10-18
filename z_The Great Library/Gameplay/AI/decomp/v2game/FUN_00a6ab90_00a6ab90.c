// FUN_00a6ab90 @ 00a6ab90 body=[[00a6ab90, 00a6abf4]]


void FUN_00a6ab90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40d30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e4279c;
  local_8 = 0;
  FUN_00a6b410();
  FUN_00a6b3e0();
  *param_1 = &PTR_FUN_00e427b0;
  local_8 = 1;
  tbb::internal::NFS_Free((void *)param_1[1]);
  *param_1 = &PTR_FUN_00e4271c;
  ExceptionList = local_10;
  return;
}

