// FUN_008ce740 @ 008ce740 body=[[008ce740, 008ce7d7] [008ce7db, 008ce8ff] [008ce903, 008ce927] [008ce92b, 008ce941] [008ce945, 008ce96b] [008ce96f, 008ce99f] [008ce9a3, 008ce9bd] [008ce9c1, 008ceaea] [008ceaee, 008ceb0a] [008ceb0e, 008ceb2d] [008ceb31, 008ceb47] [008ceb4b, 008ceb65] [008ceb69, 008cebdc] [008cebe0, 008cebfa] [008cebfe, 008cec41] [008cec4a, 008cec9d] [008ceca1, 008cedcb] [008cedcf, 008cedf0] [008cedf4, 008cee19] [008cee1d, 008cee46] [008cee4a, 008cee77] [008cee7b, 008cee9e] [008ceea2, 008cef64] [008cef68, 008cef89] [008cef8d, 008cefac] [008cefb0, 008cefcc] [008cefd0, 008cf088] [008cf08c, 008cf0ad] [008cf0b1, 008cf0d0] [008cf0d4, 008cf0ea] [008cf0ee, 008cf10e] [008cf112, 008cf17f] [008cf183, 008cf19a] [008cf19e, 008cf1c7]]


/* WARNING: Removing unreachable block (ram,0x008cec92) */

undefined4 FUN_008ce740(undefined4 param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined3 uVar2;
  uint3 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_f8;
  uint local_e4;
  uint local_dc;
  undefined1 local_d4 [4];
  int local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined1 local_44 [8];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96f6c;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  piVar5 = (int *)FUN_008ce560();
  if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 0x18;
    FUN_009a8ee0();
    local_8._0_1_ = 0x1a;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1b;
    cVar4 = (**(code **)(*piVar5 + 0x24))();
    if (cVar4 == '\0') {
      uVar6 = FUN_004da330();
      local_8 = 0x1d;
      local_14 = 0x10;
    }
    else {
      uVar6 = (**(code **)(*piVar5 + 0x18))(local_bc);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      local_14 = 8;
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    FUN_00409350();
    local_8 = 0x1e;
    FUN_00988fa0(uVar6);
    local_8._0_1_ = 0x1f;
    uVar6 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x20;
    iVar7 = FUN_00aae9af(0x40);
    local_8._0_1_ = 0x21;
    if (iVar7 != 0) {
      FUN_009a9ce0(iVar7,local_44,uVar6);
    }
    local_8 = CONCAT31(local_8._1_3_,0x20);
    FUN_009e6810();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_dc);
    }
    local_c8 = 0xf;
    local_cc = 0;
    if ((local_14 & 0x10) != 0) {
      local_14 = local_14 & 0xffffffef;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_84[0]);
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
    }
    local_8 = 0x1b;
    if ((local_14 & 8) != 0) {
      local_14 = local_14 & 0xfffffff7;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_bc[0]);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
    }
    local_8._1_3_ = 0;
    uVar3 = local_8._1_3_;
    local_8._0_1_ = 0x1a;
    local_8._1_3_ = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      local_8._1_3_ = uVar3;
      FUN_009885d0();
      local_8._0_1_ = 0x27;
      FUN_009885d0();
      local_8._0_1_ = 0x28;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c)
      )(local_84);
      local_8._0_1_ = 0x29;
      FUN_00988fa0();
      local_8._0_1_ = 0x2a;
      FUN_00988f20();
      local_8._0_1_ = 0x2b;
      FUN_009a9980();
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      uVar1 = local_a8;
    }
    else {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x22;
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x23;
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4
                                      ) + 0x188) + 0x20))(local_84);
      local_8._0_1_ = 0x24;
      FUN_00988fa0();
      local_8._0_1_ = 0x25;
      FUN_00988f20();
      local_8._0_1_ = 0x26;
      FUN_009a9980();
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      uVar1 = local_1c;
    }
    if (0xf < uVar1) {
      local_8._0_1_ = 0x1a;
      local_54 = 0xf;
      local_58 = 0;
      local_70 = 0xf;
      local_74 = 0;
      local_8c = 0xf;
      local_90 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x1a;
    local_54 = 0xf;
    local_58 = 0;
    local_70 = 0xf;
    local_74 = 0;
    local_8c = 0xf;
    local_90 = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x2c;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 0x2d;
    FUN_00988f20();
    local_14 = local_14 | 4;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_009a9740();
  }
  else {
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    cVar4 = (**(code **)(*piVar5 + 0x24))();
    if (cVar4 == '\0') {
      uVar6 = FUN_004da330();
      local_8 = 6;
      local_14 = 2;
    }
    else {
      uVar6 = (**(code **)(*piVar5 + 0x18))(local_68);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_14 = 1;
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350();
    local_8 = 7;
    FUN_00988fa0(uVar6);
    local_8._0_1_ = 8;
    uVar6 = FUN_00988f20(local_30);
    local_8._0_1_ = 9;
    iVar7 = FUN_00aae9af(0x40);
    local_8._0_1_ = 10;
    if (iVar7 != 0) {
      FUN_009a9ce0(iVar7,local_d4,uVar6);
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009e6810();
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8);
    }
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a0);
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
    }
    local_8 = 4;
    if ((local_14 & 1) != 0) {
      local_14 = local_14 & 0xfffffffe;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
    }
    local_8._1_3_ = 0;
    uVar2 = local_8._1_3_;
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_1c = 0xf;
    if (*(int *)(param_2 + 0x18) == 0) {
      local_8._1_3_ = uVar2;
      FUN_00409350();
      local_8._0_1_ = 0x10;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x11;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c)
      )(local_84);
      local_8._0_1_ = 0x12;
      FUN_00988fa0();
      local_8._0_1_ = 0x13;
      FUN_00988f20();
      local_8._0_1_ = 0x14;
    }
    else {
      FUN_00409350();
      local_8._0_1_ = 0xb;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xc;
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4
                                      ) + 0x188) + 0x20))(local_84);
      local_8._0_1_ = 0xd;
      FUN_00988fa0();
      local_8._0_1_ = 0xe;
      FUN_00988f20();
      local_8._0_1_ = 0xf;
    }
    FUN_009a9980();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68[0] = local_68[0] & 0xffffff00;
    local_58 = 0;
    local_54 = 0xf;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = local_a0 & 0xffffff00;
    local_90 = 0;
    local_8c = 0xf;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84[0] = local_84[0] & 0xffffff00;
    local_74 = 0;
    local_70 = 0xf;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    uVar1 = local_4c >> 8;
    local_4c = uVar1 << 8;
    local_3c = 0;
    local_38 = 0xf;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = uVar1 << 8;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x15;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_00988f20();
    local_14 = local_14 | 4;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    local_8 = 0x17;
    FUN_009adb70();
    if (local_d0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

