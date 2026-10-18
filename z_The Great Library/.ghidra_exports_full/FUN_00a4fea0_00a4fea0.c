// FUN_00a4fea0 @ 00a4fea0 body=[[00a4fea0, 00a50005] [00a50020, 00a5036b] [00a5036f, 00a50481] [00a50485, 00a505ec] [00a505f5, 00a5063c] [00a50640, 00a50689] [00a5068d, 00a507cb] [00a507cf, 00a5082c]]


/* WARNING: Removing unreachable block (ram,0x00a5030d) */

void FUN_00a4fea0(int *param_1,char *param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  int *in_ECX;
  float *pfVar17;
  byte *pbVar18;
  int iVar19;
  bool bVar20;
  char *pcStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  undefined ***pppuStack_16c;
  int **ppiStack_168;
  uint *puStack_164;
  float *pfStack_160;
  undefined8 **ppuStack_15c;
  undefined8 *local_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint local_13c;
  uint uStack_138;
  int *piStack_130;
  int *local_12c;
  uint local_128;
  int *local_120;
  undefined1 *local_11c;
  undefined1 *puStack_118;
  uint auStack_114 [4];
  undefined4 uStack_104;
  uint uStack_100;
  uint auStack_f8 [5];
  uint uStack_e4;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77cf9;
  pvStack_14 = ExceptionList;
  piVar1 = in_ECX + 0x38;
  ExceptionList = &pvStack_14;
  *piVar1 = 0;
  local_140 = 0;
  local_120 = (int *)0x0;
  local_11c = (undefined1 *)0x0;
  pcStack_178 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pcStack_178 = *(char **)param_2;
  }
  pfStack_160 = (float *)&local_140;
  puStack_164 = (uint *)0x0;
  ppiStack_168 = &local_120;
  pppuStack_16c = (undefined ***)&local_11c;
  piStack_170 = param_1;
  uStack_174 = 0x220;
  ppuStack_15c = (undefined8 **)piVar1;
  ppuStack_15c = (undefined8 **)D3DXLoadMeshFromXA();
  if ((int)ppuStack_15c < 0) {
    pfStack_160 = (float *)0xa4ff1a;
    uVar8 = FUN_00aa5068();
    ppuStack_15c = (undefined8 **)0xc;
    pfStack_160 = (float *)0xe41710;
    local_128 = 0xf;
    local_12c = (int *)0x0;
    local_13c = local_13c & 0xffffff00;
    puStack_164 = (uint *)0xa4ff3f;
    FUN_00409350();
    ppuStack_15c = (undefined8 **)0x1000;
    puStack_164 = &local_13c;
    pfStack_160 = (float *)0x144;
    local_c = 0;
    ppiStack_168 = (int **)0xa4ff61;
    uVar9 = FUN_004015b0();
    ppuStack_15c = (undefined8 **)0x0;
    pfStack_160 = (float *)0x13;
    puStack_164 = (uint *)0xe41720;
    local_c = CONCAT31(local_c._1_3_,1);
    pppuStack_16c = (undefined ***)0xa4ff7d;
    ppiStack_168 = (int **)uVar9;
    FUN_00987d50();
    if (0xf < *(uint *)(param_2 + 0x14)) {
      param_2 = *(char **)param_2;
    }
    uStack_174 = 0xa4ff90;
    piStack_170 = (int *)uVar9;
    pppuStack_16c = (undefined ***)param_2;
    uVar9 = FUN_00418e30();
    pppuStack_16c = (undefined ***)&DAT_00defe04;
    uStack_174 = uVar8;
    pcStack_178 = (char *)FUN_00418e30(uVar9,&DAT_00defe00);
    piStack_170 = (int *)FUN_00418e30();
    uStack_174 = 0xa4ffb8;
    uStack_174 = FUN_00418e30();
    pcStack_178 = (char *)0xa4ffbe;
    FUN_00401280();
    pppuStack_16c = appuStack_70;
    uStack_1c = 0;
    piStack_170 = (int *)0xa4ffd6;
    FUN_00987ac0();
    pppuStack_16c = appuStack_70;
    appuStack_70[0] = std::ios_base::vftable;
    piStack_170 = (int *)0xa4ffee;
    FUN_00aad52d();
    if (0xf < uStack_138) {
      pppuStack_16c = (undefined ***)local_14c;
                    /* WARNING: Subroutine does not return */
      piStack_170 = (int *)&UNK_00a50006;
      FUN_00aae91b();
    }
  }
  else {
    if ((float)in_ECX[0x49] != DAT_00f092fc) {
      puStack_164 = (uint *)*piVar1;
      ppuStack_15c = &local_14c;
      pfStack_160 = (float *)0x0;
      ppiStack_168 = (int **)0xa5004a;
      (**(code **)(*puStack_164 + 0x3c))();
      ppiStack_168 = (int **)*piVar1;
      pppuStack_16c = (undefined ***)0xa50054;
      pppuStack_16c = (undefined ***)(*(code *)(*ppiStack_168)[6])();
      piStack_170 = (int *)0xa5005b;
      iVar10 = D3DXGetFVFVertexSize();
      pppuStack_16c = (undefined ***)*piVar1;
      piStack_170 = (int *)0xa5006f;
      iVar11 = (**(code **)((int)*pppuStack_16c + 0x14))();
      if (3 < iVar11) {
        iVar19 = (iVar11 - 4U >> 2) + 1;
        ppuStack_15c = (undefined8 **)(iVar19 * 4);
        do {
          *pfStack_160 = *pfStack_160 * (float)in_ECX[0x49];
          pfStack_160[1] = pfStack_160[1] * (float)in_ECX[0x49];
          pfStack_160[2] = pfStack_160[2] * (float)in_ECX[0x49];
          pfVar17 = (float *)((int)pfStack_160 + iVar10);
          *pfVar17 = *pfVar17 * (float)in_ECX[0x49];
          pfVar17[1] = pfVar17[1] * (float)in_ECX[0x49];
          pfVar17[2] = pfVar17[2] * (float)in_ECX[0x49];
          pfVar17 = (float *)((int)pfVar17 + iVar10);
          *pfVar17 = *pfVar17 * (float)in_ECX[0x49];
          pfVar17[1] = pfVar17[1] * (float)in_ECX[0x49];
          pfVar17[2] = pfVar17[2] * (float)in_ECX[0x49];
          pfVar17 = (float *)((int)pfVar17 + iVar10);
          *pfVar17 = *pfVar17 * (float)in_ECX[0x49];
          pfVar17[1] = pfVar17[1] * (float)in_ECX[0x49];
          pfVar17[2] = pfVar17[2] * (float)in_ECX[0x49];
          pfStack_160 = (float *)((int)pfVar17 + iVar10);
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      if ((int)ppuStack_15c < iVar11) {
        iVar11 = iVar11 - (int)ppuStack_15c;
        do {
          *pfStack_160 = *pfStack_160 * (float)in_ECX[0x49];
          pfStack_160[1] = pfStack_160[1] * (float)in_ECX[0x49];
          pfStack_160[2] = pfStack_160[2] * (float)in_ECX[0x49];
          pfStack_160 = (float *)((int)pfStack_160 + iVar10);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      piStack_170 = (int *)in_ECX[0x38];
      uStack_174 = 0xa502cb;
      (**(code **)(*piStack_170 + 0x40))();
    }
    ppuStack_15c = (undefined8 **)0x0;
    pfStack_160 = (float *)&DAT_00ded94d;
    local_128 = 0xf;
    local_12c = (int *)0x0;
    local_13c = local_13c & 0xffffff00;
    puStack_164 = (uint *)0xa502f0;
    FUN_00409350();
    piVar1 = local_12c;
    uVar12 = in_ECX[0x2e];
    ppuStack_15c = (undefined8 **)uVar12;
    if (local_12c <= uVar12) {
      ppuStack_15c = (undefined8 **)local_12c;
    }
    pfStack_160 = (float *)0xa5032f;
    iVar10 = FUN_00414bd0();
    bVar20 = false;
    if (iVar10 == 0) {
      if (uVar12 < piVar1) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = (uint)((int *)uVar12 != piVar1);
      }
      bVar20 = uVar12 == 0;
    }
    local_c = 0xffffffff;
    if (0xf < local_128) {
      ppuStack_15c = (undefined8 **)local_13c;
                    /* WARNING: Subroutine does not return */
      pfStack_160 = (float *)&UNK_00a5036c;
      FUN_00aae91b();
    }
    if (bVar20) {
      ppuStack_15c = (undefined8 **)local_120;
      pfStack_160 = (float *)0xa50601;
      puVar14 = (undefined8 *)(**(code **)(*local_120 + 0xc))();
      puVar14[2] = *puVar14;
      puVar14[3] = puVar14[1];
      if (0xf < *(uint *)(param_2 + 0x14)) {
        param_2 = *(char **)param_2;
      }
      local_12c = (int *)0xf;
      piStack_130 = (int *)0x0;
      local_140 = local_140 & 0xffffff00;
      pfStack_160 = (float *)param_2;
      do {
        cVar4 = *(char *)pfStack_160;
        pfStack_160 = (float *)((int)pfStack_160 + 1);
      } while (cVar4 != '\0');
      pfStack_160 = (float *)((int)pfStack_160 - (int)(param_2 + 1));
      ppiStack_168 = (int **)0xa50654;
      puStack_164 = (uint *)param_2;
      FUN_00409350();
      pfStack_160 = (float *)&local_140;
      puStack_164 = auStack_114;
      puStack_10 = (undefined1 *)0x7;
      ppiStack_168 = (int **)0xa5066e;
      FUN_00a4c320();
      puStack_10._0_1_ = 9;
      if (0xf < local_12c) {
        pfStack_160 = (float *)local_140;
                    /* WARNING: Subroutine does not return */
        puStack_164 = (uint *)&UNK_00a5068a;
        FUN_00aae91b();
      }
      local_12c = (int *)0xf;
      piStack_130 = (int *)0x0;
      local_140 = local_140 & 0xffffff00;
      uStack_148 = 0;
      if (uStack_144 != 0) {
        do {
          pfStack_160 = (float *)0xd0;
          puStack_164 = (uint *)0xa506bb;
          puVar15 = (undefined1 *)FUN_00aae9af();
          puStack_10._0_1_ = 10;
          puStack_118 = puVar15;
          if (puVar15 == (undefined1 *)0x0) {
            puVar16 = (undefined8 *)0x0;
          }
          else {
            local_11c = (undefined1 *)&pcStack_178;
            puStack_164 = (uint *)0xf;
            ppiStack_168 = (int **)0x0;
            pcStack_178 = (char *)((uint)pcStack_178 & 0xffffff00);
            FUN_00408ed0(auStack_114,0,0xffffffff);
            puVar16 = (undefined8 *)FUN_00a428d0(puVar15,puVar14,in_ECX[0x11]);
          }
          puStack_10._0_1_ = 9;
          ppuVar6 = (undefined8 **)in_ECX[0x3a];
          local_14c = puVar16;
          if (&local_14c < ppuVar6) {
            ppuVar7 = (undefined8 **)in_ECX[0x39];
            if (&local_14c < ppuVar7) goto LAB_00a50772;
            if (ppuVar6 == (undefined8 **)in_ECX[0x3b]) {
              pfStack_160 = (float *)0xa50759;
              FUN_00a513f0();
            }
            if ((undefined4 *)in_ECX[0x3a] != (undefined4 *)0x0) {
              *(undefined4 *)in_ECX[0x3a] =
                   *(undefined4 *)(in_ECX[0x39] + ((int)&local_14c - (int)ppuVar7 >> 2) * 4);
            }
          }
          else {
LAB_00a50772:
            if (ppuVar6 == (undefined8 **)in_ECX[0x3b]) {
              pfStack_160 = (float *)0xa50785;
              FUN_00a513f0();
            }
            if ((int *)in_ECX[0x3a] != (int *)0x0) {
              *(int *)in_ECX[0x3a] = (int)puVar16;
            }
          }
          in_ECX[0x3a] = in_ECX[0x3a] + 4;
          puVar14 = puVar14 + 9;
          uStack_148 = uStack_148 + 1;
        } while (uStack_148 < uStack_144);
      }
      puStack_10 = (undefined1 *)0xffffffff;
      if (0xf < uStack_100) {
        pfStack_160 = (float *)auStack_114[0];
                    /* WARNING: Subroutine does not return */
        puStack_164 = (uint *)&UNK_00a507cc;
        FUN_00aae91b();
      }
      uStack_100 = 0xf;
      uStack_104 = 0;
      auStack_114[0] = auStack_114[0] & 0xffffff00;
    }
    else {
      pbVar2 = (byte *)(in_ECX + 0x31);
      pbVar13 = pbVar2;
      if (0xf < (uint)in_ECX[0x36]) {
        pbVar13 = *(byte **)pbVar2;
      }
      pbVar18 = &DAT_00ded94d;
      do {
        bVar3 = *pbVar13;
        bVar20 = bVar3 < *pbVar18;
        if (bVar3 != *pbVar18) {
LAB_00a503b1:
          pfStack_160 = (float *)((1 - (uint)bVar20) - (uint)(bVar20 != 0));
          goto LAB_00a503b6;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar13[1];
        bVar20 = bVar3 < pbVar18[1];
        if (bVar3 != pbVar18[1]) goto LAB_00a503b1;
        pbVar13 = pbVar13 + 2;
        pbVar18 = pbVar18 + 2;
      } while (bVar3 != 0);
      pfStack_160 = (float *)0x0;
LAB_00a503b6:
      if (pfStack_160 == (float *)0x0) {
        ppuStack_15c = (undefined8 **)0xffffffff;
        puStack_164 = (uint *)(in_ECX + 0x2a);
        ppiStack_168 = (int **)0xa503cb;
        FUN_00408ed0();
        ppuStack_15c = (undefined8 **)0x5c;
        pfStack_160 = (float *)0xa503d6;
        FUN_00989690();
      }
      ppuStack_15c = (undefined8 **)param_1;
      puStack_164 = (uint *)(in_ECX + 0x2a);
      ppiStack_168 = (int **)in_ECX[0x3f];
      pppuStack_16c = (undefined ***)0xa503ee;
      pfStack_160 = (float *)pbVar2;
      puStack_118 = (undefined1 *)FUN_009be510();
      ppuStack_15c = (undefined8 **)local_120;
      pfStack_160 = (float *)0xa503fe;
      puVar14 = (undefined8 *)(**(code **)(*local_120 + 0xc))();
      puVar14[2] = *puVar14;
      puVar14[3] = puVar14[1];
      if (0xf < *(uint *)(param_2 + 0x14)) {
        param_2 = *(char **)param_2;
      }
      local_12c = (int *)0xf;
      piStack_130 = (int *)0x0;
      local_140 = local_140 & 0xffffff00;
      pfStack_160 = (float *)param_2;
      do {
        cVar4 = *(char *)pfStack_160;
        pfStack_160 = (float *)((int)pfStack_160 + 1);
      } while (cVar4 != '\0');
      pfStack_160 = (float *)((int)pfStack_160 - (int)(param_2 + 1));
      ppiStack_168 = (int **)0xa5044c;
      puStack_164 = (uint *)param_2;
      FUN_00409350();
      pfStack_160 = (float *)&local_140;
      puStack_164 = auStack_f8;
      puStack_10 = (undefined1 *)0x3;
      ppiStack_168 = (int **)0xa50466;
      FUN_00a4c320();
      puStack_10._0_1_ = 5;
      if (0xf < local_12c) {
        pfStack_160 = (float *)local_140;
                    /* WARNING: Subroutine does not return */
        puStack_164 = (uint *)&UNK_00a50482;
        FUN_00aae91b();
      }
      local_12c = (int *)0xf;
      piStack_130 = (int *)0x0;
      local_140 = local_140 & 0xffffff00;
      uStack_148 = 0;
      if (uStack_144 != 0) {
        do {
          local_14c = puVar14;
          pfStack_160 = (float *)0xd0;
          puStack_164 = (uint *)0xa504ba;
          iVar10 = FUN_00aae9af();
          puStack_10._0_1_ = 6;
          if (iVar10 == 0) {
            uVar8 = 0;
          }
          else {
            puStack_118 = (undefined1 *)&pcStack_178;
            puStack_164 = (uint *)0xf;
            ppiStack_168 = (int **)0x0;
            pcStack_178 = (char *)((uint)pcStack_178 & 0xffffff00);
            FUN_00408ed0(auStack_f8,0,0xffffffff);
            if (local_11c == (undefined1 *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(*(int *)(in_ECX[0x3f] + 4) + -4 + (int)local_11c * 4);
            }
            uVar8 = FUN_00a42ac0(iVar10,local_14c,in_ECX[0x11],uVar8,local_11c);
          }
          puStack_10._0_1_ = 5;
          puVar15 = (undefined1 *)in_ECX[0x3a];
          if (&stack0xfffffeb0 < puVar15) {
            puVar5 = (undefined1 *)in_ECX[0x39];
            if (&stack0xfffffeb0 < puVar5) goto LAB_00a5058f;
            if (puVar15 == (undefined1 *)in_ECX[0x3b]) {
              pfStack_160 = (float *)0xa50576;
              FUN_00a513f0();
            }
            if ((undefined4 *)in_ECX[0x3a] != (undefined4 *)0x0) {
              *(undefined4 *)in_ECX[0x3a] =
                   *(undefined4 *)(in_ECX[0x39] + ((int)&stack0xfffffeb0 - (int)puVar5 >> 2) * 4);
            }
          }
          else {
LAB_00a5058f:
            if (puVar15 == (undefined1 *)in_ECX[0x3b]) {
              pfStack_160 = (float *)0xa505a2;
              FUN_00a513f0();
            }
            if ((undefined4 *)in_ECX[0x3a] != (undefined4 *)0x0) {
              *(undefined4 *)in_ECX[0x3a] = uVar8;
            }
          }
          in_ECX[0x3a] = in_ECX[0x3a] + 4;
          local_14c = local_14c + 9;
          uStack_148 = uStack_148 + 1;
          puVar14 = local_14c;
        } while (uStack_148 < uStack_144);
      }
      puStack_10 = (undefined1 *)0xffffffff;
      if (0xf < uStack_e4) {
        pfStack_160 = (float *)auStack_f8[0];
                    /* WARNING: Subroutine does not return */
        puStack_164 = (uint *)&UNK_00a505ed;
        FUN_00aae91b();
      }
    }
    puStack_10 = (undefined1 *)0xffffffff;
    pfStack_160 = (float *)0xa507ed;
    (**(code **)(*in_ECX + 0x40))();
    pfStack_160 = (float *)0xa507f6;
    (**(code **)(*in_ECX + 0x44))();
    if (piStack_130 != (int *)0x0) {
      pppuStack_16c = (undefined ***)piStack_130;
      piStack_170 = (int *)0xa50806;
      (**(code **)(*piStack_130 + 8))();
    }
    if (local_12c != (int *)0x0) {
      pppuStack_16c = (undefined ***)local_12c;
      piStack_170 = (int *)0xa50816;
      (**(code **)(*local_12c + 8))();
    }
  }
  ExceptionList = pvStack_24;
  return;
}

