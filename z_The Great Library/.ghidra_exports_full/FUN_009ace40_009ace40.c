// FUN_009ace40 @ 009ace40 body=[[009ace40, 009aceba] [009acebe, 009acefa] [009acefe, 009acffd] [009ad001, 009ad022] [009ad026, 009ad0b8] [009ad0c1, 009ad1c6] [009ad1cf, 009ad20c] [009ad210, 009ad35e] [009ad362, 009ad429] [009ad42d, 009ad442]]


int FUN_009ace40(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  void *_Dst;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  char local_920 [2168];
  undefined **local_a8 [19];
  int local_5c;
  int local_58;
  uint local_54 [3];
  int local_48 [4];
  int local_38;
  int local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b618ef;
  local_10 = ExceptionList;
  local_48[2] = 0xf;
  local_48[1] = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_009aa7c0(param_1,local_54);
  local_8._0_1_ = 4;
  if (0xf < (uint)local_48[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_48[2] = 0xf;
  local_48[1] = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  *(int *)(param_1 + 0x24) = param_1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_8._0_1_ = 6;
  *(undefined4 *)(param_1 + 0x4c) = 0x1ff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  *(void **)(param_1 + 0x50) = _Dst;
  _memset(_Dst,0,*(int *)(param_1 + 0x4c) * 4);
  local_8._0_1_ = 7;
  local_48[2] = 0xf;
  local_48[1] = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("internationalizedtext.cpp",0x19);
  local_8._0_1_ = 8;
  puVar4 = (undefined4 *)FUN_009a9130();
  local_8._0_1_ = 9;
  FUN_004015b0(local_54,0x47d,0xf00d);
  local_8._0_1_ = 10;
  uVar5 = FUN_00987d20();
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  uVar5 = FUN_00418e30(uVar5,puVar4,extraout_ECX,&DAT_00dfc988);
  FUN_00418e30(uVar5);
  local_8._0_1_ = 9;
  FUN_00987ac0(local_a8);
  local_a8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_a8);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 7;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < (uint)local_48[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  iVar9 = *param_2;
  iVar11 = (param_2[1] - iVar9) / 0x1c;
  local_38 = 0;
  if (0 < iVar11) {
    local_34 = 0;
    do {
      piVar8 = param_2 + 8;
      if (local_38 < iVar11) {
        piVar8 = (int *)(local_34 + iVar9);
      }
      if (piVar8[4] == 0) {
LAB_009ad0cf:
        if (local_38 < iVar11) {
          piVar8 = (int *)(local_34 + iVar9);
        }
        else {
          piVar8 = param_2 + 8;
        }
        local_58 = FUN_009ad930();
        iVar9 = 0;
        for (puVar4 = *(undefined4 **)(local_58 + 4);
            (*(undefined4 **)(local_58 + 4) <= puVar4 && (puVar4 < *(undefined4 **)(local_58 + 8)));
            puVar4 = puVar4 + 1) {
          if (iVar9 < *(int *)*puVar4) {
            iVar9 = *(int *)*puVar4;
          }
        }
        iVar11 = 0;
        if (iVar9 < 1) {
          if (local_38 < (param_2[5] - param_2[4]) / 0x1c) {
            piVar10 = (int *)(local_34 + param_2[4]);
          }
          else {
            piVar10 = param_2 + 8;
          }
          iVar9 = 0;
          local_5c = piVar10[4];
          if (0 < piVar10[4]) {
            do {
              uVar2 = piVar10[5];
              piVar7 = piVar10;
              if (0xf < uVar2) {
                piVar7 = (int *)*piVar10;
              }
              if (*(char *)((int)piVar7 + iVar9) == '\\') {
                piVar7 = piVar10;
                if (0xf < uVar2) {
                  piVar7 = (int *)*piVar10;
                }
                if (*(char *)((int)piVar7 + iVar9 + 1) != 'n') goto LAB_009ad242;
                local_920[iVar11] = '\n';
                iVar9 = iVar9 + 1;
              }
              else {
LAB_009ad242:
                piVar7 = piVar10;
                if (0xf < uVar2) {
                  piVar7 = (int *)*piVar10;
                }
                local_920[iVar11] = *(char *)((int)piVar7 + iVar9);
              }
              iVar11 = iVar11 + 1;
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_5c);
          }
          local_920[iVar11] = '\0';
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (iVar11 == 0) {
            FUN_00409350("internationalizedtext.cpp",0x19);
            local_8._0_1_ = 0xf;
            FUN_004015b0(local_30,0x4a5,0xf00d);
            local_8._0_1_ = 0x10;
            uVar5 = FUN_00987d20();
            if (0xf < (uint)piVar8[5]) {
              piVar8 = (int *)*piVar8;
            }
            uVar5 = FUN_00418e30(uVar5,piVar8,piVar8,"\" found.\n");
            FUN_00418e30(uVar5);
            local_8._0_1_ = 0xf;
            FUN_00987ac0(local_a8);
            local_a8[0] = std::ios_base::vftable;
            FUN_00aad52d(local_a8);
            local_8._0_1_ = 7;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            FUN_009ab610(local_58,param_3);
            goto LAB_009ad374;
          }
          pcVar6 = local_920;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(local_920,(int)pcVar6 - (int)(local_920 + 1));
          local_8._0_1_ = 0xe;
          FUN_009ab610(local_58,param_3);
        }
        else {
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("internationalizedtext.cpp",0x19);
          local_8._0_1_ = 0xc;
          FUN_004015b0(local_30,0x48d,0xf00d);
          local_8._0_1_ = 0xd;
          uVar5 = FUN_00987d20();
          if (0xf < (uint)piVar8[5]) {
            piVar8 = (int *)*piVar8;
          }
          uVar5 = FUN_00418e30(uVar5,piVar8,piVar8,&DAT_00e38df8);
          FUN_00418e30(uVar5);
          local_8._0_1_ = 0xc;
          FUN_00987ac0(local_a8);
          local_a8[0] = std::ios_base::vftable;
          FUN_00aad52d(local_a8);
        }
        local_8._0_1_ = 7;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
      }
      else {
        piVar8 = param_2 + 8;
        if (local_38 < iVar11) {
          piVar8 = (int *)(local_34 + iVar9);
        }
        if (0xf < (uint)piVar8[5]) {
          piVar8 = (int *)*piVar8;
        }
        if ((char)*piVar8 != '#') goto LAB_009ad0cf;
        FUN_00a5fa70(param_2,local_48,local_38);
        local_8._0_1_ = 0xb;
        FUN_00462dc0();
        local_8._0_1_ = 7;
        if (local_48[0] != 0) {
          FUN_00413860();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
        local_48[0] = 0;
        local_48[1] = 0;
        local_48[2] = 0;
      }
LAB_009ad374:
      iVar9 = *param_2;
      local_34 = local_34 + 0x1c;
      iVar11 = (param_2[1] - iVar9) / 0x1c;
      local_38 = local_38 + 1;
      uVar3 = (undefined1)local_8;
    } while (local_38 < iVar11);
  }
  local_8._0_1_ = uVar3;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("internationalizedtext.cpp",0x19);
  local_8._0_1_ = 0x11;
  FUN_004015b0(local_30,0x4ab,0xf00d);
  local_8._0_1_ = 0x12;
  FUN_00987d20();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  FUN_00987ac0(local_a8);
  local_a8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_a8);
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

