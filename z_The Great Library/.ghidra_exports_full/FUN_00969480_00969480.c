// FUN_00969480 @ 00969480 body=[[00969480, 009694c4]]


undefined4 FUN_00969480(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (DAT_01258a14 != 0) {
    do {
      uVar1 = *(uint *)(*(int *)(in_EAX + 0x24) + uVar2 * 4);
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
        uVar4 = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01258a14);
    return *(undefined4 *)(*(int *)(DAT_01258a3c + 0xc) + uVar4 * 4);
  }
  return **(undefined4 **)(DAT_01258a3c + 0xc);
}

