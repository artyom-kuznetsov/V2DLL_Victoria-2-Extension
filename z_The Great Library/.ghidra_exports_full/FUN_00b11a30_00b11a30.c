// FUN_00b11a30 @ 00b11a30 body=[[00b11a30, 00b11db9] [00b11dc0, 00b1209b]]


undefined4 * FUN_00b11a30(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int in_ECX;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint uStack_50;
  int iStack_48;
  int iStack_3c;
  int iStack_30;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b39a7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar5 = (*(code *)PTR_FUN_00f01b08)
                    (0x70,0xc9,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffa0);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00adf8e0();
    uVar6 = FUN_00b118b0(uVar6);
  }
  local_4 = local_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00e3fb28;
  param_1[1] = 0;
  FUN_00ad3250(uVar6);
  local_4 = 0;
  if ((int *)param_1[1] == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(*(int *)param_1[1] + 0x10))();
  }
  puVar7 = (undefined4 *)FUN_00b15770(*(undefined4 *)(in_ECX + 0x68));
  puVar8 = (undefined1 *)*puVar7;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_00ded94d;
  }
  uVar6 = FUN_00b157e0(puVar8);
  *(undefined4 *)(iVar5 + 0x68) = uVar6;
  if (*(int *)(in_ECX + 0x6c) != -1) {
    puVar7 = (undefined4 *)FUN_00b15770(*(int *)(in_ECX + 0x6c));
    puVar8 = (undefined1 *)*puVar7;
    if (puVar8 != (undefined1 *)0x0) goto LAB_00b11b29;
  }
  puVar8 = &DAT_00ded94d;
