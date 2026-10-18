// FUN_005394d0 @ 005394d0 body=[[005394d0, 0053950f]]


int FUN_005394d0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (in_EDX == 2) {
    return *(int *)(param_1 + 0x1504) + iVar1 * 0x18;
  }
  if (in_EDX == 1) {
    return *(int *)(param_1 + 0x1514) + iVar1 * 0x18;
  }
  return *(int *)(param_1 + 0x1524) + iVar1 * 0x18;
}

