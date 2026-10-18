// FUN_00a60bd0 @ 00a60bd0 body=[[00a60bd0, 00a60cd0]]


undefined4 *
FUN_00a60bd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b484fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e42728;
  param_1[0x20] = 0x1ff;
  param_1[0x1f] = 0;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x21] = pvVar1;
  _memset(pvVar1,0,param_1[0x20] * 4);
  local_8._0_1_ = 2;
  param_1[0x27] = &PTR_FUN_00e427b0;
  pvVar1 = tbb::internal::NFS_Allocate(1,0x220,(void *)0x0);
  param_1[0x28] = pvVar1;
  _memset(pvVar1,0,0x220);
  *(undefined4 *)(param_1[0x28] + 0x104) = 4;
  *(undefined4 *)(param_1[0x28] + 0x100) = 0x20;
  param_1[0x27] = &PTR_FUN_00e4279c;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00a60ce0(param_5,param_6);
  ExceptionList = local_10;
  return param_1;
}

