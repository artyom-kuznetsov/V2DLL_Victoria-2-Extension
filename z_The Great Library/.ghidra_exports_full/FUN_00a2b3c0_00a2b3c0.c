// FUN_00a2b3c0 @ 00a2b3c0 body=[[00a2b3c0, 00a2b573] [00a2b580, 00a2b5cc] [00a2b5d0, 00a2b749] [00a2b750, 00a2b83c] [00a2b840, 00a2ba83] [00a2ba90, 00a2bc8c] [00a2bc90, 00a2be13] [00a2be17, 00a2be53] [00a2be57, 00a2c13d] [00a2c141, 00a2c186] [00a2c18a, 00a2c318] [00a2c31c, 00a2c33e] [00a2c342, 00a2c361] [00a2c365, 00a2c3f1]]


void FUN_00a2b3c0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  char *pcVar18;
  int *******pppppppiVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  char *pcVar23;
  undefined4 *puVar24;
  undefined4 **_Dst;
  undefined4 *puVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  undefined **ppuStack_248;
  int iVar31;
  int iVar32;
  undefined4 *puStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined **ppuStack_220;
  undefined **ppuStack_21c;
  undefined *puStack_208;
  int ******ppppppiStack_204;
  int *piStack_200;
  undefined **ppuStack_1fc;
  int iStack_1f8;
  undefined **ppuStack_1f4;
  undefined *puStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  int *piStack_1e4;
  int *piStack_1e0;
  uint uStack_1dc;
  int *piStack_1d8;
  uint uStack_1d4;
  int iStack_1d0;
  undefined4 *puStack_1cc;
  undefined **ppuStack_1c8;
  int *piStack_1c4;
  int iStack_1c0;
  undefined4 *puStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  int iStack_1a4;
  uint local_1a0 [4];
  undefined4 *puStack_190;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint auStack_178 [2];
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  undefined **ppuStack_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 uStack_12c;
  uint uStack_118;
  undefined **appuStack_c8 [21];
  undefined4 uStack_74;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b63514;
  local_14 = ExceptionList;
  iVar20 = *(int *)(param_1 + 0xd8);
  if ((iVar20 != 0) && (local_1a0[0] = 0, ExceptionList = &local_14, *(int *)(iVar20 + 0x84) != 0))
  {
    do {
      uVar12 = local_1a0[0];
      iVar20 = *(int *)(*(int *)(*(int *)(iVar20 + 0x80) + local_1a0[0] * 4) + 0x1c);
      if (*(int *)(iVar20 + 4) != 0) {
        ppuStack_21c = (undefined **)0xa2b429;
        piVar9 = (int *)(**(code **)(**(int **)(iVar20 + 4) + 0x10))();
        piStack_1e0 = piVar9;
        if (((piVar9 != (int *)0x0) && (piVar9[6] != 0)) && (piVar9[7] != 0)) {
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x0;
          uStack_224 = 0xa2b458;
          iStack_16c = FUN_00add410();
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x1;
          uStack_224 = 0xa2b46a;
          iStack_158 = FUN_00add410();
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x3;
          uStack_224 = 0xa2b47c;
          iStack_170 = FUN_00add410();
          ppuStack_21c = (undefined **)0x1;
          ppuStack_220 = (undefined **)0x3;
          uStack_224 = 0xa2b48e;
          iStack_168 = FUN_00add410();
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x2;
          uStack_224 = 0xa2b4a0;
          uStack_164 = FUN_00add410();
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x5;
          uStack_224 = 0xa2b4b2;
          local_1a0[1] = FUN_00add410();
          ppuStack_21c = (undefined **)0x0;
          ppuStack_220 = (undefined **)0x3;
          uStack_224 = 0xa2b4c4;
          iStack_1a4 = FUN_00add2c0();
          uStack_1d4 = 0;
          if (piVar9[1] != 0) {
            do {
              piVar9 = *(int **)(*piStack_1e0 + uStack_1d4 * 4);
              ppuStack_21c = (undefined **)0xa0;
              ppuStack_220 = (undefined **)0xa2b4f5;
              piStack_1d8 = piVar9;
              ppuVar10 = (undefined **)FUN_00aae9af();
              ppuStack_1f4 = ppuVar10;
              if (ppuVar10 == (undefined **)0x0) {
                ppuVar10 = (undefined **)0x0;
              }
              else {
                uVar1 = *(undefined1 *)(param_1 + 0x160);
                *ppuVar10 = (undefined *)0x0;
                ppuVar10[6] = (undefined *)0x0;
                ppuVar10[7] = (undefined *)0x0;
                ppuVar10[8] = (undefined *)0x0;
                uStack_c = 1;
                ppuVar10[10] = (undefined *)0x0;
                ppuStack_21c = (undefined **)0x8;
                ppuVar10[0x10] = (undefined *)0xf;
                ppuVar10[0xf] = (undefined *)0x0;
                ppuStack_220 = (undefined **)0xe3f988;
                *(undefined1 *)(ppuVar10 + 0xb) = 0;
                uStack_224 = 0xa2b54d;
                FUN_00409350();
                ppuVar10[0x20] = (undefined *)0x0;
                ppuVar10[0x21] = (undefined *)0x0;
                ppuVar10[0x22] = (undefined *)0x0;
                *(undefined1 *)(ppuVar10 + 0x27) = uVar1;
                ppuVar11 = ppuVar10 + 0x23;
                iVar20 = 4;
                do {
                  ppuVar11[-0x21] = (undefined *)0x0;
                  *ppuVar11 = (undefined *)0x0;
                  ppuVar11 = ppuVar11 + 1;
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
              }
              uStack_c = 0xffffffff;
              piVar3 = (int *)piVar9[1];
              ppuVar11 = ppuVar10 + 6;
              ppuStack_220 = (undefined **)0xa2b5bd;
              ppuStack_21c = (undefined **)piVar3;
              piStack_200 = piVar3;
              ppuStack_1fc = ppuVar10;
              ppuStack_1c8 = ppuVar10;
              FUN_004bf300();
              piStack_1e4 = (int *)0x0;
              if (piVar3 != (int *)0x0) {
                do {
                  pppppppiVar19 = *(int ********)(*piVar9 + (int)piStack_1e4 * 4);
                  pppppppiVar4 = (int *******)ppuVar10[7];
                  ppppppiStack_204 = (int ******)pppppppiVar19;
                  if (&ppppppiStack_204 < pppppppiVar4) {
                    pppppppiVar5 = (int *******)*ppuVar11;
                    if (&ppppppiStack_204 < pppppppiVar5) goto LAB_00a2b64c;
                    if (pppppppiVar4 == (int *******)ppuVar10[8]) {
                      uVar12 = (int)pppppppiVar4 - (int)pppppppiVar5 >> 2;
                      if (0x3ffffffe < uVar12) goto LAB_00a2c3e8;
                      uVar12 = uVar12 + 1;
                      uVar21 = (int)ppuVar10[8] - (int)pppppppiVar5 >> 2;
                      if (uVar21 < uVar12) {
                        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
                          ppuStack_21c = (undefined **)0x0;
                        }
                        else {
                          ppuStack_21c = (undefined **)(uVar21 + (uVar21 >> 1));
                        }
                        if (ppuStack_21c < uVar12) {
                          ppuStack_21c = (undefined **)uVar12;
                        }
                        ppuStack_220 = (undefined **)0xa2b63a;
                        FUN_004bf300();
                      }
                    }
                    if ((undefined4 *)ppuVar10[7] != (undefined4 *)0x0) {
                      *(undefined4 *)ppuVar10[7] =
                           *(undefined4 *)
                            (*ppuVar11 + ((int)&ppppppiStack_204 - (int)pppppppiVar5 >> 2) * 4);
                    }
                  }
                  else {
LAB_00a2b64c:
                    if (pppppppiVar4 == (int *******)ppuVar10[8]) {
                      uVar12 = (int)pppppppiVar4 - (int)*ppuVar11 >> 2;
                      if (0x3ffffffe < uVar12) goto LAB_00a2c3e8;
                      uVar12 = uVar12 + 1;
                      uVar21 = (int)ppuVar10[8] - (int)*ppuVar11 >> 2;
                      if (uVar21 < uVar12) {
                        if (0x3fffffff - (uVar21 >> 1) < uVar21) {
                          ppuStack_21c = (undefined **)0x0;
                        }
                        else {
                          ppuStack_21c = (undefined **)(uVar21 + (uVar21 >> 1));
                        }
                        if (ppuStack_21c < uVar12) {
                          ppuStack_21c = (undefined **)uVar12;
                        }
                        ppuStack_220 = (undefined **)0xa2b68f;
                        FUN_004bf300();
                      }
                    }
                    if ((int *)ppuVar10[7] != (int *)0x0) {
                      *(int ********)ppuVar10[7] = pppppppiVar19;
                    }
                  }
                  ppuVar10[7] = ppuVar10[7] + 4;
                  piStack_1e4 = (int *)((int)piStack_1e4 + 1);
                  piVar9 = piStack_1d8;
                } while (piStack_1e4 < piStack_200);
              }
              uVar12 = piStack_1d8[4];
              puVar6 = (undefined *)piStack_1d8[6];
              uVar21 = piStack_1d8[7];
              piStack_200 = (int *)(uVar12 * 0xc + iStack_16c);
              ppppppiStack_204 = (int ******)(uVar12 * 0xc + iStack_158);
              iStack_1c0 = uVar12 * 0x10 + uStack_164;
              local_1a0[3] = iStack_170 + uVar12 * 8;
              iStack_1ec = 0;
              if (iStack_168 != 0) {
                iStack_1ec = iStack_168 + uVar12 * 8;
              }
              ppuStack_21c = (undefined **)
                             (-(uint)((int)((ulonglong)uVar21 * 2 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar21 * 2));
              ppuStack_220 = (undefined **)0xa2b73b;
              puStack_1f0 = puVar6;
              uStack_1dc = uVar21;
              uStack_1a8 = uVar12;
              iStack_1d0 = FUN_00aad56b();
              uVar13 = 0;
              if (uVar21 != 0) {
                do {
                  *(short *)(iStack_1d0 + uVar13 * 2) =
                       *(short *)(piStack_1e0[4] + (piStack_1d8[5] + uVar13) * 4) - (short)uVar12;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar21);
              }
              ppuStack_21c = (undefined **)
                             (-(uint)((int)(ZEXT48(puVar6) * 4 >> 0x20) != 0) |
                             (uint)(ZEXT48(puVar6) * 4));
              ppuStack_220 = (undefined **)0xa2b78c;
              piStack_1e4 = (int *)FUN_00aad56b();
              ppuStack_21c = (undefined **)
                             (-(uint)((int)(ZEXT48(puVar6) * 0x10 >> 0x20) != 0) |
                             (uint)(ZEXT48(puVar6) * 0x10));
              ppuStack_220 = (undefined **)0xa2b7ab;
              puStack_1cc = (undefined4 *)FUN_00aad56b();
              ppuVar10 = ppuStack_1fc;
              puStack_208 = (undefined *)0x0;
              if (puVar6 != (undefined *)0x0) {
                piStack_1e8 = (int *)(local_1a0[1] + uVar12 * 4);
                puVar25 = puStack_1cc;
                piStack_1c4 = piStack_1e4;
                do {
                  uVar21 = 0;
                  puStack_1bc = puVar25;
                  do {
                    *(undefined1 *)((int)piStack_1c4 + uVar21) = 0;
                    *puStack_1bc = 0;
                    uVar21 = uVar21 + 1;
                    puStack_1bc = puStack_1bc + 1;
                  } while (uVar21 < 4);
                  local_1a0[2] = 0;
                  if ((*(char *)(param_1 + 0x161) == '\0') && (iStack_1a4 != 0)) {
                    local_1a0[2] = (uint)*(byte *)(*(int *)(iStack_1a4 + 0x1c) + 4 +
                                                  *piStack_1e8 * 8);
                  }
                  uVar21 = 0;
                  if (local_1a0[2] != 0) {
                    do {
                      puStack_190 = puVar25;
                      if (3 < uVar21) break;
                      puVar25 = (undefined4 *)
                                (*(int *)(iStack_1a4 + 0xc) +
                                (*(int *)(*(int *)(iStack_1a4 + 0x1c) +
                                         *(int *)(local_1a0[1] + (int)(puStack_208 + uVar12) * 4) *
                                         8) + (uVar21 & 0xff)) * 8);
                      ppuStack_1f4 = (undefined **)(uint)*(ushort *)((int)puVar25 + 6);
                      uVar13 = 0;
                      if (piStack_1d8[1] != 0) {
                        puVar27 = (undefined4 *)*piStack_1d8;
                        do {
                          uVar12 = uStack_1a8;
                          if ((undefined **)*puVar27 == ppuStack_1f4) goto LAB_00a2b89d;
                          uVar13 = uVar13 + 1;
                          puVar27 = puVar27 + 1;
                        } while (uVar13 < (uint)piStack_1d8[1]);
                      }
                      uVar13 = 0xffffffff;
LAB_00a2b89d:
                      *(char *)((int)piStack_1c4 + uVar21) = (char)uVar13;
                      *puStack_190 = *puVar25;
                      uVar21 = uVar21 + 1;
                      puStack_190 = puStack_190 + 1;
                      puVar25 = puStack_190;
                    } while (uVar21 < local_1a0[2]);
                  }
                  piStack_1e8 = piStack_1e8 + 1;
                  puStack_208 = puStack_208 + 1;
                  piStack_1c4 = piStack_1c4 + 1;
                  puVar25 = puStack_1bc;
                  uVar21 = uStack_1dc;
                } while (puStack_208 < puStack_1f0);
              }
              ppuStack_1fc[0x21] = puStack_1f0;
              ppuStack_1fc[0x22] = (undefined *)(uVar21 / 3);
              ppuStack_21c = (undefined **)0x0;
              puVar25 = (undefined4 *)
                        (((-(uint)(*(char *)(param_1 + 0x160) != '\0') & 0x20) + 0x30) *
                        (int)puStack_1f0);
              ppuStack_220 = ppuStack_1fc;
              uStack_224 = 1;
              uStack_228 = 0;
              iStack_22c = 8;
              puStack_230 = puVar25;
              iVar20 = (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 100) + 0x68))();
              if (iVar20 < 0) {
                MessageBoxA((HWND)0x0,"CreateVertexBuffer failed(SActorVertex)","ERROR",0);
                FatalExit(1);
              }
              piVar9 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
              iVar32 = 1;
              iVar31 = 0x65;
              iVar20 = iStack_1f8 * 2;
              iVar14 = (**(code **)(*piVar9 + 0x6c))();
              if (iVar14 < 0) {
                MessageBoxA((HWND)0x0,"indexbuffer create failed(actor indices)","ERROR",0);
                FatalExit(1);
              }
              iVar30 = 0;
              _Dst = &puStack_230;
              puStack_230 = (undefined4 *)0x0;
              piVar3 = (int *)*ppuVar10;
              iVar29 = 0;
              iVar14 = (**(code **)(*piVar3 + 0x2c))();
              if (iVar14 < 0) {
                MessageBoxA((HWND)0x0,"Failed to lock actor vertex buffer","ERROR",0);
                FatalExit(1);
              }
              iVar14 = 0;
              (**(code **)(*piRam0000000c + 0x2c))();
              FID_conflict__memcpy(_Dst,puStack_230,(iVar20 >> 1) * 2);
              if (*(char *)(param_1 + 0x160) == '\0') {
                if (piVar9 != (int *)0x0) {
                  puVar15 = (undefined8 *)(iVar31 + 0x18);
                  piVar22 = piVar3;
                  ppuVar10 = ppuStack_220;
                  ppuVar11 = ppuStack_1f4;
                  do {
                    puVar15[-3] = *(undefined8 *)((int)piVar22 + (iVar29 - (int)piVar3));
                    *(undefined4 *)(puVar15 + -2) =
                         *(undefined4 *)((int)piVar22 + (iVar29 - (int)piVar3) + 8);
                    *(undefined8 *)((int)puVar15 + -0xc) = *(undefined8 *)piVar22;
                    *(int *)((int)puVar15 + -4) = piVar22[2];
                    *puVar15 = *(undefined8 *)ppuVar10;
                    puVar6 = ppuVar10[3];
                    *(undefined **)(puVar15 + 1) = ppuVar10[2];
                    *(undefined **)((int)puVar15 + 0xc) = puVar6;
                    *(undefined **)(puVar15 + 2) = *ppuVar11;
                    *(undefined **)((int)puVar15 + 0x14) = ppuVar11[1];
                    piVar22 = piVar22 + 3;
                    ppuVar10 = ppuVar10 + 4;
                    ppuVar11 = ppuVar11 + 2;
                    puVar15 = puVar15 + 6;
                    piVar9 = (int *)((int)piVar9 + -1);
                  } while (piVar9 != (int *)0x0);
                }
              }
              else if (piVar9 != (int *)0x0) {
                ppuStack_248 = ppuStack_220;
                puVar15 = (undefined8 *)(iVar31 + 0x18);
                puVar27 = (undefined4 *)(iVar31 + 0x40);
                pbVar26 = (byte *)(iVar14 + 2);
                puVar24 = (undefined4 *)(iStack_22c + 8);
                piVar22 = piVar3;
                ppuVar10 = ppuStack_1f4;
                do {
                  puVar15[-3] = *(undefined8 *)((iVar29 - (int)piVar3) + (int)piVar22);
                  *(undefined4 *)(puVar15 + -2) =
                       *(undefined4 *)((iVar29 - (int)piVar3) + 8 + (int)piVar22);
                  *(undefined8 *)((int)puVar15 + -0xc) = *(undefined8 *)piVar22;
                  *(int *)((int)puVar15 + -4) = piVar22[2];
                  *puVar15 = *(undefined8 *)ppuStack_248;
                  puVar15[1] = *(undefined8 *)(ppuStack_248 + 2);
                  *(undefined **)(puVar15 + 2) = *ppuVar10;
                  *(undefined **)((int)puVar15 + 0x14) = ppuVar10[1];
                  puVar27[-4] = (float)pbVar26[-2];
                  *puVar27 = puVar24[-2];
                  ppuStack_248 = ppuStack_248 + 4;
                  ppuVar10 = ppuVar10 + 2;
                  puVar27[-3] = (float)pbVar26[-1];
                  puVar27[1] = puVar24[-1];
                  puVar27[-2] = (float)*pbVar26;
                  puVar27[2] = *puVar24;
                  puVar27[-1] = (float)pbVar26[1];
                  puVar27[3] = puVar24[1];
                  piVar22 = piVar22 + 3;
                  puVar15 = puVar15 + 10;
                  puVar24 = puVar24 + 4;
                  pbVar26 = pbVar26 + 4;
                  puVar27 = puVar27 + 0x14;
                  piVar9 = (int *)((int)piVar9 + -1);
                } while (piVar9 != (int *)0x0);
              }
              (**(code **)(*(int *)*puVar25 + 0x30))();
              (**(code **)(*(int *)puVar25[1] + 0x30))((int *)puVar25[1]);
              if (iVar30 != 0) {
                piVar9 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
                iVar14 = 0;
                puVar25 = puVar25 + 0x20;
                puVar27 = (undefined4 *)0x0;
                iVar20 = (**(code **)(*piVar9 + 0x68))(piVar9,(int)_Dst * 8,8,0,1,puVar25);
                if (iVar20 < 0) {
                  MessageBoxA((HWND)0x0,"CreateVertexBuffer failed(SExtraVertex)","ERROR",0);
                  FatalExit(1);
                }
                iVar20 = (**(code **)(*(int *)*puVar25 + 0x2c))
                                   ((int *)*puVar25,0,(int)_Dst * 8,&stack0xfffffd84,0);
                if (iVar20 < 0) {
                  MessageBoxA((HWND)0x0,"Failed to lock extra actor vertex buffer","ERROR",0);
                  FatalExit(1);
                }
                if (_Dst != (undefined4 **)0x0) {
                  iVar14 = iVar14 - (int)puVar27;
                  do {
                    *puVar27 = *(undefined4 *)(iVar14 + (int)puVar27);
                    puVar27[1] = *(undefined4 *)(iVar14 + 4 + (int)puVar27);
                    puVar27 = puVar27 + 2;
                    _Dst = (undefined4 **)((int)_Dst + -1);
                  } while (_Dst != (undefined4 **)0x0);
                }
                (**(code **)(*(int *)*puVar25 + 0x30))((int *)*puVar25);
              }
              piVar9 = *(int **)(**(int **)(*(int *)(param_1 + 0xd8) + 200) + 4 +
                                *(int *)(iVar32 + 0x20) * 8);
              ppuStack_1c8 = &PTR_FUN_00e3fb28;
              if (piVar9 != (int *)0x0) {
                (**(code **)(*piVar9 + 4))();
              }
              uStack_74 = 2;
              piStack_1c4 = piVar9;
              if (piVar9 == (int *)0x0) {
                iVar20 = 0;
              }
              else {
                iVar20 = (**(code **)(*piVar9 + 0x10))();
              }
              local_1a0[0] = 2;
              local_1a0[1] = 3;
              local_1a0[2] = 5;
              FUN_00989510(&ppuStack_220,0x2f);
              iVar14 = 0;
              uStack_180 = 0xf;
              uStack_184 = 0;
              local_1a0[3] = local_1a0[3] & 0xffffff00;
              uStack_74 = CONCAT31(uStack_74._1_3_,4);
              if (0 < ((int)ppuStack_21c - (int)ppuStack_220) / 0x1c + -1) {
                do {
                  uStack_164 = 0xf;
                  iStack_168 = 0;
                  auStack_178[0] = auStack_178[0] & 0xffffff00;
                  FUN_00409350(&DAT_00dedc68,1);
                  uStack_74._0_1_ = 5;
                  uVar16 = FUN_00988f20(auStack_178);
                  uStack_74._0_1_ = 6;
                  FUN_00448aa0(uVar16,0,0xffffffff);
                  if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uStack_15c);
                  }
                  uStack_74 = CONCAT31(uStack_74._1_3_,4);
                  uStack_148 = 0xf;
                  uStack_14c = 0;
                  uStack_15c = uStack_15c & 0xffffff00;
                  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(auStack_178[0]);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < ((int)ppuStack_21c - (int)ppuStack_220) / 0x1c + -1);
              }
              puVar28 = (uint *)(piVar3 + 2);
              iVar14 = 0;
              do {
                uVar12 = 0;
                iVar31 = iVar20;
                if (*(uint *)(iVar20 + 0xc) != 0) {
                  puVar17 = (uint *)(*(int *)(iVar20 + 8) + 4);
LAB_00a2beb4:
                  if (*puVar17 != local_1a0[iVar14]) goto code_r0x00a2beb8;
                  if (uVar12 != 0xffffffff) {
                    piStack_1e0 = (int *)0xf;
                    piStack_1e4 = (int *)0x0;
                    ppuStack_1f4 = (undefined **)((uint)ppuStack_1f4 & 0xffffff00);
                    FUN_00408ed0(local_1a0 + 3,0,0xffffffff);
                    uStack_74._0_1_ = 7;
                    puVar25 = (undefined4 *)
                              FUN_00b15770(*(undefined4 *)(*(int *)(iVar20 + 8) + uVar12 * 0x24));
                    pcVar23 = (char *)*puVar25;
                    if (pcVar23 == (char *)0x0) {
                      pcVar23 = "";
                    }
                    pcVar18 = pcVar23;
                    do {
                      cVar2 = *pcVar18;
                      pcVar18 = pcVar18 + 1;
                    } while (cVar2 != '\0');
                    FUN_00448740(pcVar23,(int)pcVar18 - (int)(pcVar23 + 1));
                    FUN_00448740(&DAT_00e17f6c,4);
                    uVar12 = FUN_009bcbf0(&ppuStack_1f4,1);
                    if (((uVar12 == 0xffffffff) || (9999 < uVar12)) ||
                       (*(int *)(uVar12 * 0x2c + 0x15c + *(int *)(param_1 + 0x8c)) == 0)) {
                      uStack_1a8 = 0xf;
                      uStack_1ac = 0;
                      puStack_1bc = (undefined4 *)((uint)puStack_1bc & 0xffffff00);
                      FUN_00409350("emfxactortype.cpp",0x11);
                      uStack_74._0_1_ = 8;
                      uVar16 = FUN_004015b0(&puStack_1bc,0x32b,0x1000);
                      uStack_74 = CONCAT31(uStack_74._1_3_,9);
                      FUN_00987d50(uVar16,"Bad texture: ",0xd,0);
                      pppppppiVar19 = (int *******)ppppppiStack_204;
                      if (puStack_1f0 < (undefined *)0x10) {
                        pppppppiVar19 = &ppppppiStack_204;
                      }
                      uVar16 = FUN_00418e30(uVar16,pppppppiVar19);
                      uVar16 = FUN_00418e30(uVar16," in EMFX actor file ");
                      piVar9 = (int *)(param_1 + 0xbc);
                      if (0xf < *(uint *)(param_1 + 0xd0)) {
                        piVar9 = (int *)*piVar9;
                      }
                      piVar9 = (int *)FUN_00418e30(uVar16,piVar9);
                      FUN_00408be0(piVar9);
                      uVar21 = 0;
                      if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
                         (iVar20 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 +
                                                          (int)piVar9) + 0x34))(), iVar20 == -1)) {
                        uVar21 = 4;
                      }
                      if (uVar21 != 0) {
                        uVar21 = *(uint *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0xc) | uVar21;
                        if (*(int *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0x38) == 0) {
                          uVar21 = uVar21 | 4;
                        }
                        FUN_00401120(uVar21,0);
                      }
                      uStack_74._0_1_ = 8;
                      FUN_00987ac0(appuStack_c8);
                      appuStack_c8[0] = std::ios_base::vftable;
                      FUN_00aad52d(appuStack_c8);
                      if (0xf < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
                        FUN_00aae91b(puStack_1bc);
                      }
                      uStack_1a8 = 0xf;
                      uStack_1ac = 0;
                      puStack_1bc = (undefined4 *)((uint)puStack_1bc & 0xffffff00);
                    }
                    *puVar28 = uVar12;
                    uStack_74 = CONCAT31(uStack_74._1_3_,4);
                    if (0xf < piStack_1e0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b(ppuStack_1f4);
                    }
                    piStack_1e0 = (int *)0xf;
                    piStack_1e4 = (int *)0x0;
                    ppuStack_1f4 = (undefined **)((uint)ppuStack_1f4 & 0xffffff00);
                    goto LAB_00a2beca;
                  }
                }
