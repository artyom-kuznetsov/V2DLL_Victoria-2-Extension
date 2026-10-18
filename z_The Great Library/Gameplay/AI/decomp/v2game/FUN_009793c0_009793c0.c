// FUN_009793c0 @ 009793c0 body=[[009793c0, 0097942c]]


void FUN_009793c0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) & 0xfffffff8U)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + iVar3 * 8);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 4 + iVar3 * 8);
      if ((-1 < iVar2) && ((0 < iVar2 || (iVar1 != 0)))) {
        FUN_0099f370(iVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 3);
  }
  return;
}

