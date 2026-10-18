// FUN_00562230 @ 00562230 body=[[00562230, 00562395]]


undefined4 * FUN_00562230(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93446;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044bc60();
  local_8 = 0;
  *param_1 = CStaticModifier::vftable;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00408ed0();
  *param_1 = CInvention::vftable;
  param_1[0x16] = 0x18d;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x15] = CAndTrigger::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00569c70(param_1 + 0x1c);
  param_1[0x101] = 0x18d;
  param_1[0x100] = CAdditiveMTTH::vftable;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0x10d) = 1;
  if ((DAT_00f0ec08 == 0) || (piVar1 = (int *)FUN_009e6c10(), piVar1 == (int *)0x0)) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = *piVar1;
  }
  param_1[0x13] = iVar2;
  if (iVar2 == 0xc) {
    uVar3 = FUN_009902d0();
    param_1[0x13] = uVar3;
    param_1[0x14] = param_2;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[0x14] = param_2;
  ExceptionList = local_10;
  return param_1;
}

