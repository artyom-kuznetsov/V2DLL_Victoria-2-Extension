// FUN_0059a5f0 @ 0059a5f0 body=[[0059a5f0, 0059a725] [0059a72f, 0059a7cc] [0059a7d6, 0059a846]]


void FUN_0059a5f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
  iVar7 = *(int *)(iVar1 + 0x110);
  if ((iVar7 == 0) ||
     (iVar7 = *(int *)(iVar7 + 0x10),
     (int)(*(int *)(iVar7 + 0x38) - *(int *)(iVar7 + 0x34) & 0xfffffff8U) < 1)) {
    puVar5 = (undefined4 *)(iVar1 + 0x130);
  }
  else {
    puVar5 = *(undefined4 **)(iVar7 + 0x34);
  }
  uVar2 = *puVar5;
  iVar1 = puVar5[1];
  FUN_00594580(param_1,param_2);
  piVar6 = (int *)(in_ECX + 0xec);
  iVar7 = 0x20;
  do {
    for (piVar3 = *(int **)(param_1 + 0x38); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == piVar6[-0x20]) {
        piVar6[-0x20] = 0;
        break;
      }
    }
    for (piVar3 = *(int **)(param_1 + 0x38); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == *piVar6) {
        *piVar6 = 0;
        break;
      }
    }
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar6 = *(int **)(in_ECX + 0x16c);
joined_r0x0059a6a1:
  while (piVar6 != (int *)0x0) {
    iVar7 = *piVar6;
    piVar6 = (int *)piVar6[2];
    for (piVar3 = *(int **)(param_1 + 0x38); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == iVar7) {
        piVar3 = *(int **)(in_ECX + 0x16c);
        goto joined_r0x0059a6cb;
      }
    }
  }
  piVar6 = *(int **)(in_ECX + 0x17c);
joined_r0x0059a743:
  do {
    if (piVar6 == (int *)0x0) {
      iVar7 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
      if (iVar7 == 3) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
        if ((*(int *)(iVar7 + 0x110) == 0) ||
           (iVar4 = *(int *)(*(int *)(iVar7 + 0x110) + 0x10),
           (int)(*(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x34) & 0xfffffff8U) < 1)) {
          puVar5 = (undefined4 *)(iVar7 + 0x130);
        }
        else {
          puVar5 = *(undefined4 **)(iVar4 + 0x34);
        }
        if (iVar1 != puVar5[1]) {
          FUN_0048ea60(iVar7,*puVar5,puVar5[1],uVar2,iVar1);
        }
      }
      return;
    }
    iVar7 = *piVar6;
    piVar6 = (int *)piVar6[2];
    for (piVar3 = *(int **)(param_1 + 0x38); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == iVar7) {
        piVar3 = *(int **)(in_ECX + 0x17c);
        goto joined_r0x0059a775;
      }
    }
  } while( true );
joined_r0x0059a6cb:
  if (piVar3 == (int *)0x0) goto joined_r0x0059a6a1;
  if (*piVar3 == iVar7) {
    if (piVar3 != (int *)0x0) {
      if (*(char *)(in_ECX + 0x178) == '\0') {
        iVar1 = piVar3[1];
        iVar7 = piVar3[2];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar7;
        }
        if (iVar7 != 0) {
          *(int *)(iVar7 + 4) = iVar1;
        }
        if (piVar3 == *(int **)(in_ECX + 0x16c)) {
          *(int *)(in_ECX + 0x16c) = iVar7;
        }
        if (piVar3 == *(int **)(in_ECX + 0x170)) {
          *(int *)(in_ECX + 0x170) = iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar3);
      }
      *(undefined1 *)(piVar3 + 3) = 1;
    }
    goto joined_r0x0059a6a1;
  }
  piVar3 = (int *)piVar3[2];
  goto joined_r0x0059a6cb;
joined_r0x0059a775:
  if (piVar3 == (int *)0x0) goto joined_r0x0059a743;
  if (*piVar3 == iVar7) {
    if (piVar3 != (int *)0x0) {
      if (*(char *)(in_ECX + 0x188) == '\0') {
        iVar1 = piVar3[1];
        iVar7 = piVar3[2];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar7;
        }
        if (iVar7 != 0) {
          *(int *)(iVar7 + 4) = iVar1;
        }
        if (piVar3 == *(int **)(in_ECX + 0x17c)) {
          *(int *)(in_ECX + 0x17c) = iVar7;
        }
        if (piVar3 == *(int **)(in_ECX + 0x180)) {
          *(int *)(in_ECX + 0x180) = iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar3);
      }
      *(undefined1 *)(piVar3 + 3) = 1;
    }
    goto joined_r0x0059a743;
  }
  piVar3 = (int *)piVar3[2];
  goto joined_r0x0059a775;
}

