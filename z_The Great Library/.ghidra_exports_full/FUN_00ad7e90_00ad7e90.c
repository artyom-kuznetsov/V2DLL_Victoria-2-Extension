// FUN_00ad7e90 @ 00ad7e90 body=[[00ad7e90, 00ad7ed8] [00ad7ee0, 00ad7f09] [00ad7f10, 00ad83de]]


/* WARNING: Removing unreachable block (ram,0x00ad8035) */
/* WARNING: Removing unreachable block (ram,0x00ad806d) */
/* WARNING: Removing unreachable block (ram,0x00ad8119) */
/* WARNING: Removing unreachable block (ram,0x00ad8151) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad7e90(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3725f;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar7 = *(uint *)(in_ECX + 0x84);
  local_2c = 0;
  if (uVar7 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x80) + local_2c * 4);
      uVar5 = 0;
      if (*(uint *)(param_1 + 0x84) != 0) {
        piVar11 = *(int **)(param_1 + 0x80);
        do {
          if (*(int *)(*piVar11 + 0x10) == *(int *)(iVar2 + 0x10)) {
            iVar8 = (*(int **)(param_1 + 0x80))[uVar5];
            goto LAB_00ad7f25;
          }
          uVar5 = uVar5 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0x84));
      }
      iVar8 = 0;
LAB_00ad7f25:
      iVar6 = FUN_00ae9590(uVar4);
      if (iVar8 != 0) {
        piVar11 = *(int **)(*(int *)(iVar8 + 0x1c) + 4);
        iVar6 = iVar6 * 0x20;
        iVar9 = *(int *)(iVar2 + 0x1c) + iVar6;
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 4))();
        }
        piVar3 = *(int **)(iVar9 + 4);
        *(int **)(iVar9 + 4) = piVar11;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        piVar11 = *(int **)(*(int *)(iVar8 + 0x1c) + 0xc);
        iVar9 = iVar6 + 8 + *(int *)(iVar2 + 0x1c);
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 4))();
        }
        piVar3 = *(int **)(iVar9 + 4);
        *(int **)(iVar9 + 4) = piVar11;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        if ((*(int *)(*(int *)(iVar8 + 0x1c) + 0x14) != 0) &&
           (iVar9 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x1c) + 0x14) + 0x10))(), iVar9 != 0))
        {
          iVar9 = *(int *)(in_ECX + 0xfc) * 0x20 + *(int *)(iVar2 + 0x1c);
          if (*(int *)(iVar9 + 4) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(**(int **)(iVar9 + 4) + 0x10))();
          }
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x14) != 0) {
            (**(code **)(**(int **)(*(int *)(iVar8 + 0x1c) + 0x14) + 0x10))();
          }
          uVar10 = FUN_00aeb300(uVar10,in_ECX);
          FUN_00ad8ad0(uVar10);
          iVar9 = iVar6 + 0x10 + *(int *)(iVar2 + 0x1c);
          local_4 = 0;
          piVar11 = *(int **)(iVar9 + 4);
          *(undefined4 *)(iVar9 + 4) = 0;
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 8))();
          }
          local_4 = 0xffffffff;
        }
        if ((*(int *)(*(int *)(iVar8 + 0x1c) + 0x1c) != 0) &&
           (iVar9 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x1c) + 0x1c) + 0x10))(), iVar9 != 0))
        {
          iVar9 = *(int *)(in_ECX + 0xfc) * 0x20;
          if (*(int *)(iVar9 + 0xc + *(int *)(iVar2 + 0x1c)) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(**(int **)(iVar9 + *(int *)(iVar2 + 0x1c) + 0xc) + 0x10))();
          }
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x1c) != 0) {
            (**(code **)(**(int **)(*(int *)(iVar8 + 0x1c) + 0x1c) + 0x10))();
          }
          uVar10 = FUN_00aeb300(uVar10,in_ECX);
          FUN_00ad8ad0(uVar10);
          iVar2 = iVar6 + 0x18 + *(int *)(iVar2 + 0x1c);
          local_4 = 1;
          piVar11 = *(int **)(iVar2 + 4);
          *(undefined4 *)(iVar2 + 4) = 0;
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 8))();
          }
          local_4 = 0xffffffff;
        }
      }
      local_2c = local_2c + 1;
    } while (local_2c < uVar7);
  }
  FUN_00ad3190(*(int *)(in_ECX + 0xfc) + 1);
  *(undefined2 *)(*(int *)(in_ECX + 0xfc) * 0x10 + *(int *)(in_ECX + 200) + 0xc) = 0x191;
  uVar7 = *(uint *)(*(int *)(param_1 + 200) + 4);
  if (*(uint *)(*(int *)(in_ECX + 0xfc) * 0x10 + *(int *)(in_ECX + 200) + 8) < uVar7) {
    FUN_00ae6430(uVar7);
  }
  local_2c = 0;
  if (uVar7 != 0) {
    do {
      iVar8 = **(int **)(param_1 + 200);
      piVar11 = (int *)(*(int *)(in_ECX + 0xfc) * 0x10 + *(int *)(in_ECX + 200));
      iVar2 = piVar11[1];
      uVar4 = iVar2 + 1;
      piVar11[1] = uVar4;
      if ((uint)piVar11[2] < uVar4) {
        iVar2 = iVar2 + 2;
        if (iVar2 == 0) {
          piVar11[1] = 0;
          piVar11[2] = 0;
          if (*piVar11 != 0) {
            (*(code *)PTR__free_00f01b10)(*piVar11);
            *piVar11 = 0;
          }
        }
        else {
          if (*piVar11 == 0) {
            iVar6 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 8,(short)piVar11[3],4,2,0,0xffffffff);
          }
          else {
            iVar6 = (*(code *)PTR_FUN_00f01b0c)(*piVar11,iVar2 * 8);
          }
          *piVar11 = iVar6;
          piVar11[2] = iVar2;
        }
      }
      puVar1 = (undefined4 *)(*piVar11 + (piVar11[1] + -1) * 8);
      local_4 = 2;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_00e3fb28;
        puVar1[1] = 0;
        piVar11 = *(int **)(iVar8 + local_2c * 8 + 4);
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 4))();
        }
        piVar3 = (int *)puVar1[1];
        puVar1[1] = piVar11;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
      }
      local_2c = local_2c + 1;
      local_4 = 0xffffffff;
    } while (local_2c < uVar7);
  }
  iVar2 = *(int *)(in_ECX + 0xdc);
  iVar8 = *(int *)(param_1 + 0xd8);
  piVar11 = (int *)(in_ECX + 0xd8);
  uVar7 = iVar2 + 1;
  *(uint *)(in_ECX + 0xdc) = uVar7;
  if (*(uint *)(in_ECX + 0xe0) < uVar7) {
    iVar2 = iVar2 + 2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0xdc) = 0;
      *(undefined4 *)(in_ECX + 0xe0) = 0;
      if (*piVar11 != 0) {
        (*(code *)PTR__free_00f01b10)(*piVar11);
        *piVar11 = 0;
      }
    }
    else {
      if (*piVar11 == 0) {
        iVar6 = (*(code *)PTR_FUN_00f01b08)
                          (iVar2 * 8,*(undefined2 *)(in_ECX + 0xe4),4,2,0,0xffffffff);
      }
      else {
        iVar6 = (*(code *)PTR_FUN_00f01b0c)(*piVar11,iVar2 * 8);
      }
      *piVar11 = iVar6;
      *(int *)(in_ECX + 0xe0) = iVar2;
    }
  }
  puVar1 = (undefined4 *)(*piVar11 + (*(int *)(in_ECX + 0xdc) + -1) * 8);
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00ddd998;
    puVar1[1] = 0;
    piVar11 = *(int **)(iVar8 + 4);
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 4))();
    }
    piVar3 = (int *)puVar1[1];
    puVar1[1] = piVar11;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0xfc) + 1;
  local_4 = 0xffffffff;
  if (param_2 != '\0') {
    FUN_00ad7d30();
    (*(code *)PTR__free_00f01b10)(param_1);
  }
  ExceptionList = local_c;
  return;
}

