// FUN_009692c0 @ 009692c0 body=[[009692c0, 00969309]]


undefined4 FUN_009692c0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = 0;
  if (DAT_01258a20 != 0) {
    do {
      uVar1 = *(uint *)(*(int *)(in_EAX + 0x48) + uVar2 * 4);
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
        uVar5 = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01258a20);
  }
  if ((int)uVar5 < *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2) {
    return *(undefined4 *)(*(int *)(DAT_012587e8 + 0xc) + uVar5 * 4);
  }
  uVar3 = FUN_00561180();
  return uVar3;
}

