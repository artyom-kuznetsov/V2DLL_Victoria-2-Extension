// FUN_00826290 @ 00826290 body=[[00826290, 00826305] [00826312, 00826328] [00826335, 0082634f]]


void FUN_00826290(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x54);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        if (*(int *)(in_ECX + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(int *)(in_ECX + 0x54));
        }
        *(undefined4 *)(in_ECX + 0x54) = 0;
        *(undefined4 *)(in_ECX + 0x58) = 0;
        *(undefined4 *)(in_ECX + 0x5c) = 0;
        return;
      }
      iVar2 = *piVar1;
      piVar5 = *(int **)(iVar2 + 0x148);
      piVar1 = (int *)piVar1[2];
    } while (piVar5 == (int *)0x0);
    do {
      if (*piVar5 == in_ECX) {
        if (piVar5 != (int *)0x0) {
          if (*(char *)(iVar2 + 0x154) == '\0') {
            iVar3 = piVar5[1];
            iVar4 = piVar5[2];
            if (iVar3 != 0) {
              *(int *)(iVar3 + 8) = iVar4;
            }
            if (iVar4 != 0) {
              *(int *)(iVar4 + 4) = iVar3;
            }
            if (piVar5 == *(int **)(iVar2 + 0x148)) {
              *(int *)(iVar2 + 0x148) = iVar4;
            }
            if (piVar5 == *(int **)(iVar2 + 0x14c)) {
              *(int *)(iVar2 + 0x14c) = iVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar5);
          }
          *(undefined1 *)(piVar5 + 3) = 1;
        }
        break;
      }
      piVar5 = (int *)piVar5[2];
    } while (piVar5 != (int *)0x0);
  } while( true );
}

