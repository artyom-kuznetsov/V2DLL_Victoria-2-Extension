// FUN_00837330 @ 00837330 body=[[00837330, 008377fc] [00837800, 00838081]]


void FUN_00837330(int param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *in_ECX;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int *local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_188;
  undefined **local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined4 local_15c;
  undefined **local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined **local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined **local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined **local_d8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4ad4a;
  local_14 = ExceptionList;
  local_f0 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  puVar1 = (undefined4 *)(param_1 + 0x34);
  local_100 = *puVar1;
  local_fc = *(undefined4 *)(param_1 + 0x38);
  local_f8 = *in_ECX;
  local_f4 = in_ECX[1];
  local_104 = 0x18d;
  local_e8 = 0;
  local_e4 = 0;
  local_108 = CRemoveFromSphereAction::vftable;
  local_e0 = 0x2d2d2d;
  local_dc = 0;
  local_c = 0;
  ExceptionList = &local_14;
  local_ec = local_f0;
  if ((*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4) + 0x142c) !=
       *(int *)(param_1 + 0x38)) &&
     (ExceptionList = &local_14, cVar4 = FUN_00911760(0), cVar4 != '\0')) {
    piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xcdc)
    ;
    local_ec = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    iVar5 = FUN_00aae9af(0x40);
    local_c._0_1_ = 1;
    if (iVar5 == 0) {
      uVar6 = 0;
      local_c._0_1_ = 0;
    }
    else {
      uVar6 = (*(code *)local_108[0xc])();
      uVar6 = FUN_0090f620(iVar5,uVar6);
      local_c._0_1_ = 0;
    }
    goto LAB_00838057;
  }
  local_118 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_128 = *puVar1;
  local_124 = *(undefined4 *)(param_1 + 0x38);
  local_120 = *in_ECX;
  local_11c = in_ECX[1];
  local_12c = 0x18d;
  local_110 = 0;
  local_10c = 0;
  local_130 = CAddToSphereAction::vftable;
  local_c._0_1_ = 2;
  iVar5 = *(int *)(*(int *)(param_2 + 0xbe8) + local_11c * 4);
  bVar3 = false;
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0xc) * 4) + 0x31) == '\0')
     && (3 < *(int *)(iVar5 + 0x40))) {
    bVar3 = true;
  }
  local_114 = local_118;
  cVar4 = FUN_00911760(0);
  if ((cVar4 != '\0') && ((param_5 == '\0' || (bVar3)))) {
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4);
    piVar12 = *(int **)(iVar5 + 0x9d8);
    piVar13 = piVar12;
    do {
      do {
        if ((piVar13 < piVar12) || (*(int **)(iVar5 + 0x9dc) <= piVar13)) {
          piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                             0xcdc);
          local_114 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
          iVar5 = FUN_00aae9af(0x40);
          local_c._0_1_ = 3;
          if (iVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (*(code *)local_130[0xc])();
            uVar6 = FUN_0090f620(iVar5,uVar6);
          }
          local_c = CONCAT31(local_c._1_3_,2);
          iVar5 = (**(code **)(*piVar12 + 0x44))();
          (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar6);
          ExceptionList = pvStack_18;
          return;
        }
        iVar7 = *(int *)(*(int *)(param_3 + 0xacc) + *piVar13 * 4);
        iVar14 = *(int *)(iVar7 + 0x14c);
        iVar7 = *(int *)(iVar7 + 0x148);
        piVar13 = piVar13 + 1;
      } while (iVar7 == iVar14);
      do {
        if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x38)) break;
        iVar7 = iVar7 + 8;
      } while (iVar7 != iVar14);
    } while (iVar7 == iVar14);
  }
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3d0);
  local_1c0 = 0;
  local_1a0 = -1;
  iVar7 = iVar5 >> 0x1f;
  if (iVar5 + 0x189373U < 0x39580e) {
    iVar14 = (iVar5 * 1000) / 10000;
  }
  else {
    uVar17 = __allmul(iVar5,iVar7,1000,0);
    iVar14 = __alldiv(uVar17,10000,0);
  }
  iVar10 = *(int *)(DAT_012587e4 + 4);
  local_198 = *(int *)(*(int *)(param_2 + 0xbe8) + in_ECX[1] * 4);
  if (*(char *)(*(int *)(iVar10 + *(int *)(local_198 + 0xc) * 4) + 0x31) == '\0') {
    local_194 = *(int *)(local_198 + 0x40);
  }
  else {
    local_194 = 1;
  }
  if (DAT_01258a08 == 0) {
    local_1bc = *(int *)(local_198 + 0x48);
  }
  else {
    local_1bc = 100000;
  }
  if (*(char *)(*(int *)(iVar10 + *(int *)(local_198 + 0xc) * 4) + 0x31) == '\0') {
    iVar8 = *(int *)(local_198 + 0x40);
  }
  else {
    iVar8 = 1;
  }
  uVar17 = __allmul(iVar8 * 1000,iVar8 * 1000 >> 0x1f,iVar5,iVar7);
  iVar8 = __alldiv(uVar17,1000,0);
  iVar8 = iVar8 + local_1bc;
  local_1bc = 0;
  piVar12 = (int *)*param_4;
  local_190 = param_4[1] - (int)piVar12 >> 2;
  local_19c = 0;
  local_1c8 = piVar12;
  if (0 < local_190) {
    do {
      if ((*local_1c8 != param_2) && (*(int *)(*(int *)(*local_1c8 + 0x13f0) + in_ECX[1] * 4) != 0))
      {
        iVar16 = 100000;
        if (DAT_01258a08 == 0) {
          iVar16 = *(int *)(*(int *)(*(int *)(*local_1c8 + 0xbe8) + in_ECX[1] * 4) + 0x48);
        }
        iVar9 = *(int *)(*(int *)(*local_1c8 + 0xbe8) + in_ECX[1] * 4);
        if (*(char *)(*(int *)(iVar10 + *(int *)(iVar9 + 0xc) * 4) + 0x31) == '\0') {
          local_188 = *(int *)(iVar9 + 0x40);
        }
        else {
          local_188 = 1;
        }
        uVar17 = __allmul(local_188 * 1000,local_188 * 1000 >> 0x1f,iVar5,iVar7);
        iVar9 = __alldiv(uVar17,1000,0);
        iVar16 = iVar16 + iVar9;
        uVar17 = __allmul(iVar5,iVar7,2000,0);
        iVar9 = __alldiv(uVar17,1000,0);
        if (iVar8 <= iVar9 + iVar16) {
          local_1bc = local_1bc + 1;
        }
        if (2 < local_188) {
          iVar9 = __alldiv((longlong)iVar14 *
                           (longlong)
                           ((*(int *)(*local_1c8 + 0x141c) - *(int *)(*local_1c8 + 0x1418) >> 3) *
                           1000),1000,0);
          iVar16 = iVar16 + iVar9;
        }
        if (local_1c0 < iVar16) {
          local_1a0 = local_19c;
          local_1c0 = iVar16;
        }
      }
      local_19c = local_19c + 1;
      local_1c8 = local_1c8 + 1;
    } while (local_19c < local_190);
    if (local_1a0 != -1) {
      iVar14 = piVar12[local_1a0];
      iVar16 = *(int *)(*(int *)(iVar14 + 0xbe8) + in_ECX[1] * 4);
      if (DAT_01258a08 == 0) {
        local_1c0 = *(int *)(iVar16 + 0x48);
      }
      else {
        local_1c0 = 100000;
      }
      iVar9 = 1;
      if (*(char *)(*(int *)(iVar10 + *(int *)(iVar16 + 0xc) * 4) + 0x31) == '\0') {
        iVar9 = *(int *)(iVar16 + 0x40);
      }
      uVar6 = *(undefined4 *)(iVar14 + 0x1c);
      uVar2 = *(undefined4 *)(iVar14 + 0x20);
      iVar14 = *(int *)(*(int *)(iVar14 + 0x13f0) + in_ECX[1] * 4);
      uVar17 = __allmul(iVar9 * 1000,iVar9 * 1000 >> 0x1f,iVar5,iVar7);
      iVar10 = __alldiv(uVar17,1000,0);
      if (iVar9 <= local_194) {
        local_178 = *puVar1;
        local_168 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        local_174 = *(undefined4 *)(param_1 + 0x38);
        local_170 = *in_ECX;
        local_16c = in_ECX[1];
        local_17c = 0x18d;
        local_160 = 0;
        local_15c = 0;
        local_180 = CIncreaseOpinionAction::vftable;
        local_c._0_1_ = 4;
        local_164 = local_168;
        if ((local_194 == iVar9) && (cVar4 = FUN_00911760(0), cVar4 != '\0')) {
          piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                             0xcdc);
          local_164 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
          iVar5 = FUN_00aae9af(0x40);
          local_c._0_1_ = 5;
          if (iVar5 == 0) {
            uVar6 = 0;
            local_c._0_1_ = 4;
          }
          else {
            uVar6 = (*(code *)local_180[0xc])();
            uVar6 = FUN_0090f620(iVar5,uVar6);
            local_c._0_1_ = 4;
          }
          goto LAB_00838057;
        }
        if ((local_1bc == 1) ||
           ((iVar15 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4),
            local_190 = *(int *)(iVar15 + 0x1428),
            *(int *)(iVar15 + 0x142c) == *(int *)(param_1 + 0x38) || (param_5 != '\0')))) {
          if ((*(int *)(iVar16 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) && (param_5 == '\0')) {
            FUN_008329e0(*puVar1,*(undefined4 *)(param_1 + 0x38),*in_ECX,in_ECX[1]);
            local_c._0_1_ = 6;
            local_b0 = uVar6;
            local_ac = uVar2;
            cVar4 = FUN_00911760(0);
            if (cVar4 != '\0') {
              piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4
                                          ) + 0xcdc);
              uVar6 = FUN_009115b0();
              goto LAB_00838057;
            }
            local_c._0_1_ = 4;
            local_d8 = CDiplomaticAction::vftable;
          }
          if ((*(int *)(iVar16 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) && (param_5 == '\0')) {
            if (DAT_01258a08 == 0) {
              iVar15 = *(int *)(local_198 + 0x48);
              iVar11 = *(int *)(iVar16 + 0x48);
            }
            else {
              iVar15 = 100000;
              iVar11 = 100000;
            }
            if ((iVar15 < iVar11) ||
               ((*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(local_198 + 0x90) &&
                (*(int *)(local_198 + 0x98) == *(int *)(*(int *)(*param_4 + local_1a0 * 4) + 0x20)))
               )) {
              FUN_008328d0(*puVar1,*(undefined4 *)(param_1 + 0x38),*in_ECX,in_ECX[1]);
              local_c._0_1_ = 7;
              local_50 = uVar6;
              local_4c = uVar2;
              cVar4 = FUN_00911760(0);
              if (cVar4 != '\0') {
                piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(param_1 + 0x38) * 4) + 0xcdc);
                uVar6 = FUN_009115b0();
                goto LAB_00838057;
              }
              local_c._0_1_ = 4;
              local_78 = CDiplomaticAction::vftable;
            }
          }
          if ((((*(int *)(iVar16 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) &&
               (*(int *)(iVar16 + 0x90) < *(int *)(DAT_012588e8 + 0xb0c))) && (iVar14 != 0)) &&
             (param_5 == '\0')) {
            piVar12 = (int *)FUN_0092f630(local_198,&local_198,puVar1,in_ECX);
            piVar13 = (int *)FUN_00532370();
            local_190 = __alldiv((longlong)*piVar13 * (longlong)*piVar12,1000,0);
            piVar12 = (int *)FUN_0092f630(iVar16,&local_19c,
                                          *(int *)(*param_4 + local_1a0 * 4) + 0x1c,in_ECX);
            piVar13 = (int *)FUN_00532370();
            iVar14 = __alldiv((longlong)*piVar13 * (longlong)*piVar12,1000,0);
            if (local_190 < iVar14) {
              FUN_008327b0(*puVar1,*(undefined4 *)(param_1 + 0x38),*in_ECX,in_ECX[1]);
              local_c._0_1_ = 8;
              local_80 = uVar6;
              local_7c = uVar2;
              cVar4 = FUN_00911760(0);
              if (cVar4 != '\0') {
                iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
                goto LAB_00837df0;
              }
              local_c._0_1_ = 4;
              local_a8 = CDiplomaticAction::vftable;
            }
          }
          if (2 < iVar9) {
            if (local_194 == 5) {
              if (*(int *)(iVar16 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) {
                ExceptionList = local_14;
                return;
              }
            }
            else if (((local_194 == 4) && (*(int *)(iVar16 + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c))
                     ) && (local_1c0 + iVar10 < iVar8)) {
              uVar17 = __allmul(DAT_01317d0c,DAT_01317d0c >> 0x1f,iVar5,iVar7);
              iVar7 = __alldiv(uVar17,1000,0);
              iVar5 = 100000;
              if (DAT_01258a08 == 0) {
                iVar5 = *(int *)(iVar16 + 0x48);
              }
              if ((iVar5 < iVar7) && (param_5 == '\0')) {
                ExceptionList = local_14;
                return;
              }
            }
            FUN_00832b00(*puVar1,*(undefined4 *)(param_1 + 0x38),*in_ECX,in_ECX[1]);
            local_c._0_1_ = 9;
            local_20 = uVar6;
            local_1c = uVar2;
            cVar4 = FUN_00911760(0);
            if (cVar4 != '\0') {
              iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
LAB_00837df0:
              piVar12 = *(int **)(iVar5 + 0xcdc);
              uVar6 = FUN_009115b0();
              iVar5 = (**(code **)(*piVar12 + 0x44))();
              (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar6);
              ExceptionList = pvStack_18;
              return;
            }
            local_48 = CDiplomaticAction::vftable;
          }
        }
        local_180 = CDiplomaticAction::vftable;
      }
    }
  }
  local_140 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_150 = *puVar1;
  local_14c = *(undefined4 *)(param_1 + 0x38);
  local_148 = *in_ECX;
  local_144 = in_ECX[1];
  local_154 = 0x18d;
  local_138 = 0;
  local_134 = 0;
  local_158 = CIncreaseOpinionAction::vftable;
  local_c._0_1_ = 10;
  local_13c = local_140;
  cVar4 = FUN_00911760(0);
  if (cVar4 == '\0') {
    ExceptionList = local_14;
    return;
  }
  piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xcdc);
  local_13c = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  iVar5 = FUN_00aae9af(0x40);
  local_c._0_1_ = 0xb;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(code *)local_158[0xc])();
    uVar6 = FUN_0090f620(iVar5,uVar6);
  }
  local_c._0_1_ = 10;
LAB_00838057:
  iVar5 = (**(code **)(*piVar12 + 0x44))();
  (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar6);
  ExceptionList = local_14;
  return;
}

