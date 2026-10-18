// FUN_005cbd70 @ 005cbd70 body=[[005cbd70, 005cbdae]]


uint FUN_005cbd70(void)

{
  uint in_EAX;
  int *piVar1;
  
  if (((*(int *)(in_EAX + 0xec) < 1) && (*(char *)(in_EAX + 0x104) == '\0')) &&
     (*(char *)(in_EAX + 0x164) == '\0')) {
    piVar1 = (int *)FUN_005cd690(in_EAX);
    return CONCAT31((int3)((uint)*piVar1 >> 8),DAT_0125ff7c < *piVar1);
  }
  return in_EAX & 0xffffff00;
}

