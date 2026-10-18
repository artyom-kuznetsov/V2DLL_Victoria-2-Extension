// FUN_006a02f0 @ 006a02f0 body=[[006a02f0, 006a03b1] [006a03c7, 006a03f0] [006a0406, 006a045d]]


void FUN_006a02f0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b74b;
  local_10 = ExceptionList;
  if (param_4 == 0) {
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1338) + param_2 * 4);
      *param_3 = 0xc;
      param_3[0x16] = uVar2;
      return;
    }
    *param_3 = 0;
    param_3[0x11] = *(undefined4 *)(param_1 + 0x1c);
    param_3[0x12] = *(undefined4 *)(param_1 + 0x20);
  }
  else if (param_1 == 0) {
    ExceptionList = &local_10;
    if (DAT_0131bb34 == 0) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0041a160();
      }
      local_8 = 0xffffffff;
      FUN_00423700(uVar2);
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < param_2 + -1) {
      uVar2 = FUN_0096bb70();
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + (param_2 + -1) * 4);
    }
    uVar2 = FUN_0096d650(uVar2,local_2c);
    local_8 = 1;
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    uVar2 = FUN_004f97a0();
    local_8 = 2;
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
  }
  ExceptionList = local_10;
  return;
}

