// FUN_009694d0 @ 009694d0 body=[[009694d0, 00969514]]


undefined4 FUN_009694d0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (DAT_01258a18 != 0) {
    do {
      uVar1 = *(uint *)(*(int *)(in_EAX + 0x28) + uVar2 * 4);
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
        uVar4 = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01258a18);
    return *(undefined4 *)(*(int *)(DAT_01258a48 + 0x18) + uVar4 * 4);
  }
  return **(undefined4 **)(DAT_01258a48 + 0x18);
}

