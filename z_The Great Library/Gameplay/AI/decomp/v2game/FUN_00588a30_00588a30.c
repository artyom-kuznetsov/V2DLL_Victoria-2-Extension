// FUN_00588a30 @ 00588a30 body=[[00588a30, 00588a68]]


uint FUN_00588a30(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x40) != 0) && (in_EAX = 0, *(int *)(in_ECX + 0x44) != 0)) &&
     (in_EAX = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x44) * 4),
     *(int *)(in_EAX + 300) == *(int *)(in_ECX + 0x40))) {
    return CONCAT31((int3)(in_EAX >> 8),*(int *)(*(int *)(in_EAX + 0x188) + 0x244) != 4);
  }
  return in_EAX & 0xffffff00;
}

