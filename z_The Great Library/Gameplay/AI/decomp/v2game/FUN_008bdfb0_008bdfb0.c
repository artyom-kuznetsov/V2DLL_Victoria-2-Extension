// FUN_008bdfb0 @ 008bdfb0 body=[[008bdfb0, 008be14d] [008be151, 008be17b] [008be17f, 008be1a4] [008be1a8, 008be1e9] [008be1ed, 008be212] [008be216, 008be240] [008be244, 008be269] [008be26d, 008be292] [008be296, 008be3b2] [008be3b6, 008be3e0] [008be3e4, 008be409] [008be40d, 008be44e] [008be452, 008be471] [008be475, 008be490] [008be494, 008be4aa] [008be4ae, 008be4cb] [008be4e5, 008be60c] [008be610, 008be6b7] [008be6bb, 008be6d7] [008be6db, 008be700] [008be704, 008be723] [008be727, 008be744] [008be748, 008be7b6] [008be7ba, 008be7d1] [008be7d5, 008be81e] [008be822, 008be8c9] [008be8cd, 008be8e9] [008be8ed, 008be912] [008be916, 008be935] [008be939, 008be956] [008be95a, 008be9f3]]


/* WARNING: Removing unreachable block (ram,0x008be235) */
/* WARNING: Removing unreachable block (ram,0x008be287) */
/* WARNING: Removing unreachable block (ram,0x008be25e) */

undefined1 * FUN_008bdfb0(undefined1 *param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  uint local_1c0;
  uint local_1a4;
  uint local_188;
  uint local_16c;
  uint local_150;
  undefined1 local_ec [4];
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b86f39;
  local_10 = ExceptionList;
  local_38 = 0;
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (iVar2 == 0) {
    piVar5 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  }
  else {
    piVar5 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  }
  if (0 < iVar2) {
    if (param_3 == '\0') {
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      ExceptionList = &local_10;
      FUN_00409350();
      local_8 = 10;
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xb;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xc;
      (**(code **)(*piVar5 + 0x1c))();
      local_8._0_1_ = 0xd;
      FUN_009a8ee0(local_d8);
      local_8._0_1_ = 0xe;
      iVar2 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0xf;
      FUN_00988f20();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8._0_1_ = 0x11;
      FUN_00988f20();
      local_38 = 1;
      if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x12);
      FUN_009adb70();
      if (local_d4 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350();
      local_8 = 1;
      FUN_00409350();
      local_8._0_1_ = 2;
      FUN_00409350();
      local_8._0_1_ = 3;
      (**(code **)(*piVar5 + 0x1c))();
      local_8._0_1_ = 4;
      FUN_009a8ee0(local_ec);
      local_8._0_1_ = 5;
      iVar2 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 6;
      FUN_00988f20();
      local_8._0_1_ = 7;
      FUN_00988f20();
      local_8._0_1_ = 8;
      FUN_00988f20();
      local_38 = 1;
      if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_009adb70();
      if (local_e8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_18 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  local_14 = iVar2;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      if (*(char *)(in_ECX + 0x20) == '\0') {
        ExceptionList = &local_10;
        if (*(int *)(in_ECX + 0x28) != 0) {
          local_18 = *(undefined4 *)(in_ECX + 0x24);
          iVar2 = *(int *)(in_ECX + 0x28);
          ExceptionList = &local_10;
          local_14 = iVar2;
        }
      }
      else {
        ExceptionList = &local_10;
        iVar4 = FUN_009c16d0();
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(iVar4 + 0x30) + 0x100) == 6) {
            if (*(int *)(*(int *)(iVar4 + 0x30) + 0xfc) == 6) {
              local_18 = *(undefined4 *)(iVar4 + 0x38);
              iVar2 = *(int *)(iVar4 + 0x3c);
              local_14 = iVar2;
            }
            else {
              puVar3 = (undefined4 *)FUN_004e4d40(iVar4);
              local_18 = *puVar3;
              iVar2 = puVar3[1];
              local_14 = iVar2;
            }
          }
          else {
            local_18 = *(undefined4 *)(iVar4 + 0x44);
            iVar2 = *(int *)(iVar4 + 0x48);
            local_14 = iVar2;
          }
        }
      }
    }
    else {
      local_18 = *(undefined4 *)(param_2 + 0x2c);
      iVar2 = *(int *)(param_2 + 0x30);
      ExceptionList = &local_10;
      local_14 = iVar2;
    }
  }
  else {
    ExceptionList = &local_10;
    puVar3 = (undefined4 *)FUN_008a8dc0();
    local_18 = *puVar3;
    iVar2 = puVar3[1];
    local_14 = iVar2;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
  }
  else {
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    local_40 = 0xf;
    if (param_3 == '\0') {
      FUN_00409350();
      local_8 = 0x1d;
      FUN_009a8ee0();
      local_8._0_1_ = 0x1f;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x20;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x21;
      FUN_0055dd40();
      local_8._0_1_ = 0x22;
      FUN_00988fa0();
      local_8._0_1_ = 0x23;
      FUN_00988f20();
      local_8._0_1_ = 0x24;
      FUN_009a9980();
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      uVar1 = local_70 >> 8;
      local_70 = uVar1 << 8;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1f;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = uVar1 << 8;
      FUN_00409350();
      local_8._0_1_ = 0x25;
      iVar2 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20));
      local_8 = CONCAT31(local_8._1_3_,0x26);
      FUN_00988f20();
      local_38 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
    }
    else {
      FUN_00409350();
      local_8 = 0x13;
      FUN_009a8ee0();
      local_8._0_1_ = 0x15;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      FUN_0055dd40();
      local_8._0_1_ = 0x18;
      FUN_00988fa0();
      local_8._0_1_ = 0x19;
      FUN_00988f20();
      local_8._0_1_ = 0x1a;
      FUN_009a9980();
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      local_20 = 0xf;
      local_24 = 0;
      uVar1 = local_34 >> 8;
      local_34 = uVar1 << 8;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = uVar1 << 8;
      FUN_00409350();
      local_8._0_1_ = 0x1b;
      iVar2 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar2 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20));
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      FUN_00988f20();
      local_38 = 1;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_009a9740();
  }
  ExceptionList = local_10;
  return param_1;
}

