// FUN_009b31b0 @ 009b31b0 body=[[009b31b0, 009b3227] [009b322e, 009b324d] [009b3257, 009b3288] [009b3295, 009b329b]]


void FUN_009b31b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  
  piVar4 = param_1;
  do {
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int **)(in_ECX + 8);
      if (param_1 != piVar4) {
        if (param_1 != (int *)0x0) {
          iVar5 = param_1[1];
          *(int *)(in_ECX + 0xc) = iVar5;
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 8) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(param_1);
        }
        return;
      }
      if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar4);
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      return;
    }
    if (in_ECX == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = in_ECX + 4;
    }
    iVar1 = *piVar4;
    if (*(char *)(iVar1 + 0x14) != '\0') {
      DAT_013f08e0 = DAT_013f08e0 + -1;
    }
    for (piVar2 = *(int **)(iVar1 + 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == iVar5) {
        if (piVar2 != (int *)0x0) {
          if (*(char *)(iVar1 + 0x10) == '\0') {
            iVar5 = piVar2[1];
            iVar3 = piVar2[2];
            if (iVar5 != 0) {
              *(int *)(iVar5 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar5;
            }
            if (piVar2 == *(int **)(iVar1 + 4)) {
              *(int *)(iVar1 + 4) = iVar3;
            }
            if (piVar2 == *(int **)(iVar1 + 8)) {
              *(int *)(iVar1 + 8) = iVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar2);
          }
          *(undefined1 *)(piVar2 + 3) = 1;
        }
        break;
      }
    }
    piVar4 = (int *)piVar4[2];
  } while( true );
}

