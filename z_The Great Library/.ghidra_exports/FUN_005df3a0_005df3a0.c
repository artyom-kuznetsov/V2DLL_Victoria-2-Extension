// FUN_005df3a0 @ 005df3a0  (requested 005DF3A0, first bytes: 55 8B EC 6A FF 68 06 5C)


undefined4 * FUN_005df3a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45c06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = CMoveCommand::vftable;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_8._0_1_ = 2;
  FUN_009beeb0(in_ECX + 100);
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar2 = *(int *)(in_ECX + 0x74);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x21] = *(undefined4 *)(in_ECX + 0x84);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(in_ECX + 0x88);
  *(undefined1 *)((int)param_1 + 0x89) = *(undefined1 *)(in_ECX + 0x89);
  *(undefined1 *)((int)param_1 + 0x8a) = *(undefined1 *)(in_ECX + 0x8a);
  *(undefined1 *)((int)param_1 + 0x8b) = *(undefined1 *)(in_ECX + 0x8b);
  param_1[0x23] = *(undefined4 *)(in_ECX + 0x8c);
  ExceptionList = local_10;
  return param_1;
}

