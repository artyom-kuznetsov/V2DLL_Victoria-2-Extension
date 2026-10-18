// FUN_005aa0b0 @ 005aa0b0  (requested 005AA0B0, first bytes: 56 8B F1 E8 48 42 FF FF)


void FUN_005aa0b0(void)

{
  int in_ECX;
  
  FUN_0059e300();
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x130);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x134);
  return;
}

