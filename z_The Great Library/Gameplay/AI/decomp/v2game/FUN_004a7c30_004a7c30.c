// FUN_004a7c30 @ 004a7c30 body=[[004a7c30, 004a7d1d] [004a7d20, 004a7d9e] [004a7da0, 004a7df7] [004a7dfe, 004a7e6d]]


void FUN_004a7c30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  bool bVar9;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3fed8;
  local_14 = ExceptionList;
  for (piVar1 = (int *)*param_1; (piVar1 != (int *)0x0 && (*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  ExceptionList = &local_14;
  FUN_005f2ae0(piVar1);
  *(undefined1 *)(in_ECX + 4) = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    if (*(int *)(in_ECX + 0x10) == 1) {
      FUN_004cd7f0();
      ExceptionList = local_14;
      return;
    }
    piVar5 = *(int **)(in_ECX + 8);
    iVar8 = *piVar5;
    piVar1 = (int *)(in_ECX + 8);
    for (; (piVar5 != (int *)0x0 && (*piVar5 != iVar8)); piVar5 = (int *)piVar5[2]) {
    }
    FUN_005f2ae0(piVar5);
    iVar2 = *(int *)(in_ECX + 0xc);
    piVar5 = (int *)FUN_00aae9af(0x10);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar8;
      piVar5[1] = iVar2;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar8 = *(int *)(in_ECX + 0x10);
    *(int **)(in_ECX + 0xc) = piVar5;
    *(int *)(in_ECX + 0x10) = iVar8 + 1;
    if (iVar8 == 0) {
      *piVar1 = (int)piVar5;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
    piVar5 = (int *)*piVar1;
    local_20 = 0;
    local_c = 0;
    piVar7 = (int *)0x0;
    piVar6 = (int *)0x0;
    while (piVar3 = piVar6, piVar4 = piVar7, piVar5 != (int *)0x0) {
      iVar8 = *piVar5;
      piVar5 = (int *)piVar5[2];
      piVar7 = piVar4;
      piVar6 = piVar3;
      if (*(int *)(iVar8 + 0xc4) != *(int *)(DAT_012588e8 + 0xb60)) {
        piVar6 = (int *)FUN_00aae9af(0x10);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar8;
          piVar6[1] = (int)piVar3;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar8 = local_20 + 1;
        bVar9 = local_20 != 0;
        piVar7 = piVar6;
        local_20 = iVar8;
        if (bVar9) {
          piVar3[2] = (int)piVar6;
          piVar7 = piVar4;
        }
      }
    }
    while (piVar4 != (int *)0x0) {
      piVar5 = (int *)piVar4[2];
      iVar8 = *piVar4;
      for (piVar7 = (int *)*piVar1; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
        if (*piVar7 == iVar8) {
          if (piVar7 != (int *)0x0) {
            if (*(char *)(in_ECX + 0x14) == '\0') {
              iVar8 = piVar7[1];
              iVar2 = piVar7[2];
              if (iVar8 != 0) {
                *(int *)(iVar8 + 8) = iVar2;
              }
              if (iVar2 != 0) {
                *(int *)(iVar2 + 4) = iVar8;
              }
              if (piVar7 == (int *)*piVar1) {
                *piVar1 = iVar2;
              }
              if (piVar7 == *(int **)(in_ECX + 0xc)) {
                *(int *)(in_ECX + 0xc) = iVar8;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar7);
            }
            *(undefined1 *)(piVar7 + 3) = 1;
          }
          break;
        }
      }
      iVar2 = *(int *)(in_ECX + 0xc);
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar8;
        piVar7[1] = iVar2;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar8 = *(int *)(in_ECX + 0x10);
      *(int **)(in_ECX + 0xc) = piVar7;
      *(int *)(in_ECX + 0x10) = iVar8 + 1;
      piVar4 = piVar5;
      if (iVar8 == 0) {
        *piVar1 = (int)piVar7;
      }
      else {
        *(int **)(iVar2 + 8) = piVar7;
      }
    }
    FUN_004cd7f0();
    FUN_009a63f0();
  }
  ExceptionList = local_14;
  return;
}

