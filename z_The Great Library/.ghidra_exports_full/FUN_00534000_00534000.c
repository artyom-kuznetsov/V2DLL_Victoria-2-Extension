// FUN_00534000 @ 00534000 body=[[00534000, 0053409a]]


ulonglong FUN_00534000(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  if (*(int *)(in_EAX + 0x142c) == 0) {
    iVar2 = *(int *)(in_EAX + 0x141c);
    iVar3 = *(int *)(in_EAX + 0x1418);
    if (iVar3 != iVar2) {
      do {
        if (*(int *)(iVar3 + 4) == *(int *)(in_EDX + 4)) break;
        iVar3 = iVar3 + 8;
      } while (iVar3 != iVar2);
    }
    return (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != iVar2);
  }
  uVar1 = *(uint *)(in_EDX + 4);
  if (uVar1 != *(uint *)(in_EAX + 0x142c)) {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x142c) * 4);
    iVar3 = *(int *)(iVar2 + 0x141c);
    iVar2 = *(int *)(iVar2 + 0x1418);
    if (iVar2 != iVar3) {
      do {
        if (*(uint *)(iVar2 + 4) == uVar1) break;
        iVar2 = iVar2 + 8;
      } while (iVar2 != iVar3);
      if (iVar2 != iVar3) goto LAB_00534068;
    }
    return (ulonglong)uVar1 << 0x20;
  }
LAB_00534068:
  return CONCAT44(uVar1,1);
}

