// FUN_0090cdc0 @ 0090cdc0 body=[[0090cdc0, 0090ce5c] [0090ce60, 0090d052] [0090d05b, 0090d270] [0090d274, 0090d344] [0090d348, 0090d43f] [0090d443, 0090d473] [0090d477, 0090d49f] [0090d4a3, 0090d4cd] [0090d4d1, 0090d591] [0090d595, 0090d5f4] [0090d5f8, 0090d615] [0090d619, 0090d64c] [0090d650, 0090d65d] [0090d661, 0090d67d] [0090d681, 0090d697]]


/* WARNING: Removing unreachable block (ram,0x0090d0db) */

void FUN_0090cdc0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  void *_Dst;
  int **ppiVar3;
  int **ppiVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  byte *******pppppppbVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int unaff_ESI;
  int *piVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_240 [4];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  int *piStack_234;
  undefined4 uStack_230;
  int *piStack_20c;
  int local_208;
  int local_204;
  undefined1 *puStack_200;
  uint uStack_1fc;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  byte ******appppppbStack_1e0 [4];
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 *puStack_1c4;
  undefined1 *local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint auStack_194 [4];
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **ppuStack_a8;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5880e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  puVar1 = (uint *)(param_1 + 0xc);
  _Dst = (void *)*puVar1;
  if (_Dst != *(void **)(param_1 + 0x10)) {
    uStack_230 = 0x90ce13;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  FUN_006a5a20();
  local_204 = DAT_0131ac90;
  FUN_0068f390();
  local_1c0 = (undefined1 *)0x0;
  local_1bc = 0;
  local_1b8 = 0;
  local_c._1_3_ = 0;
  local_208 = 1;
  while( true ) {
    local_c._0_1_ = 0;
    piVar9 = (int *)param_2[7];
    if ((char)piVar9[0x44] == '\0') {
      iVar6 = (**(code **)(*piVar9 + 4))();
      piVar9[2] = iVar6;
      if (iVar6 == 0) {
        piVar9[3] = 0x13;
      }
      *(undefined1 *)(piVar9 + 0x44) = 1;
    }
    piVar9 = piVar9 + 3;
    piVar12 = aiStack_120;
    for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    if (aiStack_120[0] == 0x13) break;
    FUN_009a1440();
    pcVar7 = (char *)(param_2 + 9);
    uStack_1cc = 0xf;
    uStack_1d0 = 0;
    appppppbStack_1e0[0] = (byte ******)((uint)appppppbStack_1e0[0] & 0xffffff00);
    do {
      cVar5 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 != '\0');
    FUN_00409350();
    local_c._0_1_ = 1;
    pppppppbVar8 = (byte *******)appppppbStack_1e0[0];
    if (uStack_1cc < 0x10) {
      pppppppbVar8 = appppppbStack_1e0;
    }
    pcVar7 = "peace_order";
    do {
      bVar2 = *(byte *)pppppppbVar8;
      bVar14 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_0090cf20:
        iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_0090cf25;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)pppppppbVar8 + 1);
      bVar14 = bVar2 < (byte)pcVar7[1];
      if (bVar2 != pcVar7[1]) goto LAB_0090cf20;
      pppppppbVar8 = (byte *******)((int)pppppppbVar8 + 2);
      pcVar7 = pcVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_0090cf25:
    if (iVar6 == 0) {
      FUN_0045be80();
    }
    else {
      local_204 = FUN_00aae9af();
      iVar6 = local_208;
      local_c._0_1_ = 2;
      if (local_204 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        puStack_200 = auStack_240;
        uStack_230 = 0;
        auStack_240[0] = 0;
        FUN_00408ed0(appppppbStack_1e0,0,0xffffffff);
        piVar9 = (int *)FUN_00909d60();
        local_208 = iVar6 + 1;
      }
      local_c._0_1_ = 1;
      piStack_20c = piVar9;
      (**(code **)(*piVar9 + 0xc))();
      FUN_006a5a20();
      ppiVar3 = *(int ***)(param_1 + 0x10);
      if (&piStack_20c < ppiVar3) {
        ppiVar4 = (int **)*puVar1;
        if (&piStack_20c < ppiVar4) goto LAB_0090cff5;
        if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) =
               *(undefined4 *)(*puVar1 + ((int)&piStack_20c - (int)ppiVar4 >> 2) * 4);
        }
      }
      else {
LAB_0090cff5:
        if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) = piVar9;
        }
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
      for (piVar12 = (int *)piVar9[0x48]; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
        if (*piVar12 == 0x8da) {
          *(int **)(param_1 + 0x1c) = piVar9;
          break;
        }
      }
    }
    local_c._0_1_ = 0;
    if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_200 = (undefined1 *)((local_1bc - (int)local_1c0) / 0x1c);
  if ((int)puStack_200 < 1) {
    uStack_1e8 = 0xf;
    uStack_1ec = 0;
    uStack_1fc = uStack_1fc & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 5;
    uStack_230 = 0x90d2d9;
    uStack_230 = FUN_004015b0();
    local_c._0_1_ = 6;
    piStack_234 = (int *)0x90d2f4;
    FUN_00987d50();
    FUN_00401280();
    local_c._0_1_ = 5;
    FUN_00987ac0();
    ppuStack_a8 = std::ios_base::vftable;
    FUN_00aad52d();
    local_c._0_1_ = 0;
    if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_204 = 0;
    if (0 < (int)(*(int *)(param_1 + 0x10) - *puVar1 & 0xfffffffc)) {
      do {
        piStack_20c = *(int **)(*puVar1 + local_204 * 4);
        bVar14 = false;
        local_208 = 0;
        if ((int)puStack_200 < 1) {
LAB_0090d153:
          cVar5 = (**(code **)(*piStack_20c + 0x1c))();
          if (cVar5 != '\0') {
            uStack_1e8 = 0xf;
            uStack_1ec = 0;
            uStack_1fc = uStack_1fc & 0xffffff00;
            FUN_00409350();
            local_c._0_1_ = 3;
            uStack_230 = 0x90d1a9;
            uVar11 = FUN_004015b0();
            local_c = CONCAT31(local_c._1_3_,4);
            piStack_234 = (int *)0x90d1c4;
            uStack_230 = uVar11;
            FUN_00987d50();
            piStack_234 = (int *)(unaff_ESI + 0x14);
            if (0xf < *(uint *)(unaff_ESI + 0x28)) {
              piStack_234 = (int *)*piStack_234;
            }
            uStack_23c = 0x90d1da;
            uStack_238 = uVar11;
            piVar9 = (int *)FUN_00418e30();
            uStack_238 = 0x90d1e5;
            piStack_234 = piVar9;
            FUN_00408be0();
            bVar14 = false;
            if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
               (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 + (int)piVar9) + 0x34))
                                  (), iVar6 == -1)) {
              bVar14 = true;
            }
            if (bVar14) {
              FUN_00401120();
            }
            local_c._0_1_ = 3;
            FUN_00987ac0();
            ppuStack_a8 = std::ios_base::vftable;
            FUN_00aad52d();
            local_c._0_1_ = 0;
            if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
        }
        else {
          puVar13 = (uint *)(local_1c0 + 0x10);
          do {
            uVar10 = *puVar13;
            iVar6 = FUN_00414bd0();
            bVar15 = false;
            if (iVar6 == 0) {
              if (uVar10 < (uint)piStack_20c[9]) {
                uVar10 = 0xffffffff;
              }
              else {
                uVar10 = (uint)(uVar10 != piStack_20c[9]);
              }
              bVar15 = uVar10 == 0;
            }
            if (bVar15) {
              piStack_20c[4] = local_208;
              bVar14 = true;
            }
            local_208 = local_208 + 1;
            puVar13 = puVar13 + 7;
          } while (local_208 < (int)puStack_200);
          if (!bVar14) goto LAB_0090d153;
        }
        local_204 = local_204 + 1;
      } while (local_204 < (int)(*(int *)(param_1 + 0x10) - *puVar1) >> 2);
    }
  }
  iVar6 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x10) - *puVar1 & 0xfffffffc)) {
    do {
      uStack_1e8 = 0xf;
      uStack_1ec = 0;
      uStack_1fc = uStack_1fc & 0xffffff00;
      FUN_00409350();
      uStack_19c = 0xf;
      uStack_1a0 = 0;
      uStack_1b0 = uStack_1b0 & 0xffffff00;
      local_c._0_1_ = 8;
      uStack_230 = 0x90d3ab;
      pcVar7 = __itoa(iVar6,(char *)auStack_194,10);
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_00409350();
      local_c._0_1_ = 9;
      FUN_00988fa0();
      local_c._0_1_ = 10;
      FUN_00988f20();
      local_c._0_1_ = 0xb;
      FUN_00988f20();
      if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_160 = 0xf;
      uStack_164 = 0;
      uStack_174 = uStack_174 & 0xffffff00;
      if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_144 = 0xf;
      uStack_148 = 0;
      uStack_158 = uStack_158 & 0xffffff00;
      if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_19c = 0xf;
      uStack_1a0 = 0;
      uStack_1b0 = uStack_1b0 & 0xffffff00;
      local_c._0_1_ = 0x10;
      if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1e8 = 0xf;
      uStack_1ec = 0;
      uStack_1fc = uStack_1fc & 0xffffff00;
      uStack_180 = 0xf;
      uStack_184 = 0;
      auStack_194[0] = auStack_194[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0x11;
      uStack_1cc = 0xf;
      uStack_1d0 = 0;
      appppppbStack_1e0[0] = (byte ******)((uint)appppppbStack_1e0[0] & 0xffffff00);
      uStack_230 = 0x90d52d;
      FUN_00408ed0();
      local_c._0_1_ = 0x12;
      uStack_230 = 0x90d553;
      FUN_004015b0();
      local_c._0_1_ = 0x15;
      FUN_00418e30();
      local_c._0_1_ = 0x14;
      if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1cc = 0xf;
      uStack_1d0 = 0;
      appppppbStack_1e0[0] = (byte ******)((uint)appppppbStack_1e0[0] & 0xffffff00);
      FUN_00401280();
      local_c._0_1_ = 0x11;
      FUN_00987ac0();
      ppuStack_a8 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(*(int *)(param_1 + 0x10) - *puVar1) >> 2);
  }
  (**(code **)*param_2)();
  if (puStack_1c4 == (undefined1 *)0x0) {
    ExceptionList = pvStack_18;
    return;
  }
  while( true ) {
    if (puStack_1c4 == local_1c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < *(uint *)(puStack_1c4 + 0x14)) break;
    *(undefined4 *)(puStack_1c4 + 0x14) = 0xf;
    *(undefined4 *)(puStack_1c4 + 0x10) = 0;
    *puStack_1c4 = 0;
    puStack_1c4 = puStack_1c4 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

