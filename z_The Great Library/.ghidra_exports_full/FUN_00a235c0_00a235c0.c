// FUN_00a235c0 @ 00a235c0 body=[[00a235c0, 00a23951] [00a23955, 00a23c1c] [00a23c20, 00a24497] [00a244a0, 00a24dfe]]


void FUN_00a235c0(char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int *param_10)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  char *pcVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  uint *puVar20;
  int iVar21;
  char *pcVar22;
  int iVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int *in_ECX;
  int iVar27;
  uint uVar28;
  int iVar29;
  int unaff_ESI;
  undefined4 *puVar30;
  int iVar31;
  undefined4 *puVar32;
  undefined2 *puVar33;
  undefined8 uVar34;
  int *piVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  void *_Dst;
  int *piVar40;
  int local_528;
  int local_524;
  int local_51c;
  int local_518;
  int local_514;
  int *local_510;
  undefined4 uStack_508;
  int local_504;
  int local_4f4;
  int aiStack_488 [4];
  undefined4 uStack_478;
  uint local_464;
  undefined4 local_454;
  undefined4 local_450;
  int aiStack_448 [94];
  char acStack_2d0 [164];
  undefined **appuStack_22c [7];
  int aiStack_210 [16];
  int local_1d0 [72];
  void *pvStack_b0;
  void *pvStack_2c;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b54bb6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_10 = in_ECX[0xc];
  param_10[1] = in_ECX[0xd];
  iVar31 = *(int *)(param_1 + 0x10);
  pcVar16 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar16 = *(char **)param_1;
  }
  _strncpy(&DAT_01253e50,pcVar16,0x800);
  if (0x7ff < iVar31) {
    DAT_0125464f = 0;
  }
  _memset(&DAT_01254650,0,0x83c);
  _memset(&DAT_01253d50,0,0x100);
  if (iVar31 < 3) {
    local_51c = 0;
    if (0 < iVar31) {
      do {
        iVar17 = _isspace((uint)(byte)(&DAT_01253e50)[local_51c]);
        if (iVar17 == 0) break;
        local_51c = local_51c + 1;
      } while (local_51c < iVar31);
    }
    if (local_51c == iVar31) {
      ExceptionList = local_14;
      return;
    }
  }
  iVar27 = 0;
  iVar17 = 0;
  local_4f4 = -1;
  if (0 < iVar31) {
    do {
      pcVar16 = &DAT_01253e50 + iVar17;
      iVar17 = iVar17 + 1;
      iVar27 = (iVar27 + *pcVar16) * 0x3d;
    } while (iVar17 < iVar31);
  }
  piVar19 = in_ECX + 0x952;
  iVar17 = 0;
  local_510 = piVar19;
  do {
    if (*local_510 ==
        param_2 * 5 +
        param_8 * 7 + iVar27 +
        param_6 * 0x132f + param_5 * 0x22 + param_3 * 3 + param_7 * 0x1f + param_4 * 0x133c +
        param_9 * 0xb) {
      iVar31 = in_ECX[iVar17 + 0x952];
      in_ECX[iVar17 + 0x952] = *piVar19;
      *piVar19 = iVar31;
      iVar31 = in_ECX[iVar17 + 0x97a];
      in_ECX[iVar17 + 0x97a] = in_ECX[0x97a];
      in_ECX[0x97a] = iVar31;
      iVar31 = in_ECX[iVar17 + 0x92a];
      in_ECX[iVar17 + 0x92a] = in_ECX[0x92a];
      in_ECX[0x92a] = iVar31;
      if (in_ECX[0x97a] != 0) {
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))();
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x13,5);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x14,6);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,0);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,2);
        uVar28 = in_ECX[0x127];
        piVar19 = *(int **)(in_ECX[0xb] + 100);
        if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined4 *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
        }
        (**(code **)(*piVar19 + 0x104))(piVar19,0,uVar18);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 400))
                  (*(int **)(in_ECX[0xb] + 100),0,in_ECX[0x97a],0,0x18);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x144))
                  (*(int **)(in_ECX[0xb] + 100),4,0,in_ECX[0x92a]);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,1);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,4);
        ExceptionList = pvStack_b0;
        return;
      }
      local_450 = 0xf;
      local_454 = 0;
      local_464 = local_464 & 0xffffff00;
      FUN_00409350();
      local_c = 0;
      uVar18 = FUN_004015b0();
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00987d50(uVar18);
      if (0xf < *(uint *)(param_1 + 0x14)) {
        param_1 = *(char **)param_1;
      }
      piVar19 = (int *)FUN_00418e30(uVar18,param_1);
      FUN_00408be0(piVar19);
      uVar28 = 0;
      if (((*(byte *)(*(int *)(*piVar19 + 4) + 0xc + (int)piVar19) & 6) == 0) &&
         (iVar31 = (**(code **)(**(int **)(*(int *)(*piVar19 + 4) + 0x38 + (int)piVar19) + 0x34))(),
         iVar31 == -1)) {
        uVar28 = 4;
      }
      if (uVar28 != 0) {
        uVar28 = *(uint *)((int)piVar19 + *(int *)(*piVar19 + 4) + 0xc) | uVar28;
        if (*(int *)((int)piVar19 + *(int *)(*piVar19 + 4) + 0x38) == 0) {
          uVar28 = uVar28 | 4;
        }
        FUN_00401120(uVar28,0);
      }
      uStack_20 = uStack_20 & 0xffffff00;
      FUN_00987ac0(appuStack_22c);
      appuStack_22c[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_22c);
      uStack_20 = 0xffffffff;
      if (local_464 < 0x10) {
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xc))(*(int **)(in_ECX[0xb] + 100));
        ExceptionList = pvStack_2c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_478);
    }
    if ((local_4f4 == -1) && (*local_510 == 0)) {
      local_4f4 = iVar17;
    }
    local_510 = local_510 + 1;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0x28);
  local_510 = (int *)param_6;
  if (param_6 == 0) {
    local_510 = (int *)0x140;
  }
  local_514 = 0;
  local_528 = 0;
  local_524 = 0;
  local_504 = 0;
  local_518 = 0;
  _memset(local_1d0,0,0x1b8);
  cVar15 = (**(code **)(*in_ECX + 0x4c))();
  uStack_508 = CONCAT13(cVar15,(undefined3)uStack_508);
  local_51c = 0;
  iVar17 = 0;
  if (0 < iVar31) {
    do {
      bVar1 = (&DAT_01253e50)[local_51c];
      (&DAT_01253d50)[iVar17] = bVar1;
      iVar27 = iVar17 + 1;
      if (cVar15 == '\0') {
LAB_00a23b6a:
        iVar17 = in_ECX[bVar1 + 0x25];
        if (iVar17 == 0) {
          pcVar16 = param_1;
          if (0xf < *(uint *)(param_1 + 0x14)) {
            pcVar16 = *(char **)param_1;
          }
          if (pcVar16[local_51c] != '\n') {
            pcVar16 = param_1;
            if (0xf < *(uint *)(param_1 + 0x14)) {
              pcVar16 = *(char **)param_1;
            }
            if (pcVar16[local_51c] != '\r') goto LAB_00a23e9c;
          }
          if (local_514 < local_528) {
            local_514 = local_528;
          }
          pcVar16 = &DAT_01253d50;
          do {
            pcVar22 = pcVar16;
            pcVar16 = pcVar22 + 1;
          } while (*pcVar22 != '\0');
          puVar32 = (undefined4 *)&DAT_0125464f;
          do {
            pcVar16 = (char *)((int)puVar32 + 1);
            puVar32 = (undefined4 *)((int)puVar32 + 1);
          } while (*pcVar16 != '\0');
          puVar30 = (undefined4 *)&DAT_01253d50;
          for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *puVar32 = *puVar30;
            puVar30 = puVar30 + 1;
            puVar32 = puVar32 + 1;
          }
          for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
            puVar30 = (undefined4 *)((int)puVar30 + 1);
            puVar32 = (undefined4 *)((int)puVar32 + 1);
          }
          _memset(&DAT_01253d50,0,0x100);
          aiStack_448[local_518] = local_528;
          local_518 = local_518 + 1;
          iVar27 = 0;
          local_524 = 0;
          iVar17 = iVar31;
          if (local_518 < 0x37) {
            local_1d0[local_518] = local_1d0[local_518] + 1;
            iVar17 = local_51c;
          }
          local_51c = iVar17;
          local_528 = 0;
        }
        else {
          local_528 = local_528 + *(int *)(iVar17 + 0x18);
          local_524 = local_524 + *(int *)(iVar17 + 0x18);
          iVar39 = *(int *)(iVar17 + 0xc) + *(int *)(iVar17 + 0x14);
          if (local_504 < iVar39) {
            local_504 = iVar39;
          }
          if (((*(int *)(iVar17 + 0x81c) != 0) && (local_51c + 1 < iVar31)) &&
             (iVar39 = 0, 0 < *(int *)(iVar17 + 0x81c))) {
            puVar20 = (uint *)(iVar17 + 0x1c);
            do {
              if (*puVar20 == (uint)(byte)(&DAT_01253e51)[local_51c]) {
                iVar39 = *(int *)(iVar17 + 0x20 + iVar39 * 8);
                local_528 = local_528 + iVar39;
                local_524 = local_524 + iVar39;
                break;
              }
              iVar39 = iVar39 + 1;
              puVar20 = puVar20 + 2;
            } while (iVar39 < *(int *)(iVar17 + 0x81c));
          }
          if (*(int *)(iVar17 + 0xc) == 0) {
            if ((int)local_510 < local_528 + param_8 * 2) {
              puVar33 = (undefined2 *)&DAT_0125464f;
              do {
                pcVar16 = (char *)((int)puVar33 + 1);
                puVar33 = (undefined2 *)((int)puVar33 + 1);
              } while (*pcVar16 != '\0');
              *puVar33 = 10;
              pcVar16 = &DAT_01253d50;
              do {
                pcVar22 = pcVar16;
                pcVar16 = pcVar22 + 1;
              } while (*pcVar22 != '\0');
              puVar32 = (undefined4 *)&DAT_0125464f;
              do {
                pcVar16 = (char *)((int)puVar32 + 1);
                puVar32 = (undefined4 *)((int)puVar32 + 1);
              } while (*pcVar16 != '\0');
              puVar30 = (undefined4 *)&DAT_01253d50;
              for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *puVar32 = *puVar30;
                puVar30 = puVar30 + 1;
                puVar32 = puVar32 + 1;
              }
              for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
                puVar30 = (undefined4 *)((int)puVar30 + 1);
                puVar32 = (undefined4 *)((int)puVar32 + 1);
              }
              _memset(&DAT_01253d50,0,0x100);
              aiStack_448[local_518] = local_528 - local_524;
              local_518 = local_518 + 1;
              if (local_518 < 0x37) {
                local_1d0[local_518] = local_1d0[local_518] + 1;
                local_528 = local_524;
              }
              else {
                local_528 = local_524;
                local_51c = iVar31;
              }
            }
            else {
              pcVar16 = &DAT_01253d50;
              do {
                pcVar22 = pcVar16;
                pcVar16 = pcVar22 + 1;
              } while (*pcVar22 != '\0');
              puVar32 = (undefined4 *)&DAT_0125464f;
              do {
                pcVar16 = (char *)((int)puVar32 + 1);
                puVar32 = (undefined4 *)((int)puVar32 + 1);
              } while (*pcVar16 != '\0');
              puVar30 = (undefined4 *)&DAT_01253d50;
              for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *puVar32 = *puVar30;
                puVar30 = puVar30 + 1;
                puVar32 = puVar32 + 1;
              }
              for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
                puVar30 = (undefined4 *)((int)puVar30 + 1);
                puVar32 = (undefined4 *)((int)puVar32 + 1);
              }
              _memset(&DAT_01253d50,0,0x100);
              local_1d0[local_518] = local_1d0[local_518] + 1;
            }
            iVar27 = 0;
            local_524 = 0;
            if (local_514 < local_528) {
              local_514 = local_528;
            }
          }
          else if (((DAT_01254650 != '\0') && ((int)local_510 <= param_8 * 2 + local_528)) &&
                  (0x32 < local_524)) {
            puVar33 = (undefined2 *)&DAT_0125464f;
            do {
              pcVar16 = (char *)((int)puVar33 + 1);
              puVar33 = (undefined2 *)((int)puVar33 + 1);
            } while (*pcVar16 != '\0');
            *puVar33 = 10;
            pcVar16 = &DAT_01253d50;
            do {
              pcVar22 = pcVar16;
              pcVar16 = pcVar22 + 1;
            } while (*pcVar22 != '\0');
            puVar32 = (undefined4 *)&DAT_0125464f;
            do {
              pcVar16 = (char *)((int)puVar32 + 1);
              puVar32 = (undefined4 *)((int)puVar32 + 1);
            } while (*pcVar16 != '\0');
            puVar30 = (undefined4 *)&DAT_01253d50;
            for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *puVar32 = *puVar30;
              puVar30 = puVar30 + 1;
              puVar32 = puVar32 + 1;
            }
            for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
              puVar30 = (undefined4 *)((int)puVar30 + 1);
              puVar32 = (undefined4 *)((int)puVar32 + 1);
            }
            _memset(&DAT_01253d50,0,0x100);
            aiStack_448[local_518] = local_528 - local_524;
            local_518 = local_518 + 1;
            local_1d0[local_518] = local_1d0[local_518] + 1;
            local_528 = local_524;
            iVar27 = 0;
            local_514 = (int)local_510 + param_8 * -2;
            local_524 = 0;
          }
        }
      }
      else if (bVar1 == 0x24) {
        (&DAT_01253d51)[iVar17] = (&DAT_01253e51)[local_51c];
        iVar27 = iVar17 + 2;
        local_51c = local_51c + 1;
      }
      else if (bVar1 == 0x40) {
        uVar2 = (&DAT_01253e52)[local_51c];
        (&DAT_01253d51)[iVar17] = (&DAT_01253e51)[local_51c];
        uVar3 = (&DAT_01253e53)[local_51c];
        (&DAT_01253d52)[iVar17] = uVar2;
        (&DAT_01253d53)[iVar17] = uVar3;
        iVar27 = iVar17 + 4;
        iVar17 = (**(code **)(*in_ECX + 0x68))();
        local_528 = local_528 + iVar17;
        local_51c = local_51c + 3;
      }
      else if (bVar1 == 0xa3) {
        for (; (((cVar4 = (&DAT_01253e51)[local_51c], '@' < cVar4 && (cVar4 < '[')) ||
                ((('`' < cVar4 && (cVar4 < '{')) || (cVar4 == '_')))) && (iVar27 < 0xff));
            iVar27 = iVar27 + 1) {
          (&DAT_01253d50)[iVar27] = cVar4;
          local_51c = local_51c + 1;
        }
        iVar17 = (**(code **)(*in_ECX + 100))();
        local_528 = local_528 + iVar17;
        local_504 = local_504 + 3;
      }
      else if (bVar1 == 0xa4) {
        local_528 = local_528 + 0x10;
      }
      else {
        if (bVar1 != 0xa7) goto LAB_00a23b6a;
        (&DAT_01253d51)[iVar17] = (&DAT_01253e51)[local_51c];
        iVar27 = iVar17 + 2;
        local_51c = local_51c + 1;
      }
