// FUN_009b30f0 @ 009b30f0 body=[[009b30f0, 009b315e] [009b3168, 009b317e] [009b318b, 009b31a5]]


void FUN_009b30f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  do {
    if (piVar1 == (int *)0x0) {
      if (*(int *)(in_ECX + 8) == 0) {
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 0xc) = 0;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(int *)(in_ECX + 8));
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x14) != '\0') {
      DAT_013f08e0 = DAT_013f08e0 + -1;
    }
    for (piVar3 = *(int **)(iVar2 + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == in_ECX + 4) {
        if (piVar3 != (int *)0x0) {
          if (*(char *)(iVar2 + 0x10) == '\0') {
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar5;
            }
            if (iVar5 != 0) {
              *(int *)(iVar5 + 4) = iVar4;
            }
            if (piVar3 == *(int **)(iVar2 + 4)) {
              *(int *)(iVar2 + 4) = iVar5;
            }
            if (piVar3 == *(int **)(iVar2 + 8)) {
              *(int *)(iVar2 + 8) = iVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar3);
          }
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        break;
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

