// FUN_00533fd0 @ 00533fd0 body=[[00533fd0, 00533ff6]]


undefined4 FUN_00533fd0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x141c);
  iVar2 = *(int *)(in_EAX + 0x1418);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_EDX + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar1);
}

