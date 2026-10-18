// FUN_0051f2e0 @ 0051f2e0 body=[[0051f2e0, 0051f363]]


int FUN_0051f2e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = FUN_0051f370();
  iVar1 = *(int *)(unaff_ESI + 0x14c);
  iVar3 = *(int *)(unaff_ESI + 0x148);
  if (iVar3 != iVar1) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x20)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar1);
    if (iVar3 != iVar1) {
      return iVar2;
    }
  }
  if (*(int *)(unaff_ESI + 0xe8) != param_2) {
    iVar2 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xe8) *
                     (longlong)(iVar2 * 1000),1000,0);
    iVar2 = iVar2 / 1000;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

