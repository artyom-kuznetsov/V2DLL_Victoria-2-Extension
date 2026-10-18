// FUN_0067e1c0 @ 0067e1c0 body=[[0067e1c0, 0067e2e6] [0067e2f0, 0067e56b] [0067e572, 0067e66a] [0067e66e, 0067e6a6] [0067e6b0, 0067e715] [0067e720, 0067e7df] [0067e7e9, 0067e80d] [0067e817, 0067e868] [0067e872, 0067e8bf] [0067e8c3, 0067e8d9] [0067e8dd, 0067e928] [0067e932, 0067eab6] [0067eabd, 0067eb0a] [0067eb11, 0067eb5c] [0067eb60, 0067ec06] [0067ec0d, 0067ec5a] [0067ec61, 0067ec8f] [0067ec99, 0067ecc8] [0067ecd2, 0067ed29] [0067ed2d, 0067ed48] [0067ed52, 0067ed62] [0067ed6b, 0067eddc] [0067ede0, 0067ede8] [0067edf2, 0067ee9d] [0067eea7, 0067eecb] [0067eed5, 0067ef6c] [0067ef70, 0067efda] [0067efde, 0067eff9]]


void FUN_0067e1c0(int *param_1)

{
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  int aiStack_30 [2];
  undefined4 *puStack_28;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb7ad9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined2 *)(param_1 + 0x2e5) = 0;
  FUN_00457980();
  iVar5 = param_1[0x33e];
  if (*(undefined4 **)(iVar5 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar5 + 8))(1);
  }
  *(undefined4 *)(iVar5 + 8) = 0;
  *(int *)(iVar5 + 0xc) = DAT_01259abc;
  FUN_0068ebc0();
  uVar9 = *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2;
  aiStack_30[1] = 0;
  if (0 < (int)(param_1[0x2fd] - param_1[0x2fc] & 0xfffffff0U)) {
    aiStack_30[0] = 0;
    do {
      iVar5 = param_1[0x2fc];
      pvVar7 = *(void **)(iVar5 + 4 + aiStack_30[0]);
      piVar10 = (int *)(iVar5 + aiStack_30[0]);
      uVar4 = (int)pvVar7 - *(int *)(iVar5 + aiStack_30[0]) >> 2;
      if (uVar9 < uVar4) {
        _Dst = (void *)(*(int *)(iVar5 + aiStack_30[0]) + uVar9 * 4);
        if (_Dst != pvVar7) {
          puStack_28 = (undefined4 *)0x0;
          FID_conflict__memcpy(_Dst,pvVar7,0);
          iVar5 = (int)puStack_28 + (int)_Dst;
LAB_0067e2d5:
          piVar10[1] = iVar5;
        }
      }
      else if (uVar4 < uVar9) {
        FUN_007b94a0();
        puVar6 = (undefined4 *)piVar10[1];
        iVar5 = uVar9 - ((int)puVar6 - *piVar10 >> 2);
        if (iVar5 != 0) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        iVar5 = piVar10[1] + (uVar9 - (piVar10[1] - *piVar10 >> 2)) * 4;
        goto LAB_0067e2d5;
      }
      iVar5 = 0;
      if (0 < (int)uVar9) {
        do {
          *(undefined4 *)(*(int *)(aiStack_30[0] + param_1[0x2fc]) + iVar5 * 4) = DAT_01258804;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar9);
      }
      aiStack_30[1] = aiStack_30[1] + 1;
      aiStack_30[0] = aiStack_30[0] + 0x10;
    } while (aiStack_30[1] < param_1[0x2fd] - param_1[0x2fc] >> 4);
  }
  puVar11 = (uint *)(param_1 + 2);
  iVar5 = DAT_0125870c;
  if (((param_1[3] - param_1[2] & 0xfffffffcU) == 0) &&
     (aiStack_30[1] = 0, 0 < *(int *)(DAT_0125870c + 0x2064))) {
    aiStack_30[0] = 0;
    do {
      piVar10 = (int *)param_1[3];
      if (aiStack_30 < piVar10) {
        piVar13 = (int *)*puVar11;
        if (aiStack_30 < piVar13) goto LAB_0067e3da;
        if (piVar10 == (int *)param_1[4]) {
          uVar9 = (int)piVar10 - (int)piVar13 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_0067e54b;
          uVar9 = uVar9 + 1;
          uVar4 = param_1[4] - (int)piVar13 >> 2;
          if (uVar4 < uVar9) {
            if (0x3fffffff - (uVar4 >> 1) < uVar4) {
              uVar4 = 0;
            }
            else {
              uVar4 = uVar4 + (uVar4 >> 1);
            }
            if (uVar4 < uVar9) {
              uVar4 = uVar9;
            }
            FUN_004bf300(uVar4);
          }
        }
        if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[3] =
               *(undefined4 *)(*puVar11 + ((int)aiStack_30 - (int)piVar13 >> 2) * 4);
        }
      }
      else {
LAB_0067e3da:
        if (piVar10 == (int *)param_1[4]) {
          uVar9 = (int)((int)piVar10 - *puVar11) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_0067e54b:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar4 = (int)(param_1[4] - *puVar11) >> 2;
          if (uVar4 < uVar9) {
            if (0x3fffffff - (uVar4 >> 1) < uVar4) {
              uVar4 = 0;
            }
            else {
              uVar4 = uVar4 + (uVar4 >> 1);
            }
            if (uVar4 < uVar9) {
              uVar4 = uVar9;
            }
            FUN_004bf300(uVar4);
          }
        }
        if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[3] = 0;
        }
      }
      iVar5 = DAT_0125870c;
      param_1[3] = param_1[3] + 4;
      aiStack_30[1] = aiStack_30[1] + 1;
    } while (aiStack_30[1] < *(int *)(iVar5 + 0x2064));
  }
  iVar8 = 0;
  if (0 < (int)(param_1[3] - *puVar11 & 0xfffffffc)) {
    do {
      *(undefined4 *)(*puVar11 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(param_1[3] - *puVar11) >> 2);
  }
  iVar8 = 0;
  if (0 < (int)(*(int *)(iVar5 + 0x2a8c) - *(int *)(iVar5 + 0x2a88) & 0xfffffffcU)) {
    do {
      FUN_004cb110();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2);
  }
  FUN_00444ea0();
  *(undefined1 *)(param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  param_1[0x2c5] = 0;
  param_1[0x2ca] = 0;
  piVar10 = param_1 + 0x2e6;
  FUN_0068eb30();
  aiStack_30[1] = 0;
  if (0 < (int)(param_1[0x2e7] - *piVar10 & 0xfffffff0U)) {
    aiStack_30[0] = 0;
    do {
      iVar5 = *(int *)(aiStack_30[0] + 8 + *piVar10);
      while (iVar5 != 0) {
        piVar12 = (int *)(aiStack_30[0] + *piVar10);
        piVar13 = (int *)*piVar12;
        if (piVar13 != (int *)0x0) {
          if ((char)piVar12[3] == '\0') {
            iVar5 = piVar13[2];
            *piVar12 = iVar5;
            if (iVar5 == 0) {
              piVar12[1] = 0;
            }
            else {
              *(undefined4 *)(iVar5 + 4) = 0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar13);
          }
          *(undefined1 *)(piVar13 + 3) = 1;
        }
        if ((undefined4 *)*piVar13 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar13)(1);
        }
        iVar5 = *(int *)(aiStack_30[0] + 8 + *piVar10);
      }
      aiStack_30[0] = aiStack_30[0] + 0x10;
      aiStack_30[1] = aiStack_30[1] + 1;
    } while (aiStack_30[1] < param_1[0x2e7] - *piVar10 >> 4);
  }
  DAT_00f09568 = 1;
  if (DAT_0125ea24 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_00aae9af(0x40);
    uStack_c = 0;
    puStack_28 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 0x1ff;
      *puVar6 = 0;
      pvVar7 = (void *)FUN_00aad56b(0x7fc);
      puVar6[2] = pvVar7;
      _memset(pvVar7,0,puVar6[1] * 4);
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      *(undefined1 *)(puVar6 + 0xe) = 0;
      puVar6[0xf] = 0;
    }
    uStack_c = 1;
    aiStack_30[1] = 0;
    if ((puVar6 != DAT_0125ea24) && (puStack_28 = DAT_0125ea24, DAT_0125ea24 != (undefined4 *)0x0))
    {
      FUN_00566320(DAT_0125ea24);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_28);
    }
    uStack_c = 0xffffffff;
    DAT_0125ea24 = puVar6;
  }
  puVar6 = DAT_0125ea24;
  for (piVar10 = (int *)DAT_0125ea24[7];
      ((int *)puVar6[7] <= piVar10 && (piVar10 < (int *)puVar6[8])); piVar10 = piVar10 + 1) {
    *(undefined4 *)(*piVar10 + 0xc) = 0;
  }
  piVar10 = *(int **)(DAT_01258a3c + 0xc);
  while ((*(int **)(DAT_01258a3c + 0xc) <= piVar10 && (piVar10 < *(int **)(DAT_01258a3c + 0x10)))) {
    iVar5 = *piVar10;
    piVar10 = piVar10 + 1;
    if (1 < (int)((double)((*(int *)(iVar5 + 0x1d0) + -43800000) / 0x18) / 365.0)) {
      *(int *)(iVar5 + 0x1d4) = DAT_01259abc;
    }
  }
  iVar8 = 0;
  iVar5 = (**(code **)(*param_1 + 0x1c))();
  if (0 < iVar5) {
    do {
      FUN_00520e60();
      iVar8 = iVar8 + 1;
      iVar5 = (**(code **)(*param_1 + 0x1c))();
    } while (iVar8 < iVar5);
  }
  iVar8 = 0;
  iVar5 = (**(code **)(*param_1 + 0x18))();
  if (0 < iVar5) {
    do {
      FUN_004aa4b0(*(undefined4 *)(param_1[0x2b3] + iVar8 * 4));
      iVar8 = iVar8 + 1;
      iVar5 = (**(code **)(*param_1 + 0x18))();
    } while (iVar8 < iVar5);
  }
  iVar8 = 0;
  iVar5 = (**(code **)(*param_1 + 0x1c))();
  if (0 < iVar5) {
    do {
      FUN_00503020(*(undefined4 *)(param_1[0x2b7] + iVar8 * 4));
      iVar8 = iVar8 + 1;
      iVar5 = (**(code **)(*param_1 + 0x1c))();
    } while (iVar8 < iVar5);
  }
  iVar8 = 0;
  iVar5 = (**(code **)(*param_1 + 0x18))();
  if (0 < iVar5) {
    do {
      FUN_004aa4b0(*(undefined4 *)(param_1[0x2b3] + iVar8 * 4));
      iVar8 = iVar8 + 1;
      iVar5 = (**(code **)(*param_1 + 0x18))();
    } while (iVar8 < iVar5);
  }
  if (param_1[0x2a1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2a1]);
  }
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  if (param_1[0x2a8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2a8]);
  }
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2a7] = DAT_01259abc;
  piVar10 = (int *)param_1[0x2af];
  while (piVar10 != (int *)0x0) {
    puVar6 = (undefined4 *)*piVar10;
    piVar10 = (int *)piVar10[2];
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  }
  if (param_1[0x2af] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2af]);
  }
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  puVar6 = (undefined4 *)param_1[0x1a];
  aiStack_30[1] = aiStack_30[1] & 0xffffff00;
  if (puVar6 != (undefined4 *)0x0) {
    if (puVar6[2] != 0) {
      FUN_0043c6a0(puVar6[2],aiStack_30[1]);
    }
    iVar5 = aiStack_30[1];
    puVar1 = (undefined4 *)*puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar1);
      }
      puVar1[5] = 0xf;
      puVar1[4] = 0;
      *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar1);
    }
    if (puVar6[4] != 0) {
      FUN_0043c6a0(puVar6[4],aiStack_30[1]);
    }
    if (puVar6[3] != 0) {
      FUN_0043c6a0(puVar6[3],iVar5);
    }
  }
  (**(code **)(param_1[0x19] + 0x1c))(param_1[0x1a]);
  param_1[0x1a] = 0;
  if (param_1[0x1e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1e]);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  pvVar7 = (void *)param_1[0x2ef];
  if (pvVar7 != (void *)param_1[0x2f0]) {
    FID_conflict__memcpy(pvVar7,(void *)param_1[0x2f0],0);
    param_1[0x2f0] = (int)pvVar7;
  }
  iVar8 = 0;
  iVar5 = DAT_01258a98;
  if (-1 < DAT_00f096cc) {
    do {
      if (iVar5 != 0) {
        for (piVar10 = *(int **)(*(int *)(iVar5 + 8) +
                                ((iVar8 + 0x280000U) % *(uint *)(iVar5 + 4)) * 4);
            piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
          if ((*(int *)(*piVar10 + 0xc) == iVar8) && (*(int *)(*piVar10 + 8) == 0x28)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*piVar10)(1);
              iVar5 = DAT_01258a98;
            }
            break;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= DAT_00f096cc);
  }
  piVar10 = (int *)param_1[0x2cf];
  while (piVar10 != (int *)0x0) {
    piVar13 = (int *)piVar10[2];
    puVar6 = (undefined4 *)*piVar10;
    uVar9 = puVar6[0xc] - puVar6[0xb];
    while ((uVar9 & 0xfffffff8) != 0) {
      FUN_009351c0(puVar6,*(undefined4 *)puVar6[0xb],((undefined4 *)puVar6[0xb])[1],0);
      uVar9 = puVar6[0xc] - puVar6[0xb];
    }
    uVar9 = puVar6[0x10] - puVar6[0xf];
    iVar5 = DAT_012588d4;
    while (DAT_012588d4 = iVar5, (uVar9 & 0xfffffff8) != 0) {
      FUN_00936070(puVar6,*(undefined4 *)puVar6[0xf],((undefined4 *)puVar6[0xf])[1],0);
      iVar5 = DAT_012588d4;
      uVar9 = puVar6[0x10] - puVar6[0xf];
    }
    for (piVar10 = *(int **)(iVar5 + 0x28); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      if ((undefined4 *)*piVar10 == puVar6) {
        if (piVar10 != (int *)0x0) {
          if (*(char *)(iVar5 + 0x34) == '\0') {
            iVar8 = piVar10[1];
            iVar2 = piVar10[2];
            if (iVar8 != 0) {
              *(int *)(iVar8 + 8) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 4) = iVar8;
            }
            if (piVar10 == *(int **)(iVar5 + 0x28)) {
              *(int *)(iVar5 + 0x28) = iVar2;
            }
            if (piVar10 == *(int **)(iVar5 + 0x2c)) {
              *(int *)(iVar5 + 0x2c) = iVar8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar10);
          }
          *(undefined1 *)(piVar10 + 3) = 1;
        }
        break;
      }
    }
    for (piVar10 = *(int **)(iVar5 + 0x38); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      if ((undefined4 *)*piVar10 == puVar6) {
        if (piVar10 != (int *)0x0) {
          if (*(char *)(iVar5 + 0x44) == '\0') {
            iVar8 = piVar10[1];
            iVar2 = piVar10[2];
            if (iVar8 != 0) {
              *(int *)(iVar8 + 8) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 4) = iVar8;
            }
            if (piVar10 == *(int **)(iVar5 + 0x38)) {
              *(int *)(iVar5 + 0x38) = iVar2;
            }
            if (piVar10 == *(int **)(iVar5 + 0x3c)) {
              *(int *)(iVar5 + 0x3c) = iVar8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar10);
          }
          *(undefined1 *)(piVar10 + 3) = 1;
        }
        break;
      }
    }
    piVar10 = piVar13;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  }
  piVar10 = (int *)param_1[0x2d3];
  do {
    if (piVar10 == (int *)0x0) {
      if (param_1[0x2cf] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x2cf]);
      }
      param_1[0x2cf] = 0;
      param_1[0x2d0] = 0;
      param_1[0x2d1] = 0;
      if (param_1[0x2d3] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x2d3]);
      }
      param_1[0x2d3] = 0;
      param_1[0x2d4] = 0;
      param_1[0x2d5] = 0;
      *(undefined1 *)(param_1 + 0x2dc) = 0;
      if (0 < (int)(param_1[0x2a] - param_1[0x29] & 0xfffffffcU)) {
        iVar5 = 0;
        do {
          iVar8 = *(int *)(param_1[0x29] + iVar5 * 4);
          if (iVar8 != 0) {
            if (*(int *)(iVar8 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(*(int *)(iVar8 + 0x18));
            }
            *(undefined4 *)(iVar8 + 0x18) = 0;
            *(undefined4 *)(iVar8 + 0x1c) = 0;
            *(undefined4 *)(iVar8 + 0x20) = 0;
            if (*(int *)(iVar8 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(*(int *)(iVar8 + 8));
            }
            *(undefined4 *)(iVar8 + 8) = 0;
            *(undefined4 *)(iVar8 + 0xc) = 0;
            *(undefined4 *)(iVar8 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar8);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[0x2a] - param_1[0x29] >> 2);
      }
      pvVar7 = (void *)param_1[0x29];
      if (pvVar7 != (void *)param_1[0x2a]) {
        FID_conflict__memcpy(pvVar7,(void *)param_1[0x2a],0);
        param_1[0x2a] = (int)pvVar7;
      }
      piVar10 = (int *)param_1[0x2e1];
      while (((int *)param_1[0x2e1] <= piVar10 && (piVar10 < (int *)param_1[0x2e2]))) {
        if (*piVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*piVar10);
        }
        *piVar10 = 0;
        piVar10[1] = 0;
        piVar10[2] = 0;
        piVar10 = piVar10 + 4;
      }
      FUN_0057afc0(param_1 + 0x2d9);
      if (param_1[0x2f3] == 0) {
        aiStack_30[1] = FUN_00aae9af(0x834);
        puStack_10 = (undefined1 *)0x2;
        if (aiStack_30[1] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0047e590(aiStack_30[1]);
        }
        puStack_10 = (undefined1 *)0xffffffff;
        param_1[0x2f3] = iVar5;
      }
      FUN_0047f2c0(param_1[0x2f3]);
      pvVar7 = (void *)param_1[0x300];
      if (pvVar7 != (void *)param_1[0x301]) {
        FID_conflict__memcpy(pvVar7,(void *)param_1[0x301],0);
        param_1[0x301] = (int)pvVar7;
      }
      iVar5 = 0;
      if (param_1[0x331] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x331]);
      }
      param_1[0x331] = 0;
      param_1[0x332] = 0;
      param_1[0x333] = 0;
      if (param_1[0x335] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x335]);
      }
      param_1[0x335] = 0;
      param_1[0x336] = 0;
      param_1[0x337] = 0;
      aiStack_30[1] = 0x2d2d2d;
      param_1[0x339] = 0;
      param_1[0x33a] = 0x2d2d2d;
      param_1[0x33b] = 0;
      param_1[0x33c] = DAT_0126259c;
      if (DAT_0131bb34 == 0) {
        aiStack_30[1] = FUN_00aae9af(0x188);
        puStack_10 = (undefined1 *)0x3;
        if (aiStack_30[1] != 0) {
          iVar5 = FUN_0041a160();
        }
        iVar8 = DAT_0131bb34;
        puStack_10 = (undefined1 *)0x4;
        aiStack_30[1] = 0;
        if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar8);
        }
        puStack_10 = (undefined1 *)0xffffffff;
        DAT_0131bb34 = iVar5;
      }
      FUN_0096f2e0(DAT_0131bb34);
      if (DAT_012588dc != 0) {
        piVar13 = *(int **)(DAT_012588dc + 0x20d8);
        piVar10 = (int *)(DAT_012588dc + 0x20dc);
        if (piVar13 != *(int **)(DAT_012588dc + 0x20dc)) {
          do {
            iVar5 = *piVar13;
            piVar13 = piVar13 + 1;
            if (iVar5 != 0) {
              FUN_00642070(iVar5);
            }
          } while (piVar13 != (int *)*piVar10);
        }
      }
      FUN_0068e050();
      piVar10 = param_1 + 0x33f;
      if (piVar10 != aiStack_30 + 1) {
        if (*piVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*piVar10);
        }
        *piVar10 = 0;
        param_1[0x340] = 0;
        param_1[0x341] = 0;
      }
      ExceptionList = pvStack_18;
      return;
    }
    piVar13 = (int *)piVar10[2];
    puVar6 = (undefined4 *)*piVar10;
    uVar9 = puVar6[0xc] - puVar6[0xb];
    while ((uVar9 & 0xfffffff8) != 0) {
      FUN_009351c0(puVar6,*(undefined4 *)puVar6[0xb],((undefined4 *)puVar6[0xb])[1],0);
      uVar9 = puVar6[0xc] - puVar6[0xb];
    }
    uVar9 = puVar6[0x10] - puVar6[0xf];
    iVar5 = DAT_012588d4;
    while (DAT_012588d4 = iVar5, (uVar9 & 0xfffffff8) != 0) {
      FUN_00936070(puVar6,*(undefined4 *)puVar6[0xf],((undefined4 *)puVar6[0xf])[1],0);
      iVar5 = DAT_012588d4;
      uVar9 = puVar6[0x10] - puVar6[0xf];
    }
    for (piVar10 = *(int **)(iVar5 + 0x28); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      if ((undefined4 *)*piVar10 == puVar6) {
        if (piVar10 != (int *)0x0) {
          if (*(char *)(iVar5 + 0x34) == '\0') {
            iVar8 = piVar10[1];
            iVar2 = piVar10[2];
            if (iVar8 != 0) {
              *(int *)(iVar8 + 8) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 4) = iVar8;
            }
            if (piVar10 == *(int **)(iVar5 + 0x28)) {
              *(int *)(iVar5 + 0x28) = iVar2;
            }
            if (piVar10 == *(int **)(iVar5 + 0x2c)) {
              *(int *)(iVar5 + 0x2c) = iVar8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar10);
          }
          *(undefined1 *)(piVar10 + 3) = 1;
        }
        break;
      }
    }
    for (piVar10 = *(int **)(iVar5 + 0x38); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      if ((undefined4 *)*piVar10 == puVar6) {
        if (piVar10 != (int *)0x0) {
          if (*(char *)(iVar5 + 0x44) == '\0') {
            iVar8 = piVar10[1];
            iVar2 = piVar10[2];
            if (iVar8 != 0) {
              *(int *)(iVar8 + 8) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 4) = iVar8;
            }
            if (piVar10 == *(int **)(iVar5 + 0x38)) {
              *(int *)(iVar5 + 0x38) = iVar2;
            }
            if (piVar10 == *(int **)(iVar5 + 0x3c)) {
              *(int *)(iVar5 + 0x3c) = iVar8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar10);
          }
          *(undefined1 *)(piVar10 + 3) = 1;
        }
        break;
      }
    }
    piVar10 = piVar13;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  } while( true );
}

