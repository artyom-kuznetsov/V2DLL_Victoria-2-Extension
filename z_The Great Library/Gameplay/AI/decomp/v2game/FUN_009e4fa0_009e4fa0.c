// FUN_009e4fa0 @ 009e4fa0 body=[[009e4fa0, 009e4fd6]]


void FUN_009e4fa0(void)

{
  int in_ECX;
  uint uVar1;
  
  for (uVar1 = *(uint *)(in_ECX + 0x424);
      (*(uint *)(in_ECX + 0x424) <= uVar1 && (uVar1 < *(uint *)(in_ECX + 0x428)));
      uVar1 = uVar1 + 0x20) {
    FUN_009e4f90(*(undefined4 *)(uVar1 + 0x1c));
  }
  return;
}

