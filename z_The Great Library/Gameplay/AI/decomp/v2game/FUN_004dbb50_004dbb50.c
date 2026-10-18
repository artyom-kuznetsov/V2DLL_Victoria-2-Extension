// FUN_004dbb50 @ 004dbb50 body=[[004dbb50, 004dbcb6] [004dbcba, 004dbcd7] [004dbcdb, 004dbcf8] [004dbcfc, 004dbd1a] [004dbd1e, 004dbdc7] [004dbdd0, 004dbe8a] [004dbe8e, 004dbf6a] [004dbf6e, 004dbf8f] [004dbf93, 004dbfc8] [004dbfcc, 004dbfe7] [004dbfeb, 004dc009] [004dc00d, 004dc0dc] [004dc0e0, 004dc103] [004dc107, 004dc121] [004dc125, 004dc143] [004dc147, 004dc243] [004dc250, 004dc301] [004dc305, 004dc330]]


undefined1 * FUN_004dbb50(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 local_124 [8];
  int *local_11c;
  int *local_118;
  int local_114;
  int local_10c;
  undefined1 local_f4 [8];
  int *local_ec;
  int *local_e8;
  int local_e4;
  int local_dc;
  undefined4 local_c4;
  undefined1 local_c0 [20];
  uint local_ac;
  int local_a8;
  undefined4 local_9c;
  uint local_98;
  uint local_90 [2];
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  uint local_7c;
  int local_74;
  int local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b822d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_c4 = 1;
  FUN_0044bc60();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 0x18) + 8);
  }
  piVar5 = (int *)(local_10c + *(int *)(piVar6[1] + 0x24) * 8);
  *piVar5 = *piVar5 + *piVar6;
  local_14 = &stack0xfffffec8;
  FUN_0044cb00(local_124);
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0xdc);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = __alldiv((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3,1000);
    iVar3 = iVar3 + 100000;
  }
  if (0 < iVar3) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 2;
    local_14 = &stack0xfffffec8;
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0xdc);
    puVar1 = &stack0xfffffec8;
    if (0 < iVar3) {
      __alldiv((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3,1000,0);
      puVar1 = local_14;
    }
    local_14 = puVar1;
    FUN_00988970(local_68);
    local_8._0_1_ = 3;
    FUN_0042c180(local_90);
    local_8._0_1_ = 4;
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00448aa0(uVar4,0);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (DAT_0125a69c == 0) {
    local_14 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (local_14 != (undefined1 *)0x0) {
      FUN_008b0060();
    }
    local_8._0_1_ = 1;
    FUN_0044ec00();
  }
  if (*(int *)(DAT_0125a69c + 0xc0) != 0) {
    FUN_0044bc60();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_0044cab0();
    local_14 = &stack0xfffffec8;
    __alldiv((longlong)*(int *)(param_1 + 0x24) *
             (longlong)*(int *)(*(int *)(param_1 + 0x18) + 0x13c),1000,0);
    FUN_0044cb00(local_f4);
    iVar7 = 0;
    iVar3 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar3) {
      do {
        piVar6 = (int *)(local_10c + iVar7 * 8);
        *piVar6 = *piVar6 + *(int *)(local_dc + iVar7 * 8);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    piVar6 = local_11c;
    piVar5 = local_118;
    if (DAT_012586f0 != '\0') {
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = (int)local_f4;
        piVar5[1] = (int)local_118;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar3 = local_114 + 1;
      bVar8 = local_114 != 0;
      piVar6 = piVar5;
      local_114 = iVar3;
      if (bVar8) {
        local_118[2] = (int)piVar5;
        piVar6 = local_11c;
      }
    }
    local_118 = piVar5;
    local_11c = piVar6;
    local_8._0_1_ = 1;
    FUN_0044be00();
  }
  uVar4 = FUN_0044c410();
  local_8._0_1_ = 8;
  FUN_00448aa0(uVar4,0);
  local_8._0_1_ = 1;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(*(int *)(param_1 + 0x18) + 0xc4) * 1000) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740(&DAT_00dee2cc);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 9;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("PROVINCE_NEXT_LEVEL");
    local_8._0_1_ = 10;
    FUN_009a8ee0(local_88);
    local_8._0_1_ = 0xb;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 *(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0xc;
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00448aa0(uVar4,0);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    local_8._0_1_ = 0xe;
    FUN_009adb70();
    if (local_84 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0xdc);
    local_74 = *(int *)(param_1 + 0x20) + 1000;
    local_70 = local_74 >> 0x1f;
    uVar9 = __allmul(iVar3,iVar3 >> 0x1f,local_74);
    iVar3 = __alldiv(uVar9,1000);
    if (0 < iVar3) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc);
      local_14 = &stack0xfffffec8;
      local_8._0_1_ = 0xf;
      FUN_00988970(local_30);
      local_8._0_1_ = 0x10;
      FUN_0042c180(local_68);
      local_8._0_1_ = 0x11;
      uVar4 = FUN_00988f20();
      local_8._0_1_ = 0x12;
      FUN_00448aa0(uVar4,0);
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
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
      local_8._0_1_ = 1;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    FUN_0044bc60();
    local_8._0_1_ = 0x13;
    if (*(int *)(param_1 + 0x18) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(param_1 + 0x18) + 8);
    }
    piVar5 = (int *)(local_dc + *(int *)(piVar6[1] + 0x24) * 8);
    *piVar5 = *piVar5 + *piVar6;
    local_14 = &stack0xfffffec8;
    FUN_0044cb00(local_f4);
    if (DAT_0125a69c == 0) {
      local_14 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0x14;
      if (local_14 != (undefined1 *)0x0) {
        FUN_008b0060();
      }
      local_8._0_1_ = 0x13;
      FUN_0044ec00();
    }
    if (*(int *)(DAT_0125a69c + 0xc0) != 0) {
      FUN_0044bc60();
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_0044cab0();
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x13c);
      uVar9 = __allmul(iVar3,iVar3 >> 0x1f,local_74,local_70);
      __alldiv(uVar9,1000,0);
      FUN_0044cb00(local_c0);
      iVar7 = 0;
      iVar3 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar3) {
        do {
          piVar6 = (int *)(local_dc + iVar7 * 8);
          *piVar6 = *piVar6 + *(int *)(local_a8 + iVar7 * 8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      piVar6 = local_ec;
      piVar5 = local_e8;
      if (DAT_012586f0 != '\0') {
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = (int)local_c0;
          piVar5[1] = (int)local_e8;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar3 = local_e4 + 1;
        bVar8 = local_e4 != 0;
        piVar6 = piVar5;
        local_e4 = iVar3;
        if (bVar8) {
          local_e8[2] = (int)piVar5;
          piVar6 = local_ec;
        }
      }
      local_e8 = piVar5;
      local_ec = piVar6;
      local_8._0_1_ = 0x13;
      FUN_0044be00();
    }
    uVar4 = FUN_0044c410();
    local_8._0_1_ = 0x16;
    FUN_00448aa0(uVar4,0);
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_0044be00();
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  FUN_0044be00();
  ExceptionList = local_10;
  return param_2;
}

