// FUN_0051b430 @ 0051b430 body=[[0051b430, 0051b4b5] [0051b4bf, 0051b4d3]]


void FUN_0051b430(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x66c);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      puVar2 = (undefined4 *)*piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(DAT_012588e8 + 0xb0c) < (int)puVar2[4]);
    for (piVar3 = *(int **)(unaff_ESI + 0x66c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if ((undefined4 *)*piVar3 == puVar2) {
        if (piVar3 != (int *)0x0) {
          if (*(char *)(unaff_ESI + 0x678) == '\0') {
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar5;
            }
            if (iVar5 != 0) {
              *(int *)(iVar5 + 4) = iVar4;
            }
            if (piVar3 == *(int **)(unaff_ESI + 0x66c)) {
              *(int *)(unaff_ESI + 0x66c) = iVar5;
            }
            if (piVar3 == *(int **)(unaff_ESI + 0x670)) {
              *(int *)(unaff_ESI + 0x670) = iVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar3);
          }
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        break;
      }
    }
    (**(code **)*puVar2)(1);
  } while( true );
}

