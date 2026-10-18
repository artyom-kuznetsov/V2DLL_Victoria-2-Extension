// FUN_004c3f30 @ 004c3f30 body=[[004c3f30, 004c3f80]]


int FUN_004c3f30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar1 = (*(int *)(unaff_EDI + 0xcc) - *(int *)(unaff_EDI + 200)) / 0x24;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(*(int *)(unaff_EDI + 200) + 4);
    do {
      if (param_1 == *piVar2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar3 < iVar1);
  }
  return -1;
}

