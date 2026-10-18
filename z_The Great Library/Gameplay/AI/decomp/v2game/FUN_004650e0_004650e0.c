// FUN_004650e0 @ 004650e0 body=[[004650e0, 00465130]]


uint FUN_004650e0(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int iVar3;
  int in_ECX;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 4 <= (int)in_EAX) {
    return in_EAX & 0xffffff00;
  }
  piVar2 = (int *)(in_EAX * 0x10 + *(int *)(param_1 + 0x24));
  iVar1 = piVar2[1];
  iVar3 = *piVar2;
  bVar4 = iVar3 == iVar1;
  if (!bVar4) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(in_ECX + 4)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar1);
    bVar4 = iVar3 == iVar1;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),!bVar4);
}

