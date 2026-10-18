// FUN_00793510 @ 00793510 body=[[00793510, 00793567]]


void FUN_00793510(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  FUN_00793290();
  (**(code **)(*(int *)(*(int *)(in_EAX + 4) + 0x18) + 0x34))();
  iVar1 = *(int *)(in_EAX + 0x10);
  iVar2 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x14) - iVar1 & 0xfffffffcU)) {
    do {
      (**(code **)(*(int *)(*(int *)(iVar1 + iVar2 * 4) + 0x18) + 0x34))();
      iVar1 = *(int *)(in_EAX + 0x10);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_EAX + 0x14) - iVar1 >> 2);
  }
  FUN_00791bb0(in_EAX);
  return;
}

