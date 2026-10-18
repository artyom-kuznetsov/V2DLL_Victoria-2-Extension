// FUN_00af5dd0 @ 00af5dd0 body=[[00af5dd0, 00af64c9]]


void FUN_00af5dd0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int unaff_EBX;
  int *unaff_EBP;
  int iVar12;
  int *piVar13;
  int unaff_EDI;
  uint uVar14;
  uint uVar15;
  char *pcStack_50;
  uint uStack_4c;
  int local_38;
  int iStack_34;
  int *local_30;
  char cStack_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c [3];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38793;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&local_38;
  uStack_4c = DAT_00ef259c ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  iVar12 = param_2[7];
  pvVar2 = (void *)*param_2;
  local_30 = param_1;
  local_38 = iVar12;
  local_24 = pvVar2;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    pcStack_50 = "- Skinning Information (chunk v2)";
    FUN_00b15e80();
  }
  pcStack_50 = (char *)0xc;
  (**(code **)(*param_1 + 8))(local_1c);
  if (iVar12 == 1) {
    uVar1 = (undefined1)local_24;
    uVar5 = local_24._1_1_;
    local_24._0_2_ = CONCAT11(local_24._2_1_,local_24._3_1_);
    local_24 = (void *)CONCAT13(uVar1,CONCAT12(uVar5,(undefined2)local_24));
    uVar1 = (undefined1)uStack_20;
    uVar5 = uStack_20._1_1_;
    uStack_20._0_2_ = CONCAT11(uStack_20._2_1_,uStack_20._3_1_);
    uStack_20 = CONCAT13(uVar1,CONCAT12(uVar5,(undefined2)uStack_20));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Node number      = %d",local_24);
    puVar6 = (undefined4 *)
             FUN_00b15770(*(undefined4 *)
                           (*(int *)(*(int *)((int)pvVar2 + 0x80) + (int)local_24 * 4) + 0x10));
    puVar7 = (undefined1 *)*puVar6;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Node name        = %s",puVar7);
    FUN_00b15e80("   + Total influences = %d",uStack_20);
    FUN_00b15e80("   + For Col. Mesh    = %d",local_1c[0] & 0xff);
  }
  if ((char)local_1c[0] == '\0') {
    iVar12 = *(int *)(*(int *)(*(int *)((int)pvVar2 + 0x80) + (int)local_24 * 4) + 0x1c);
    if (*(int *)(iVar12 + 4) != 0) {
      piVar13 = *(int **)(iVar12 + 4);
      goto LAB_00af5f3b;
    }
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(*(int *)((int)pvVar2 + 0x80) + (int)local_24 * 4) + 0x1c);
    if (*(int *)(iVar12 + 0xc) == 0) {
      iVar12 = 0;
    }
    else {
      piVar13 = *(int **)(iVar12 + 0xc);
LAB_00af5f3b:
      iVar12 = (**(code **)(*piVar13 + 0x10))();
    }
  }
  uStack_28 = (*(code *)PTR_FUN_00f01b08)(0x30,0xcc,4,0,0,0xffffffff);
  local_c = (void *)0x0;
  if (uStack_28 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00b0dd10(*(undefined4 *)(iVar12 + 0x14),0);
  }
  local_c = (void *)0xffffffff;
  FUN_00adeb00(iVar8);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Num org vertices = %d",*(undefined4 *)(iVar12 + 0x14));
  }
  FUN_00b00ba0(uStack_20);
  iVar9 = (*(code *)PTR_FUN_00f01b08)(uStack_20 * 8,600,4,0,0,0);
  (**(code **)(*param_1 + 8))(iVar9,uStack_20 * 8);
  if (uStack_28 != 0) {
    puVar7 = (undefined1 *)(iVar9 + 3);
    local_30 = (int *)uStack_28;
    do {
      if (unaff_EDI == 1) {
        uVar1 = puVar7[1];
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
        uVar1 = puVar7[-3];
        puVar7[-3] = *puVar7;
        *puVar7 = uVar1;
        uVar1 = puVar7[-2];
        puVar7[-2] = puVar7[-1];
        puVar7[-1] = uVar1;
      }
      unaff_EBX = *(int *)(puVar7 + -3);
      local_38 = (uint)*(ushort *)(puVar7 + 1) << 0x10;
      iVar11 = *(int *)(iVar8 + 0xc) + (-3 - iVar9);
      *(int *)(puVar7 + iVar11) = unaff_EBX;
      *(int *)(puVar7 + iVar11 + 4) = local_38;
      puVar7 = puVar7 + 8;
      local_30 = (int *)((int)local_30 - 1);
    } while (local_30 != (int *)0x0);
    local_30 = (int *)0x0;
    param_1 = unaff_EBP;
  }
  (*(code *)PTR__free_00f01b10)(iVar9);
  uVar15 = *(uint *)(iVar12 + 0x14);
  uVar14 = *(uint *)(iVar8 + 0x20);
  if (((uVar15 != uVar14) && (*(uint *)(iVar8 + 0x20) = uVar15, uVar14 < uVar15)) &&
     (*(uint *)(iVar8 + 0x24) < uVar15)) {
    FUN_00ae6430(uVar15);
  }
  (**(code **)(*param_1 + 8))(*(undefined4 *)(iVar8 + 0x1c),*(int *)(iVar12 + 0x14) * 8);
  uVar15 = *(uint *)(iVar12 + 0x14);
  uVar14 = 0;
  if (uVar15 != 0) {
    do {
      puVar7 = (undefined1 *)(*(int *)(iVar8 + 0x1c) + uVar14 * 8);
      if (pcStack_50 == (char *)0x1) {
        uVar1 = *puVar7;
        *puVar7 = puVar7[3];
        puVar7[3] = uVar1;
        uVar1 = puVar7[1];
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
      }
      puVar7 = (undefined1 *)(*(int *)(iVar8 + 0x1c) + 4 + uVar14 * 8);
      if (pcStack_50 == (char *)0x1) {
        uVar1 = *puVar7;
        *puVar7 = puVar7[3];
        puVar7[3] = uVar1;
        uVar1 = puVar7[1];
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
  }
  pcVar3 = *(char **)(*(int *)(unaff_EBX + 0x80) + iStack_34 * 4);
  iVar12 = *(int *)(pcVar3 + 0x1c);
  pcStack_50 = pcVar3;
  if (cStack_2c == '\0') {
    if ((*(int **)(iVar12 + 0x14) == (int *)0x0) ||
       (iVar8 = (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))(), iVar8 == 0)) {
      iVar8 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      local_1c[0] = 3;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else if (*(int *)(*(int *)(pcVar3 + 0x1c) + 4) == 0) {
        iVar8 = FUN_00aeb090(0);
      }
      else {
        uVar10 = (**(code **)(**(int **)(*(int *)(pcVar3 + 0x1c) + 4) + 0x10))();
        iVar8 = FUN_00aeb090(uVar10);
      }
      local_1c[0] = 0xffffffff;
      if ((iVar8 == 0) ||
         (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
         piVar13 == (int *)0x0)) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13[2] = iVar8;
        piVar13[1] = 0;
        *piVar13 = (int)&PTR_FUN_00ddcbf0;
        (**(code **)(*piVar13 + 4))();
      }
      local_1c[0] = 4;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar12 + 0x14);
      *(int **)(iVar12 + 0x14) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      local_1c[0] = 0xffffffff;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 8))();
      }
      piVar13 = *(int **)(iVar12 + 0x14);
      iVar8 = *(int *)(pcStack_50 + 0x1c);
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar8 + 0x14);
      *(int **)(iVar8 + 0x14) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
    }
    if (*(int *)(*(int *)(pcStack_50 + 0x1c) + 4) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(**(int **)(*(int *)(pcStack_50 + 0x1c) + 4) + 0x10))();
    }
    iVar8 = FUN_00ae86d0(uVar10,unaff_EBX);
    if (*(int **)(iVar12 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))();
    }
    FUN_00aeb270(iVar8);
    uVar15 = *(uint *)(unaff_EBX + 0x84) >> 1;
    if (uVar15 <= *(uint *)(iVar8 + 0x14)) goto LAB_00af64a7;
  }
  else {
    if ((*(int **)(iVar12 + 0x1c) == (int *)0x0) ||
       (iVar8 = (**(code **)(**(int **)(iVar12 + 0x1c) + 0x10))(), iVar8 == 0)) {
      iVar8 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      local_1c[0] = 1;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else if (*(int *)(*(int *)(pcVar3 + 0x1c) + 0xc) == 0) {
        iVar8 = FUN_00aeb090(0);
      }
      else {
        uVar10 = (**(code **)(**(int **)(*(int *)(pcVar3 + 0x1c) + 0xc) + 0x10))();
        iVar8 = FUN_00aeb090(uVar10);
      }
      local_1c[0] = 0xffffffff;
      if ((iVar8 == 0) ||
         (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
         piVar13 == (int *)0x0)) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13[2] = iVar8;
        piVar13[1] = 0;
        *piVar13 = (int)&PTR_FUN_00ddcbf0;
        (**(code **)(*piVar13 + 4))();
      }
      local_1c[0] = 2;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar12 + 0x1c);
      *(int **)(iVar12 + 0x1c) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      local_1c[0] = 0xffffffff;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 8))();
      }
      piVar13 = *(int **)(iVar12 + 0x1c);
      iVar8 = *(int *)(pcStack_50 + 0x1c);
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar8 + 0x1c);
      *(int **)(iVar8 + 0x1c) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
    }
    if (*(int *)(*(int *)(pcStack_50 + 0x1c) + 0xc) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(**(int **)(*(int *)(pcStack_50 + 0x1c) + 0xc) + 0x10))();
    }
    iVar8 = FUN_00ae86d0(uVar10,unaff_EBX);
    if (*(int **)(iVar12 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar12 + 0x1c) + 0x10))();
    }
    FUN_00aeb270(iVar8);
    uVar15 = *(uint *)(unaff_EBX + 0x84) >> 1;
    if (uVar15 <= *(uint *)(iVar8 + 0x14)) goto LAB_00af64a7;
  }
  if (uVar15 == 0) {
    *(undefined4 *)(iVar8 + 0x10) = 0;
    *(undefined4 *)(iVar8 + 0x14) = 0;
    if (*(int *)(iVar8 + 0xc) != 0) {
      (*(code *)PTR__free_00f01b10)(*(int *)(iVar8 + 0xc));
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
  }
  else {
    if (*(int *)(iVar8 + 0xc) == 0) {
      uVar10 = (*(code *)PTR_FUN_00f01b08)
                         (uVar15 * 0x44,*(undefined2 *)(iVar8 + 0x18),4,2,0,0xffffffff);
    }
    else {
      uVar10 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar8 + 0xc),uVar15 * 0x44);
    }
    *(uint *)(iVar8 + 0x14) = uVar15;
    *(undefined4 *)(iVar8 + 0xc) = uVar10;
  }
LAB_00af64a7:
  ExceptionList = local_24;
  __security_check_cookie(uStack_28 ^ (uint)&pcStack_50);
  return;
}

