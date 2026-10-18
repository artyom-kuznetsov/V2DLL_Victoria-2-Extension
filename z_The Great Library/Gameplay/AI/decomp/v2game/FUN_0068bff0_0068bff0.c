// FUN_0068bff0 @ 0068bff0 body=[[0068bff0, 0068c03c]]


bool FUN_0068bff0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  bool bVar3;
  
  if (*(int *)(in_EAX + 4) == *(int *)(in_ECX + 4)) {
    return true;
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  iVar1 = *(int *)(iVar2 + 0xd6c);
  iVar2 = *(int *)(iVar2 + 0xd68);
  bVar3 = iVar2 == iVar1;
  if (!bVar3) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_ECX + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
    bVar3 = iVar2 == iVar1;
  }
  return !bVar3;
}

