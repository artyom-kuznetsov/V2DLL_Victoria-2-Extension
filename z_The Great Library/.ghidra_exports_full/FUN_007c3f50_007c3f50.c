// FUN_007c3f50 @ 007c3f50 body=[[007c3f50, 007c3fec] [007c3ff0, 007c403c] [007c4040, 007c4099] [007c409d, 007c40e8] [007c40ec, 007c415e] [007c4162, 007c421f]]


void FUN_007c3f50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92163;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007bfe20();
  if (*(int *)(unaff_EDI + 0x1a0) == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("state_focus_window",0x12);
    local_8 = 0;
    local_14 = *DAT_01258a80;
    uVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
    uVar1 = (**(code **)(local_14 + 0x2c))(local_34,uVar1);
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EDI + 0x1a0) = uVar1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("state_focus_window",0x12);
    local_8 = 1;
    (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x1a0) + 0x18) + 0x78))(local_34);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("close_button",0xc);
    local_8 = 2;
    iVar2 = (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x34))(local_34);
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_EDI + 0x140);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("state_name",10);
    local_8 = 3;
    iVar2 = (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x3c))(local_34);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (iVar2 != 0) {
      local_14 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_1 * 4) +
                                        0x188) + 0x20))(local_50);
      local_8 = 4;
      FUN_00408ed0(local_14,0,0xffffffff);
      FUN_00a5ecc0(local_14,0);
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
  }
  if (*(int *)(unaff_EDI + 0x19c) == 0) {
    local_14 = FUN_00aae9af(0x5c);
    local_8 = 5;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_00748b20(local_14,*(undefined4 *)(unaff_EDI + 0x1a0));
    }
    iVar2 = DAT_012588e8;
    local_8 = 0xffffffff;
    *(int *)(unaff_EDI + 0x19c) = local_14;
    uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0xacc) + param_1 * 4);
    iVar2 = *(int *)(local_14 + 0x58);
    if (*(int *)(iVar2 + 4) != 0) {
      (**(code **)(*(int *)(*(int *)(iVar2 + 4) + 0x18) + 0x38))();
    }
    local_18 = 0x2d2d2d;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0x2d2d2d;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(local_14 + 0x54) = uVar1;
    FUN_00748ce0();
  }
  ExceptionList = local_10;
  return;
}

