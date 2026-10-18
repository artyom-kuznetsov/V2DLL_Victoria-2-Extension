// FUN_004d2800 @ 004d2800 body=[[004d2800, 004d28d9] [004d28e0, 004d2947] [004d294b, 004d296b] [004d296f, 004d2b51] [004d2b55, 004d2bb8] [004d2bbc, 004d2c03] [004d2c07, 004d2d0d] [004d2d11, 004d2d33] [004d2d37, 004d2d6d] [004d2d71, 004d2d8b] [004d2d8f, 004d2eab] [004d2eaf, 004d2eda] [004d2ede, 004d2efe] [004d2f02, 004d2f35] [004d2f39, 004d2f55] [004d2f5e, 004d2f74] [004d2f78, 004d2f93] [004d2f97, 004d2fa6] [004d2faa, 004d2fce] [004d2fd8, 004d2fed]]


undefined1 * FUN_004d2800(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_114;
  undefined1 local_fc [8];
  int local_f4;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  int local_b0 [7];
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 *local_28 [3];
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b75830;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_88 = 1;
  if (DAT_0125a69c == 0) {
    local_114 = 0xc4004d2858;
    local_14 = (int *)FUN_00aae9af();
    local_8 = 1;
    if (local_14 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      local_114 = CONCAT44(0x4d286c,(int)local_114);
      uVar3 = FUN_008b0060();
    }
    local_8 = local_8 & 0xffffff00;
    local_114 = CONCAT44(uVar3,0x4d287a);
    FUN_0044ec00();
  }
  iVar5 = *(int *)(DAT_0125a69c + 0xc0);
  local_114 = CONCAT44(local_fc,0x4d2894);
  local_18 = iVar5;
  FUN_0044bc60();
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_114 = CONCAT44(iVar5,0x4d28a8);
  FUN_0044cab0();
  local_b0[0] = 0x3c;
  local_b0[1] = 0x3d;
  local_b0[2] = 0x3e;
  local_28[0] = (undefined4 *)0x0;
  local_28[1] = (undefined4 *)0x1;
  local_28[2] = (undefined4 *)0x2;
  local_1c = 0;
  do {
    iVar5 = *(int *)(*(int *)(param_1 + 0x26c) + *(int *)((int)local_28 + local_1c) * 4);
    iVar4 = *(int *)((int)local_b0 + local_1c);
    if (iVar5 != 0) {
      local_114 = CONCAT44(local_84,*(undefined4 *)(DAT_0125a5b4 + iVar4 * 4));
      uVar3 = FUN_0044bb00();
      local_8._0_1_ = 3;
      local_114 = CONCAT44(uVar3,0x4d2926);
      FUN_00988fa0();
      local_114 = 0xffffffff00000000;
      local_8._0_1_ = 4;
      FUN_00448aa0();
      if (0xf < local_54) {
        local_114 = CONCAT44(local_68[0],&UNK_004d2948);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_70) {
        local_114 = CONCAT44(local_84[0],&UNK_004d296c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_114 = 0x200df9638;
      FUN_00448740();
      iVar2 = *(int *)(local_18 + 0x18);
      iVar1 = iVar4 * 8;
      if (*(char *)(*(int *)(DAT_0125a5b4 + iVar4 * 4) + 0x29) == '\0') {
        local_14 = (int *)(iVar2 + iVar1);
        local_114 = (longlong)iVar5;
        uVar7 = __allmul(*(int *)(iVar2 + iVar1),*(int *)(iVar2 + iVar1) >> 0x1f);
        local_114 = 1000;
        iVar4 = __alldiv(uVar7);
        if (iVar4 < 1) {
          local_114 = (longlong)iVar5;
          uVar7 = __allmul(*local_14,*local_14 >> 0x1f);
          local_114 = 1000;
          iVar4 = __alldiv(uVar7);
          if (iVar4 < 0) {
            local_114 = 0x200df8518;
          }
          else {
            local_114 = 0x200df963c;
          }
        }
        else {
          local_114 = 0x200df8510;
        }
      }
      else {
        local_14 = (int *)(iVar2 + iVar1);
        local_114 = (longlong)iVar5;
        uVar7 = __allmul(*(int *)(iVar2 + iVar1),*(int *)(iVar2 + iVar1) >> 0x1f);
        local_114 = 1000;
        iVar4 = __alldiv(uVar7);
        if (iVar4 < 1) {
          local_114 = (longlong)iVar5;
          uVar7 = __allmul(*local_14,*local_14 >> 0x1f);
          local_114 = 1000;
          iVar4 = __alldiv(uVar7);
          if (iVar4 < 0) {
            local_114 = 0x200df8510;
          }
          else {
            local_114 = 0x200df963c;
          }
        }
        else {
          local_114 = 0x200df8518;
        }
      }
      FUN_00448740();
      iVar4 = *(int *)(*(int *)(local_18 + 0x18) + iVar1);
      local_114 = (longlong)iVar5;
      uVar7 = __allmul(iVar4,iVar4 >> 0x1f);
      local_114 = 1000;
      iVar4 = __alldiv(uVar7);
      if (0 < iVar4) {
        local_114 = 0x100df9640;
        FUN_00448740();
      }
      iVar4 = *(int *)(*(int *)(local_18 + 0x18) + iVar1);
      if (*(char *)(*(int *)(DAT_0125a5b4 + *(int *)((int)local_b0 + local_1c) * 4) + 0x28) == '\0')
      {
        local_14 = (int *)&local_114;
        local_114._4_4_ = 2;
        local_114._0_4_ = DAT_0125a5b4;
        uVar7 = __allmul(iVar4,iVar4 >> 0x1f,iVar5,iVar5 >> 0x1f);
        uVar3 = __alldiv(uVar7,1000,0);
        local_114 = CONCAT44(local_114._4_4_,uVar3);
        FUN_00988a50();
        local_114 = 0xffffffff00000000;
        local_8._0_1_ = 6;
        FUN_00448aa0();
        local_8._0_1_ = 2;
        if (0xf < local_70) {
          local_114 = CONCAT44(local_84[0],&UNK_004d2bb9);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        local_114 = (longlong)iVar5;
        uVar7 = __allmul(iVar4,iVar4 >> 0x1f);
        local_114 = 1000;
        iVar5 = __alldiv(uVar7);
        local_14 = (int *)&local_114;
        local_114._4_4_ = 1;
        FUN_00401000();
        iVar4 = FUN_00b31c00();
        uVar3 = __alldiv((longlong)iVar4 * (longlong)iVar5,1000,0);
        local_114 = CONCAT44(local_114._4_4_,uVar3);
        FUN_00988a50();
        local_8._0_1_ = 5;
        local_114 = 0xffffffff00000000;
        FUN_00448aa0();
        local_8._0_1_ = 2;
        if (0xf < local_70) {
          local_114 = CONCAT44(local_84[0],&UNK_004d2b52);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_114 = 0x100df9644;
        FUN_00448740();
      }
      local_114 = 0x200df8514;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350();
      local_114 = 0xffffffff00000000;
      local_8._0_1_ = 7;
      FUN_00448aa0();
      local_8._0_1_ = 2;
      if (0xf < local_38) {
        local_114 = CONCAT44(local_4c[0],&UNK_004d2c04);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_1c = local_1c + 4;
  } while (local_1c < 0xc);
  if (*(int *)(param_2 + 0x10) == 0) {
    local_114 = 0x1700dfd744;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    local_114 = CONCAT44(local_4c,local_30);
    local_8._0_1_ = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 9;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_114 = 0x180004d2c6f;
      local_14 = (int *)FUN_00aae9af();
      local_8._0_1_ = 10;
      if (local_14 == (int *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        local_114 = CONCAT44(local_14,0x4d2c83);
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0xb;
      local_14 = (int *)0x0;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        local_114 = 0x1004d2ca6;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_8._0_1_ = 9;
    local_114 = *(longlong *)(DAT_0125b5e0 + 0x1d);
    uVar3 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
    local_8._0_1_ = 0xc;
    local_114 = CONCAT44(uVar3,0x4d2ce9);
    FUN_00988fa0();
    local_114 = 0xffffffff00000000;
    local_8._0_1_ = 0xd;
    FUN_00408ed0();
    if (0xf < local_54) {
      local_114 = CONCAT44(local_68[0],&UNK_004d2d0e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_90) {
      local_114 = CONCAT44(local_b0[3],&UNK_004d2d34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_b0[3] = local_b0[3] & 0xffffff00;
    local_8._0_1_ = 0xe;
    local_114 = CONCAT44(0x4d2d56,(int)local_114);
    FUN_009adb70();
    if (local_2c != (undefined4 *)0x0) {
      local_114 = CONCAT44(0x4d2d65,(int)local_114);
      FUN_009e6a80();
      local_114 = CONCAT44(local_2c,&UNK_004d2d6e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 2;
    local_2c = (undefined4 *)0x0;
    local_28[0] = (undefined4 *)0x0;
    local_28[1] = (undefined4 *)0x0;
    if (0xf < local_38) {
      local_114 = CONCAT44(local_4c[0],&UNK_004d2d8c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_114 = 0x200df9638;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xf;
  local_114 = 0x1000dfd728;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  local_114 = CONCAT44(local_4c,local_30);
  local_8._0_1_ = 0x10;
  FUN_009a8ee0();
  local_8._0_1_ = 0x11;
  puVar6 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_114 = 0x180004d2df8;
    local_14 = (int *)FUN_00aae9af();
    local_8._0_1_ = 0x12;
    if (local_14 == (int *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      local_114 = CONCAT44(local_14,0x4d2e0c);
      puVar6 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 0x13;
    local_14 = (int *)0x0;
    if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      local_114 = 0x1004d2e2f;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar6;
  local_8._0_1_ = 0x11;
  local_114 = *(longlong *)(DAT_0125b5e0 + 0x1d);
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
  local_8._0_1_ = 0x14;
  local_114 = CONCAT44(local_68,0x4d2e72);
  FUN_00988f20();
  local_8._0_1_ = 0x15;
  local_114 = CONCAT44(param_2,0x4d2e84);
  FUN_00988f20();
  local_114 = 0xffffffff00000000;
  local_8._0_1_ = 0x16;
  FUN_00408ed0();
  if (0xf < local_90) {
    local_114 = CONCAT44(local_b0[3],&UNK_004d2eac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_b0[3] = local_b0[3] & 0xffffff00;
  if (0xf < local_b8) {
    local_114 = CONCAT44(local_cc,&UNK_004d2edb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_70) {
    local_114 = CONCAT44(local_84[0],&UNK_004d2eff);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  local_114 = CONCAT44(0x4d2f18,(int)local_114);
  FUN_009adb70();
  puVar6 = local_2c;
  if (local_2c != (undefined4 *)0x0) {
    while( true ) {
      if (puVar6 == local_28[0]) {
        local_114 = CONCAT44(local_2c,&UNK_004d2f56);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar6[5]) break;
      puVar6[5] = 0xf;
      puVar6[4] = 0;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 8;
    }
    local_114 = CONCAT44(*puVar6,&UNK_004d2f36);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = (undefined4 *)0x0;
  local_28[0] = (undefined4 *)0x0;
  local_28[1] = (undefined4 *)0x0;
  if (0xf < local_38) {
    local_114 = CONCAT44(local_4c[0],&UNK_004d2f75);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_54) {
    local_114 = CONCAT44(local_68[0],&UNK_004d2f94);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_e4 == 0) {
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    if (local_f4 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
    local_114 = CONCAT44(local_f4,&UNK_004d2fcf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_114 = CONCAT44(local_e4,&UNK_004d2fa7);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

