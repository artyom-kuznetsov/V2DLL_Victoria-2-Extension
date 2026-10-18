// FUN_005dc460 @ 005dc460  (requested 005DC460, first bytes: 55 8B EC 51 8B 06 53 57)


void FUN_005dc460(char param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      FUN_005cd850();
      cVar6 = (**(code **)(*piVar2 + 0x3c))();
      if (cVar6 != '\0') {
        (**(code **)(*piVar2 + 0x30))();
        FUN_005d7e20();
      }
    } while ((param_1 == '\0') || (piVar2[0x10] != 0));
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
    FUN_0068aa10(piVar2);
  } while( true );
}

