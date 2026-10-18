// FUN_007046b0 @ 007046b0 body=[[007046b0, 0070484c] [00704850, 00704bc7]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007046b0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar11;
  uint uVar12;
  int unaff_ESI;
  uint uVar13;
  float10 fVar14;
  uint local_4c;
  char *local_44 [2];
  undefined **appuStack_3c [10];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar3 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3e44b;
  pvStack_14 = ExceptionList;
  local_44[0] = *(char **)(DAT_012588e8 + 0xb5c);
  puVar4 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe44);
  ExceptionList = &pvStack_14;
  if ((_DAT_013f30f8 & 1) == 0) {
    _DAT_013f30f8 = _DAT_013f30f8 | 1;
    DAT_013f1c9c = (undefined4 *)0x0;
    DAT_013f1ca0 = (undefined4 *)0x0;
    _DAT_013f1ca4 = 0;
    ExceptionList = &pvStack_14;
    _atexit((_func_4879 *)&LAB_00c82110);
  }
  uVar12 = *(uint *)(iVar3 + 0xb5c);
  FUN_0068ea30(*(undefined4 *)
                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0xb60) * 4) + 0xe4c));
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = 0;
    do {
      uVar9 = *puVar4;
      puVar4 = (undefined4 *)puVar4[2];
      *(undefined4 *)(iVar3 + (int)DAT_013f1c9c) = uVar9;
      iVar3 = iVar3 + 4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  local_4c._1_3_ = (uint3)(uVar12 >> 8);
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 0:
    local_4c = uVar12 & 0xffffff00;
    FUN_00705ac0(DAT_013f1c9c,DAT_013f1ca0,(int)DAT_013f1ca0 - (int)DAT_013f1c9c >> 2,local_4c);
    break;
  case 2:
    FUN_00705c80(DAT_013f1c9c,DAT_013f1ca0,(int)DAT_013f1ca0 - (int)DAT_013f1c9c >> 2,
                 *(undefined4 *)(param_1 + 0x1d8),2);
    break;
  case 3:
    local_4c = (uint)local_4c._1_3_ << 8;
    FUN_00706050(DAT_013f1c9c,DAT_013f1ca0,(int)DAT_013f1ca0 - (int)DAT_013f1c9c >> 2,local_4c);
    break;
  case 4:
    local_4c = (uint)local_4c._1_3_ << 8;
    FUN_00706130(DAT_013f1c9c,DAT_013f1ca0,(int)DAT_013f1ca0 - (int)DAT_013f1c9c >> 2,local_4c);
  }
  if ((*(char *)(param_1 + 0x1d5) == '\0') &&
     (puVar4 = DAT_013f1c9c, puVar10 = DAT_013f1ca0, DAT_013f1c9c != DAT_013f1ca0)) {
    do {
      puVar10 = puVar10 + -1;
      if (puVar4 == puVar10) break;
      uVar9 = *puVar4;
      *puVar4 = *puVar10;
      puVar4 = puVar4 + 1;
      *puVar10 = uVar9;
    } while (puVar4 != puVar10);
  }
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x84) + 0x2c))();
  piVar7 = (int *)*puVar4;
  iVar3 = (int)DAT_013f1ca0 - (int)DAT_013f1c9c >> 2;
  local_4c = 0;
  if (0 < iVar3) {
    do {
      iVar8 = DAT_013f1c9c[local_4c];
      if (*(int *)(iVar8 + 0x244) != 4) {
        if (*(int *)(iVar8 + 0x228) == 0 && *(int *)(iVar8 + 0x22c) == 0) {
          iVar11 = 1;
          iVar5 = *(int *)(iVar8 + 0x21c) - *(int *)(iVar8 + 0x218) >> 3;
          if (1 < iVar5) {
            piVar1 = *(int **)(iVar8 + 0x218);
            do {
              if (piVar1[2] != 0 || piVar1[3] != 0) goto LAB_007048f9;
              iVar11 = iVar11 + 1;
              piVar1 = piVar1 + 2;
            } while (iVar11 < iVar5);
          }
        }
        else {
LAB_007048f9:
          if (piVar7 == (int *)0x0) {
            if (*(int *)(param_1 + 0x18c) == 0) {
              pcVar6 = (char *)FUN_00aae9af(0xb0);
              uVar9 = 0;
              uStack_c = 0;
              local_44[0] = pcVar6;
              if (pcVar6 != (char *)0x0) {
                iVar11 = param_1;
                uVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(param_1);
                uVar9 = FUN_006ebb10(pcVar6,*(undefined4 *)(param_1 + 0x54),uVar9,iVar11);
              }
              uStack_c = 0xffffffff;
              (**(code **)(**(int **)(param_1 + 0x84) + 0x10))(uVar9,0);
            }
            else {
              FUN_00816010();
              piVar7 = (int *)FUN_00705450();
              if ((int *)*piVar7 == (int *)0x0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)*piVar7;
              }
              uVar12 = (uint)piVar7[2] >> 2;
              if (*(uint *)(iVar8 + 8) <= uVar12) {
                uVar12 = uVar12 - *(uint *)(iVar8 + 8);
              }
              (**(code **)(**(int **)(param_1 + 0x84) + 0x10))
                        (*(undefined4 *)
                          (*(int *)(*(int *)(iVar8 + 4) + uVar12 * 4) + (piVar7[2] & 3U) * 4),0);
              iVar8 = unaff_ESI;
              if ((*(int *)(param_1 + 0x18c) != 0) &&
                 (iVar11 = *(int *)(param_1 + 0x18c) + -1, *(int *)(param_1 + 0x18c) = iVar11,
                 iVar11 == 0)) {
                *(undefined4 *)(param_1 + 0x188) = 0;
              }
            }
            iVar11 = (**(code **)(**(int **)(param_1 + 0x84) + 0x2c))();
            piVar7 = *(int **)(iVar11 + 4);
          }
          FUN_006ebe60(*piVar7,iVar8,param_1 + 0x34c);
          piVar7 = (int *)piVar7[2];
        }
      }
      local_4c = local_4c + 1;
    } while ((int)local_4c < iVar3);
  }
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      iVar3 = *piVar7;
      if (((*(int *)(param_1 + 0x188) + *(int *)(param_1 + 0x18c) & 3U) == 0) &&
         (*(uint *)(param_1 + 0x184) <= *(int *)(param_1 + 0x18c) + 4U >> 2)) {
        FUN_00705300(param_1 + 0x17c);
      }
      uVar12 = *(int *)(param_1 + 0x18c) + *(int *)(param_1 + 0x188);
      uVar13 = uVar12 >> 2;
      if (*(uint *)(param_1 + 0x184) <= uVar13) {
        uVar13 = uVar13 - *(uint *)(param_1 + 0x184);
      }
      if (*(int *)(*(int *)(param_1 + 0x180) + uVar13 * 4) == 0) {
        iVar8 = FUN_00aae9af(0x10);
        if (iVar8 == 0) {
          local_44[0] = (char *)0x0;
          std::exception::exception((exception *)appuStack_3c,local_44);
          appuStack_3c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(appuStack_3c,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0x180) + uVar13 * 4) = iVar8;
      }
      piVar7 = (int *)(*(int *)(*(int *)(param_1 + 0x180) + uVar13 * 4) + (uVar12 & 3) * 4);
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar3;
      }
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
      (**(code **)(*(int *)(iVar3 + 0x1c) + 0x30))();
      (**(code **)(**(int **)(param_1 + 0x84) + 0x20))(iVar3,0);
      piVar7 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  (**(code **)(**(int **)(param_1 + 0x84) + 0x6c))();
  uVar9 = extraout_ECX;
  fVar2 = DAT_00f092dc;
  if (*(int *)(*(int *)(param_1 + 0x84) + 0x104) != 0) {
    fVar14 = (float10)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0x104) + 0x54) +
                                  0x10))();
    uVar9 = extraout_ECX_00;
    fVar2 = (float)fVar14;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x104);
  if ((iVar3 != 0) && (DAT_00f092dc < fVar2)) {
    FUN_00401000((fVar2 + 0.0005) * 1000.0,uVar9,1,1);
    uVar9 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar3 + 0x54) + 0x1c))(uVar9);
  }
  ExceptionList = pvStack_14;
  return;
}

