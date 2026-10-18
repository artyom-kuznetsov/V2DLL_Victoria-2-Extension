// FUN_00549030 @ 00549030 body=[[00549030, 00549087]]


void FUN_00549030(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = in_ECX + 0x18;
  *(int *)(in_ECX + 0x24) = in_ECX + 0x1c;
  *(int *)(in_ECX + 0x10) = in_ECX + 8;
  *(int *)(in_ECX + 0x30) = in_ECX + 0x28;
  *(undefined4 **)(in_ECX + 0x14) = (undefined4 *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0x34) = in_ECX + 0x2c;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  **(undefined4 **)(in_ECX + 0x24) = 0;
  **(undefined4 **)(in_ECX + 0x34) = 0;
  **(undefined4 **)(in_ECX + 0x10) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  return;
}

