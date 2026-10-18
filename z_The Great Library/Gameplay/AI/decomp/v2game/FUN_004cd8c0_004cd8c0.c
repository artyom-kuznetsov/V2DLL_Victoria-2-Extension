// FUN_004cd8c0 @ 004cd8c0 body=[[004cd8c0, 004cd924] [004cd92b, 004cd93e]]


void FUN_004cd8c0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar7 = (**(code **)(*piVar2 + 8))();
    } while (cVar7 != '\0');
    for (puVar3 = (undefined4 *)*unaff_ESI; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      if ((int *)*puVar3 == piVar2) {
        if (puVar3 != (undefined4 *)0x0) {
          if ((char)unaff_ESI[3] == '\0') {
            iVar4 = puVar3[1];
            iVar5 = puVar3[2];
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar5;
            }
            if (iVar5 != 0) {
              *(int *)(iVar5 + 4) = iVar4;
            }
            if (puVar3 == (undefined4 *)*unaff_ESI) {
              *unaff_ESI = iVar5;
            }
            if (puVar3 == (undefined4 *)unaff_ESI[1]) {
              unaff_ESI[1] = iVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar3);
          }
          *(undefined1 *)(puVar3 + 3) = 1;
        }
        break;
      }
    }
    pcVar6 = *(code **)(*piVar2 + 0x14);
    *(undefined1 *)(piVar2 + 1) = 0;
    (*pcVar6)();
  } while( true );
}

