// FUN_00a682c0 @ 00a682c0 body=[[00a682c0, 00a68381]]


undefined4 * FUN_00a682c0(undefined4 *param_1,undefined4 param_2)

{
  void *_Dst;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4833d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  *param_1 = &PTR_FUN_00e42840;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  param_1[0x1f] = &PTR_FUN_00e427b0;
  _Dst = tbb::internal::NFS_Allocate(1,0x220,(void *)0x0);
  param_1[0x20] = _Dst;
  _memset(_Dst,0,0x220);
  *(undefined4 *)(param_1[0x20] + 0x104) = 4;
  *(undefined4 *)(param_1[0x20] + 0x100) = 0x20;
  param_1[0x1f] = &PTR_FUN_00e4279c;
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x22] = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[6] = 0;
  FUN_00a6af50();
  ExceptionList = local_10;
  return param_1;
}