LAB_00a23e9c:
      local_51c = local_51c + 1;
      iVar17 = iVar27;
    } while (local_51c < iVar31);
  }
  if ((int)local_510 < local_524) {
    pcVar16 = &DAT_01253d50;
    do {
      pcVar22 = pcVar16;
      pcVar16 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    puVar32 = (undefined4 *)&DAT_0125464f;
    do {
      pcVar16 = (char *)((int)puVar32 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    } while (*pcVar16 != '\0');
    puVar30 = (undefined4 *)&DAT_01253d50;
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
      *puVar32 = *puVar30;
      puVar30 = puVar30 + 1;
      puVar32 = puVar32 + 1;
    }
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
      puVar30 = (undefined4 *)((int)puVar30 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    }
    _memset(&DAT_01253d50,0,0x100);
    local_528 = local_524;
  }
  else if ((int)local_510 < local_528 + param_8 * 2) {
    puVar33 = (undefined2 *)&DAT_0125464f;
    do {
      pcVar16 = (char *)((int)puVar33 + 1);
      puVar33 = (undefined2 *)((int)puVar33 + 1);
    } while (*pcVar16 != '\0');
    *puVar33 = 10;
    pcVar16 = &DAT_01253d50;
    do {
      pcVar22 = pcVar16;
      pcVar16 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    puVar32 = (undefined4 *)&DAT_0125464f;
    do {
      pcVar16 = (char *)((int)puVar32 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    } while (*pcVar16 != '\0');
    puVar30 = (undefined4 *)&DAT_01253d50;
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
      *puVar32 = *puVar30;
      puVar30 = puVar30 + 1;
      puVar32 = puVar32 + 1;
    }
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
      puVar30 = (undefined4 *)((int)puVar30 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    }
    _memset(&DAT_01253d50,0,0x100);
    aiStack_448[local_518] = local_528 - local_524;
    local_518 = local_518 + 1;
    local_528 = local_524;
  }
  else {
    pcVar16 = &DAT_01253d50;
    do {
      pcVar22 = pcVar16;
      pcVar16 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    puVar32 = (undefined4 *)&DAT_0125464f;
    do {
      pcVar16 = (char *)((int)puVar32 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    } while (*pcVar16 != '\0');
    puVar30 = (undefined4 *)&DAT_01253d50;
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
      *puVar32 = *puVar30;
      puVar30 = puVar30 + 1;
      puVar32 = puVar32 + 1;
    }
    for (uVar28 = (uint)(pcVar22 + -0x1253d4f) & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *(undefined1 *)puVar32 = *(undefined1 *)puVar30;
      puVar30 = (undefined4 *)((int)puVar30 + 1);
      puVar32 = (undefined4 *)((int)puVar32 + 1);
    }
    _memset(&DAT_01253d50,0,0x100);
  }
  local_1d0[local_518] = local_1d0[local_518] + 1;
  if (local_514 < local_528) {
    local_514 = local_528;
  }
  iVar31 = 0;
  aiStack_448[local_518] = local_528;
  if (param_6 == 0) {
    iVar31 = *param_10 / 2 - aiStack_448[0] / 2;
    goto switchD_00a24070_default;
  }
  switch(param_3) {
  case 0:
    iVar31 = param_4 - *param_10 / 2;
    if ((param_2 == 0) || (param_2 == 3)) {
LAB_00a240f2:
      iVar31 = iVar31 + param_8;
      goto switchD_00a24070_default;
    }
    if (param_2 != 2) {
LAB_00a240d2:
      if (param_2 == 1) {
        iVar31 = (iVar31 + param_6) - aiStack_448[0];
      }
      goto switchD_00a24070_default;
    }
    goto LAB_00a240af;
  case 1:
    iVar31 = *param_10 / 2 + param_4 + param_8;
    if ((param_2 == 0) || (param_2 == 3)) goto LAB_00a240f2;
    if (param_2 != 2) goto LAB_00a240d2;
    param_8 = iVar31 + param_8;
    iVar31 = param_6 / 2 - aiStack_448[0] / 2;
    break;
  case 2:
    iVar31 = (param_4 - *param_10 / 2) + param_8;
    if (param_2 != 2) goto switchD_00a24070_default;
    param_8 = iVar31 + param_6 / 2;
    iVar31 = param_6 / 2 - aiStack_448[0] / 2;
    break;
  case 3:
    iVar31 = *param_10 / 2 + param_4 + param_8;
    if (param_2 != 2) goto switchD_00a24070_default;
    param_8 = iVar31 + param_6 / 2;
    iVar31 = param_6 / 2 - aiStack_448[0] / 2;
    break;
  case 4:
    if (param_2 != 2) {
      if ((param_2 == 0) || (param_2 == 3)) {
        iVar31 = param_4 + param_8;
      }
      goto switchD_00a24070_default;
    }
    iVar31 = param_4 - local_514 / 2;
LAB_00a240af:
    param_8 = iVar31 + param_8;
    iVar31 = param_6 / 2 - aiStack_448[0] / 2;
    break;
  case 5:
    iVar31 = (param_4 - *param_10 / 2) + param_6 / 2;
    if (param_2 != 2) goto switchD_00a24070_default;
    iVar31 = iVar31 + param_8;
    param_8 = param_6 / 2 - aiStack_448[0] / 2;
    break;
  default:
    goto switchD_00a24070_default;
  }
  iVar31 = iVar31 + param_8;
switchD_00a24070_default:
  piVar40 = *(int **)(in_ECX[0xb] + 100);
  iVar17 = 0;
  iVar27 = 3;
  (**(code **)(*piVar40 + 0x10c))();
  piVar37 = *(int **)(in_ECX[0xb] + 100);
  _Dst = (void *)0x2;
  iVar39 = 4;
  (**(code **)(*piVar37 + 0x10c))(piVar37,0);
  piVar19 = *(int **)(in_ECX[0xb] + 100);
  uVar18 = 0;
  (**(code **)(*piVar19 + 0xe4))(piVar19,0x1b,1);
  uVar28 = in_ECX[0x127];
  piVar35 = *(int **)(in_ECX[0xb] + 100);
  if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
    iVar21 = 0;
  }
  else {
    iVar21 = *(int *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
  }
  (**(code **)(*piVar35 + 0x104))(piVar35,0);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
  pcVar16 = &DAT_01254650;
  do {
    pcVar22 = pcVar16;
    pcVar16 = pcVar22 + 1;
  } while (*pcVar22 != '\0');
  pcVar22 = pcVar22 + -0x1254650;
  iVar36 = 0;
  if (0 < (int)pcVar22) {
    do {
      if ((char)((uint)piVar40 >> 0x18) == '\0') {
LAB_00a246b9:
        piVar5 = (int *)in_ECX[(byte)(&DAT_01254650)[iVar36] + 0x25];
        if (piVar5 == (int *)0x0) {
          if ((&DAT_01254650)[iVar36] == 10) {
            _Dst = (void *)((int)_Dst + 1);
            if (param_2 == 2) {
              piVar19 = (int *)((int)piVar19 - in_ECX[0x125]);
              iVar31 = (param_6 / 2 - aiStack_488[(int)_Dst] / 2) + iVar21;
            }
            else if ((param_2 == 0) || (param_2 == 3)) {
              piVar19 = (int *)((int)piVar19 - in_ECX[0x125]);
              iVar31 = iVar21;
            }
            else {
              piVar19 = (int *)((int)piVar19 - in_ECX[0x125]);
              iVar31 = iVar21 - aiStack_488[(int)_Dst];
            }
          }
        }
        else {
          iVar23 = piVar5[4];
          iVar29 = piVar5[2];
          iVar38 = piVar5[5];
          iVar25 = piVar5[3];
          if (iVar25 < 1) {
            iVar23 = piVar5[6];
            iVar29 = aiStack_210[(int)_Dst] + -1;
            if ((param_2 == 3) && (0 < iVar29)) {
              iVar25 = (iVar23 * iVar29 - aiStack_488[(int)_Dst]) + iVar39;
              iVar38 = iVar23;
              if (0 < iVar25) {
                iVar29 = iVar29 * 1000;
                iVar26 = iVar25 * 1000;
                if (iVar29 == 0) {
                  iVar29 = -1;
                }
                else if (iVar26 + 0x189373U < 0x39580e) {
                  iVar29 = (iVar25 * 1000000) / iVar29;
                }
                else {
                  uVar34 = __allmul(iVar26,iVar26 >> 0x1f,1000,0);
                  iVar29 = __alldiv(uVar34,iVar29,iVar29 >> 0x1f);
                  iVar38 = iVar23;
                }
                FUN_00401000(0x43fa4001);
                iVar23 = FUN_00b31c00();
                iVar23 = (iVar23 + iVar29) / 1000;
                if (iVar23 < iVar38) {
                  iVar23 = iVar38;
                }
              }
              if ((_Dst == (void *)((int)piVar37 + -1)) &&
                 (aiStack_488[(int)_Dst] < ((int)(iVar39 + (iVar39 >> 0x1f & 3U)) >> 2) * 3)) {
                iVar23 = iVar38;
              }
            }
            iVar31 = iVar31 + iVar23;
          }
          else {
            fVar7 = (float)*piVar5 / (float)in_ECX[0x128];
            fVar9 = (float)(*piVar5 + piVar5[2]) / (float)in_ECX[0x128];
            fVar8 = (float)(iVar25 + piVar5[1]) / (float)in_ECX[0x129];
            fVar10 = (float)piVar5[1] / (float)in_ECX[0x129];
            fVar14 = (float)(iVar23 + iVar31) - -0.5;
            fVar11 = (float)(((int)piVar19 - iVar38) - iVar25) - -0.5;
            iVar25 = iVar27 * 0x18;
            *(ulonglong *)(&DAT_01320508 + iVar25) = CONCAT44(fVar11,fVar14);
            *(undefined4 *)(&DAT_01320510 + iVar25) = 0x3f800000;
            *(float *)(&DAT_01320518 + iVar25) = fVar7;
            fVar12 = (float)(iVar29 + iVar23 + iVar31) - -0.5;
            *(float *)(&DAT_0132051c + iVar25) = fVar8;
            *(int *)(&DAT_01320514 + iVar25) = iVar17;
            *(ulonglong *)(&DAT_01320520 + iVar25) = CONCAT44(fVar11,fVar12);
            *(undefined4 *)(&DAT_01320528 + iVar25) = 0x3f800000;
            *(float *)(&DAT_01320530 + iVar25) = fVar9;
            fVar13 = (float)((int)piVar19 - iVar38) - -0.5;
            *(float *)(&DAT_01320534 + iVar25) = fVar8;
            *(ulonglong *)(&DAT_01320538 + iVar25) = CONCAT44(fVar13,fVar14);
            *(undefined4 *)(&DAT_01320540 + iVar25) = 0x3f800000;
            *(float *)(&DAT_01320548 + iVar25) = fVar7;
            *(float *)(&DAT_0132054c + iVar25) = fVar10;
            *(ulonglong *)(&DAT_01320550 + iVar25) = CONCAT44(fVar13,fVar12);
            *(undefined4 *)(&DAT_01320558 + iVar25) = 0x3f800000;
            *(float *)(&DAT_01320560 + iVar25) = fVar9;
            *(float *)(&DAT_01320564 + iVar25) = fVar10;
            *(ulonglong *)(&DAT_01320568 + iVar25) = CONCAT44(fVar11,fVar12);
            *(undefined4 *)(&DAT_01320570 + iVar25) = 0x3f800000;
            *(float *)(&DAT_01320578 + iVar25) = fVar9;
            *(float *)(&DAT_0132057c + iVar25) = fVar8;
            *(float *)(&DAT_01320580 + iVar25) = fVar14;
            *(float *)(iVar25 + 0x1320584) = fVar13;
            *(undefined4 *)(&DAT_01320588 + iVar25) = 0x3f800000;
            *(int *)(&DAT_0132052c + iVar25) = iVar17;
            *(int *)(&DAT_01320544 + iVar25) = iVar17;
            *(int *)(&DAT_0132055c + iVar25) = iVar17;
            *(int *)(&DAT_01320574 + iVar25) = iVar17;
            *(int *)(&DAT_0132058c + iVar25) = iVar17;
            *(float *)(&DAT_01320590 + iVar25) = fVar7;
            *(float *)(&DAT_01320594 + iVar25) = fVar10;
            iVar27 = iVar27 + 6;
            if (0xc1 < iVar27 / 6) {
              uVar18 = 0;
              (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x14c))
                        (*(int **)(in_ECX[0xb] + 100),4,iVar27 / 3,&DAT_01320508,0x18);
              iVar27 = 0;
            }
            iVar31 = iVar31 + piVar5[6];
            if (((piVar5[0x207] != 0) && (iVar36 + 1 < (int)pcVar22)) &&
               (iVar23 = 0, 0 < piVar5[0x207])) {
              puVar20 = (uint *)(piVar5 + 7);
              do {
                if (*puVar20 == (uint)(byte)(&DAT_01254651)[iVar36]) {
                  iVar31 = iVar31 + piVar5[iVar23 * 2 + 8];
                  break;
                }
                iVar23 = iVar23 + 1;
                puVar20 = puVar20 + 2;
              } while (iVar23 < piVar5[0x207]);
            }
          }
        }
      }
      else {
        cVar15 = (&DAT_01254650)[iVar36];
        if (cVar15 == -0x59) {
          iVar23 = iVar36 + 1;
          cVar15 = (&DAT_01254651)[iVar36];
          iVar36 = iVar23;
          if (cVar15 == '!') {
            iVar17 = in_ECX[0xe];
          }
          else if ((char)in_ECX[cVar15 * 8 + 0x12a] == -0x59) {
            if ((&DAT_01327598)[cVar15 * 0x20] != -0x59) {
              iVar17 = FUN_009b6df0();
              iVar36 = iVar23;
            }
          }
          else {
            iVar17 = FUN_009b6df0();
            iVar36 = iVar23;
          }
        }
        else if (cVar15 == '@') {
          iVar36 = iVar36 + 3;
          uVar18 = 0;
          (**(code **)(*in_ECX + 0x54))(&stack0xfffffabc,iVar31,piVar19);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
          uVar28 = in_ECX[0x127];
          piVar5 = *(int **)(in_ECX[0xb] + 100);
          if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined4 *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
          }
          (**(code **)(*piVar5 + 0x104))(piVar5,0,uVar24);
          iVar23 = (**(code **)(*in_ECX + 0x68))();
          iVar31 = iVar31 + iVar23;
        }
        else if (cVar15 == -0x5d) {
          uVar18 = 0;
          iVar23 = 0;
          do {
            cVar15 = (&DAT_01254651)[iVar36];
            if ((((cVar15 < 'A') || ('Z' < cVar15)) && ((cVar15 < 'a' || ('z' < cVar15)))) &&
               (cVar15 != '_')) break;
            acStack_2d0[iVar23] = cVar15;
            iVar23 = iVar23 + 1;
            iVar36 = iVar36 + 1;
          } while (iVar23 < 0x7f);
          pcVar6 = *(code **)(*in_ECX + 0x60);
          acStack_2d0[iVar23] = '\0';
          (*pcVar6)(acStack_2d0,iVar31,piVar19);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
          uVar28 = in_ECX[0x127];
          piVar5 = *(int **)(in_ECX[0xb] + 100);
          if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined4 *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
          }
          (**(code **)(*piVar5 + 0x104))(piVar5,0,uVar24);
          iVar23 = (**(code **)(*in_ECX + 100))();
          iVar31 = iVar31 + iVar23;
        }
        else if (cVar15 == -0x5c) {
          uVar18 = 0;
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                    (*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
          (**(code **)(*in_ECX + 0x5c))(0,iVar31,piVar35,0,in_ECX[0x126]);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                    (*(int **)(in_ECX[0xb] + 100),0x3c,piVar19);
          uVar28 = in_ECX[0x127];
          piVar5 = *(int **)(in_ECX[0xb] + 100);
          if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined4 *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
          }
          (**(code **)(*piVar5 + 0x104))(piVar5,0,uVar24);
          iVar31 = iVar31 + 0x10;
        }
        else {
          if (cVar15 != '{') goto LAB_00a246b9;
          cVar15 = (&DAT_01254651)[iVar36];
          iVar23 = iVar36 + 2;
          cVar4 = (&DAT_01254652)[iVar36];
          uVar18 = 0;
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                    (*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
          (**(code **)(*in_ECX + 0x5c))
                    (3,iVar31,piVar35,(cVar15 * 5 + -0xf0) * 2 + -0x30 + (int)cVar4,in_ECX[0x126]);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                    (*(int **)(in_ECX[0xb] + 100),0x3c,piVar19);
          uVar28 = in_ECX[0x127];
          piVar5 = *(int **)(in_ECX[0xb] + 100);
          if ((uVar28 == 0xffffffff) || (9999 < uVar28)) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined4 *)(uVar28 * 0x2c + 0x15c + in_ECX[0xb]);
          }
          (**(code **)(*piVar5 + 0x104))(piVar5,0,uVar24);
          iVar31 = iVar31 + 8;
          iVar36 = iVar23;
        }
      }
      iVar36 = iVar36 + 1;
    } while (iVar36 < (int)pcVar22);
    if (0 < iVar27) {
      if ((char)((uint)uVar18 >> 0x18) != '\0') {
        if (unaff_ESI == -1) {
          unaff_ESI = 0x27;
        }
        piVar19 = in_ECX + unaff_ESI + 0x97a;
        if (in_ECX[unaff_ESI + 0x97a] == 0) {
          (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x68))
                    (*(int **)(in_ECX[0xb] + 100),0x7080,0x208,0x142,0,piVar19,0);
        }
        (**(code **)(*(int *)*piVar19 + 0x2c))((int *)*piVar19,0,0,&stack0xfffffac8,0x2000);
        FID_conflict__memcpy(_Dst,&DAT_01320508,iVar27 * 0x18);
        (**(code **)(*(int *)*piVar19 + 0x30))((int *)*piVar19);
        in_ECX[unaff_ESI + 0x952] = uStack_508;
        in_ECX[unaff_ESI + 0x92a] = iVar27 / 3;
      }
      (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x13,5);
      (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x14,6);
      (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x14c))
                (*(int **)(in_ECX[0xb] + 100),4,iVar27 / 3,&DAT_01320508,0x18);
    }
  }
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,1);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,4);
  ExceptionList = local_14;
  return;
}

