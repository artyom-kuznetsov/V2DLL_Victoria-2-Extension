// FUN_00826d20 @ 00826d20  (requested 00826D20, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_00826d20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int unaff_ESI;
  char cStack00000007;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar8 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar4 = FUN_005cc3e0();
  if (cVar4 != '\0') {
    ExceptionList = local_10;
    return;
  }
  if (0 < *(int *)(unaff_ESI + 0xec)) {
    if (*(char *)(unaff_ESI + 0x104) == '\0') {
      if (*(int **)(unaff_ESI + 0x74) == (int *)0x0) {
        if (*(int *)(unaff_ESI + 0x40) < 1) {
          ExceptionList = local_10;
          return;
        }
      }
      else {
        cVar4 = (**(code **)(**(int **)(unaff_ESI + 0x74) + 0x2c))();
        if (cVar4 == '\0') {
          ExceptionList = local_10;
          return;
        }
      }
    }
    uVar1 = *(undefined4 *)(unaff_ESI + 0x144);
    *(undefined4 *)(unaff_ESI + 0x144) = 0;
    iVar5 = (**(code **)(*param_1 + 0x1a4))();
    cVar4 = '\0';
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x1a4))();
      cVar4 = FUN_004a81b0();
    }
    cStack00000007 = cVar4;
    iVar5 = (**(code **)(*piVar8 + 0x1b4))();
    local_11 = '\0';
    if (iVar5 != 0) {
      (**(code **)(*piVar8 + 0x1b4))();
      local_11 = FUN_004a81b0();
    }
    iVar5 = FUN_00aae9af();
    local_8 = 0;
    if (iVar5 != 0) {
      FUN_005df690();
    }
    local_8 = 0xffffffff;
    iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
    iVar5 = FUN_009c16d0();
    if (((iVar5 != 0) && (iVar5 != 8)) && (*(int *)(iVar5 + 0x13c) == 0)) {
      if (cStack00000007 != '\0') {
        piVar6 = (int *)(**(code **)(*piVar8 + 0x1a4))();
        iVar2 = piVar6[1];
        piVar7 = (int *)FUN_00aae9af();
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = unaff_ESI;
          piVar7[1] = iVar2;
          piVar7[2] = 0;
          *(undefined1 *)(piVar7 + 3) = 0;
        }
        iVar3 = piVar6[2];
        piVar6[1] = (int)piVar7;
        piVar6[2] = iVar3 + 1;
        if (iVar3 == 0) {
          *piVar6 = (int)piVar7;
        }
        else {
          *(int **)(iVar2 + 8) = piVar7;
        }
      }
      if (local_11 != '\0') {
        piVar8 = (int *)(**(code **)(*piVar8 + 0x1b4))();
        iVar2 = piVar8[1];
        piVar6 = (int *)FUN_00aae9af();
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = unaff_ESI;
          piVar6[1] = iVar2;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar3 = piVar8[2];
        piVar8[1] = (int)piVar6;
        piVar8[2] = iVar3 + 1;
        if (iVar3 == 0) {
          *piVar8 = (int)piVar6;
        }
        else {
          *(int **)(iVar2 + 8) = piVar6;
        }
      }
      *(undefined4 *)(iVar5 + 0x13c) = uVar1;
    }
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

