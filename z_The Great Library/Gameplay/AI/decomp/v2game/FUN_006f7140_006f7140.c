// FUN_006f7140 @ 006f7140 body=[[006f7140, 006f755a] [006f7560, 006f76f1]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f7140(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float10 fVar16;
  int *piStack_60;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  char *apcStack_44 [2];
  undefined **appuStack_3c [10];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b94eab;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_006f4a00();
  apcStack_44[0] = *(char **)(param_1 + 0x3bc);
  puVar6 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c0) * 4) + 0xe44);
  if ((_DAT_013f3240 & 1) == 0) {
    _DAT_013f3240 = _DAT_013f3240 | 1;
    DAT_013f3230 = (undefined4 *)0x0;
    DAT_013f3234 = (undefined4 *)0x0;
    _DAT_013f3238 = 0;
    _atexit((_func_4879 *)&LAB_00c82080);
  }
  FUN_0068ea30(*(undefined4 *)
                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c0) * 4) + 0xe4c));
  if (puVar6 != (undefined4 *)0x0) {
    iVar5 = 0;
    do {
      uVar9 = *puVar6;
      puVar6 = (undefined4 *)puVar6[2];
      *(undefined4 *)(iVar5 + (int)DAT_013f3230) = uVar9;
      iVar5 = iVar5 + 4;
    } while (puVar6 != (undefined4 *)0x0);
  }
  switch(*(undefined4 *)(param_1 + 0x1d0)) {
  case 0:
    uStack_50 = uStack_50 & 0xffffff00;
    FUN_00705ac0(DAT_013f3230,DAT_013f3234,(int)DAT_013f3234 - (int)DAT_013f3230 >> 2,uStack_50);
    break;
  case 1:
    uStack_50 = (uint)uStack_50._1_3_ << 8;
    FUN_00705ba0(DAT_013f3230,DAT_013f3234,(int)DAT_013f3234 - (int)DAT_013f3230 >> 2,uStack_50);
    break;
  case 2:
    cVar4 = FUN_00457110();
    FUN_00705c80(DAT_013f3230,DAT_013f3234,(int)DAT_013f3234 - (int)DAT_013f3230 >> 2,
                 *(undefined4 *)(param_1 + 0x1d8),cVar4 != '\0');
    break;
  case 5:
    uStack_50 = (uint)uStack_50._1_3_ << 8;
    FUN_00705d80(DAT_013f3230,DAT_013f3234,(int)DAT_013f3234 - (int)DAT_013f3230 >> 2,uStack_50);
  }
  if ((*(char *)(param_1 + 0x1d4) == '\0') &&
     (puVar6 = DAT_013f3230, puVar11 = DAT_013f3234, DAT_013f3230 != DAT_013f3234)) {
    do {
      puVar11 = puVar11 + -1;
      if (puVar6 == puVar11) break;
      uVar9 = *puVar6;
      *puVar6 = *puVar11;
      puVar6 = puVar6 + 1;
      *puVar11 = uVar9;
    } while (puVar6 != puVar11);
  }
  puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x80) + 0x2c))();
  piVar10 = (int *)*puVar6;
  apcStack_44[0] = (char *)((int)DAT_013f3234 - (int)DAT_013f3230 >> 2);
  iStack_54 = 0;
  piStack_60 = piVar10;
  if (0 < (int)apcStack_44[0]) {
    do {
      iVar5 = DAT_013f3230[iStack_54];
      if (piVar10 == (int *)0x0) {
        if (*(int *)(param_1 + 0x174) == 0) {
          iVar7 = FUN_00aae9af(0x11d8);
          uVar9 = DAT_01258a80;
          uStack_c = 0;
          if (iVar7 == 0) {
            uVar9 = 0;
          }
          else {
            iVar14 = param_1;
            uVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(param_1);
            uVar9 = FUN_006e6530(iVar7,*(undefined4 *)(param_1 + 0x54),uVar9,uVar8,iVar14);
          }
          uStack_c = 0xffffffff;
          (**(code **)(**(int **)(param_1 + 0x80) + 0x10))(uVar9,0);
        }
        else {
          FUN_00816010();
          piVar10 = (int *)FUN_00705450();
          if ((int *)*piVar10 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)*piVar10;
          }
          uVar13 = (uint)piVar10[2] >> 2;
          if (*(uint *)(iVar7 + 8) <= uVar13) {
            uVar13 = uVar13 - *(uint *)(iVar7 + 8);
          }
          (**(code **)(**(int **)(param_1 + 0x80) + 0x10))
                    (*(undefined4 *)
                      (*(int *)(*(int *)(iVar7 + 4) + uVar13 * 4) + (piVar10[2] & 3U) * 4),0);
          if ((*(int *)(param_1 + 0x174) != 0) &&
             (iVar7 = *(int *)(param_1 + 0x174) + -1, *(int *)(param_1 + 0x174) = iVar7, iVar7 == 0)
             ) {
            *(undefined4 *)(param_1 + 0x170) = 0;
          }
        }
        iVar7 = (**(code **)(**(int **)(param_1 + 0x80) + 0x2c))();
        piVar10 = *(int **)(iVar7 + 4);
        piStack_60 = piVar10;
      }
      iVar7 = *piVar10;
      iVar14 = 0;
      if (*(int *)(iVar5 + 0x60) != 0) {
        iStack_58 = iVar7 + 0x30;
        iVar12 = *(int *)(iVar5 + 0x60);
        do {
          iVar1 = *(int *)(iVar12 + 0x224);
          cVar4 = FUN_006f7f80();
          if (cVar4 != '\0') {
            if ((iVar14 < 8) && (*(int *)(iStack_58 + 4) = iVar12, *(char *)(iVar7 + 0x24) != '\0'))
            {
              FUN_006e3540(iStack_58,0,0,0);
            }
            iVar14 = iVar14 + 1;
            iStack_58 = iStack_58 + 0x21c;
          }
          piVar10 = piStack_60;
          iVar12 = iVar1;
        } while (iVar1 != 0);
      }
      if (((*(int *)(iVar5 + 0x84) < 1) || (iVar14 != 0)) &&
         ((*(char *)(param_1 + 0x3c5) != '\0' || (0 < iVar14)))) {
        FUN_006e69d0(iVar7,iVar5,param_1 + 0x33c,param_1 + 0x34c);
        if (iVar14 < 8) {
          iVar5 = iVar14 * 0x21c + 0x30 + iVar7;
          if (7 < iVar14) goto LAB_006f751f;
          do {
            *(undefined4 *)(iVar5 + 4) = 0;
            if (*(char *)(iVar7 + 0x24) != '\0') {
              FUN_006e3540(iVar5,0,0,0);
            }
LAB_006f751f:
            iVar14 = iVar14 + 1;
            iVar5 = iVar5 + 0x21c;
          } while (iVar14 < 8);
        }
        piVar10 = (int *)piStack_60[2];
        piStack_60 = piVar10;
      }
      iStack_54 = iStack_54 + 1;
    } while (iStack_54 < (int)apcStack_44[0]);
  }
  if (piVar10 != (int *)0x0) {
    do {
      piVar2 = (int *)piVar10[2];
      iVar5 = *piVar10;
      if (((*(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x174) & 3U) == 0) &&
         (*(uint *)(param_1 + 0x16c) <= *(int *)(param_1 + 0x174) + 4U >> 2)) {
        FUN_00705300(param_1 + 0x164);
      }
      uVar13 = *(int *)(param_1 + 0x174) + *(int *)(param_1 + 0x170);
      uVar15 = uVar13 >> 2;
      if (*(uint *)(param_1 + 0x16c) <= uVar15) {
        uVar15 = uVar15 - *(uint *)(param_1 + 0x16c);
      }
      if (*(int *)(*(int *)(param_1 + 0x168) + uVar15 * 4) == 0) {
        iVar7 = FUN_00aae9af(0x10);
        if (iVar7 == 0) {
          apcStack_44[0] = (char *)0x0;
          std::exception::exception((exception *)appuStack_3c,apcStack_44);
          appuStack_3c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(appuStack_3c,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0x168) + uVar15 * 4) = iVar7;
      }
      piVar10 = (int *)(*(int *)(*(int *)(param_1 + 0x168) + uVar15 * 4) + (uVar13 & 3) * 4);
      if (piVar10 != (int *)0x0) {
        *piVar10 = iVar5;
      }
      *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
      (**(code **)(*(int *)(iVar5 + 0x1c) + 0x30))();
      (**(code **)(**(int **)(param_1 + 0x80) + 0x20))(iVar5,0);
      piVar10 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x6c))();
  uVar9 = extraout_ECX;
  fVar3 = DAT_00f092dc;
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x104) != 0) {
    fVar16 = (float10)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x80) + 0x104) + 0x54) +
                                  0x10))();
    uVar9 = extraout_ECX_00;
    fVar3 = (float)fVar16;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0x104);
  if ((iVar5 != 0) && (DAT_00f092dc < fVar3)) {
    FUN_00401000((fVar3 + 0.0005) * 1000.0,uVar9,1,1);
    uVar9 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar5 + 0x54) + 0x1c))(uVar9);
  }
  ExceptionList = pvStack_14;
  return;
}

