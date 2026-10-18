// FUN_009666f0 @ 009666f0 body=[[009666f0, 00966759]]


int FUN_009666f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = 0;
  if ((*(int *)(unaff_EDI + 0x40) - *(int *)(unaff_EDI + 0x3c) & 0xfffffffcU) != 0) {
    piVar3 = *(int **)(unaff_EDI + 0x3c);
    iVar2 = *(int *)(unaff_EDI + 0x40) - (int)piVar3 >> 2;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        uVar1 = *(undefined4 *)(*piVar3 + 0x60);
        if ((((char)uVar1 == 'R') && ((char)((uint)uVar1 >> 8) == 'E')) &&
           ((char)((uint)uVar1 >> 0x10) == 'B')) {
          iVar4 = iVar4 + -1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = FUN_00965870(unaff_EDI,0);
  return iVar2 + iVar4;
}

