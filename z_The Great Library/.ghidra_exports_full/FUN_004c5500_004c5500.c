// FUN_004c5500 @ 004c5500 body=[[004c5500, 004c57e5] [004c57e9, 004c581e] [004c5822, 004c5852] [004c5856, 004c5880] [004c5884, 004c58ab] [004c58af, 004c58df] [004c58e3, 004c590d] [004c5911, 004c593f] [004c5943, 004c5d8c] [004c5d90, 004c5eda] [004c5ede, 004c5f02] [004c5f06, 004c5f38] [004c5f3c, 004c6118] [004c6120, 004c620e] [004c6212, 004c6234] [004c6238, 004c6262] [004c6266, 004c635a] [004c635e, 004c6422] [004c6426, 004c64dd] [004c64e1, 004c6652] [004c6656, 004c6676] [004c667a, 004c66a7] [004c66ab, 004c6720] [004c6724, 004c67a4] [004c67a8, 004c6814] [004c681a, 004c6897] [004c689b, 004c6a77] [004c6a7b, 004c6a91]]


/* WARNING: Removing unreachable block (ram,0x004c679b) */
/* WARNING: Removing unreachable block (ram,0x004c669e) */
/* WARNING: Removing unreachable block (ram,0x004c6649) */
/* WARNING: Removing unreachable block (ram,0x004c6419) */
/* WARNING: Removing unreachable block (ram,0x004c622b) */
/* WARNING: Removing unreachable block (ram,0x004c5f2f) */
/* WARNING: Removing unreachable block (ram,0x004c5ed1) */
/* WARNING: Removing unreachable block (ram,0x004c5904) */
/* WARNING: Removing unreachable block (ram,0x004c58d3) */
/* WARNING: Removing unreachable block (ram,0x004c5936) */
/* WARNING: Removing unreachable block (ram,0x004c5ef9) */
/* WARNING: Removing unreachable block (ram,0x004c6205) */
/* WARNING: Removing unreachable block (ram,0x004c6259) */
/* WARNING: Removing unreachable block (ram,0x004c64d4) */
/* WARNING: Removing unreachable block (ram,0x004c666d) */
/* WARNING: Removing unreachable block (ram,0x004c6717) */
/* WARNING: Removing unreachable block (ram,0x004c680b) */
/* WARNING: Removing unreachable block (ram,0x004c589f) */

