// FUN_004037c0 @ 004037c0 body=[[004037c0, 00403881] [00403885, 00403b1c] [00403b26, 00403f8d] [00403f97, 00403fb8] [00403fc2, 00403fdd] [00403fe7, 004040af] [004040b3, 0040447c] [00404480, 00404769] [00404770, 00404778] [00404782, 00404798] [004047a2, 004047bc] [004047c6, 004047e8] [004047f2, 004048ba] [004048be, 00404c69] [00404c70, 00404d09] [00404d10, 00404f09] [00404f10, 00404f18] [00404f22, 00404f38] [00404f42, 00404f58] [00404f62, 00404f7d] [00404f87, 00405050] [00405054, 0040511c] [00405120, 0040532c] [00405330, 00405338] [00405342, 004055d9] [004055e0, 004057ad] [004057b7, 004057d8] [004057e2, 004057fd] [00405807, 004058bf] [004058c7, 0040592d] [00405931, 0040596c]]


uint * FUN_004037c0(int param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int local_194;
  int local_190;
  uint *local_188;
  uint *local_184;
  undefined4 *local_180;
  int local_17c;
  uint *local_174;
  undefined4 *local_170;
  undefined4 *local_16c;
  undefined4 *local_168;
  int local_164;
  uint *local_15c;
  uint *local_158;
  int local_154;
  undefined1 local_150;
  char local_14c;
  uint *local_148;
  uint *local_144;
  int local_140;
  undefined1 local_13c;
  undefined4 local_138;
  uint local_134;
  undefined4 *local_12c;
  undefined4 *local_128;
  int local_124;
  undefined1 local_120;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b60dc2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_3 != '\0') {
    ExceptionList = &local_14;
    FUN_00406ee0(param_1,param_1);
  }
  FUN_009a0940(param_2);
  FUN_0099f770(param_2,0);
  local_134 = 0xf;
  local_138 = 0;
  local_148 = (uint *)((uint)local_148 & 0xffffff00);
  pcVar5 = (char *)(param_1 + 0x214);
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00409350((char *)(param_1 + 0x214),(int)pcVar5 - (param_1 + 0x215));
  local_c = 0;
  FUN_009a0940(param_2);
  FUN_0099f770(param_2,0);
  local_c = 0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148);
  }
  if (*(char *)(param_1 + 0x1cd) != '\0') {
    FUN_0099f470(*(undefined1 *)(param_1 + 0x1cc));
  }
  iVar12 = *(int *)(param_1 + 0x224);
  iVar3 = *(int *)(param_1 + 0x220);
  FUN_009a0940(param_2);
  local_11c = 0xc;
  _sprintf(local_118,"%d",(iVar12 - iVar3) / 0x58);
  FUN_0099ff90(param_2);
  FUN_004013e0(param_2);
  if (0 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58) {
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58) {
      local_194 = 0;
      do {
        piVar11 = (int *)(*(int *)(param_1 + 0x220) + local_194);
        puVar15 = (undefined4 *)0x0;
        local_184 = (undefined4 *)0x0;
        local_17c = 0;
        local_c = 1;
        iVar12 = *piVar11;
        local_188 = (uint *)0x0;
        if (0 < (int)(piVar11[1] - iVar12 & 0xfffffff8U)) {
          do {
            FUN_00401000((*(float *)((int)local_188 * 8 + iVar12) + 0.0005) * 1000.0);
            uVar6 = FUN_00b31c00();
            local_170 = (undefined4 *)FUN_00aae9af(0x10);
            if (local_170 == (undefined4 *)0x0) {
              local_170 = (undefined4 *)0x0;
            }
            else {
              *local_170 = uVar6;
              local_170[1] = puVar15;
              local_170[2] = 0;
              *(undefined1 *)(local_170 + 3) = 0;
            }
            puVar9 = local_170;
            if (local_17c != 0) {
              puVar15[2] = local_170;
              puVar9 = local_184;
            }
            local_184 = puVar9;
            FUN_00401000((*(float *)(*piVar11 + 4 + (int)local_188 * 8) + 0.0005) * 1000.0);
            uVar6 = FUN_00b31c00();
            puVar15 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = (undefined4 *)0x0;
            }
            else {
              *puVar15 = uVar6;
              puVar15[1] = local_170;
              puVar15[2] = 0;
              *(undefined1 *)(puVar15 + 3) = 0;
            }
            puVar9 = puVar15;
            if (local_17c != -1) {
              local_170[2] = puVar15;
              puVar9 = local_184;
            }
            local_184 = puVar9;
            iVar12 = *piVar11;
            local_188 = (uint *)((int)local_188 + 1);
            local_17c = local_17c + 2;
          } while ((int)local_188 < piVar11[1] - iVar12 >> 3);
        }
        FUN_00409af0(param_2);
        FUN_009a0940(param_2);
        FUN_0099f770(param_2,0);
        if (local_184 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_184);
        }
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
      } while (local_190 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58);
    }
    local_184 = (undefined4 *)0x0;
    local_180 = (undefined4 *)0x0;
    local_17c = 0;
    local_16c = (undefined4 *)0x0;
    local_168 = (undefined4 *)0x0;
    local_164 = 0;
    local_c._0_1_ = 3;
    local_c._1_3_ = 0;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58) {
      local_194 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x220) + local_194;
        FUN_00401000((*(float *)(iVar12 + 0x30) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_180;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar9 = puVar15;
        if (local_17c != 0) {
          local_180[2] = puVar15;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        FUN_00401000((*(float *)(iVar12 + 0x34) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        local_180 = (undefined4 *)FUN_00aae9af(0x10);
        if (local_180 == (undefined4 *)0x0) {
          local_180 = (undefined4 *)0x0;
        }
        else {
          *local_180 = uVar6;
          local_180[1] = puVar15;
          local_180[2] = 0;
          *(undefined1 *)(local_180 + 3) = 0;
        }
        puVar9 = local_180;
        if (local_17c != -1) {
          puVar15[2] = local_180;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = *(undefined4 *)(iVar12 + 0x54);
          puVar15[1] = local_168;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar4 = puVar15;
        if (local_164 != 0) {
          local_168[2] = puVar15;
          puVar4 = local_16c;
        }
        local_16c = puVar4;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_17c = local_17c + 2;
        local_168 = puVar15;
        local_164 = local_164 + 1;
      } while (local_190 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58);
    }
    FUN_00409af0(param_2);
    FUN_00409c60(param_2);
    local_15c = (uint *)0x0;
    local_158 = (uint *)0x0;
    local_154 = 0;
    local_150 = 0;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58) {
      local_194 = 0;
      do {
        puVar9 = local_158;
        local_c._0_1_ = 4;
        iVar12 = *(int *)(param_1 + 0x220);
        local_174 = (uint *)FUN_00aae9af(0x28);
        local_c._0_1_ = 5;
        if (local_174 == (uint *)0x0) {
          local_158 = (uint *)0x0;
        }
        else {
          local_174[5] = 0xf;
          local_174[4] = 0;
          *(undefined1 *)local_174 = 0;
          FUN_00408ed0(iVar12 + 0x10 + local_194,0,0xffffffff);
          local_174[7] = (uint)puVar9;
          local_174[8] = 0;
          *(undefined1 *)(local_174 + 9) = 0;
          local_158 = local_174;
        }
        iVar12 = local_154 + 1;
        puVar10 = local_158;
        if (local_154 != 0) {
          puVar9[8] = (uint)local_158;
          puVar10 = local_15c;
        }
        local_15c = puVar10;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_154 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58);
    }
    local_c._0_1_ = 4;
    FUN_00401340();
    local_12c = (undefined4 *)0x0;
    local_128 = (undefined4 *)0x0;
    local_124 = 0;
    local_120 = 0;
    local_c = CONCAT31(local_c._1_3_,6);
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58) {
      local_194 = 0;
      do {
        puVar15 = local_128;
        iVar12 = *(int *)(param_1 + 0x220);
        local_128 = (undefined4 *)FUN_00aae9af(0x10);
        if (local_128 == (undefined4 *)0x0) {
          local_128 = (undefined4 *)0x0;
        }
        else {
          *local_128 = *(undefined4 *)(iVar12 + 0x2c + local_194);
          local_128[1] = puVar15;
          local_128[2] = 0;
          *(undefined1 *)(local_128 + 3) = 0;
        }
        iVar12 = local_124 + 1;
        puVar4 = local_128;
        if (local_124 != 0) {
          puVar15[2] = local_128;
          puVar4 = local_12c;
        }
        local_12c = puVar4;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_124 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x220)) / 0x58);
    }
    FUN_00409c60(param_2);
    if (local_12c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c);
    }
    FUN_004097a0(&local_15c);
    if (local_16c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c);
    }
    local_c = 0xffffffff;
    if (local_184 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
  }
  iVar12 = *(int *)(param_1 + 0x244);
  iVar3 = *(int *)(param_1 + 0x240);
  FUN_009a0940(param_2);
  local_11c = 0xc;
  _sprintf(local_118,"%d",(iVar12 - iVar3) / 0x34);
  FUN_0099ff90(param_2);
  puVar15 = (undefined4 *)FUN_00990880();
  local_c = 7;
  local_11c = 0x10;
  if (0xf < (uint)puVar15[5]) {
    puVar15 = (undefined4 *)*puVar15;
  }
  __snprintf(local_118,0xff,"%s",puVar15);
  FUN_0099ff90(param_2);
  local_c = 0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148);
  }
  if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
    puVar15 = (undefined4 *)0x0;
    local_16c = (undefined4 *)0x0;
    local_164 = 0;
    local_c = 8;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
      local_194 = 0;
      do {
        pfVar13 = (float *)(*(int *)(param_1 + 0x240) + local_194);
        FUN_00401000((*pfVar13 + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        local_188 = (uint *)FUN_00aae9af(0x10);
        if (local_188 == (undefined4 *)0x0) {
          local_188 = (undefined4 *)0x0;
        }
        else {
          *local_188 = uVar6;
          local_188[1] = (uint)puVar15;
          local_188[2] = 0;
          *(undefined1 *)(local_188 + 3) = 0;
        }
        puVar9 = local_188;
        if (local_164 != 0) {
          puVar15[2] = local_188;
          puVar9 = local_16c;
        }
        local_16c = puVar9;
        FUN_00401000((pfVar13[1] + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_188;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar4 = puVar15;
        if (local_164 != -1) {
          local_188[2] = (uint)puVar15;
          puVar4 = local_16c;
        }
        local_16c = puVar4;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_164 = local_164 + 2;
      } while (local_190 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34);
    }
    FUN_00409af0(param_2);
    puVar15 = (undefined4 *)0x0;
    local_184 = (undefined4 *)0x0;
    local_17c = 0;
    local_c._0_1_ = 9;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
      local_194 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x240) + local_194;
        FUN_00401000((*(float *)(iVar12 + 0x2c) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        local_188 = (uint *)FUN_00aae9af(0x10);
        if (local_188 == (undefined4 *)0x0) {
          local_188 = (undefined4 *)0x0;
        }
        else {
          *local_188 = uVar6;
          local_188[1] = (uint)puVar15;
          local_188[2] = 0;
          *(undefined1 *)(local_188 + 3) = 0;
        }
        puVar9 = local_188;
        if (local_17c != 0) {
          puVar15[2] = local_188;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        FUN_00401000((*(float *)(iVar12 + 0x30) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_188;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar9 = puVar15;
        if (local_17c != -1) {
          local_188[2] = (uint)puVar15;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_17c = local_17c + 2;
      } while (local_190 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34);
    }
    FUN_00409af0(param_2);
    local_148 = (uint *)0x0;
    local_144 = (uint *)0x0;
    local_140 = 0;
    local_13c = 0;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
      local_194 = 0;
      do {
        puVar9 = local_144;
        local_c._0_1_ = 10;
        iVar12 = *(int *)(param_1 + 0x240);
        local_174 = (uint *)FUN_00aae9af(0x28);
        local_c._0_1_ = 0xb;
        if (local_174 == (uint *)0x0) {
          local_144 = (uint *)0x0;
        }
        else {
          local_174[5] = 0xf;
          local_174[4] = 0;
          *(undefined1 *)local_174 = 0;
          FUN_00408ed0(local_194 + 8 + iVar12,0,0xffffffff);
          local_174[7] = (uint)puVar9;
          local_174[8] = 0;
          *(undefined1 *)(local_174 + 9) = 0;
          local_144 = local_174;
        }
        iVar12 = local_140 + 1;
        puVar10 = local_144;
        if (local_140 != 0) {
          puVar9[8] = (uint)local_144;
          puVar10 = local_148;
        }
        local_148 = puVar10;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_140 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34);
    }
    local_c._0_1_ = 10;
    FUN_00401340();
    local_12c = (undefined4 *)0x0;
    local_128 = (undefined4 *)0x0;
    local_124 = 0;
    local_120 = 0;
    local_c._0_1_ = 0xc;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
      local_194 = 0;
      do {
        puVar15 = local_128;
        iVar12 = *(int *)(param_1 + 0x240);
        local_128 = (undefined4 *)FUN_00aae9af(0x10);
        if (local_128 == (undefined4 *)0x0) {
          local_128 = (undefined4 *)0x0;
        }
        else {
          *local_128 = *(undefined4 *)(local_194 + 0x24 + iVar12);
          local_128[1] = puVar15;
          local_128[2] = 0;
          *(undefined1 *)(local_128 + 3) = 0;
        }
        iVar12 = local_124 + 1;
        puVar4 = local_128;
        if (local_124 != 0) {
          puVar15[2] = local_128;
          puVar4 = local_12c;
        }
        local_12c = puVar4;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_124 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34);
    }
    FUN_00409c60(param_2);
    local_15c = (uint *)0x0;
    local_158 = (uint *)0x0;
    local_154 = 0;
    local_150 = 0;
    local_c = CONCAT31(local_c._1_3_,0xd);
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34) {
      local_194 = 0;
      do {
        puVar9 = local_158;
        FUN_00401000((*(float *)(*(int *)(param_1 + 0x240) + local_194 + 0x28) + 0.0005) * 1000.0);
        uVar7 = FUN_00b31c00();
        local_158 = (uint *)FUN_00aae9af(0x10);
        if (local_158 == (uint *)0x0) {
          local_158 = (uint *)0x0;
        }
        else {
          *local_158 = uVar7;
          local_158[1] = (uint)puVar9;
          local_158[2] = 0;
          *(undefined1 *)(local_158 + 3) = 0;
        }
        iVar12 = local_154 + 1;
        puVar10 = local_158;
        if (local_154 != 0) {
          puVar9[2] = (uint)local_158;
          puVar10 = local_15c;
        }
        local_15c = puVar10;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_154 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) / 0x34);
    }
    FUN_00409af0(param_2);
    if (local_15c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_15c);
    }
    if (local_12c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c);
    }
    FUN_004097a0(&local_148);
    if (local_184 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    local_c = 0xffffffff;
    if (local_16c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c);
    }
  }
  local_c = 0xffffffff;
  iVar12 = *(int *)(param_1 + 0x254);
  iVar3 = *(int *)(param_1 + 0x250);
  FUN_009a0940(param_2);
  local_11c = 0xc;
  _sprintf(local_118,"%d",(iVar12 - iVar3) / 0x34);
  FUN_0099ff90(param_2);
  puVar15 = (undefined4 *)FUN_00990880();
  local_c = 0xe;
  local_11c = 0x10;
  if (0xf < (uint)puVar15[5]) {
    puVar15 = (undefined4 *)*puVar15;
  }
  __snprintf(local_118,0xff,"%s",puVar15);
  FUN_0099ff90(param_2);
  local_c = 0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148);
  }
  if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
    local_184 = (undefined4 *)0x0;
    local_17c = 0;
    local_c = 0xf;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
      local_194 = 0;
      puVar15 = (undefined4 *)0x0;
      do {
        pfVar13 = (float *)(*(int *)(param_1 + 0x250) + local_194);
        FUN_00401000((*pfVar13 + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        local_188 = (uint *)FUN_00aae9af(0x10);
        if (local_188 == (undefined4 *)0x0) {
          local_188 = (undefined4 *)0x0;
        }
        else {
          *local_188 = uVar6;
          local_188[1] = (uint)puVar15;
          local_188[2] = 0;
          *(undefined1 *)(local_188 + 3) = 0;
        }
        puVar9 = local_188;
        if (local_17c != 0) {
          puVar15[2] = local_188;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        FUN_00401000((pfVar13[1] + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_188;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar9 = puVar15;
        if (local_17c != -1) {
          local_188[2] = (uint)puVar15;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_17c = local_17c + 2;
      } while (local_190 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34);
    }
    FUN_00409af0(param_2);
    puVar15 = (undefined4 *)0x0;
    local_16c = (undefined4 *)0x0;
    local_164 = 0;
    local_c = CONCAT31(local_c._1_3_,0x10);
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
      local_194 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x250) + local_194;
        FUN_00401000((*(float *)(iVar12 + 0x2c) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        local_188 = (uint *)FUN_00aae9af(0x10);
        if (local_188 == (undefined4 *)0x0) {
          local_188 = (undefined4 *)0x0;
        }
        else {
          *local_188 = uVar6;
          local_188[1] = (uint)puVar15;
          local_188[2] = 0;
          *(undefined1 *)(local_188 + 3) = 0;
        }
        puVar9 = local_188;
        if (local_164 != 0) {
          puVar15[2] = local_188;
          puVar9 = local_16c;
        }
        local_16c = puVar9;
        FUN_00401000((*(float *)(iVar12 + 0x30) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_188;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar4 = puVar15;
        if (local_164 != -1) {
          local_188[2] = (uint)puVar15;
          puVar4 = local_16c;
        }
        local_16c = puVar4;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_164 = local_164 + 2;
      } while (local_190 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34);
    }
    FUN_00409af0(param_2);
    iVar12 = 0;
    if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
      do {
        FUN_009a0940(param_2);
        FUN_0099f770(param_2,0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34);
    }
    local_15c = (uint *)0x0;
    local_158 = (uint *)0x0;
    local_154 = 0;
    local_150 = 0;
    local_c._0_1_ = 0x11;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
      local_194 = 0;
      do {
        puVar9 = local_158;
        FUN_00401000((*(float *)(*(int *)(param_1 + 0x250) + local_194 + 0x24) + 0.0005) * 1000.0);
        uVar7 = FUN_00b31c00();
        local_158 = (uint *)FUN_00aae9af(0x10);
        if (local_158 == (uint *)0x0) {
          local_158 = (uint *)0x0;
        }
        else {
          *local_158 = uVar7;
          local_158[1] = (uint)puVar9;
          local_158[2] = 0;
          *(undefined1 *)(local_158 + 3) = 0;
        }
        iVar12 = local_154 + 1;
        puVar10 = local_158;
        if (local_154 != 0) {
          puVar9[2] = (uint)local_158;
          puVar10 = local_15c;
        }
        local_15c = puVar10;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_154 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34);
    }
    FUN_00409af0(param_2);
    local_148 = (uint *)0x0;
    local_144 = (uint *)0x0;
    local_140 = 0;
    local_13c = 0;
    local_c = CONCAT31(local_c._1_3_,0x12);
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34) {
      local_194 = 0;
      do {
        puVar9 = local_144;
        FUN_00401000((*(float *)(*(int *)(param_1 + 0x250) + local_194 + 0x28) + 0.0005) * 1000.0);
        uVar7 = FUN_00b31c00();
        local_144 = (uint *)FUN_00aae9af(0x10);
        if (local_144 == (uint *)0x0) {
          local_144 = (uint *)0x0;
        }
        else {
          *local_144 = uVar7;
          local_144[1] = (uint)puVar9;
          local_144[2] = 0;
          *(undefined1 *)(local_144 + 3) = 0;
        }
        iVar12 = local_140 + 1;
        puVar10 = local_144;
        if (local_140 != 0) {
          puVar9[2] = (uint)local_144;
          puVar10 = local_148;
        }
        local_148 = puVar10;
        local_194 = local_194 + 0x34;
        local_190 = local_190 + 1;
        local_140 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x250)) / 0x34);
    }
    FUN_00409af0(param_2);
    if (local_148 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_148);
    }
    if (local_15c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_15c);
    }
    if (local_16c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c);
    }
    local_c = 0xffffffff;
    if (local_184 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
  }
  local_c = 0xffffffff;
  local_14c = *(char *)(param_1 + 0x21d);
  FUN_009a0940(param_2);
  local_11c = 0xe;
  puVar8 = &DAT_00dfbbd0;
  if (local_14c == '\0') {
    puVar8 = &DAT_00dfbbd4;
  }
  _sprintf(local_118,"%s",puVar8);
  FUN_0099ff90(param_2);
  puVar15 = (undefined4 *)FUN_00990880();
  local_c = 0x13;
  local_11c = 0x10;
  if (0xf < (uint)puVar15[5]) {
    puVar15 = (undefined4 *)*puVar15;
  }
  __snprintf(local_118,0xff,"%s",puVar15);
  FUN_0099ff90(param_2);
  local_c = 0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148);
  }
  iVar12 = *(int *)(param_1 + 0x234);
  iVar3 = *(int *)(param_1 + 0x230);
  FUN_009a0940(param_2);
  local_11c = 0xc;
  _sprintf(local_118,"%d",(iVar12 - iVar3) / 0x58);
  FUN_0099ff90(param_2);
  puVar15 = (undefined4 *)FUN_00990880();
  local_c = 0x14;
  local_11c = 0x10;
  if (0xf < (uint)puVar15[5]) {
    puVar15 = (undefined4 *)*puVar15;
  }
  __snprintf(local_118,0xff,"%s",puVar15);
  FUN_0099ff90(param_2);
  local_c = 0xffffffff;
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148);
  }
  iVar12 = *(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230);
  puVar9 = (uint *)(iVar12 * 0x2e8ba2e9);
  if (0 < iVar12 / 0x58) {
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58) {
      local_194 = 0;
      do {
        piVar11 = (int *)(*(int *)(param_1 + 0x230) + local_194);
        local_184 = (uint *)0x0;
        local_17c = 0;
        local_c = 0x15;
        iVar12 = *piVar11;
        local_170 = (undefined4 *)0x0;
        puVar9 = (uint *)0x0;
        if (0 < (int)(piVar11[1] - iVar12 & 0xfffffff8U)) {
          do {
            local_174 = puVar9;
            FUN_00401000((*(float *)(iVar12 + (int)local_170 * 8) + 0.0005) * 1000.0);
            uVar7 = FUN_00b31c00();
            local_188 = (uint *)FUN_00aae9af(0x10);
            if (local_188 == (uint *)0x0) {
              local_188 = (uint *)0x0;
            }
            else {
              *local_188 = uVar7;
              local_188[1] = (uint)local_174;
              local_188[2] = 0;
              *(undefined1 *)(local_188 + 3) = 0;
            }
            puVar9 = local_188;
            if (local_17c != 0) {
              local_174[2] = (uint)local_188;
              puVar9 = local_184;
            }
            local_184 = puVar9;
            FUN_00401000((*(float *)(*piVar11 + 4 + (int)local_170 * 8) + 0.0005) * 1000.0);
            uVar7 = FUN_00b31c00();
            puVar9 = (uint *)FUN_00aae9af(0x10);
            if (puVar9 == (uint *)0x0) {
              puVar9 = (uint *)0x0;
            }
            else {
              *puVar9 = uVar7;
              puVar9[1] = (uint)local_188;
              puVar9[2] = 0;
              *(undefined1 *)(puVar9 + 3) = 0;
            }
            puVar10 = puVar9;
            if (local_17c != -1) {
              local_188[2] = (uint)puVar9;
              puVar10 = local_184;
            }
            local_184 = puVar10;
            iVar12 = *piVar11;
            local_170 = (undefined4 *)((int)local_170 + 1);
            local_17c = local_17c + 2;
          } while ((int)local_170 < piVar11[1] - iVar12 >> 3);
        }
        FUN_00409af0(param_2);
        FUN_009a0940(param_2);
        FUN_0099f770(param_2,0);
        if (local_184 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_184);
        }
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
      } while (local_190 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58);
    }
    local_184 = (undefined4 *)0x0;
    local_180 = (undefined4 *)0x0;
    local_17c = 0;
    local_16c = (undefined4 *)0x0;
    local_168 = (undefined4 *)0x0;
    local_164 = 0;
    local_c._0_1_ = 0x17;
    local_c._1_3_ = 0;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58) {
      local_194 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x230) + local_194;
        FUN_00401000((*(float *)(iVar12 + 0x30) + 0.0005) * 1000.0);
        uVar6 = FUN_00b31c00();
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = uVar6;
          puVar15[1] = local_180;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar9 = puVar15;
        if (local_17c != 0) {
          local_180[2] = puVar15;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        FUN_00401000((*(float *)(iVar12 + 0x34) + 0.0005) * 1000.0);
        local_174 = (uint *)FUN_00b31c00();
        local_180 = (undefined4 *)FUN_00aae9af(0x10);
        if (local_180 == (undefined4 *)0x0) {
          local_180 = (undefined4 *)0x0;
        }
        else {
          *local_180 = local_174;
          local_180[1] = puVar15;
          local_180[2] = 0;
          *(undefined1 *)(local_180 + 3) = 0;
        }
        puVar9 = local_180;
        if (local_17c != -1) {
          puVar15[2] = local_180;
          puVar9 = local_184;
        }
        local_184 = puVar9;
        puVar15 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = *(undefined4 *)(iVar12 + 0x54);
          puVar15[1] = local_168;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        puVar4 = puVar15;
        if (local_164 != 0) {
          local_168[2] = puVar15;
          puVar4 = local_16c;
        }
        local_16c = puVar4;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_17c = local_17c + 2;
        local_168 = puVar15;
        local_164 = local_164 + 1;
      } while (local_190 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58);
    }
    FUN_00409af0(param_2);
    FUN_00409c60(param_2);
    local_15c = (uint *)0x0;
    local_158 = (uint *)0x0;
    local_154 = 0;
    local_150 = 0;
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58) {
      local_194 = 0;
      do {
        puVar9 = local_158;
        local_c._0_1_ = 0x18;
        local_174 = (uint *)(local_194 + 0x10 + *(int *)(param_1 + 0x230));
        puVar10 = (uint *)FUN_00aae9af(0x28);
        local_c._0_1_ = 0x19;
        if (puVar10 == (uint *)0x0) {
          puVar10 = (uint *)0x0;
        }
        else {
          puVar10[5] = 0xf;
          puVar10[4] = 0;
          *(undefined1 *)puVar10 = 0;
          FUN_00408ed0(local_174,0,0xffffffff);
          puVar10[7] = (uint)puVar9;
          puVar10[8] = 0;
          *(undefined1 *)(puVar10 + 9) = 0;
        }
        iVar12 = local_154 + 1;
        puVar14 = puVar10;
        if (local_154 != 0) {
          puVar9[8] = (uint)puVar10;
          puVar14 = local_15c;
        }
        local_15c = puVar14;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_158 = puVar10;
        local_154 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58);
    }
    local_c._0_1_ = 0x18;
    FUN_00401340();
    local_148 = (uint *)0x0;
    local_144 = (uint *)0x0;
    local_140 = 0;
    local_13c = 0;
    local_c = CONCAT31(local_c._1_3_,0x1a);
    local_190 = 0;
    if (0 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58) {
      local_194 = 0;
      do {
        local_174 = local_144;
        iVar12 = *(int *)(param_1 + 0x230);
        local_144 = (uint *)FUN_00aae9af(0x10);
        if (local_144 == (uint *)0x0) {
          local_144 = (uint *)0x0;
        }
        else {
          *local_144 = *(uint *)(local_194 + 0x2c + iVar12);
          local_144[1] = (uint)local_174;
          local_144[2] = 0;
          *(undefined1 *)(local_144 + 3) = 0;
        }
        iVar12 = local_140 + 1;
        puVar9 = local_144;
        if (local_140 != 0) {
          local_174[2] = (uint)local_144;
          puVar9 = local_148;
        }
        local_148 = puVar9;
        local_194 = local_194 + 0x58;
        local_190 = local_190 + 1;
        local_140 = iVar12;
      } while (local_190 < (*(int *)(param_1 + 0x234) - *(int *)(param_1 + 0x230)) / 0x58);
    }
    FUN_00409c60(param_2);
    if (local_148 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_148);
    }
    FUN_004097a0(&local_15c);
    if (local_16c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c);
    }
    local_c = 0xffffffff;
    puVar9 = (uint *)0x0;
    if (local_184 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
  }
  local_c = 0xffffffff;
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x224)) {
      uVar6 = FUN_0040a4e0(*(int *)(param_1 + 0x224),local_174);
      FUN_0040a110(*(undefined4 *)(param_1 + 0x224),local_174);
      *(undefined4 *)(param_1 + 0x224) = uVar6;
    }
    if (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x234)) {
      uVar6 = FUN_0040a4e0(*(int *)(param_1 + 0x234),local_174);
      FUN_0040a110(*(undefined4 *)(param_1 + 0x234),local_174);
      *(undefined4 *)(param_1 + 0x234) = uVar6;
    }
    if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x244)) {
      local_174 = (uint *)FUN_0040a550(*(int *)(param_1 + 0x244),local_174);
      puVar9 = *(uint **)(param_1 + 0x244);
      if (local_174 != puVar9) {
        puVar10 = local_174 + 7;
        do {
          if (0xf < *puVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar10[-5]);
          }
          *puVar10 = 0xf;
          puVar10[-1] = 0;
          *(undefined1 *)(puVar10 + -5) = 0;
          puVar14 = puVar10 + 6;
          puVar10 = puVar10 + 0xd;
        } while (puVar14 != puVar9);
      }
      *(uint **)(param_1 + 0x244) = local_174;
    }
    puVar9 = *(uint **)(param_1 + 0x254);
    if (*(uint **)(param_1 + 0x250) != puVar9) {
      puVar9 = (uint *)FUN_0040a5b0(puVar9,local_174);
      puVar10 = *(uint **)(param_1 + 0x254);
      if (puVar9 != puVar10) {
        puVar14 = puVar9 + 7;
        do {
          if (0xf < *puVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar14[-5]);
          }
          *puVar14 = 0xf;
          puVar14[-1] = 0;
          *(undefined1 *)(puVar14 + -5) = 0;
          puVar1 = puVar14 + 6;
          puVar14 = puVar14 + 0xd;
        } while (puVar1 != puVar10);
      }
      *(uint **)(param_1 + 0x254) = puVar9;
    }
  }
  ExceptionList = local_14;
  return puVar9;
}

