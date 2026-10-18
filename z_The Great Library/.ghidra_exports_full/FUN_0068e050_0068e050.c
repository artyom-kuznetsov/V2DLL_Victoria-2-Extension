// FUN_0068e050 @ 0068e050 body=[[0068e050, 0068e068] [0068e074, 0068e087] [0068e090, 0068e0e4]]


void FUN_0068e050(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  
  iVar4 = 0;
  if (*(int *)(unaff_ESI + 0x94) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x94));
  }
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  do {
    iVar1 = *(int *)(unaff_ESI + 0x98);
    piVar3 = (int *)FUN_00aae9af(0x10);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = iVar4;
      piVar3[1] = iVar1;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar2 = *(int *)(unaff_ESI + 0x9c);
    *(int **)(unaff_ESI + 0x98) = piVar3;
    *(int *)(unaff_ESI + 0x9c) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(unaff_ESI + 0x94) = piVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xe);
  return;
}

