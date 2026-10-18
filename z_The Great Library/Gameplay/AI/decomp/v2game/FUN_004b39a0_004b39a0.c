// FUN_004b39a0 @ 004b39a0 body=[[004b39a0, 004b3a1b] [004b3a25, 004b3a2e]]


void FUN_004b39a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 200);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while ((*(int *)(iVar2 + 8) != param_1) ||
            (piVar4 = *(int **)(unaff_ESI + 200), piVar4 == (int *)0x0));
    do {
      if (*piVar4 == iVar2) {
        if (piVar4 != (int *)0x0) {
          if (*(char *)(unaff_ESI + 0xd4) == '\0') {
            iVar2 = piVar4[1];
            iVar3 = piVar4[2];
            if (iVar2 != 0) {
              *(int *)(iVar2 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar2;
            }
            if (piVar4 == *(int **)(unaff_ESI + 200)) {
              *(int *)(unaff_ESI + 200) = iVar3;
            }
            if (piVar4 == *(int **)(unaff_ESI + 0xcc)) {
              *(int *)(unaff_ESI + 0xcc) = iVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar4);
          }
          *(undefined1 *)(piVar4 + 3) = 1;
        }
        break;
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
  } while( true );
}