LAB_00b11b29:
  uVar6 = FUN_00b157e0(puVar8);
  *(undefined4 *)(iVar5 + 0x6c) = uVar6;
  iStack_48 = *(int *)(in_ECX + 0x1c);
  uVar15 = *(uint *)(in_ECX + 0x3c);
  iVar18 = *(int *)(in_ECX + 0xc);
  uVar3 = *(uint *)(in_ECX + 0x4c);
  iStack_3c = *(int *)(in_ECX + 0x2c);
  uVar4 = *(uint *)(in_ECX + 0x5c);
  if (iVar18 != 0) {
    iVar19 = 0;
    do {
      puVar7 = (undefined4 *)(iVar19 + *(int *)(in_ECX + 8));
      puVar8 = (undefined1 *)*puVar7;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      puVar7 = (undefined4 *)FUN_00b15770(puVar7[3]);
      puVar9 = (undefined1 *)*puVar7;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_00ded94d;
      }
      FUN_00b00d20(puVar9,puVar8);
      iVar19 = iVar19 + 0x10;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (iStack_48 != 0) {
    uStack_50 = 0;
    do {
      puVar20 = (undefined4 *)(uStack_50 + *(int *)(in_ECX + 0x18));
      puVar7 = (undefined4 *)FUN_00b15770(puVar20[4]);
      puVar8 = (undefined1 *)*puVar7;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      uVar6 = *puVar20;
      uVar13 = puVar20[1];
      uVar16 = puVar20[2];
      uVar1 = puVar20[3];
      uVar10 = FUN_00b157e0(puVar8);
      iVar18 = *(int *)(iVar5 + 0x1c);
      uVar11 = iVar18 + 1;
      *(uint *)(iVar5 + 0x1c) = uVar11;
      if (*(uint *)(iVar5 + 0x20) < uVar11) {
        iVar18 = iVar18 + 2;
        if (iVar18 == 0) {
          *(undefined4 *)(iVar5 + 0x1c) = 0;
          *(undefined4 *)(iVar5 + 0x20) = 0;
          if (*(int *)(iVar5 + 0x18) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iVar5 + 0x18));
            *(undefined4 *)(iVar5 + 0x18) = 0;
          }
        }
        else {
          if (*(int *)(iVar5 + 0x18) == 0) {
            uVar12 = (*(code *)PTR_FUN_00f01b08)
                               (iVar18 * 0x14,*(undefined2 *)(iVar5 + 0x24),4,2,0,0xffffffff);
          }
          else {
            uVar12 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar5 + 0x18),iVar18 * 0x14);
          }
          *(undefined4 *)(iVar5 + 0x18) = uVar12;
          *(int *)(iVar5 + 0x20) = iVar18;
        }
      }
      puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x18) + (*(int *)(iVar5 + 0x1c) * 5 + -5) * 4);
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[4] = uVar10;
        *puVar7 = uVar6;
        puVar7[1] = uVar13;
        puVar7[2] = uVar16;
        puVar7[3] = uVar1;
      }
      uStack_50 = uStack_50 + 0x14;
      iStack_48 = iStack_48 + -1;
    } while (iStack_48 != 0);
  }
  uVar11 = 0;
  if (uVar15 != 0) {
    do {
      iVar18 = *(int *)(in_ECX + 0x38);
      puVar7 = (undefined4 *)FUN_00b15770(*(undefined4 *)(iVar18 + 4 + uVar11 * 8));
      puVar8 = (undefined1 *)*puVar7;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      uVar6 = *(undefined4 *)(iVar18 + uVar11 * 8);
      uVar13 = FUN_00b157e0(puVar8);
      iVar18 = *(int *)(iVar5 + 0x3c);
      uVar14 = iVar18 + 1;
      *(uint *)(iVar5 + 0x3c) = uVar14;
      if (*(uint *)(iVar5 + 0x40) < uVar14) {
        iVar18 = iVar18 + 2;
        if (iVar18 == 0) {
          *(undefined4 *)(iVar5 + 0x3c) = 0;
          *(undefined4 *)(iVar5 + 0x40) = 0;
          if (*(int *)(iVar5 + 0x38) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iVar5 + 0x38));
            *(undefined4 *)(iVar5 + 0x38) = 0;
          }
        }
        else {
          if (*(int *)(iVar5 + 0x38) == 0) {
            uVar16 = (*(code *)PTR_FUN_00f01b08)
                               (iVar18 * 8,*(undefined2 *)(iVar5 + 0x44),4,2,0,0xffffffff);
          }
          else {
            uVar16 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar5 + 0x38),iVar18 * 8);
          }
          *(undefined4 *)(iVar5 + 0x38) = uVar16;
          *(int *)(iVar5 + 0x40) = iVar18;
        }
      }
      puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x38) + -8 + *(int *)(iVar5 + 0x3c) * 8);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uVar6;
        puVar7[1] = uVar13;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar15);
  }
  uStack_50 = 0;
  if (uVar3 != 0) {
    do {
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x48) + uStack_50 * 8);
      puVar20 = (undefined4 *)FUN_00b15770(puVar7[1]);
      puVar8 = (undefined1 *)*puVar20;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      uVar6 = *puVar7;
      uVar13 = FUN_00b157e0(puVar8);
      iVar18 = *(int *)(iVar5 + 0x4c);
      uVar15 = iVar18 + 1;
      *(uint *)(iVar5 + 0x4c) = uVar15;
      if (*(uint *)(iVar5 + 0x50) < uVar15) {
        iVar18 = iVar18 + 2;
        if (iVar18 == 0) {
          *(undefined4 *)(iVar5 + 0x4c) = 0;
          *(undefined4 *)(iVar5 + 0x50) = 0;
          if (*(int *)(iVar5 + 0x48) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iVar5 + 0x48));
            *(undefined4 *)(iVar5 + 0x48) = 0;
          }
        }
        else {
          if (*(int *)(iVar5 + 0x48) == 0) {
            uVar16 = (*(code *)PTR_FUN_00f01b08)
                               (iVar18 * 8,*(undefined2 *)(iVar5 + 0x54),4,2,0,0xffffffff);
          }
          else {
            uVar16 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar5 + 0x48),iVar18 * 8);
          }
          *(undefined4 *)(iVar5 + 0x48) = uVar16;
          *(int *)(iVar5 + 0x50) = iVar18;
        }
      }
      puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x48) + -8 + *(int *)(iVar5 + 0x4c) * 8);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uVar6;
        puVar7[1] = uVar13;
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < uVar3);
  }
  iStack_30 = iStack_3c;
  if (iStack_3c != 0) {
    uStack_50 = 0;
    do {
      piVar21 = (int *)(uStack_50 + *(int *)(in_ECX + 0x28));
      puVar7 = (undefined4 *)FUN_00b15770(piVar21[3]);
      puVar8 = (undefined1 *)*puVar7;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      iStack_30 = *piVar21;
      iVar19 = piVar21[1];
      iVar2 = piVar21[2];
      iVar17 = FUN_00b157e0(puVar8);
      iVar18 = *(int *)(iVar5 + 0x2c);
      uVar15 = iVar18 + 1;
      *(uint *)(iVar5 + 0x2c) = uVar15;
      if (*(uint *)(iVar5 + 0x30) < uVar15) {
        iVar18 = iVar18 + 2;
        if (iVar18 == 0) {
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          *(undefined4 *)(iVar5 + 0x30) = 0;
          if (*(int *)(iVar5 + 0x28) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iVar5 + 0x28));
            *(undefined4 *)(iVar5 + 0x28) = 0;
          }
        }
        else {
          if (*(int *)(iVar5 + 0x28) == 0) {
            uVar6 = (*(code *)PTR_FUN_00f01b08)
                              (iVar18 * 0x10,*(undefined2 *)(iVar5 + 0x34),4,2,0,0xffffffff);
          }
          else {
            uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar5 + 0x28),iVar18 * 0x10);
          }
          *(undefined4 *)(iVar5 + 0x28) = uVar6;
          *(int *)(iVar5 + 0x30) = iVar18;
        }
      }
      piVar21 = (int *)((*(int *)(iVar5 + 0x2c) + -1) * 0x10 + *(int *)(iVar5 + 0x28));
      if (piVar21 != (int *)0x0) {
        piVar21[3] = iVar17;
        *piVar21 = iStack_30;
        piVar21[1] = iVar19;
        piVar21[2] = iVar2;
      }
      uStack_50 = uStack_50 + 0x10;
      iStack_3c = iStack_3c + -1;
    } while (iStack_3c != 0);
  }
  uStack_50 = 0;
  if (uVar4 != 0) {
    do {
      puVar8 = (undefined1 *)(*(int *)(in_ECX + 0x58) + uStack_50 * 8);
      puVar7 = (undefined4 *)FUN_00b15770(*(undefined4 *)(puVar8 + 4));
      puVar9 = (undefined1 *)*puVar7;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_00ded94d;
      }
      iStack_30 = CONCAT31(iStack_30._1_3_,*puVar8);
      iVar19 = FUN_00b157e0(puVar9);
      iVar18 = *(int *)(iVar5 + 0x5c);
      uVar15 = iVar18 + 1;
      *(uint *)(iVar5 + 0x5c) = uVar15;
      if (*(uint *)(iVar5 + 0x60) < uVar15) {
        iVar18 = iVar18 + 2;
        if (iVar18 == 0) {
          *(undefined4 *)(iVar5 + 0x5c) = 0;
          *(undefined4 *)(iVar5 + 0x60) = 0;
          if (*(int *)(iVar5 + 0x58) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iVar5 + 0x58));
            *(undefined4 *)(iVar5 + 0x58) = 0;
          }
        }
        else {
          if (*(int *)(iVar5 + 0x58) == 0) {
            uVar6 = (*(code *)PTR_FUN_00f01b08)
                              (iVar18 * 8,*(undefined2 *)(iVar5 + 100),4,2,0,0xffffffff);
          }
          else {
            uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar5 + 0x58),iVar18 * 8);
          }
          *(undefined4 *)(iVar5 + 0x58) = uVar6;
          *(int *)(iVar5 + 0x60) = iVar18;
        }
      }
      piVar21 = (int *)(*(int *)(iVar5 + 0x58) + -8 + *(int *)(iVar5 + 0x5c) * 8);
      if (piVar21 != (int *)0x0) {
        *piVar21 = iStack_30;
        piVar21[1] = iVar19;
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < uVar4);
  }
  ExceptionList = local_c;
  return param_1;
}

