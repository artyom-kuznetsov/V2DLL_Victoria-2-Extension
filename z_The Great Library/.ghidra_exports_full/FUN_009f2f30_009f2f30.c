// FUN_009f2f30 @ 009f2f30 body=[[009f2f30, 009f2fe6]]


undefined4 * FUN_009f2f30(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b418c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *param_1 = &PTR_FUN_00e3cffc;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2 + 8,0,0xffffffff);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3d068;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00408ed0(param_2 + 0x28,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar2 = *(int *)(param_2 + 0x44);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x20);
    FUN_00408db0(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = local_10;
  return param_1;
}

