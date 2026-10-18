// FUN_004cd940 @ 004cd940 body=[[004cd940, 004cd994] [004cd99b, 004cd9af]]


void FUN_004cd940(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[2];
  do {
    if (iVar1 == 0) {
      return;
    }
    piVar2 = (int *)*unaff_ESI;
    piVar3 = (int *)*piVar2;
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if ((int *)*piVar2 == piVar3) {
        if (piVar2 != (int *)0x0) {
          if ((char)unaff_ESI[3] == '\0') {
            iVar1 = piVar2[1];
            iVar4 = piVar2[2];
            if (iVar1 != 0) {
              *(int *)(iVar1 + 8) = iVar4;
            }
            if (iVar4 != 0) {
              *(int *)(iVar4 + 4) = iVar1;
            }
            if (piVar2 == (int *)*unaff_ESI) {
              *unaff_ESI = iVar4;
            }
            if (piVar2 == (int *)unaff_ESI[1]) {
              unaff_ESI[1] = iVar1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar2);
          }
          *(undefined1 *)(piVar2 + 3) = 1;
        }
        break;
      }
    }
    pcVar5 = *(code **)(*piVar3 + 0x14);
    *(undefined1 *)(piVar3 + 1) = 0;
    (*pcVar5)();
    iVar1 = unaff_ESI[2];
  } while( true );
}