LAB_00a2bec0:
                *puVar28 = 0;
LAB_00a2beca:
                puVar28 = puVar28 + 1;
                iVar14 = iVar14 + 1;
                iVar20 = iVar31;
              } while (iVar14 < 3);
              iVar20 = FUN_009be510(*(int *)(param_1 + 0x8c) + 0x6bcfc,param_1 + 0x124,
                                    param_1 + 0x140,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 100))
              ;
              piVar3[10] = iVar20;
              if (iVar20 == 0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x6bd00) + -4 + iVar20 * 4);
              }
              iVar20 = *piVar9;
              uVar16 = FUN_00adf8e0();
              iVar20 = (**(code **)(iVar20 + 0x34))(piVar9,uVar16);
              if (iVar20 != 0) {
                ppuStack_21c = (undefined **)0xa2c1dc;
                ppuStack_220 = (undefined **)FUN_00adf8e0();
                ppuVar10 = ppuStack_220;
                do {
                  cVar2 = *(char *)ppuVar10;
                  ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                } while (cVar2 != '\0');
                ppuStack_21c = (undefined **)((int)ppuVar10 - (int)((int)ppuStack_220 + 1));
                uStack_224 = 0xa2c1f8;
                FUN_00409350();
              }
              ppuStack_21c = ppuStack_1fc;
              ppuStack_220 = (undefined **)0xa2c207;
              FUN_00a2c610();
              pppuVar7 = *(undefined ****)(param_1 + 0x110);
              puVar28 = (uint *)(param_1 + 0x10c);
              if (&ppuStack_1c8 < pppuVar7) {
                pppuVar8 = (undefined ***)*puVar28;
                if (&ppuStack_1c8 < pppuVar8) goto LAB_00a2c285;
                if (pppuVar7 == *(undefined ****)(param_1 + 0x114)) {
                  uVar12 = (int)pppuVar7 - (int)pppuVar8 >> 2;
                  if (0x3ffffffe < uVar12) goto LAB_00a2c3e8;
                  uVar12 = uVar12 + 1;
                  uVar21 = (int)*(undefined ****)(param_1 + 0x114) - (int)pppuVar8 >> 2;
                  if (uVar21 < uVar12) {
                    if (0x3fffffff - (uVar21 >> 1) < uVar21) {
                      ppuStack_21c = (undefined **)0x0;
                    }
                    else {
                      ppuStack_21c = (undefined **)(uVar21 + (uVar21 >> 1));
                    }
                    if (ppuStack_21c < uVar12) {
                      ppuStack_21c = (undefined **)uVar12;
                    }
                    ppuStack_220 = (undefined **)0xa2c26d;
                    FUN_004bf300();
                  }
                }
                if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x110) =
                       *(undefined4 *)(*puVar28 + ((int)&ppuStack_1c8 - (int)pppuVar8 >> 2) * 4);
                }
                *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
              }
              else {
LAB_00a2c285:
                if (pppuVar7 == *(undefined ****)(param_1 + 0x114)) {
                  uVar12 = (int)((int)pppuVar7 - *puVar28) >> 2;
                  if (0x3ffffffe < uVar12) {
LAB_00a2c3e8:
                    ppuStack_21c = (undefined **)0xdeda30;
                    /* WARNING: Subroutine does not return */
                    ppuStack_220 = (undefined **)&UNK_00a2c3f2;
                    FUN_00aad3ad();
                  }
                  uVar12 = uVar12 + 1;
                  uVar21 = (int)((int)*(undefined ****)(param_1 + 0x114) - *puVar28) >> 2;
                  if (uVar21 < uVar12) {
                    if (0x3fffffff - (uVar21 >> 1) < uVar21) {
                      ppuStack_21c = (undefined **)0x0;
                    }
                    else {
                      ppuStack_21c = (undefined **)(uVar21 + (uVar21 >> 1));
                    }
                    if (ppuStack_21c < uVar12) {
                      ppuStack_21c = (undefined **)uVar12;
                    }
                    ppuStack_220 = (undefined **)0xa2c2c8;
                    FUN_004bf300();
                  }
                }
                if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x110) = ppuStack_1fc;
                }
                *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
              }
              ppuStack_21c = (undefined **)iStack_1d0;
              ppuStack_220 = (undefined **)0xa2c2e5;
              FUN_00aaea59();
              ppuStack_21c = (undefined **)puStack_1cc;
              ppuStack_220 = (undefined **)0xa2c2f2;
              FUN_00aaea59();
              ppuStack_21c = (undefined **)piStack_1e4;
              ppuStack_220 = (undefined **)0xa2c2ff;
              FUN_00aaea59();
              if (0xf < uStack_118) {
                ppuStack_21c = (undefined **)uStack_12c;
                    /* WARNING: Subroutine does not return */
                ppuStack_220 = (undefined **)&UNK_00a2c319;
                FUN_00aae91b();
              }
              puVar25 = puStack_1b8;
              if (puStack_1b8 != (undefined4 *)0x0) {
                while( true ) {
                  if (puVar25 == puStack_1b4) {
                    ppuStack_21c = (undefined **)puStack_1b8;
                    /* WARNING: Subroutine does not return */
                    ppuStack_220 = (undefined **)&UNK_00a2c362;
                    FUN_00aae91b();
                  }
                  if (0xf < (uint)puVar25[5]) break;
                  puVar25[5] = 0xf;
                  puVar25[4] = 0;
                  *(undefined1 *)puVar25 = 0;
                  puVar25 = puVar25 + 7;
                }
                ppuStack_21c = (undefined **)*puVar25;
                    /* WARNING: Subroutine does not return */
                ppuStack_220 = (undefined **)&UNK_00a2c33f;
                FUN_00aae91b();
              }
              uStack_c = 0xffffffff;
              puStack_1b8 = (undefined4 *)0x0;
              puStack_1b4 = (undefined4 *)0x0;
              uStack_1b0 = 0;
              ppuStack_160 = &PTR_FUN_00e3fb28;
              uStack_15c = 0;
              if (ppuStack_1f4 != (undefined **)0x0) {
                ppuStack_21c = (undefined **)0xa2c39d;
                (**(code **)(*ppuStack_1f4 + 8))();
              }
              uStack_1d4 = uStack_1d4 + 1;
              uVar12 = local_1a0[0];
            } while (uStack_1d4 < (uint)piStack_1e0[1]);
          }
        }
      }
      iVar20 = *(int *)(param_1 + 0xd8);
      local_1a0[0] = uVar12 + 1;
    } while (local_1a0[0] < *(uint *)(iVar20 + 0x84));
  }
  ExceptionList = local_14;
  return;
code_r0x00a2beb8:
  uVar12 = uVar12 + 1;
  puVar17 = puVar17 + 9;
  if (*(uint *)(iVar20 + 0xc) <= uVar12) goto LAB_00a2bec0;
  goto LAB_00a2beb4;
}

