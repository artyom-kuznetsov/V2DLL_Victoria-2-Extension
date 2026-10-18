// FUN_005b54c0 @ 005b54c0 body=[[005b54c0, 005b55ba]]


void FUN_005b54c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int in_EAX;
  int *piVar5;
  int *piVar6;
  int unaff_ESI;
  
  piVar5 = *(int **)(in_EAX + 0x7b4);
joined_r0x005b54d0:
  do {
    do {
      if (piVar5 == (int *)0x0) {
        return;
      }
      piVar6 = (int *)piVar5[2];
      iVar1 = *piVar5;
      iVar2 = *(int *)(iVar1 + 0x74);
      if ((iVar2 != 0) && (cVar4 = FUN_0059c160(iVar2), cVar4 == '\0')) {
        for (piVar5 = *(int **)(unaff_ESI + 4); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
          if (*piVar5 == iVar2) goto LAB_005b5548;
        }
        iVar3 = *(int *)(unaff_ESI + 8);
        piVar5 = (int *)FUN_00aae9af(0x10);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar2;
          piVar5[1] = iVar3;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar2 = *(int *)(unaff_ESI + 0xc);
        *(int **)(unaff_ESI + 8) = piVar5;
        *(int *)(unaff_ESI + 0xc) = iVar2 + 1;
        if (iVar2 == 0) {
          *(int **)(unaff_ESI + 4) = piVar5;
        }
        else {
          *(int **)(iVar3 + 8) = piVar5;
        }
      }
LAB_005b5548:
      iVar1 = *(int *)(iVar1 + 0x70);
      piVar5 = piVar6;
    } while ((iVar1 == 0) || (cVar4 = FUN_0059c160(iVar1), cVar4 != '\0'));
    for (piVar6 = *(int **)(unaff_ESI + 4); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if (*piVar6 == iVar1) goto joined_r0x005b54d0;
    }
    iVar2 = *(int *)(unaff_ESI + 8);
    piVar6 = (int *)FUN_00aae9af(0x10);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar1;
      piVar6[1] = iVar2;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar1 = *(int *)(unaff_ESI + 0xc);
    *(int **)(unaff_ESI + 8) = piVar6;
    *(int *)(unaff_ESI + 0xc) = iVar1 + 1;
    if (iVar1 == 0) {
      *(int **)(unaff_ESI + 4) = piVar6;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  } while( true );
}

