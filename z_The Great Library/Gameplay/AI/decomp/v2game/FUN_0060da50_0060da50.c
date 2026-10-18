// FUN_0060da50 @ 0060da50 body=[[0060da50, 0060da8f]]


int FUN_0060da50(int param_1)

{
  uint *in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = in_ECX - param_1 >> 4;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(param_1 + iVar1 * 0x10) < *in_EAX) {
        param_1 = param_1 + 0x10 + iVar1 * 0x10;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

