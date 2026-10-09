// FUN_0059b190 @ 0059b190

void FUN_0059b190(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EDI;
  
  iVar2 = FUN_0059c520(*(undefined4 *)(unaff_EDI + 0x1c));
  uVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_0059ae90();
      if (iVar3 == 0) break;
      uVar1 = uVar5 + 1;
      iVar3 = ((uint)((uVar5 & 1) == 0) * 2 + -1) * ((int)uVar1 / 2);
      if ((((*(int *)(unaff_EDI + 300 + iVar3 * 4) == 0) &&
           (*(int *)(unaff_EDI + 0xac + iVar3 * 4) == 0)) && (iVar4 = iVar3 + 0x10, -1 < iVar4)) &&
         ((iVar4 < 0x1f && (*(int *)(param_1 + 0x6c + iVar4 * 4) != 0)))) {
        iVar4 = FUN_0059ae90();
        *(int *)(unaff_EDI + 300 + iVar3 * 4) = iVar4;
        for (piVar6 = *(int **)(unaff_EDI + 0x16c); (piVar6 != (int *)0x0 && (*piVar6 != iVar4));
            piVar6 = (int *)piVar6[2]) {
        }
        FUN_005f2ae0(piVar6);
      }
      uVar5 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  uVar5 = 0;
  if (0 < iVar2) {
    while (piVar6 = *(int **)(unaff_EDI + 0x16c), piVar6 != (int *)0x0) {
      FUN_00401000(0x42c90000);
      iVar3 = FUN_00b31c00();
      while( true ) {
        iVar4 = *piVar6;
        piVar6 = (int *)piVar6[2];
        if (((iVar3 <= *(int *)(iVar4 + 0x3c)) && (999 < *(int *)(iVar4 + 0x40))) &&
           (*(int *)(*(int *)(iVar4 + 0x38) + 0x23c) < 1)) break;
        if (piVar6 == (int *)0x0) goto LAB_0059b35b;
      }
      uVar1 = uVar5 & 1;
      uVar5 = uVar5 + 1;
      iVar3 = ((uint)(uVar1 == 0) * 2 + -1) * ((int)uVar5 / 2);
      if ((*(int *)(unaff_EDI + 300 + iVar3 * 4) == 0) &&
         (*(int *)(unaff_EDI + 0xac + iVar3 * 4) == 0)) {
        iVar4 = FUN_0059ae90();
        *(int *)(unaff_EDI + 300 + iVar3 * 4) = iVar4;
        for (piVar6 = *(int **)(unaff_EDI + 0x16c); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2])
        {
          if (*piVar6 == iVar4) {
            if (piVar6 != (int *)0x0) {
              if (*(char *)(unaff_EDI + 0x178) == '\0') {
                iVar2 = piVar6[1];
                iVar3 = piVar6[2];
                if (iVar2 != 0) {
                  *(int *)(iVar2 + 8) = iVar3;
                }
                if (iVar3 != 0) {
                  *(int *)(iVar3 + 4) = iVar2;
                }
                if (piVar6 == *(int **)(unaff_EDI + 0x16c)) {
                  *(int *)(unaff_EDI + 0x16c) = iVar3;
                }
                if (piVar6 == *(int **)(unaff_EDI + 0x170)) {
                  *(int *)(unaff_EDI + 0x170) = iVar2;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(piVar6);
              }
              *(undefined1 *)(piVar6 + 3) = 1;
            }
            break;
          }
        }
      }
      if (iVar2 <= (int)uVar5) break;
    }
  }
LAB_0059b35b:
  uVar5 = 0;
  do {
    piVar6 = *(int **)(unaff_EDI + 0x16c);
    if (piVar6 == (int *)0x0) {
      return;
    }
    FUN_00401000(0x42c90000);
    iVar2 = FUN_00b31c00();
    while( true ) {
      iVar3 = *piVar6;
      piVar6 = (int *)piVar6[2];
      if ((iVar2 <= *(int *)(iVar3 + 0x3c)) && (999 < *(int *)(iVar3 + 0x40))) break;
      if (piVar6 == (int *)0x0) {
        return;
      }
    }
    uVar1 = uVar5 & 1;
    uVar5 = uVar5 + 1;
    iVar3 = ((uint)(uVar1 == 0) * 2 + -1) * ((int)uVar5 / 2);
    if (*(int *)(unaff_EDI + 300 + iVar3 * 4) == 0) {
      piVar6 = *(int **)(unaff_EDI + 0x16c);
      do {
        if (piVar6 == (int *)0x0) {
          iVar4 = 0;
          break;
        }
        iVar4 = *piVar6;
        piVar6 = (int *)piVar6[2];
      } while ((*(int *)(iVar4 + 0x3c) < iVar2) || (*(int *)(iVar4 + 0x40) < 1000));
      *(int *)(unaff_EDI + 300 + iVar3 * 4) = iVar4;
      for (piVar6 = *(int **)(unaff_EDI + 0x16c); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
        if (*piVar6 == iVar4) {
          if (piVar6 != (int *)0x0) {
            if (*(char *)(unaff_EDI + 0x178) == '\0') {
              iVar2 = piVar6[1];
              iVar3 = piVar6[2];
              if (iVar2 != 0) {
                *(int *)(iVar2 + 8) = iVar3;
              }
              if (iVar3 != 0) {
                *(int *)(iVar3 + 4) = iVar2;
              }
              if (piVar6 == *(int **)(unaff_EDI + 0x16c)) {
                *(int *)(unaff_EDI + 0x16c) = iVar3;
              }
              if (piVar6 == *(int **)(unaff_EDI + 0x170)) {
                *(int *)(unaff_EDI + 0x170) = iVar2;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar6);
            }
            *(undefined1 *)(piVar6 + 3) = 1;
          }
          break;
        }
      }
    }
    if (0x1d < (int)uVar5) {
      return;
    }
  } while( true );
}


