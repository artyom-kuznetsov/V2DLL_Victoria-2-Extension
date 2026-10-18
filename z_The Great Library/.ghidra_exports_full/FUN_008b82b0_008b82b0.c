// FUN_008b82b0 @ 008b82b0 body=[[008b82b0, 008b84f3] [008b84f7, 008b8526] [008b852a, 008b8554] [008b8558, 008b8598] [008b859c, 008b85b7] [008b85bb, 008b85e9] [008b85ed, 008b863c] [008b8640, 008b86d1] [008b86d5, 008b876b] [008b876f, 008b87ef] [008b87f3, 008b8838] [008b883c, 008b884b] [008b884f, 008b8874] [008b8878, 008b8890]]


undefined1 *
FUN_008b82b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int iStack_120;
  uint local_114 [4];
  uint local_104;
  uint local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b679f6;
  local_14 = ExceptionList;
  if ((int)(*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) & 0xfffffffcU) < 5) {
    ExceptionList = &local_14;
    FUN_008b7f70(param_1,param_2,param_3,0,param_5);
    ExceptionList = local_14;
    return param_1;
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00e29ba0,3);
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  iVar6 = param_4;
  if (0 < param_4) {
    do {
      FUN_00448aa0();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("AND_TRIGGER_STARTS",0x12);
  local_c._0_1_ = 3;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0ecb4,2);
  local_c._0_1_ = 4;
  FUN_009a8ee0(&local_f8,local_50);
  local_c._0_1_ = 5;
  puVar3 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar6 = FUN_00aae9af();
    local_c._0_1_ = 6;
    if (iVar6 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00475150();
    }
    local_c._0_1_ = 7;
    if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar3;
  local_c._0_1_ = 5;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_c._0_1_ = 8;
  FUN_00988f20();
  local_c._0_1_ = 9;
  FUN_00988f20();
  local_c._0_1_ = 10;
  FUN_00448aa0();
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_74 = 0xf;
  uStack_78 = 0;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_90 = 0xf;
  uStack_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  local_c._0_1_ = 0xb;
  FUN_009adb70();
  if (iStack_f4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448aa0();
  uStack_90 = 0xf;
  uStack_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  iStack_120 = 0;
  iVar6 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  if (0 < iVar6) {
    do {
      local_c._0_1_ = 0xc;
      piVar1 = *(int **)(*(int *)(in_ECX + 8) + iStack_120 * 4);
      (**(code **)(*piVar1 + 0x2c))(local_114,param_2,param_3,param_4,0);
      local_c._0_1_ = 0xd;
      if ((local_104 == 0) && ((piVar1[3] - piVar1[2] & 0xfffffffcU) == 0)) {
        (**(code **)(*piVar1 + 0x28))(auStack_88,param_2,param_3);
        local_c._0_1_ = 0xe;
        FUN_00408ed0();
        local_c._0_1_ = 0xd;
        if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_c._0_1_ = 0xd;
      uStack_e4 = 0xf;
      uStack_e8 = 0;
      local_f8 = local_f8 & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      uVar5 = local_104;
      iVar4 = FUN_00414bd0();
      bVar7 = false;
      if (iVar4 == 0) {
        if (uVar5 < uStack_e8) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar5 != uStack_e8);
        }
        bVar7 = uVar5 == 0;
      }
      local_c._0_1_ = 0xd;
      if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (!bVar7) {
        FUN_00448aa0();
        if ((char)param_5 == '\0') {
          if (0 < iStack_120) {
            uVar8 = 0x200e2d00c;
            goto LAB_008b87c2;
          }
        }
        else {
          cVar2 = (**(code **)(*piVar1 + 0x18))();
          if (cVar2 == (char)param_3) {
            uVar8 = 0x700e2cfe8;
          }
          else {
            uVar8 = 0x700e2cff0;
          }
LAB_008b87c2:
          FUN_00448740(uVar8);
        }
        FUN_00448aa0();
      }
      local_c._0_1_ = 0xc;
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_120 = iStack_120 + 1;
    } while (iStack_120 < iVar6);
  }
  local_c._0_1_ = 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0();
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_1;
}

