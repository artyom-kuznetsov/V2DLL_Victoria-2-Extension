// FUN_0058a2b0 @ 0058a2b0 body=[[0058a2b0, 0058a312]]


uint FUN_0058a2b0(void)

{
  int iVar1;
  uint in_EAX;
  int in_ECX;
  
  if ((-1 < *(int *)(in_ECX + 0x3c)) && (*(int *)(in_ECX + 0x44) != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4);
    in_EAX = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x13c) / 1000;
    if ((int)in_EAX <= *(int *)(iVar1 + 0x15c4) - *(int *)(iVar1 + 0x15c0)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

