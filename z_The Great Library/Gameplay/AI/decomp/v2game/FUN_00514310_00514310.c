// FUN_00514310 @ 00514310 body=[[00514310, 0051436e]]


int FUN_00514310(int param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0xa60) + 0x50) + 1000;
  if (*(char *)(in_ECX + 0x3a) != '\0') {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x9c) + 0x2f8);
  }
  iVar1 = __alldiv((longlong)iVar1 * (longlong)*(int *)(in_ECX + 0xc0),1000,0);
  iVar1 = iVar1 / 1000;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

