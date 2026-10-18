// FUN_00b1ea80 @ 00b1ea80 body=[[00b1ea80, 00b1eaa1]]


void FUN_00b1ea80(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00b19ad0();
  *(byte *)(in_ECX + 0x15) = *(byte *)(in_ECX + 0x15) | 8;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined1 *)(in_ECX + 0x14) = 1;
  *(undefined1 **)(in_ECX + 0xc) = &LAB_00b1e080;
  return;
}

