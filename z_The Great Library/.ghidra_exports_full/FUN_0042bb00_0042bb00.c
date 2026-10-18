// FUN_0042bb00 @ 0042bb00 body=[[0042bb00, 0042bb23]]


undefined4 FUN_0042bb00(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar1 = in_EAX[1];
  iVar2 = *in_EAX;
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_EDX + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar1);
}

