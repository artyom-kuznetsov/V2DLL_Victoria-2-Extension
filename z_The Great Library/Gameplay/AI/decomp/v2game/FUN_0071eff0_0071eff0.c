// FUN_0071eff0 @ 0071eff0 body=[[0071eff0, 0071f053] [0071f057, 0071f0a9] [0071f0ad, 0071f113] [0071f117, 0071f180] [0071f184, 0071f1ec] [0071f1f0, 0071f225]]


void FUN_0071eff0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7c608;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("trade_details",0xd);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x4c) + 0x6c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("automate",8);
  local_8 = 1;
  local_14 = (**(code **)(*piVar1 + 0x48))(local_4c);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  (**(code **)(*(int *)(local_14 + 0x54) + 4))(unaff_EDI + 0x74);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("sell_stockpile",0xe);
  local_8 = 2;
  local_14 = (**(code **)(*piVar1 + 0x48))(local_4c);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  (**(code **)(*(int *)(local_14 + 0x54) + 4))(unaff_EDI + 0xb4);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("confirm_trade",0xd);
  local_8 = 3;
  local_14 = (**(code **)(*piVar1 + 0x34))(local_4c);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  (**(code **)(*(int *)(local_14 + 0x54) + 4))(unaff_EDI + 0xd4);
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("goods_details",0xd);
  local_8 = 4;
  iVar2 = (**(code **)(*piVar1 + 0x34))(local_68);
  local_8 = 0xffffffff;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_EDI + 0x100);
  FUN_0071faa0(unaff_EDI,1);
  ExceptionList = local_10;
  return;
}

