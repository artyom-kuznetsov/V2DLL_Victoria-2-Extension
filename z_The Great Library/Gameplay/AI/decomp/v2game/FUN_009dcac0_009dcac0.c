// FUN_009dcac0 @ 009dcac0 body=[[009dcac0, 009dcb08]]


int FUN_009dcac0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar4 = *(int *)(unaff_EDI + iVar2 * 4);
      if (0 < iVar4) {
        iVar3 = iVar3 + iVar4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
    if (iVar3 != 0) {
      iVar4 = 0;
      iVar2 = 0;
      do {
        iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
        if ((0 < iVar1) && (iVar4 = iVar4 + iVar1, param_2 % iVar3 < iVar4)) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
  }
  return -1;
}

