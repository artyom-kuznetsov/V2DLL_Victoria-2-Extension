// FUN_00af5880 @ 00af5880 body=[[00af5880, 00af5a3e] [00af5a40, 00af5dc7]]


/* WARNING: Removing unreachable block (ram,0x00af5d03) */
/* WARNING: Removing unreachable block (ram,0x00af5bb1) */
/* WARNING: Removing unreachable block (ram,0x00af5bd3) */
/* WARNING: Removing unreachable block (ram,0x00af5d25) */

undefined4 FUN_00af5880(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  int unaff_EBX;
  uint uVar12;
  int iVar13;
  undefined4 unaff_EDI;
  uint uVar14;
  int iStack_28;
  undefined4 uStack_1c;
  char cStack_18;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00b38747;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar13 = param_2[7];
  iVar10 = *param_2;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("- Skinning Information",DAT_00ef259c ^ (uint)&stack0xffffffc8);
  }
  (**(code **)(*param_1 + 8))(local_14,8);
  if (iVar13 == 1) {
    uVar1 = (undefined1)uStack_1c;
    uVar4 = uStack_1c._1_1_;
    uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
    uStack_1c = CONCAT13(uVar1,CONCAT12(uVar4,(undefined2)uStack_1c));
  }
  if ((*(char *)(in_ECX + 0xc) != '\0') &&
     (FUN_00b15e80("   + Node number = %d",uStack_1c), *(char *)(in_ECX + 0xc) != '\0')) {
    puVar5 = (undefined4 *)
             FUN_00b15770(*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x80) + uStack_1c * 4) + 0x10))
    ;
    puVar6 = (undefined1 *)*puVar5;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Node name   = %s",puVar6);
  }
  if (cStack_18 == '\0') {
    iVar13 = *(int *)(*(int *)(*(int *)(iVar10 + 0x80) + uStack_1c * 4) + 0x1c);
    if (*(int *)(iVar13 + 4) == 0) {
      iVar13 = 0;
      goto LAB_00af59ab;
    }
    piVar7 = *(int **)(iVar13 + 4);
  }
  else {
    iVar13 = *(int *)(*(int *)(*(int *)(iVar10 + 0x80) + uStack_1c * 4) + 0x1c);
    if (*(int *)(iVar13 + 0xc) == 0) {
      iVar13 = 0;
      goto LAB_00af59ab;
    }
    piVar7 = *(int **)(iVar13 + 0xc);
  }
  iVar13 = (**(code **)(*piVar7 + 0x10))();
