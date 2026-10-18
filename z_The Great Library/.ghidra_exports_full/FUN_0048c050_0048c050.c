// FUN_0048c050 @ 0048c050 body=[[0048c050, 0048c072]]


int FUN_0048c050(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int in_EDX;
  
  iVar2 = *in_ECX;
  iVar1 = 0;
  if (iVar2 != 0) {
    while (in_EDX != iVar2) {
      iVar2 = *(int *)(iVar2 + 0x224);
      iVar1 = iVar1 + 1;
      if (iVar2 == 0) {
        return -1;
      }
    }
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return -1;
}

