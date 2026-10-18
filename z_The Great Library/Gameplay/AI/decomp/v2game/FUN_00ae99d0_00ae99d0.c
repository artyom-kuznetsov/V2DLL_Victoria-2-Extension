// FUN_00ae99d0 @ 00ae99d0 body=[[00ae99d0, 00ae9ac8] [00ae9ad0, 00ae9dab] [00ae9db0, 00aea1c3]]


undefined4 * FUN_00ae99d0(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *in_ECX;
  uint uVar12;
  int *piVar13;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = (*(code *)PTR_FUN_00f01b08)
                    (0xa8,400,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffc0);
  uStack_4 = 0;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00b15770(in_ECX[4]);
    puVar6 = (undefined1 *)*puVar5;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    puVar5 = (undefined4 *)FUN_00ae96e0(puVar6,param_1);
  }
  puVar5[1] = in_ECX[1];
  *puVar5 = *in_ECX;
  puVar5[4] = in_ECX[4];
  puVar5[3] = in_ECX[3];
  uStack_4 = 0xffffffff;
  puVar5[2] = in_ECX[2];
  FUN_00ae66b0(in_ECX + 0xf);
  puVar5[5] = in_ECX[5];
  uVar7 = param_2 & 8;
  *(undefined1 *)(puVar5 + 0x29) = *(undefined1 *)(in_ECX + 0x29);
  if (uVar7 == 0) {
    uStack_2c = in_ECX[8];
    if ((uint)puVar5[8] < uStack_2c) {
      FUN_00aeae50(uStack_2c);
    }
    if (uStack_2c != 0) {
      iVar4 = 0;
      do {
        piVar13 = *(int **)(in_ECX[7] + 4 + iVar4);
        iVar2 = puVar5[7];
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))();
        }
        piVar3 = *(int **)(iVar2 + 4 + iVar4);
        *(int **)(iVar2 + 4 + iVar4) = piVar13;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        iVar4 = iVar4 + 0x20;
        uStack_2c = uStack_2c - 1;
      } while (uStack_2c != 0);
    }
  }
  uVar8 = param_2 & 0x10;
  if (uVar8 == 0) {
    uStack_2c = in_ECX[8];
    if ((uint)puVar5[8] < uStack_2c) {
      FUN_00aeae50(uStack_2c);
    }
    if (uStack_2c != 0) {
      iVar4 = 0;
      do {
        piVar13 = *(int **)(in_ECX[7] + 0xc + iVar4);
        iVar2 = puVar5[7] + 8 + iVar4;
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))();
        }
        piVar3 = *(int **)(iVar2 + 4);
        *(int **)(iVar2 + 4) = piVar13;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        iVar4 = iVar4 + 0x20;
        uStack_2c = uStack_2c - 1;
      } while (uStack_2c != 0);
    }
  }
  if (((param_2 & 1) != 0) && (uVar12 = 0, in_ECX[0xc] != 0)) {
    do {
      uVar9 = (**(code **)(**(int **)(in_ECX[0xb] + uVar12 * 4) + 0xc))();
      iVar4 = puVar5[0xc];
      uVar10 = iVar4 + 1;
      puVar5[0xc] = uVar10;
      if ((uint)puVar5[0xd] < uVar10) {
        iVar4 = iVar4 + 2;
        if (iVar4 == 0) {
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          if (puVar5[0xb] != 0) {
            (*(code *)PTR__free_00f01b10)(puVar5[0xb]);
            puVar5[0xb] = 0;
          }
        }
        else {
          if (puVar5[0xb] == 0) {
            uVar11 = (*(code *)PTR_FUN_00f01b08)
                               (iVar4 * 4,*(undefined2 *)(puVar5 + 0xe),4,2,0,0xffffffff);
          }
          else {
            uVar11 = (*(code *)PTR_FUN_00f01b0c)(puVar5[0xb],iVar4 * 4);
          }
          puVar5[0xb] = uVar11;
          puVar5[0xd] = iVar4;
        }
      }
      puVar1 = (undefined4 *)(puVar5[0xb] + -4 + puVar5[0xc] * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar9;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)in_ECX[0xc]);
  }
  if (uVar7 != 0) {
    uStack_28 = in_ECX[8];
    if ((uint)puVar5[8] < uStack_28) {
      FUN_00aeae50(uStack_28);
    }
    if (uStack_28 != 0) {
      uStack_2c = 0;
      do {
        if ((*(int *)(in_ECX[7] + 4 + uStack_2c) == 0) ||
           (iVar4 = (**(code **)(**(int **)(in_ECX[7] + 4 + uStack_2c) + 0x10))(), iVar4 == 0)) {
          piVar13 = *(int **)(puVar5[7] + 4 + uStack_2c);
          uStack_4 = 2;
          *(undefined4 *)(puVar5[7] + 4 + uStack_2c) = 0;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
          uStack_4 = 0xffffffff;
        }
        else {
          iVar4 = FUN_00adf420(param_1,puVar5);
          if ((iVar4 == 0) ||
             (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
             piVar13 == (int *)0x0)) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[1] = 0;
            *piVar13 = (int)&PTR_FUN_00ddd99c;
            piVar13[2] = iVar4;
            (**(code **)(*piVar13 + 4))();
          }
          iVar4 = puVar5[7];
          uStack_4 = 1;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))();
          }
          piVar3 = *(int **)(iVar4 + uStack_2c + 4);
          *(int **)(iVar4 + uStack_2c + 4) = piVar13;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
          uStack_4 = 0xffffffff;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
        }
        uStack_2c = uStack_2c + 0x20;
        uStack_28 = uStack_28 - 1;
      } while (uStack_28 != 0);
    }
  }
  if (uVar8 != 0) {
    uStack_28 = in_ECX[8];
    if ((uint)puVar5[8] < uStack_28) {
      FUN_00aeae50(uStack_28);
    }
    if (uStack_28 != 0) {
      uStack_2c = 0;
      do {
        if ((*(int *)(in_ECX[7] + 0xc + uStack_2c) == 0) ||
           (iVar4 = (**(code **)(**(int **)(in_ECX[7] + 0xc + uStack_2c) + 0x10))(), iVar4 == 0)) {
          piVar13 = *(int **)(puVar5[7] + 0xc + uStack_2c);
          uStack_4 = 4;
          *(undefined4 *)(puVar5[7] + uStack_2c + 0xc) = 0;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
          uStack_4 = 0xffffffff;
        }
        else {
          iVar4 = FUN_00adf420(param_1,puVar5);
          if ((iVar4 == 0) ||
             (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
             piVar13 == (int *)0x0)) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[2] = iVar4;
            piVar13[1] = 0;
            *piVar13 = (int)&PTR_FUN_00ddd99c;
            (**(code **)(*piVar13 + 4))();
          }
          uStack_4 = 3;
          iVar4 = puVar5[7] + 8 + uStack_2c;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))();
          }
          piVar3 = *(int **)(iVar4 + 4);
          *(int **)(iVar4 + 4) = piVar13;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
          uStack_4 = 0xffffffff;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
        }
        uStack_2c = uStack_2c + 0x20;
        uStack_28 = uStack_28 - 1;
      } while (uStack_28 != 0);
    }
  }
  if (((param_2 & 2) != 0) || (uVar7 != 0)) {
    uStack_24 = in_ECX[8];
    if ((uint)puVar5[8] < uStack_24) {
      FUN_00aeae50(uStack_24);
    }
    if (uStack_24 != 0) {
      uStack_2c = 0;
      do {
        if ((*(int *)(in_ECX[7] + 0x14 + uStack_2c) == 0) ||
           (iVar4 = (**(code **)(**(int **)(in_ECX[7] + 0x14 + uStack_2c) + 0x10))(), iVar4 == 0)) {
          piVar13 = *(int **)(puVar5[7] + 0x14 + uStack_2c);
          uStack_4 = 6;
          *(undefined4 *)(puVar5[7] + uStack_2c + 0x14) = 0;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
          uStack_4 = 0xffffffff;
        }
        else {
          if (*(int *)(puVar5[7] + 4 + uStack_2c) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)(**(int **)(puVar5[7] + 4 + uStack_2c) + 0x10))();
          }
          iVar4 = FUN_00aeb300(uVar9,param_1);
          if ((iVar4 == 0) ||
             (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
             piVar13 == (int *)0x0)) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[2] = iVar4;
            piVar13[1] = 0;
            *piVar13 = (int)&PTR_FUN_00ddcbf0;
            (**(code **)(*piVar13 + 4))();
          }
          uStack_4 = 5;
          iVar4 = puVar5[7] + 0x10 + uStack_2c;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))();
          }
          piVar3 = *(int **)(iVar4 + 4);
          *(int **)(iVar4 + 4) = piVar13;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
          uStack_4 = 0xffffffff;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
        }
        uStack_2c = uStack_2c + 0x20;
        uStack_24 = uStack_24 - 1;
      } while (uStack_24 != 0);
    }
  }
  if (((param_2 & 4) != 0) || (uVar8 != 0)) {
    uStack_20 = in_ECX[8];
    if ((uint)puVar5[8] < uStack_20) {
      FUN_00aeae50(uStack_20);
    }
    if (uStack_20 != 0) {
      param_2 = 0;
      do {
        if ((*(int *)(in_ECX[7] + 0x1c + param_2) == 0) ||
           (iVar4 = (**(code **)(**(int **)(in_ECX[7] + 0x1c + param_2) + 0x10))(), iVar4 == 0)) {
          piVar13 = *(int **)(puVar5[7] + 0x1c + param_2);
          uStack_4 = 8;
          *(undefined4 *)(puVar5[7] + param_2 + 0x1c) = 0;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
          uStack_4 = 0xffffffff;
        }
        else {
          if (*(int *)(puVar5[7] + 0xc + param_2) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)(**(int **)(puVar5[7] + 0xc + param_2) + 0x10))();
          }
          iVar4 = FUN_00aeb300(uVar9,param_1);
          if ((iVar4 == 0) ||
             (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
             piVar13 == (int *)0x0)) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[2] = iVar4;
            piVar13[1] = 0;
            *piVar13 = (int)&PTR_FUN_00ddcbf0;
            (**(code **)(*piVar13 + 4))();
          }
          uStack_4 = 7;
          iVar4 = puVar5[7] + 0x18 + param_2;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))();
          }
          piVar3 = *(int **)(iVar4 + 4);
          *(int **)(iVar4 + 4) = piVar13;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))();
          }
          uStack_4 = 0xffffffff;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
        }
        param_2 = param_2 + 0x20;
        uStack_20 = uStack_20 - 1;
      } while (uStack_20 != 0);
    }
  }
  ExceptionList = local_c;
  return puVar5;
}

