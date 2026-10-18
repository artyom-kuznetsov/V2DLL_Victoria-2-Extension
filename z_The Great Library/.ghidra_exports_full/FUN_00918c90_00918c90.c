// FUN_00918c90 @ 00918c90 body=[[00918c90, 00918d7a] [00918d7e, 00918d9e] [00918da7, 00918ea4] [00918ea8, 00918ec8] [00918ed1, 009190b1] [009190b5, 009190d5] [009190de, 009192b4] [009192b8, 009192e4] [009192e8, 00919315] [0091931b, 00919359] [0091935f, 00919399]]


undefined1 * FUN_00918c90(undefined1 *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b85214;
  local_14 = ExceptionList;
  iVar6 = *(int *)(in_ECX + 0x14);
  iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + iVar6 * 4);
  if (*(int *)(iVar8 + 0x34) == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("DIPL_NOT_AT_WAR",0xf);
    local_c = 0;
    FUN_009a8ee0(&local_6c,local_50);
    local_c._0_1_ = 1;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
  }
  else {
    iVar8 = *(int *)(iVar8 + 0x34);
    piVar1 = (int *)(iVar8 + 0x2c);
    if ((*(int *)(*piVar1 + 4) == *(int *)(in_ECX + 0xc)) ||
       (bVar13 = false, *(int *)(*(int *)(iVar8 + 0x3c) + 4) == *(int *)(in_ECX + 0xc))) {
      bVar13 = true;
    }
    if ((*(int *)(*piVar1 + 4) == iVar6) ||
       (bVar3 = false, *(int *)(*(int *)(iVar8 + 0x3c) + 4) == iVar6)) {
      bVar3 = true;
    }
    if ((*(char *)(iVar8 + 0xfd) != '\0') && ((!bVar13 || (!bVar3)))) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint)local_50[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350("NO_SEPARATE_PEACE_CRISIS",0x18);
      local_c = 3;
      FUN_009a8ee0(&local_6c,local_50);
      local_c._0_1_ = 4;
      iVar6 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_009adb70();
LAB_00918e8a:
      if (local_68 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      if (local_3c < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = &local_14;
    cVar5 = FUN_0093c4c0();
    if ((cVar5 != '\0') &&
       (((cVar5 = FUN_0042bb00(), cVar5 != '\0' && (!bVar3)) ||
        ((cVar5 = FUN_0042bb00(), cVar5 != '\0' && (!bVar13)))))) {
      bVar4 = true;
      piVar7 = (int *)FUN_009387c0();
      iVar6 = piVar7[1] - *piVar7 >> 6;
      iVar11 = 0;
      if (0 < iVar6) {
        piVar7 = (int *)(*piVar7 + 0xc);
        do {
          if (piVar7[6] == *(int *)(in_ECX + 0x14)) {
            piVar2 = *(int **)(*piVar7 + 0x120);
            while( true ) {
              if (piVar2 == (int *)0x0) {
                bVar4 = false;
                goto LAB_00918f6c;
              }
              if (*piVar2 == 0x8a1) break;
              piVar2 = (int *)piVar2[2];
            }
          }
          iVar11 = iVar11 + 1;
          piVar7 = piVar7 + 0x10;
        } while (iVar11 < iVar6);
      }
LAB_00918f6c:
      piVar7 = (int *)FUN_0093d080();
      iVar6 = *(int *)(*piVar7 + 0x10);
      iVar11 = *(int *)(*piVar7 + 0x14) - iVar6 >> 6;
      iVar12 = 0;
      if (0 < iVar11) {
        piVar7 = (int *)(iVar6 + 0xc);
        do {
          if (piVar7[6] == *(int *)(in_ECX + 0xc)) {
            piVar2 = *(int **)(*piVar7 + 0x120);
            while( true ) {
              if (piVar2 == (int *)0x0) goto LAB_00918fea;
              if (*piVar2 == 0x8a1) break;
              piVar2 = (int *)piVar2[2];
            }
          }
          iVar12 = iVar12 + 1;
          piVar7 = piVar7 + 0x10;
        } while (iVar12 < iVar11);
      }
      if (!bVar4) {
LAB_00918fea:
        iVar6 = *(int *)(iVar8 + 0x30);
        iVar8 = *piVar1;
        if (iVar8 != iVar6) {
          do {
            if (*(int *)(iVar8 + 4) == *(int *)(in_ECX + 0xc)) break;
            iVar8 = iVar8 + 8;
          } while (iVar8 != iVar6);
          if (iVar8 != iVar6) {
            local_3c = 0xf;
            local_40 = 0;
            local_50[0] = (uint)local_50[0]._1_3_ << 8;
            FUN_00409350("MUST_NEGOTIATE_WITH_WAR_LEADER_STATUS_QUO",0x29);
            local_c = 6;
            FUN_009a8ee0(&local_6c,local_50);
            local_c._0_1_ = 7;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
            local_c = CONCAT31(local_c._1_3_,8);
            FUN_009adb70();
            if (local_68 != 0) {
              FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_68 = 0;
            local_64 = 0;
            local_60 = 0;
            if (local_3c < 0x10) {
              ExceptionList = local_14;
              return param_1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = (uint)local_50[0]._1_3_ << 8;
        FUN_00409350("MUST_NEGOTIATE_WITH_WAR_LEADER_STATUS_QUO_OUR_SIDE",0x32);
        local_c = 9;
        FUN_009a8ee0(&local_6c,local_50);
        local_c._0_1_ = 10;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
        local_c = CONCAT31(local_c._1_3_,0xb);
        FUN_009adb70();
        goto LAB_00918e8a;
      }
    }
    if ((bVar3) || (bVar13)) {
      if (*(char *)(in_ECX + 0x94) != '\0') {
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        FUN_00409350(&DAT_00ded94d,0);
        ExceptionList = local_14;
        return param_1;
      }
      if (!bVar3) {
        uVar9 = FUN_0055dd40();
        local_c = 0x12;
        FUN_0042c180(param_1,uVar9);
        if (local_20 < 0x10) {
          ExceptionList = local_14;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      bVar13 = *(int *)(*piVar1 + 4) != *(int *)(in_ECX + 0x14);
      if (bVar13) {
        uVar9 = FUN_0055dd40();
        local_c = 0x10;
      }
      else {
        uVar9 = FUN_0055dd40();
        local_c = 0xf;
      }
      uVar10 = FUN_0055dd40();
      local_c = 0x11;
      FUN_0043ec10(param_1,"ENEMY",uVar10,"COUNTRY",uVar9);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (bVar13) {
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
      }
      if (bVar13) {
        ExceptionList = local_14;
        return param_1;
      }
      if (local_20 < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("MUST_NEGOTIATE_WITH_WAR_LEADER",0x1e);
    local_c = 0xc;
    FUN_009a8ee0(&local_6c,local_50);
    local_c._0_1_ = 0xd;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_c = CONCAT31(local_c._1_3_,0xe);
    FUN_009adb70();
  }
  if (local_68 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  if (local_3c < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

