// FUN_00b1eab0 @ 00b1eab0 body=[[00b1eab0, 00b1ead1]]


void FUN_00b1eab0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00b19ad0();
  *(byte *)(in_ECX + 0x15) = *(byte *)(in_ECX + 0x15) | 8;
  *(undefined1 *)(in_ECX + 0x14) = 2;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined1 **)(in_ECX + 0xc) = &LAB_00b1e0a0;
  return;
}

