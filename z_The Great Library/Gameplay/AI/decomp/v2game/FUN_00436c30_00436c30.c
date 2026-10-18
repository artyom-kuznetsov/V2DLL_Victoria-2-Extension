// FUN_00436c30 @ 00436c30 body=[[00436c30, 00436d14] [00436d18, 00436d35] [00436d39, 00436d5c] [00436d60, 00436d83] [00436d87, 00436da8] [00436dac, 00436dd1]]


void FUN_00436c30(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  uint local_a8;
  uint local_94;
  uint local_8c;
  uint local_78;
  uint local_70;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47c3e;
  local_10 = ExceptionList;
  iVar2 = in_ECX + 0x244;
  local_18 = (int *)(in_ECX + 0x44);
  local_14 = 0x10;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  do {
    local_8 = 0xffffffff;
    if (*local_18 != 0) {
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc68,1);
      local_8 = 0;
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
      FUN_00409350(&DAT_00dee01c,4);
      local_8._0_1_ = 1;
      FUN_00988f20(local_1c + 8);
      local_8._0_1_ = 2;
      FUN_00988f20(local_54);
      local_8._0_1_ = 3;
      uVar1 = FUN_00988f20(iVar2 + -0x1c0);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00408ed0(uVar1,0,0xffffffff);
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_5c = 0xf;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c);
      }
      local_78 = 0xf;
      local_8c = local_8c & 0xffffff00;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8);
      }
      local_94 = 0xf;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38);
      }
      local_8 = 0xffffffff;
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
    }
    local_18 = local_18 + 1;
    iVar2 = iVar2 + 0x1c;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

