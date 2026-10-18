// FUN_00a60e90 @ 00a60e90 body=[[00a60e90, 00a60f3c]]


void FUN_00a60e90(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b484c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e42728;
  local_8 = 2;
  if (in_ECX[6] != 0) {
    FUN_00a8a9a0(in_ECX[6]);
  }
  FUN_00a6a8c0(in_ECX + 0x1f);
  puVar1 = in_ECX + 0x27;
  *puVar1 = &PTR_FUN_00e4279c;
  local_8._0_1_ = 3;
  FUN_00a6b410();
  FUN_00a6b3e0();
  *puVar1 = &PTR_FUN_00e427b0;
  local_8 = CONCAT31(local_8._1_3_,4);
  tbb::internal::NFS_Free((void *)in_ECX[0x28]);
  *puVar1 = &PTR_FUN_00e4271c;
  FUN_0057afc0(in_ECX + 0x1f);
  FUN_00aaea59(in_ECX[0x21]);
  FUN_00a60100();
  ExceptionList = local_10;
  return;
}

