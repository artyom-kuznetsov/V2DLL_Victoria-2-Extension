// FUN_004b64e0 @ 004b64e0 body=[[004b64e0, 004b6506]]


undefined4 FUN_004b64e0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x14c);
  iVar2 = *(int *)(in_EAX + 0x148);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_EDX + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar1);
}

