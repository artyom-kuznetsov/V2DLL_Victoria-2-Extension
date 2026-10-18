// FUN_00589fc0 @ 00589fc0 body=[[00589fc0, 00589ff0]]


uint FUN_00589fc0(void)

{
  int iVar1;
  uint in_EAX;
  int in_ECX;
  
  if (((-1 < *(int *)(in_ECX + 0x3c)) && (*(int *)(in_ECX + 0x44) != 0)) &&
     ((iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8), in_EAX = 0, iVar1 == 0 ||
      ((in_EAX = *(uint *)(iVar1 + 0xc), in_EAX == 0 ||
       (*(int *)(in_EAX + 0x6c) != *(int *)(in_ECX + 0x3c))))))) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

