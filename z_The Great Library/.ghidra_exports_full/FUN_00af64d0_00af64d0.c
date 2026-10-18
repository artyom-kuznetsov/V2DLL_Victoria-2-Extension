// FUN_00af64d0 @ 00af64d0 body=[[00af64d0, 00af6bf9]]


void FUN_00af64d0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int *unaff_EBP;
  int iVar12;
  int *piVar13;
  int unaff_EDI;
  uint uVar14;
  char *pcVar15;
  char *pcStack_54;
  uint uStack_50;
  int local_3c;
  uint uStack_38;
  int *local_34;
  int iStack_30;
  char cStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b387ec;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&local_3c;
  uStack_50 = DAT_00ef259c ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  iVar12 = param_2[7];
  pvVar2 = (void *)*param_2;
  local_34 = param_1;
  local_3c = iVar12;
  local_24 = pvVar2;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    pcStack_54 = "- Skinning Information (chunk v3)";
    FUN_00b15e80();
  }
  pcStack_54 = (char *)0x10;
  (**(code **)(*param_1 + 8))(&local_20);
  if (iVar12 == 1) {
    uVar1 = (undefined1)uStack_28;
    uVar5 = uStack_28._1_1_;
    uStack_28._0_2_ = CONCAT11(uStack_28._2_1_,uStack_28._3_1_);
    uStack_28 = CONCAT13(uVar1,CONCAT12(uVar5,(undefined2)uStack_28));
    uVar1 = (undefined1)local_20;
    uVar5 = local_20._1_1_;
    local_20._0_2_ = CONCAT11(local_20._2_1_,local_20._3_1_);
    local_20 = CONCAT13(uVar1,CONCAT12(uVar5,(undefined2)local_20));
    uVar1 = (undefined1)local_24;
    uVar5 = local_24._1_1_;
    local_24._0_2_ = CONCAT11(local_24._2_1_,local_24._3_1_);
    local_24 = (void *)CONCAT13(uVar1,CONCAT12(uVar5,(undefined2)local_24));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Node number      = %d",uStack_28);
    puVar6 = (undefined4 *)
             FUN_00b15770(*(undefined4 *)
                           (*(int *)(*(int *)((int)pvVar2 + 0x80) + uStack_28 * 4) + 0x10));
    puVar7 = (undefined1 *)*puVar6;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Node name        = %s",puVar7);
    FUN_00b15e80("   + Num local bones  = %d",local_24);
    FUN_00b15e80("   + Total influences = %d",local_20);
    FUN_00b15e80("   + For Col. Mesh    = %d",uStack_1c & 0xff);
  }
  if ((char)uStack_1c == '\0') {
    iVar12 = *(int *)(*(int *)(*(int *)((int)pvVar2 + 0x80) + uStack_28 * 4) + 0x1c);
    if (*(int *)(iVar12 + 4) != 0) {
      piVar13 = *(int **)(iVar12 + 4);
      goto LAB_00af666f;
    }
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(*(int *)((int)pvVar2 + 0x80) + uStack_28 * 4) + 0x1c);
    if (*(int *)(iVar12 + 0xc) == 0) {
      iVar12 = 0;
    }
    else {
      piVar13 = *(int **)(iVar12 + 0xc);
LAB_00af666f:
      iVar12 = (**(code **)(*piVar13 + 0x10))();
    }
  }
  iStack_30 = (*(code *)PTR_FUN_00f01b08)(0x30,0xcc,4,0,0,0xffffffff);
  local_c = (void *)0x0;
  if (iStack_30 == 0) {
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
  FUN_00b00ba0(local_20);
  iVar9 = (*(code *)PTR_FUN_00f01b08)(local_20 * 8,600,4,0,0,0);
  (**(code **)(*param_1 + 8))(iVar9,local_20 * 8);
  if (uStack_28 != 0) {
    puVar7 = (undefined1 *)(iVar9 + 3);
    uStack_38 = uStack_28;
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
      local_3c = (uint)*(ushort *)(puVar7 + 1) << 0x10;
      iVar11 = *(int *)(iVar8 + 0xc) + (-3 - iVar9);
      *(undefined4 *)(puVar7 + iVar11) = *(undefined4 *)(puVar7 + -3);
      *(int *)(puVar7 + iVar11 + 4) = local_3c;
      puVar7 = puVar7 + 8;
      uStack_38 = uStack_38 - 1;
    } while (uStack_38 != 0);
    uStack_38 = 0;
    param_1 = unaff_EBP;
  }
  (*(code *)PTR__free_00f01b10)(iVar9);
  uVar3 = *(uint *)(iVar12 + 0x14);
  uVar14 = *(uint *)(iVar8 + 0x20);
  if (((uVar3 != uVar14) && (*(uint *)(iVar8 + 0x20) = uVar3, uVar14 < uVar3)) &&
     (*(uint *)(iVar8 + 0x24) < uVar3)) {
    FUN_00ae6430(uVar3);
  }
  (**(code **)(*param_1 + 8))(*(undefined4 *)(iVar8 + 0x1c),*(int *)(iVar12 + 0x14) * 8);
  uVar3 = *(uint *)(iVar12 + 0x14);
  uVar14 = 0;
  if (uVar3 != 0) {
    do {
      puVar7 = (undefined1 *)(*(int *)(iVar8 + 0x1c) + uVar14 * 8);
      if (pcStack_54 == (char *)0x1) {
        uVar1 = *puVar7;
        *puVar7 = puVar7[3];
        puVar7[3] = uVar1;
        uVar1 = puVar7[1];
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
      }
      puVar7 = (undefined1 *)(uVar14 * 8 + 4 + *(int *)(iVar8 + 0x1c));
      if (pcStack_54 == (char *)0x1) {
        uVar1 = *puVar7;
        *puVar7 = puVar7[3];
        puVar7[3] = uVar1;
        uVar1 = puVar7[1];
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar3);
  }
  pcVar15 = *(char **)(*(int *)(local_3c + 0x80) + uStack_38 * 4);
  pcStack_54 = pcVar15;
  if (cStack_2c == '\0') {
    iVar12 = *(int *)(pcVar15 + 0x1c);
    if ((*(int **)(iVar12 + 0x14) == (int *)0x0) ||
       (iVar8 = (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))(), iVar8 == 0)) {
      iVar8 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      uStack_1c = 3;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else if (*(int *)(*(int *)(pcStack_54 + 0x1c) + 4) == 0) {
        iVar8 = FUN_00aeb090(0);
      }
      else {
        uVar10 = (**(code **)(**(int **)(*(int *)(pcStack_54 + 0x1c) + 4) + 0x10))();
        iVar8 = FUN_00aeb090(uVar10);
      }
      uStack_1c = 0xffffffff;
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
      uStack_1c = 4;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar12 + 0x14);
      *(int **)(iVar12 + 0x14) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      uStack_1c = 0xffffffff;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 8))();
      }
      piVar13 = *(int **)(iVar12 + 0x14);
      iVar8 = *(int *)(pcStack_54 + 0x1c);
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar8 + 0x14);
      *(int **)(iVar8 + 0x14) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
    }
    if (*(int *)(*(int *)(pcStack_54 + 0x1c) + 4) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(**(int **)(*(int *)(pcStack_54 + 0x1c) + 4) + 0x10))();
    }
    iVar8 = FUN_00ae86d0(uVar10,local_3c);
    if (*(int **)(iVar12 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))();
    }
    FUN_00aeb270(iVar8);
    piVar13 = local_34;
    if (local_34 <= *(int **)(iVar8 + 0x14)) goto LAB_00af6bd7;
  }
  else {
    iVar12 = *(int *)(pcVar15 + 0x1c);
    if ((*(int **)(iVar12 + 0x1c) == (int *)0x0) ||
       (iVar8 = (**(code **)(**(int **)(iVar12 + 0x1c) + 0x10))(), iVar8 == 0)) {
      iVar8 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      uStack_1c = 1;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else if (*(int *)(*(int *)(pcVar15 + 0x1c) + 0xc) == 0) {
        iVar8 = FUN_00aeb090(0);
      }
      else {
        uVar10 = (**(code **)(**(int **)(*(int *)(pcVar15 + 0x1c) + 0xc) + 0x10))();
        iVar8 = FUN_00aeb090(uVar10);
      }
      uStack_1c = 0xffffffff;
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
      uStack_1c = 2;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar12 + 0x1c);
      *(int **)(iVar12 + 0x1c) = piVar13;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      uStack_1c = 0xffffffff;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 8))();
      }
      piVar13 = *(int **)(iVar12 + 0x1c);
      iVar8 = *(int *)(pcStack_54 + 0x1c);
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      piVar4 = *(int **)(iVar8 + 0x1c);
      *(int **)(iVar8 + 0x1c) = piVar13;
      pcVar15 = pcStack_54;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
        pcVar15 = pcStack_54;
      }
    }
    if (*(int *)(*(int *)(pcVar15 + 0x1c) + 0xc) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(**(int **)(*(int *)(pcVar15 + 0x1c) + 0xc) + 0x10))();
    }
    iVar8 = FUN_00ae86d0(uVar10,local_3c);
    if (*(int **)(iVar12 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar12 + 0x1c) + 0x10))();
    }
    FUN_00aeb270(iVar8);
    piVar13 = local_34;
    if (local_34 <= *(int **)(iVar8 + 0x14)) goto LAB_00af6bd7;
  }
  local_34 = piVar13;
  if (piVar13 == (int *)0x0) {
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
                         ((int)piVar13 * 0x44,*(undefined2 *)(iVar8 + 0x18),4,2,0,0xffffffff);
    }
    else {
      uVar10 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar8 + 0xc),(int)piVar13 * 0x44);
    }
    *(int **)(iVar8 + 0x14) = piVar13;
    *(undefined4 *)(iVar8 + 0xc) = uVar10;
  }
LAB_00af6bd7:
  ExceptionList = local_24;
  __security_check_cookie(uStack_28 ^ (uint)&pcStack_54);
  return;
}

