// FUN_004c45f0 @ 004c45f0 body=[[004c45f0, 004c46da] [004c46e0, 004c4968] [004c496c, 004c49e4] [004c49e8, 004c4c96] [004c4c9a, 004c4d15] [004c4d19, 004c4db9] [004c4dc0, 004c4f19] [004c4f20, 004c523f] [004c5243, 004c544b] [004c5451, 004c5469] [004c546f, 004c5493] [004c5497, 004c54f1]]


/* WARNING: Removing unreachable block (ram,0x004c50e4) */
/* WARNING: Removing unreachable block (ram,0x004c50e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c45f0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint *local_17c;
  int local_178;
  int local_16c;
  int aiStack_164 [4];
  int iStack_154;
  uint *local_150;
  int local_14c;
  uint *puStack_148;
  uint *puStack_144;
  undefined4 uStack_140;
  int iStack_138;
  int iStack_134;
  int local_130;
  int local_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  int local_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  int *piStack_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  iVar5 = DAT_0125870c;
  puStack_10 = &LAB_00b5b00f;
  local_14 = ExceptionList;
  if ((_DAT_013f29b0 & 1) == 0) {
    _DAT_013f29b0 = _DAT_013f29b0 | 1;
    DAT_013f2970 = 1;
    DAT_013f2974 = 0;
    DAT_013f2978 = 0xffffffff;
    DAT_013f297c = 0;
    _DAT_013f2980 = 0;
    _DAT_013f2984 = 1;
    _DAT_013f2988 = 0;
    _DAT_013f298c = 0xffffffff;
    _DAT_013f2990 = 1;
    _DAT_013f2994 = 0xffffffff;
    _DAT_013f2998 = 0xffffffff;
    _DAT_013f299c = 0xffffffff;
    _DAT_013f29a0 = 1;
    _DAT_013f29a4 = 1;
    _DAT_013f29a8 = 0xffffffff;
    _DAT_013f29ac = 1;
  }
  aiStack_164[3] = *(int *)(DAT_0125870c + 0x2abc);
  bVar2 = false;
  local_130 = 0;
  if ((*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) / 0x24 < 1) {
    return;
  }
  local_110 = aiStack_164[3] / 2;
  ExceptionList = &local_14;
LAB_004c46e3:
  local_c = 0xffffffff;
  local_124 = local_130 * 0x24;
  *(undefined4 *)(*(int *)(param_1 + 200) + 0x10 + local_124) = 0;
  puVar16 = *(uint **)(param_1 + 0x7c);
  aiStack_164[2] =
       *(int *)(*(int *)(iVar5 + 0x2aa4) + *(int *)(*(int *)(param_1 + 200) + 4 + local_124) * 4);
  local_14c = *(int *)(param_1 + 0x80);
  local_150 = puVar16;
  if (!bVar2) {
    if (*(char *)(param_1 + 0x2a) == '\0') goto LAB_004c4a20;
    iVar7 = *(int *)(iVar5 + 0x212c);
    local_17c = puVar16;
    if (*(int *)(iVar7 + 4) + -1 < (int)puVar16) {
      local_17c = (uint *)(*(int *)(iVar7 + 4) + -1);
    }
    local_178 = local_14c;
    if (local_14c < 0) {
      local_178 = 0;
    }
    iVar9 = *(int *)(iVar7 + 8) + -1;
    if (local_178 <= *(int *)(iVar7 + 8) + -1) {
      iVar9 = local_178;
    }
    if (*(int *)(*(int *)(iVar5 + 0x2aa4) +
                (uint)*(ushort *)
                       (*(int *)(iVar7 + 0x18) * iVar9 + *(int *)(iVar7 + 0xc) * (int)local_17c +
                       *(int *)(iVar7 + 0x20)) * 4) != param_1) {
      bVar2 = true;
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
      FUN_00409350("provincetemplate.cpp",0x14);
      local_c = 0;
      uVar6 = FUN_004015b0(local_fc,0x1d4,0x10004);
      local_c._0_1_ = 1;
      local_17c = *(uint **)(param_1 + 0xb4);
      uVar17 = 0;
      FUN_00987d50(uVar6,"ERROR: unit point: ",0x13,0);
      uVar6 = FUN_00455470(uVar6,puVar16,uVar17,&DAT_00ded950,uVar17,aiStack_164[2],uVar17,
                           " of province ",uVar17,uVar17,extraout_ECX," lies in ",extraout_ECX,
                           local_17c);
      uVar6 = FUN_00418e30(uVar6);
      uVar6 = FUN_00455470(uVar6);
      uVar6 = FUN_00418e30(uVar6);
      uVar6 = FUN_00455470(uVar6);
      uVar6 = FUN_00418e30(uVar6);
      uVar6 = FUN_00455470(uVar6);
      FUN_00401280(uVar6);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      local_c = 0xffffffff;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc[0]);
      }
    }
  }
  local_c = 0xffffffff;
  if ((*(char *)(param_1 + 0x2a) != '\0') && (*(char *)(aiStack_164[2] + 0x2a) == '\0')) {
    iVar7 = DAT_0125ce80;
    if (DAT_0125ce80 == 0) {
      iStack_154 = FUN_00aae9af(0x3c);
      local_c = 2;
      if (iStack_154 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004dada0();
      }
      iVar9 = DAT_0125ce80;
      local_c = 3;
      iStack_154 = 0;
      if ((iVar7 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
        FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar9);
      }
    }
    DAT_0125ce80 = iVar7;
    iVar7 = *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0x58) * 0x10 + *(int *)(param_1 + 0x330);
    local_14c = (int)*(float *)(iVar7 + 0xc);
    local_150 = (uint *)(int)*(float *)(iVar7 + 8);
  }
LAB_004c4a20:
  local_c = 0xffffffff;
  local_128 = *(int *)(aiStack_164[2] + 0x80);
  iVar7 = *(int *)(aiStack_164[2] + 0x7c);
  if (*(char *)(aiStack_164[2] + 0x2a) != '\0') {
    iVar15 = *(int *)(iVar5 + 0x212c);
    iVar9 = iVar7;
    if (*(int *)(iVar15 + 4) + -1 < iVar7) {
      iVar9 = *(int *)(iVar15 + 4) + -1;
    }
    iVar12 = local_128;
    if (local_128 < 0) {
      iVar12 = 0;
    }
    if (*(int *)(iVar15 + 8) + -1 < iVar12) {
      iVar12 = *(int *)(iVar15 + 8) + -1;
    }
    if (*(int *)(*(int *)(iVar5 + 0x2aa4) +
                (uint)*(ushort *)
                       (*(int *)(iVar15 + 0x18) * iVar12 + *(int *)(iVar15 + 0xc) * iVar9 +
                       *(int *)(iVar15 + 0x20)) * 4) != aiStack_164[2]) {
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
      FUN_00409350("provincetemplate.cpp",0x14);
      local_c = 4;
      uVar6 = FUN_004015b0(local_fc,0x1e2,0x10004);
      local_c = CONCAT31(local_c._1_3_,5);
      local_178 = local_128;
      iVar15 = *(int *)(iVar5 + 0x212c);
      iVar9 = iVar7;
      if (*(int *)(iVar15 + 4) + -1 < iVar7) {
        iVar9 = *(int *)(iVar15 + 4) + -1;
      }
      if (local_128 < 0) {
        local_178 = 0;
      }
      if (*(int *)(iVar15 + 8) + -1 < local_178) {
        local_178 = *(int *)(iVar15 + 8) + -1;
      }
      uVar17 = *(undefined4 *)
                (*(int *)(*(int *)(iVar5 + 0x2aa4) +
                         (uint)*(ushort *)
                                (*(int *)(iVar15 + 0xc) * iVar9 +
                                 *(int *)(iVar15 + 0x18) * local_178 + *(int *)(iVar15 + 0x20)) * 4)
                + 0xb4);
      FUN_00987d50(uVar6,"ERROR: unit point: ",0x13,0);
      uVar6 = FUN_00455470(uVar6,iVar7,iStack_138,&DAT_00ded950,iStack_138,iStack_138,
                           extraout_ECX_00," of province ",extraout_ECX_00,local_17c,extraout_ECX_00
                           ," lies in ",extraout_ECX_00,uVar17);
      uVar6 = FUN_00418e30(uVar6);
      uVar6 = FUN_00455470(uVar6);
      uVar6 = FUN_00418e30(uVar6);
      uVar6 = FUN_00455470(uVar6);
      uVar6 = FUN_00418e30(uVar6);
      piVar8 = (int *)FUN_00455470(uVar6);
      FUN_00408be0(piVar8);
      uVar14 = 0;
      if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
         (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
         iVar9 == -1)) {
        uVar14 = 4;
      }
      if (uVar14 != 0) {
        uVar14 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar14;
        if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
          uVar14 = uVar14 | 4;
        }
        FUN_00401120(uVar14,0);
      }
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      local_c = 0xffffffff;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc[0]);
      }
    }
  }
  iVar9 = aiStack_164[2];
  local_c = 0xffffffff;
  if ((*(char *)(aiStack_164[2] + 0x2a) != '\0') && (*(char *)(param_1 + 0x2a) == '\0')) {
    iVar7 = DAT_0125ce80;
    if (DAT_0125ce80 == 0) {
      iStack_154 = FUN_00aae9af(0x3c);
      local_c = 6;
      if (iStack_154 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004dada0();
      }
      iVar15 = DAT_0125ce80;
      local_c = 7;
      iStack_154 = 0;
      if ((iVar7 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
        FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar15);
      }
    }
    DAT_0125ce80 = iVar7;
    iVar7 = *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0x58) * 0x10 + *(int *)(iVar9 + 0x330);
    local_128 = (int)*(float *)(iVar7 + 0xc);
    iVar7 = (int)*(float *)(iVar7 + 8);
  }
  iVar9 = aiStack_164[3];
  bVar3 = true;
  iStack_120 = 0;
  iStack_11c = 0;
  uStack_118 = 0;
  uVar14 = (int)local_150 - iVar7 >> 0x1f;
  local_c = 8;
  if ((local_110 < (int)(((int)local_150 - iVar7 ^ uVar14) - uVar14)) && (iVar7 < (int)local_150)) {
    iVar7 = iVar7 + aiStack_164[3];
  }
  FUN_007dbdd0(local_14c,iVar7,&iStack_120);
  iVar7 = iStack_11c - iStack_120 >> 3;
  local_17c = (uint *)0x0;
  if (0 < iVar7) {
    do {
      iVar12 = *(int *)(iStack_120 + (int)local_17c * 8);
      iVar15 = *(int *)(iStack_120 + 4 + (int)local_17c * 8);
      if (iVar9 <= iVar12) {
        iVar12 = iVar12 - iVar9;
      }
      iVar9 = *(int *)(iVar5 + 0x2130);
      if (iVar12 < *(int *)(iVar9 + 4)) {
        if (iVar15 < *(int *)(iVar9 + 8)) {
          uVar14 = (uint)*(byte *)(*(int *)(iVar9 + 0xc) * iVar12 + *(int *)(iVar9 + 0x18) * iVar15
                                  + *(int *)(iVar9 + 0x20));
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 0;
      }
      iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + 0x2268 + uVar14 * 4) + 0xc) + 0x8c);
      iVar13 = *(int *)(iVar5 + 0x2134);
      if ((*(byte *)(*(int *)(iVar13 + 0xc) * iVar12 + *(int *)(iVar13 + 0x18) * iVar15 +
                    *(int *)(iVar13 + 0x20)) < 0xfe) &&
         (*(int *)(*(int *)(param_1 + 200) + local_124) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 200) + local_124) = 2;
      }
      piVar8 = (int *)(*(int *)(param_1 + 200) + 0x10 + local_124);
      *piVar8 = *piVar8 + iVar9;
      if (bVar3) {
        iVar9 = *(int *)(iVar5 + 0x212c);
        iVar13 = *(int *)(iVar9 + 4) + -1;
        if (iVar12 <= *(int *)(iVar9 + 4) + -1) {
          iVar13 = iVar12;
        }
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        if (*(int *)(iVar9 + 8) + -1 < iVar15) {
          iVar15 = *(int *)(iVar9 + 8) + -1;
        }
        iVar9 = *(int *)(*(int *)(iVar5 + 0x2aa4) +
                        (uint)*(ushort *)
                               (*(int *)(iVar9 + 0xc) * iVar13 + *(int *)(iVar9 + 0x18) * iVar15 +
                               *(int *)(iVar9 + 0x20)) * 4);
        if ((iVar9 != aiStack_164[2]) && (iVar9 != param_1)) {
          bVar3 = false;
        }
      }
      local_17c = (uint *)((int)local_17c + 1);
      iVar9 = aiStack_164[3];
    } while ((int)local_17c < iVar7);
  }
  iStack_138 = 0;
  iStack_134 = 0;
  puStack_148 = (uint *)0x0;
  puStack_144 = (uint *)0x0;
  uStack_140 = 0;
  local_c = CONCAT31(local_c._1_3_,9);
  piStack_e0 = *(int **)(param_1 + 0xa4);
LAB_004c4f23:
  if ((piStack_e0 < *(int **)(param_1 + 0xa4)) || (*(int **)(param_1 + 0xa8) <= piStack_e0))
  goto LAB_004c5344;
  piVar8 = piStack_e0 + 1;
  aiStack_164[0] = *piStack_e0 + *(int *)(param_1 + 0x34);
  piStack_e0 = piStack_e0 + 2;
  aiStack_164[1] = *piVar8 + *(int *)(param_1 + 0x38);
  local_17c = &DAT_013f2970;
LAB_004c4f70:
  iVar7 = local_17c[1] + aiStack_164[1];
  iVar9 = *local_17c + aiStack_164[0];
  if (iVar9 < 0) {
    iVar9 = iVar9 + aiStack_164[3];
  }
  if (-1 < iVar7) {
    if (aiStack_164[3] <= iVar9) {
      iVar9 = iVar9 - aiStack_164[3];
    }
    if (iVar7 < *(int *)(iVar5 + 0x2ac0)) {
      iVar15 = *(int *)(iVar5 + 0x212c);
      if (*(int *)(iVar15 + 4) + -1 < iVar9) {
        iVar9 = *(int *)(iVar15 + 4) + -1;
      }
      if (*(int *)(iVar15 + 8) + -1 < iVar7) {
        iVar7 = *(int *)(iVar15 + 8) + -1;
      }
      if (*(int *)(*(int *)(iVar5 + 0x2aa4) +
                  (uint)*(ushort *)
                         (*(int *)(iVar15 + 0x18) * iVar7 + *(int *)(iVar15 + 0xc) * iVar9 +
                         *(int *)(iVar15 + 0x20)) * 4) == aiStack_164[2]) {
        iStack_154 = (int)puStack_144 - (int)puStack_148 >> 4;
        bVar4 = false;
        local_178 = 0;
        if (iStack_154 < 1) goto LAB_004c5201;
        local_16c = 0;
        puVar16 = puStack_148;
        do {
          piVar8 = (int *)*puVar16;
          iVar7 = (int)(puVar16[1] - (int)piVar8) >> 3;
          local_17c = (uint *)0x0;
          piVar10 = piVar8;
          if (0 < iVar7) {
            do {
              uVar14 = *piVar10 - aiStack_164[0] >> 0x1f;
              if (((int)((*piVar10 - aiStack_164[0] ^ uVar14) - uVar14) < 2) &&
                 (uVar14 = piVar10[1] - aiStack_164[1] >> 0x1f,
                 (int)((piVar10[1] - aiStack_164[1] ^ uVar14) - uVar14) < 2)) {
                if (bVar4) {
                  piVar10 = (int *)((int)puStack_148 + local_16c);
                  if ((piVar10[1] - *piVar10 & 0xfffffff8U) == 0) {
                    FUN_005daad0(piVar10,puVar16);
                  }
                  else {
                    FUN_00630060(piVar10[1],piVar8,puVar16[1],iStack_154);
                  }
                  local_17c = (uint *)*puVar16;
                  if (local_17c != (uint *)puVar16[1]) {
                    puVar16[1] = (uint)local_17c;
                  }
                }
                else {
                  local_16c = local_178 << 4;
                  piVar10 = (int *)puVar16[1];
                  bVar4 = true;
                  if ((aiStack_164 < piVar10) && (piVar8 <= aiStack_164)) {
                    if (piVar10 == (int *)puVar16[2]) {
                      uVar14 = (int)piVar10 - (int)piVar8 >> 3;
                      if (0x1ffffffe < uVar14) goto LAB_004c54e8;
                      uVar14 = uVar14 + 1;
                      uVar11 = (int)puVar16[2] - (int)piVar8 >> 3;
                      if (uVar11 < uVar14) {
                        if (0x1fffffff - (uVar11 >> 1) < uVar11) {
                          uVar11 = 0;
                        }
                        else {
                          uVar11 = uVar11 + (uVar11 >> 1);
                        }
                        if (uVar11 < uVar14) {
                          uVar11 = uVar14;
                        }
                        FUN_004237e0(uVar11);
                      }
                    }
                    piVar10 = (int *)(*puVar16 + ((int)aiStack_164 - (int)piVar8 >> 3) * 8);
                    piVar8 = (int *)puVar16[1];
                    if (piVar8 != (int *)0x0) {
                      *piVar8 = *piVar10;
                      iVar7 = piVar10[1];
LAB_004c51d9:
                      piVar8[1] = iVar7;
                    }
                  }
                  else {
                    if (piVar10 == (int *)puVar16[2]) {
                      uVar14 = (int)piVar10 - (int)piVar8 >> 3;
                      if (0x1ffffffe < uVar14) goto LAB_004c54e8;
                      uVar14 = uVar14 + 1;
                      uVar11 = (int)puVar16[2] - (int)piVar8 >> 3;
                      if (uVar11 < uVar14) {
                        if (0x1fffffff - (uVar11 >> 1) < uVar11) {
                          uVar11 = 0;
                        }
                        else {
                          uVar11 = uVar11 + (uVar11 >> 1);
                        }
                        if (uVar11 < uVar14) {
                          uVar11 = uVar14;
                        }
                        FUN_004237e0(uVar11);
                      }
                    }
                    piVar8 = (int *)puVar16[1];
                    if (piVar8 != (int *)0x0) {
                      *piVar8 = aiStack_164[0];
                      iVar7 = aiStack_164[1];
                      goto LAB_004c51d9;
                    }
                  }
                  puVar16[1] = puVar16[1] + 8;
                }
                break;
              }
              local_17c = (uint *)((int)local_17c + 1);
              piVar10 = piVar10 + 2;
            } while ((int)local_17c < iVar7);
          }
          local_178 = local_178 + 1;
          puVar16 = puVar16 + 4;
        } while (local_178 < iStack_154);
        if (!bVar4) {
LAB_004c5201:
          iStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          local_c._0_1_ = 10;
          FUN_004c9a20();
          local_c = CONCAT31(local_c._1_3_,9);
          if (iStack_10c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iStack_10c);
          }
          puVar16 = (uint *)((((int)puStack_144 - (int)puStack_148 & 0xfffffff0U) - 0x10) +
                            (int)puStack_148);
          piVar8 = (int *)puVar16[1];
          iStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          if (aiStack_164 < piVar8) {
            piVar10 = (int *)*puVar16;
            if (aiStack_164 < piVar10) goto LAB_004c52e5;
            if (piVar8 == (int *)puVar16[2]) {
              uVar14 = (int)piVar8 - (int)piVar10 >> 3;
              if (0x1ffffffe < uVar14) goto LAB_004c54e8;
              uVar14 = uVar14 + 1;
              uVar11 = (int)puVar16[2] - (int)piVar10 >> 3;
              if (uVar11 < uVar14) {
                if (0x1fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar14) {
                  uVar11 = uVar14;
                }
                FUN_004237e0(uVar11);
              }
            }
            piVar8 = (int *)puVar16[1];
            piVar10 = (int *)(*puVar16 + ((int)aiStack_164 - (int)piVar10 >> 3) * 8);
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar10;
              iVar7 = piVar10[1];
              goto LAB_004c4f11;
            }
          }
          else {
LAB_004c52e5:
            if (piVar8 == (int *)puVar16[2]) {
              uVar14 = (int)((int)piVar8 - *puVar16) >> 3;
              if (0x1ffffffe < uVar14) {
LAB_004c54e8:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar14 = uVar14 + 1;
              uVar11 = (int)((int)puVar16[2] - *puVar16) >> 3;
              if (uVar11 < uVar14) {
                if (0x1fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar14) {
                  uVar11 = uVar14;
                }
                FUN_004237e0(uVar11);
              }
            }
            piVar8 = (int *)puVar16[1];
            if (piVar8 != (int *)0x0) {
              *piVar8 = aiStack_164[0];
              iVar7 = aiStack_164[1];
LAB_004c4f11:
              piVar8[1] = iVar7;
            }
          }
          puVar16[1] = puVar16[1] + 8;
        }
        goto LAB_004c4f23;
      }
    }
  }
  local_17c = local_17c + 2;
  if (0x13f29af < (int)local_17c) goto LAB_004c4f23;
  goto LAB_004c4f70;
LAB_004c5344:
  iVar7 = 0;
  iVar9 = (int)puStack_144 - (int)puStack_148 >> 4;
  if (iVar9 != 0) {
    iVar15 = 0;
    local_16c = 0;
    puVar16 = puStack_148;
    if (0 < iVar9) {
      do {
        iVar12 = (int)(puVar16[1] - *puVar16) >> 3;
        if (local_16c < iVar12) {
          iVar15 = iVar7;
          local_16c = iVar12;
        }
        iVar7 = iVar7 + 1;
        local_17c = puVar16 + 4;
        puVar16 = local_17c;
      } while (iVar7 < iVar9);
    }
    piVar8 = (int *)puStack_148[iVar15 * 4];
    iVar9 = (int)((puStack_148 + iVar15 * 4)[1] - (int)piVar8) >> 3;
    iVar7 = iVar9;
    if (0 < iVar9) {
      do {
        iStack_138 = iStack_138 + *piVar8;
        iStack_134 = iStack_134 + piVar8[1];
        piVar8 = piVar8 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar9 != 0) goto LAB_004c53d1;
  }
  iStack_138 = -1;
  iStack_134 = -1;
  iVar9 = 1;
LAB_004c53d1:
  piVar8 = (int *)(*(int *)(param_1 + 200) + 0x1c + local_124);
  *piVar8 = iStack_138 / iVar9;
  piVar8[1] = iStack_134 / iVar9;
  if (bVar3) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 200) + 0x14 + local_124);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
  }
  else {
    piVar8 = (int *)(*(int *)(param_1 + 200) + 0x14 + local_124);
    *piVar8 = iStack_138 / iVar9;
    piVar8[1] = iStack_134 / iVar9;
  }
  puVar16 = puStack_148;
  if (puStack_148 != (uint *)0x0) {
    while( true ) {
      if (puVar16 == puStack_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_148);
      }
      if (*puVar16 != 0) break;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16 = puVar16 + 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar16);
  }
  local_c = 0xffffffff;
  puStack_148 = (uint *)0x0;
  puStack_144 = (uint *)0x0;
  uStack_140 = 0;
  if (iStack_120 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_120);
  }
  iStack_120 = 0;
  iStack_11c = 0;
  uStack_118 = 0;
  local_130 = local_130 + 1;
  if ((*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) / 0x24 <= local_130) {
    ExceptionList = local_14;
    return;
  }
  goto LAB_004c46e3;
}

