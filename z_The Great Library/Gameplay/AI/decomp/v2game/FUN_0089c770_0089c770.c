// FUN_0089c770 @ 0089c770 body=[[0089c770, 0089c809]]


undefined4 * FUN_0089c770(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c343;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = CCasusBelliEffect::vftable;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_8 = 1;
  param_1[0x12] = 0;
  iVar1 = DAT_0131ac90 + 0x14;
  param_1[0x11] = 0x2d2d2d;
  FUN_00408ed0(iVar1,0,0xffffffff);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xf] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