LAB_00af59ab:
  uVar8 = (*(code *)PTR_FUN_00f01b08)(0x30,0xcc,4,0,0,0xffffffff);
  local_c = (void *)0x0;
  if (uVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00b0dd10(*(undefined4 *)(iVar13 + 0x14),1);
  }
  local_c = (void *)0xffffffff;
  FUN_00adeb00(uVar9);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Num org vertices = %d",*(undefined4 *)(iVar13 + 0x14));
  }
  iVar10 = (*(code *)PTR_FUN_00f01b08)(0x800,600,4,0,0,0);
  uVar2 = *(uint *)(iVar13 + 0x14);
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      (**(code **)(*param_1 + 8))(&stack0x00000000,1);
      (**(code **)(*param_1 + 8))(unaff_EDI,((uint)puStack_8 & 0xff) * 8);
      if ((char)uVar8 != '\0') {
        puVar6 = (undefined1 *)(iVar10 + 3);
        uVar14 = 0;
        do {
          if (iStack_28 == 1) {
            uVar1 = puVar6[1];
            puVar6[1] = puVar6[2];
            puVar6[2] = uVar1;
            uVar1 = puVar6[-3];
            puVar6[-3] = *puVar6;
            *puVar6 = uVar1;
            uVar1 = puVar6[-2];
            puVar6[-2] = puVar6[-1];
            puVar6[-1] = uVar1;
          }
          FUN_00b0daf0(uVar12,*(undefined2 *)(puVar6 + 1),*(undefined4 *)(puVar6 + -3),0);
          uVar14 = uVar14 + 1;
          puVar6 = puVar6 + 8;
        } while (uVar14 < (uVar8 & 0xff));
      }
      uVar12 = uVar12 + 1;
      param_1 = piStack_4;
    } while (uVar12 < uVar2);
  }
  (*(code *)PTR__free_00f01b10)(iVar10);
  FUN_00b0d930();
  iVar13 = *(int *)(*(int *)(unaff_EBX + 0x80) + uStack_1c * 4);
  if (cStack_18 == '\0') {
    iVar10 = *(int *)(iVar13 + 0x1c);
    if ((*(int **)(iVar10 + 0x14) == (int *)0x0) ||
       (iVar11 = (**(code **)(**(int **)(iVar10 + 0x14) + 0x10))(), iVar11 == 0)) {
      piStack_4 = (int *)(*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      local_c = (void *)0x3;
      if (piStack_4 == (int *)0x0) {
        uVar9 = 0;
      }
      else if (*(int *)(*(int *)(iVar13 + 0x1c) + 4) == 0) {
        uVar9 = FUN_00aeb090(0);
      }
      else {
        uVar9 = (**(code **)(**(int **)(*(int *)(iVar13 + 0x1c) + 4) + 0x10))();
        uVar9 = FUN_00aeb090(uVar9);
      }
      local_c = (void *)0xffffffff;
      FUN_00ad8ad0(uVar9);
      local_c = (void *)0x4;
      piVar7 = *(int **)(iVar10 + 0x14);
      *(undefined4 *)(iVar10 + 0x14) = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      local_c = (void *)0xffffffff;
      piVar7 = *(int **)(iVar10 + 0x14);
      iVar11 = *(int *)(iVar13 + 0x1c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      piVar3 = *(int **)(iVar11 + 0x14);
      *(int **)(iVar11 + 0x14) = piVar7;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
    if (*(int *)(*(int *)(iVar13 + 0x1c) + 4) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(**(int **)(*(int *)(iVar13 + 0x1c) + 4) + 0x10))();
    }
    iVar13 = FUN_00ae86d0(uVar9,unaff_EBX);
    if (*(int **)(iVar10 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar10 + 0x14) + 0x10))();
    }
    FUN_00aeb270(iVar13);
    uVar8 = *(uint *)(unaff_EBX + 0x84);
  }
  else {
    iVar10 = *(int *)(iVar13 + 0x1c);
    if ((*(int **)(iVar10 + 0x1c) == (int *)0x0) ||
       (iVar11 = (**(code **)(**(int **)(iVar10 + 0x1c) + 0x10))(), iVar11 == 0)) {
      piStack_4 = (int *)(*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
      local_c = (void *)0x1;
      if (piStack_4 == (int *)0x0) {
        uVar9 = 0;
      }
      else if (*(int *)(*(int *)(iVar13 + 0x1c) + 0xc) == 0) {
        uVar9 = FUN_00aeb090(0);
      }
      else {
        uVar9 = (**(code **)(**(int **)(*(int *)(iVar13 + 0x1c) + 0xc) + 0x10))();
        uVar9 = FUN_00aeb090(uVar9);
      }
      local_c = (void *)0xffffffff;
      FUN_00ad8ad0(uVar9);
      local_c = (void *)0x2;
      piVar7 = *(int **)(iVar10 + 0x1c);
      *(undefined4 *)(iVar10 + 0x1c) = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))();
      }
      local_c = (void *)0xffffffff;
      piVar7 = *(int **)(iVar10 + 0x1c);
      iVar11 = *(int *)(iVar13 + 0x1c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      piVar3 = *(int **)(iVar11 + 0x1c);
      *(int **)(iVar11 + 0x1c) = piVar7;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
    if (*(int *)(*(int *)(iVar13 + 0x1c) + 0xc) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(**(int **)(*(int *)(iVar13 + 0x1c) + 0xc) + 0x10))();
    }
    iVar13 = FUN_00ae86d0(uVar9,unaff_EBX);
    if (*(int **)(iVar10 + 0x1c) == (int *)0x0) {
      FUN_00aeb270(iVar13);
      uVar8 = *(uint *)(unaff_EBX + 0x84);
    }
    else {
      (**(code **)(**(int **)(iVar10 + 0x1c) + 0x10))();
      FUN_00aeb270(iVar13);
      uVar8 = *(uint *)(unaff_EBX + 0x84);
    }
  }
  if (*(uint *)(iVar13 + 0x14) < uVar8 >> 1) {
    FUN_00b003c0(uVar8 >> 1);
  }
  ExceptionList = local_14[0];
  return 1;
}

