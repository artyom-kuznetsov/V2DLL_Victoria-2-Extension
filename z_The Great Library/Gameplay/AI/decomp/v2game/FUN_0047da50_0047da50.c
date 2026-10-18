// FUN_0047da50 @ 0047da50 body=[[0047da50, 0047da8f]]


void FUN_0047da50(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  
  bVar1 = *(byte *)(in_EDX + 8 + in_EAX);
  if (bVar1 != 0) {
    iVar2 = *(int *)(in_EAX + 0x48);
    *(undefined4 *)(iVar2 + (uint)bVar1 * 8) = param_1;
    *(undefined4 *)(iVar2 + 4 + (uint)bVar1 * 8) = param_2;
    return;
  }
  *(char *)(in_EDX + 8 + in_EAX) = (char)(*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 3);
  FUN_00423920();
  return;
}

