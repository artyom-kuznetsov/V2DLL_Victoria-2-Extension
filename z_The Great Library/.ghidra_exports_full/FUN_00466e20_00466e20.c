// FUN_00466e20 @ 00466e20 body=[[00466e20, 00466e48]]


undefined4 FUN_00466e20(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int *)(in_ECX + 8) + 0x3a4 + in_EAX);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x3e4) + 4 + uVar2 * 8);
  if ((-1 < iVar1) && ((0 < iVar1 || (*(int *)(*(int *)(in_EAX + 0x3e4) + uVar2 * 8) != 0)))) {
    return 1;
  }
  return 0;
}

