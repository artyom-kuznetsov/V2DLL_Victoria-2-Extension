// FUN_004500a0 @ 004500a0 body=[[004500a0, 004500b7]]


uint FUN_004500a0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  do {
    if (*(char *)(in_ECX + 0x3b0 + uVar1) != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xb);
  return uVar1 & 0xffffff00;
}

