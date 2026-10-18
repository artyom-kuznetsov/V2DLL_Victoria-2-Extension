// FUN_00896dd0 @ 00896dd0 body=[[00896dd0, 00896e0b]]


void FUN_00896dd0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + 0x58);
  __allmul(uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11,*(undefined4 *)(in_ECX + 0x20),
           *(undefined4 *)(in_ECX + 0x24));
  FUN_00955fd0();
  return;
}

