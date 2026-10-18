// FUN_005e4100 @ 005e4100  (requested 005E4100, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_005e4100(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45af3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = CSplitAndLoadArmyCommand::vftable;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x19] = *(undefined4 *)(in_ECX + 100);
  param_1[0x1a] = *(undefined4 *)(in_ECX + 0x68);
  param_1[0x1b] = *(undefined4 *)(in_ECX + 0x6c);
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00408ed0(in_ECX + 0x70,0,0xffffffff);
  param_1[0x23] = *(undefined4 *)(in_ECX + 0x8c);
  param_1[0x24] = *(undefined4 *)(in_ECX + 0x90);
  param_1[0x25] = *(undefined4 *)(in_ECX + 0x94);
  ExceptionList = local_10;
  return param_1;
}

