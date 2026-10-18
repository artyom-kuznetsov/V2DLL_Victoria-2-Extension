// FUN_00828030 @ 00828030 body=[[00828030, 00828054]]


void FUN_00828030(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xf8) = 1;
  FUN_0082d0f0(in_ECX);
  uVar1 = FUN_00828060(in_ECX);
  *(undefined4 *)(in_ECX + 0x30) = uVar1;
  return;
}

