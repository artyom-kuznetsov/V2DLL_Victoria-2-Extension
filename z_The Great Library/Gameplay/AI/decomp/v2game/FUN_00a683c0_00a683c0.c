// FUN_00a683c0 @ 00a683c0 body=[[00a683c0, 00a68448]]


void FUN_00a683c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48308;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e42840;
  local_8 = 0;
  FUN_00a6a3b0(&local_14);
  puVar1 = in_ECX + 0x1f;
  *puVar1 = &PTR_FUN_00e4279c;
  local_8._0_1_ = 1;
  local_14 = puVar1;
  FUN_00a6b410();
  FUN_00a6b3e0();
  *puVar1 = &PTR_FUN_00e427b0;
  local_8 = CONCAT31(local_8._1_3_,2);
  tbb::internal::NFS_Free((void *)in_ECX[0x20]);
  *puVar1 = &PTR_FUN_00e4271c;
  FUN_00a60100();
  ExceptionList = local_10;
  return;
}

