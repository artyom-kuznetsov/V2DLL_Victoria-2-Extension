// FUN_0051e410 @ 0051e410 body=[[0051e410, 0051e522] [0051e526, 0051e556] [0051e55a, 0051e573] [0051e577, 0051e649] [0051e64d, 0051e677] [0051e67b, 0051e6a0] [0051e6a4, 0051e6d9] [0051e6dd, 0051e6f3] [0051e6f7, 0051e711] [0051e715, 0051e7a9] [0051e7b0, 0051e8e0] [0051e8e4, 0051e90e] [0051e912, 0051e937] [0051e93b, 0051e960] [0051e964, 0051e986] [0051e98a, 0051e9a3] [0051e9a7, 0051e9c1] [0051e9c5, 0051e9e2] [0051e9e6, 0051ea5d] [0051ea61, 0051ea84] [0051ea88, 0051eb05]]


/* WARNING: Removing unreachable block (ram,0x0051e903) */
/* WARNING: Removing unreachable block (ram,0x0051e8d5) */
/* WARNING: Removing unreachable block (ram,0x0051e92c) */

undefined1 * FUN_0051e410(int param_1,undefined1 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint local_ec;
  uint local_d0;
  uint local_b4;
  uint local_98;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b747ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0xbd0) + 0x5c);
  if (cVar1 != '\0') {
    if ((int)((double)((*(int *)(param_1 + 0x664) + -43800000) / 0x18) / 365.0) < 6) {
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350();
      local_8 = 1;
      local_34 = FUN_009a8ee0();
      local_8._0_1_ = 2;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_8._0_1_ = 3;
      FUN_00408ed0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      local_8._0_1_ = 4;
      FUN_009adb70();
      if (local_2c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_8 = 5;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 6;
      FUN_009a8ee0();
      local_8._0_1_ = 7;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_8._0_1_ = 8;
      FUN_00988fa0();
      local_8._0_1_ = 9;
      FUN_00988f20();
      local_8._0_1_ = 10;
      FUN_00448aa0();
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_009adb70();
      if (local_2c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_8 = 0xc;
      FUN_0043a880();
      FUN_0051d140(param_1,param_1 + 0x9d8,&local_2c,0);
      iVar3 = local_2c;
      iVar5 = local_28 - local_2c >> 3;
      iVar4 = 0;
      local_1c._0_4_ = 0;
      local_1c._4_4_ = 0;
      if (0 < iVar5) {
        do {
          uVar2 = *(uint *)(local_2c + iVar4 * 8);
          bVar6 = CARRY4((uint)local_1c,uVar2);
          local_1c._0_4_ = (uint)local_1c + uVar2;
          local_1c._4_4_ = local_1c._4_4_ + *(int *)(local_2c + 4 + iVar4 * 8) + (uint)bVar6;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_1c = __alldiv((uint)local_1c << 0xf,local_1c._4_4_ << 0xf | (uint)local_1c >> 0x11);
      iVar4 = *(int *)(param_1 + 0x83c);
      iVar5 = 0;
      while( true ) {
        if (iVar4 == 0) {
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          ExceptionList = local_10;
          return param_2;
        }
        local_34 = iVar5 + 1;
        uVar2 = *(uint *)(iVar3 + iVar5 * 8);
        if (local_1c != 0) {
          __alldiv(uVar2 << 0xf,*(int *)(iVar3 + 4 + iVar5 * 8) << 0xf | uVar2 >> 0x11);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xd;
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xe;
        FUN_00988bb0(local_88,2);
        local_8._0_1_ = 0xf;
        FUN_009790b0();
        local_8._0_1_ = 0x10;
        FUN_00988f20();
        local_8._0_1_ = 0x11;
        FUN_00988f20();
        local_8._0_1_ = 0x12;
        FUN_00988f20();
        local_8._0_1_ = 0x13;
        FUN_00448aa0();
        if (0xf < local_d0) break;
        local_d0 = 0xf;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0xc);
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar4 = *(int *)(iVar4 + 8);
        iVar5 = local_34;
        iVar3 = local_2c;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (cVar1 != '\0') {
      FUN_00424810();
      FUN_0043acd0();
      local_8 = 0x16;
      FUN_0042c180();
      local_8 = CONCAT31(local_8._1_3_,0x17);
      goto LAB_0051ea3d;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xbd0) + 0x1c))();
  local_8 = 0x14;
  FUN_0042c180();
  local_8 = CONCAT31(local_8._1_3_,0x15);
LAB_0051ea3d:
  FUN_00408ed0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

