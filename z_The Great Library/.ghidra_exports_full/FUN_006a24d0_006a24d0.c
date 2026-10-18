// FUN_006a24d0 @ 006a24d0 body=[[006a24d0, 006a257c]]


undefined1 * FUN_006a24d0(undefined1 *param_1,undefined1 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f3ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x14] = 0;
  FUN_00408ed0(param_2 + 0x14,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_006a26b0(param_2 + 0x30);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  FUN_006a2600(param_1 + 0x48,param_2 + 0x48);
  ExceptionList = local_10;
  return param_1;
}

