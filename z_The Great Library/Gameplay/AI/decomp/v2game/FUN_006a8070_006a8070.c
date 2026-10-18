// FUN_006a8070 @ 006a8070 body=[[006a8070, 006a8193]]


undefined4 * FUN_006a8070(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44ccc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMessage::vftable;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(in_ECX + 4,0,0xffffffff);
  local_8 = 0;
  param_1[8] = *(undefined4 *)(in_ECX + 0x20);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar2 = *(int *)(in_ECX + 0x24);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x3c);
    FUN_0042b730(iVar2);
    iVar2 = iVar1;
  }
  param_1[0xd] = *(undefined4 *)(in_ECX + 0x34);
  param_1[0xe] = *(undefined4 *)(in_ECX + 0x38);
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8._0_1_ = 2;
  param_1[0x15] = *(undefined4 *)(in_ECX + 0x54);
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(in_ECX + 0x5c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x1e] = *(undefined4 *)(in_ECX + 0x78);
  param_1[0x1f] = *(undefined4 *)(in_ECX + 0x7c);
  iVar2 = *(int *)(in_ECX + 0x44);
  if (0 < (int)(*(int *)(in_ECX + 0x48) - iVar2 & 0xfffffff8U)) {
    if ((param_1[0x12] - param_1[0x11] & 0xfffffff8) == 0) {
      FUN_0043a750((int *)(in_ECX + 0x44));
    }
    else {
      FUN_00630060(param_1[0x12],iVar2,*(int *)(in_ECX + 0x48),param_1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

