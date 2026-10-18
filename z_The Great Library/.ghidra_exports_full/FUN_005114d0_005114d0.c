// FUN_005114d0 @ 005114d0 body=[[005114d0, 0051164f] [00511653, 00511665]]


void FUN_005114d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5fdde;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((int)in_stack_00000024 < 0) {
    iVar5 = *(int *)(DAT_012588e8 + 0xb0c) + -43800000;
    iVar1 = iVar5 / 0x18;
    iVar5 = iVar5 % 0x18 +
            ((iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) + 0x1bda55) * 0x18;
  }
  else {
    iVar5 = *(int *)(DAT_012588e8 + 0xb0c) + (int)in_stack_00000024 * 0x18;
  }
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x10);
  local_8._0_1_ = 1;
  in_stack_00000024 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (DAT_0125a69c == 0) {
      iVar1 = FUN_00aae9af(0xc4);
      local_8._0_1_ = 2;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_008b0060();
      }
      local_8._0_1_ = 1;
      FUN_0044ec00(uVar3);
    }
    uVar3 = FUN_005661b0(&param_2);
    puVar2[1] = 0x18d;
    *puVar2 = CTimedModifier::vftable;
    puVar2[3] = 43800000;
    puVar2[2] = uVar3;
    puVar2[3] = iVar5;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  iVar5 = *(int *)(param_1 + 0x4dc);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = puVar2;
    puVar4[1] = iVar5;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x4e0);
  *(undefined4 **)(param_1 + 0x4dc) = puVar4;
  *(int *)(param_1 + 0x4e0) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x4d8) = puVar4;
  }
  else {
    *(undefined4 **)(iVar5 + 8) = puVar4;
  }
  FUN_0050ea30(param_1);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