void FUN_004c5500(int param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  void *_Dst;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iStack_3a8;
  int local_3a4;
  uint local_360;
  uint local_2fc [4];
  undefined4 uStack_2ec;
  uint uStack_2e8;
  uint local_2dc;
  undefined4 local_2cc;
  uint local_2c8;
  uint local_2c0;
  undefined4 local_2b0;
  uint local_2ac;
  uint local_2a4;
  undefined4 local_294;
  uint local_290;
  undefined4 local_288;
  char local_284 [256];
  undefined4 uStack_184;
  char acStack_180 [308];
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b5fd33;
  pvStack_4c = ExceptionList;
  if (*(int *)(in_ECX + 0x74) == (int)*(float *)(in_ECX + 0x54)) {
    bVar9 = *(int *)(in_ECX + 0x78) == (int)*(float *)(in_ECX + 0x58);
  }
  else {
    bVar9 = false;
  }
  if (*(int *)(in_ECX + 0x74) == (int)*(float *)(in_ECX + 100)) {
    bVar10 = *(int *)(in_ECX + 0x78) == (int)*(float *)(in_ECX + 0x68);
  }
  else {
    bVar10 = false;
  }
  if (*(int *)(in_ECX + 0x74) == *(int *)(in_ECX + 0x7c)) {
    bVar11 = *(int *)(in_ECX + 0x78) == *(int *)(in_ECX + 0x80);
  }
  else {
    bVar11 = false;
  }
  if ((*(float *)(in_ECX + 0x44) == (float)*(int *)(in_ECX + 0x74)) &&
     (*(float *)(in_ECX + 0x48) == (float)*(int *)(in_ECX + 0x78) - 2.0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  fVar1 = *(float *)(in_ECX + 0x6c);
  bVar3 = *(float *)(in_ECX + 0x70) != DAT_00f092fc;
  ExceptionList = &pvStack_4c;
  FUN_00409350(&DAT_00dfaf88,3);
  local_44._0_1_ = 1;
  local_44._1_3_ = 0;
  pcVar5 = __itoa(*(int *)(in_ECX + 0xb4),(char *)local_2fc,10);
  pcVar8 = pcVar5;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
  local_44._0_1_ = 2;
  FUN_00409350(&DAT_00dee2cc,1);
  local_44._0_1_ = 3;
  FUN_00409350(&DAT_00dfd404,1);
  local_44._0_1_ = 4;
  FUN_00988f20();
  local_44._0_1_ = 5;
  FUN_00988f20();
  local_44._0_1_ = 6;
  FUN_00988f20();
  local_44._0_1_ = 7;
  FUN_00988f20();
  local_44 = CONCAT31(local_44._1_3_,8);
  local_288 = 0xf;
  __snprintf(local_284,0xff,"%s");
  FUN_0099ff90();
  if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ac = 0xf;
  local_2b0 = 0;
  local_2c0 = local_2c0 & 0xffffff00;
  if (0xf < local_2c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c8 = 0xf;
  local_2cc = 0;
  local_2dc = local_2dc & 0xffffff00;
  if (0xf < local_290) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_290 = 0xf;
  local_294 = 0;
  local_2a4 = local_2a4 & 0xffffff00;
  if (0xf < local_360) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xffffffff;
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_004013e0();
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    FUN_004013e0();
    FUN_004013e0();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (!bVar11) {
    FUN_0099f610();
  }
  if (!bVar4) {
    dVar12 = (double)*(float *)(in_ECX + 0x44);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 0x44) = (float)dVar12;
    auVar13._0_8_ = (double)*(float *)(in_ECX + 0x48);
    auVar13._8_8_ = 0;
    FUN_004c3000(auVar13._0_8_);
    *(float *)(in_ECX + 0x48) = (float)auVar13._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x3c) + 4))();
  }
  if (fVar1 != 0.0) {
    fVar1 = *(float *)(in_ECX + 0x6c);
    FUN_009a0940();
    local_288 = 0xd;
    _sprintf(local_284,"%f",(double)fVar1);
    FUN_0099ff90();
    FUN_004013e0();
  }
  if (bVar3) {
    fVar1 = *(float *)(in_ECX + 0x70);
    FUN_009a0940();
    local_288 = 0xd;
    _sprintf(local_284,"%f",(double)fVar1);
    FUN_0099ff90();
    FUN_004013e0();
  }
  if (!bVar9) {
    dVar12 = (double)*(float *)(in_ECX + 0x54);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 0x54) = (float)dVar12;
    auVar14._0_8_ = (double)*(float *)(in_ECX + 0x58);
    auVar14._8_8_ = 0;
    FUN_004c3000(auVar14._0_8_);
    *(float *)(in_ECX + 0x58) = (float)auVar14._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x4c) + 4))();
  }
  if (!bVar10) {
    dVar12 = (double)*(float *)(in_ECX + 100);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 100) = (float)dVar12;
    auVar15._0_8_ = (double)*(float *)(in_ECX + 0x68);
    auVar15._8_8_ = 0;
    FUN_004c3000(auVar15._0_8_);
    *(float *)(in_ECX + 0x68) = (float)auVar15._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x5c) + 4))();
  }
  if ((*(int *)(in_ECX + 0x74) != (int)*(float *)(in_ECX + 0x1b4)) ||
     (*(int *)(in_ECX + 0x78) != (int)*(float *)(in_ECX + 0x1b8))) {
    dVar12 = (double)*(float *)(in_ECX + 0x1b4);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 0x1b4) = (float)dVar12;
    auVar16._0_8_ = (double)*(float *)(in_ECX + 0x1b8);
    auVar16._8_8_ = 0;
    FUN_004c3000(auVar16._0_8_);
    *(float *)(in_ECX + 0x1b8) = (float)auVar16._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x1ac) + 4))();
  }
  if ((*(int *)(in_ECX + 0x74) != (int)*(float *)(in_ECX + 0x1c4)) ||
     (*(int *)(in_ECX + 0x78) != (int)*(float *)(in_ECX + 0x1c8))) {
    dVar12 = (double)*(float *)(in_ECX + 0x1c4);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 0x1c4) = (float)dVar12;
    auVar17._0_8_ = (double)*(float *)(in_ECX + 0x1c8);
    auVar17._8_8_ = 0;
    FUN_004c3000(auVar17._0_8_);
    *(float *)(in_ECX + 0x1c8) = (float)auVar17._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x1bc) + 4))();
  }
  if ((*(int *)(in_ECX + 0x74) != (int)*(float *)(in_ECX + 0x1d4)) ||
     (*(int *)(in_ECX + 0x78) != (int)*(float *)(in_ECX + 0x1d8))) {
    dVar12 = (double)*(float *)(in_ECX + 0x1d4);
    FUN_004c3000(dVar12);
    *(float *)(in_ECX + 0x1d4) = (float)dVar12;
    auVar18._0_8_ = (double)*(float *)(in_ECX + 0x1d8);
    auVar18._8_8_ = 0;
    FUN_004c3000(auVar18._0_8_);
    *(float *)(in_ECX + 0x1d8) = (float)auVar18._0_8_;
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x1cc) + 4))();
  }
  if (*(char *)(in_ECX + 0x2a) != '\0') {
    bVar9 = false;
    local_3a4 = 1;
    if (0x10 < (int)(*(int *)(in_ECX + 0x334) - *(int *)(in_ECX + 0x330) & 0xfffffff0U)) {
      iStack_3a8 = 0x10;
      do {
        if (DAT_0125ce80 == (undefined4 *)0x0) {
          iVar6 = FUN_00aae9af();
          local_44 = 9;
          if (iVar6 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)FUN_004dada0();
          }
          local_44 = 10;
          if ((puVar7 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
            FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_44 = 0xffffffff;
          DAT_0125ce80 = puVar7;
        }
        if (*(char *)(*(int *)(DAT_0125ce80[3] + local_3a4 * 4) + 0xe0) != '\0') {
          iVar6 = *(int *)(in_ECX + 0x330) + iStack_3a8;
          if ((*(float *)(iVar6 + 8) != (float)*(int *)(in_ECX + 0x74)) ||
             (*(float *)(iVar6 + 0xc) != (float)*(int *)(in_ECX + 0x78))) {
            if (!bVar9) {
              FUN_00409350(&DAT_00dfaf88,3);
              local_44 = 0xb;
              FUN_00409350("building_position",0x11);
              local_44._0_1_ = 0xc;
              FUN_00988f20();
              local_44 = CONCAT31(local_44._1_3_,0xd);
              local_288 = 0xf;
              __snprintf(local_284,0xff,"%s");
              FUN_0099ff90();
              local_44 = 0xffffffff;
              FUN_0099fe90();
              bVar9 = true;
            }
            iVar6 = *(int *)(in_ECX + 0x330);
            dVar12 = (double)*(float *)(iVar6 + 8 + iStack_3a8);
            FUN_004c3000(dVar12);
            *(float *)(iVar6 + 8 + iStack_3a8) = (float)dVar12;
            iVar6 = *(int *)(in_ECX + 0x330);
            dVar12 = (double)*(float *)(iVar6 + 0xc + iStack_3a8);
            FUN_004c3000();
            *(float *)(iVar6 + 0xc + iStack_3a8) = (float)dVar12;
            if ((*(float *)(*(int *)(in_ECX + 0x330) + 8 + iStack_3a8) != 0.0) ||
               (*(float *)(*(int *)(in_ECX + 0x330) + 0xc + iStack_3a8) != 0.0)) {
              local_288 = 0xf;
              __snprintf(local_284,0xff,"%s");
              FUN_0099ff90();
              FUN_004013e0();
              (**(code **)(*(int *)(*(int *)(in_ECX + 0x330) + iStack_3a8) + 4))();
              FUN_004013e0();
            }
          }
        }
        iStack_3a8 = iStack_3a8 + 0x10;
        local_3a4 = local_3a4 + 1;
      } while (local_3a4 < *(int *)(in_ECX + 0x334) - *(int *)(in_ECX + 0x330) >> 4);
      if (bVar9) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        if (*(int *)(param_1 + 4) != -1) {
          FUN_004013e0();
          FUN_004013e0();
        }
      }
    }
  }
  if ((*(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x84) & 0xfffffff0U) != 0) {
    FUN_004c9660();
  }
  if (*(int *)(in_ECX + 0x98) != *(int *)(in_ECX + 0x94)) {
    FUN_004c9740();
  }
  if (4 < (int)(*(int *)(in_ECX + 0x344) - *(int *)(in_ECX + 0x340) & 0xfffffffcU)) {
    bVar9 = false;
    iStack_3a8 = 1;
    if (4 < (int)(*(int *)(in_ECX + 0x344) - *(int *)(in_ECX + 0x340) & 0xfffffffcU)) {
      do {
        if (*(float *)(*(int *)(in_ECX + 0x340) + iStack_3a8 * 4) != 0.0) {
          if (!bVar9) {
            FUN_00409350(&DAT_00dfaf88,3);
            local_44 = 0xe;
            FUN_00409350("building_nudge",0xe);
            local_44._0_1_ = 0xf;
            FUN_00988f20();
            local_44 = CONCAT31(local_44._1_3_,0x10);
            local_288 = 0xf;
            __snprintf(local_284,0xff,"%s");
            FUN_0099ff90();
            local_44 = 0xffffffff;
            if (*(int *)(param_1 + 4) == -1) {
              *(undefined4 *)(param_1 + 4) = 0;
            }
            else {
              FUN_004013e0();
              if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
                FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
              }
              FUN_004013e0();
              FUN_004013e0();
            }
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            bVar9 = true;
          }
          if (DAT_0125ce80 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)FUN_00aae9af();
            local_44 = 0x11;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7[1] = 0x1ff;
              *puVar7 = 0;
              _Dst = (void *)FUN_00aad56b();
              puVar7[2] = _Dst;
              _memset(_Dst,0,puVar7[1] * 4);
              puVar7[3] = 0;
              puVar7[4] = 0;
              puVar7[5] = 0;
              puVar7[7] = 0;
              puVar7[8] = 0;
              puVar7[9] = 0;
            }
            local_44 = 0x12;
            if ((puVar7 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
              FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_44 = 0xffffffff;
            DAT_0125ce80 = puVar7;
          }
          local_288 = 0xf;
          __snprintf(local_284,0xff,"%s");
          FUN_0099ff90();
          FUN_00990880();
          local_44 = 0x13;
          local_288 = 1;
          __snprintf(local_284,0xff,"%s");
          FUN_0099ff90();
          local_44 = 0xffffffff;
          local_288 = 0xd;
          _sprintf(local_284,"%f",(double)*(float *)(*(int *)(in_ECX + 0x340) + iStack_3a8 * 4));
          FUN_0099ff90();
          FUN_00990880();
          local_44 = 0x14;
          local_288 = 0x10;
          __snprintf(local_284,0xff,"%s");
          FUN_0099ff90();
          local_44 = 0xffffffff;
        }
        iStack_3a8 = iStack_3a8 + 1;
      } while (iStack_3a8 < *(int *)(in_ECX + 0x344) - *(int *)(in_ECX + 0x340) >> 2);
      if (bVar9) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        if (*(int *)(param_1 + 4) != -1) {
          FUN_004013e0();
          FUN_004013e0();
        }
      }
    }
  }
  bVar9 = false;
  local_3a4 = 1;
  if (4 < (int)(*(int *)(in_ECX + 0x354) - *(int *)(in_ECX + 0x350) & 0xfffffffcU)) {
    bVar10 = false;
    do {
      if (*(float *)(*(int *)(in_ECX + 0x350) + local_3a4 * 4) != 0.0) {
        bVar11 = !bVar10;
        bVar10 = bVar9;
        if (bVar11) {
          FUN_00409350(&DAT_00dfaf88,3);
          local_44 = 0x15;
          FUN_00409350("building_rotation",0x11);
          local_44._0_1_ = 0x16;
          FUN_00988f20();
          local_44 = CONCAT31(local_44._1_3_,0x17);
          local_288 = 0xf;
          __snprintf(local_284,0xff,"%s");
          FUN_0099ff90();
          local_44 = 0xffffffff;
          if (*(int *)(param_1 + 4) == -1) {
            *(undefined4 *)(param_1 + 4) = 0;
          }
          else {
            FUN_00990880();
            local_44 = 0x19;
            local_288 = 0x10;
            __snprintf(local_284,0xff,"%s");
            FUN_0099ff90();
            local_44 = 0xffffffff;
            if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
              FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
            }
            FUN_00990880();
            local_44 = 0x1a;
            local_288 = 3;
            __snprintf(local_284,0xff,"%s");
            FUN_0099ff90();
            local_44 = 0xffffffff;
            FUN_00990880();
            local_44 = 0x1b;
            local_288 = 0x10;
            __snprintf(local_284,0xff,"%s");
            FUN_0099ff90();
          }
          local_44 = 0xffffffff;
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          bVar10 = true;
        }
        if (DAT_0125ce80 == (undefined4 *)0x0) {
          iVar6 = FUN_00aae9af();
          local_44 = 0x1c;
          if (iVar6 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)FUN_004dada0();
          }
          local_44 = 0x1d;
          if ((puVar7 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
            FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_44 = 0xffffffff;
          DAT_0125ce80 = puVar7;
        }
        local_288 = 0xf;
        __snprintf(local_284,0xff,"%s");
        FUN_0099ff90();
        FUN_004013e0();
        local_288 = 0xd;
        _sprintf(local_284,"%f",(double)*(float *)(*(int *)(in_ECX + 0x350) + local_3a4 * 4));
        FUN_0099ff90();
        FUN_004013e0();
        bVar9 = bVar10;
      }
      local_3a4 = local_3a4 + 1;
    } while (local_3a4 < *(int *)(in_ECX + 0x354) - *(int *)(in_ECX + 0x350) >> 2);
    if (bVar10) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
        FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
      }
      if (*(int *)(param_1 + 4) != -1) {
        FUN_004013e0();
        FUN_004013e0();
      }
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  uStack_2e8 = 0xf;
  uStack_2ec = 0;
  local_2fc[0] = local_2fc[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_44 = 0x1e;
  uStack_184 = 0xf;
  __snprintf(acStack_180,0xff,"%s");
  FUN_0099ff90();
  if (uStack_2e8 < 0x10) {
    ExceptionList = pvStack_4c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

