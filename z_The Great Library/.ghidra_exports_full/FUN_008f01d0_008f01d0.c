// FUN_008f01d0 @ 008f01d0 body=[[008f01d0, 008f025b]]


uint FUN_008f01d0(int param_1)

{
  uint in_EAX;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)in_EAX != '\0') {
      in_EAX = *(uint *)(*(int *)(param_1 + 0x14) + 0x1bc);
      if ((*(int *)(in_ECX + 0x24) <= (int)in_EAX) &&
         ((*(int *)(in_ECX + 0x24) < (int)in_EAX ||
          (*(uint *)(in_ECX + 0x20) <= *(uint *)(*(int *)(param_1 + 0x14) + 0x1b8))))) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      goto LAB_008f0252;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    if ((*(int *)(in_ECX + 0x24) <= *(int *)(in_EAX + 0xdf4)) &&
       ((*(int *)(in_ECX + 0x24) < *(int *)(in_EAX + 0xdf4) ||
        (in_EAX = *(uint *)(in_EAX + 0xdf0), *(uint *)(in_ECX + 0x20) <= in_EAX)))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
LAB_008f0252:
  return in_EAX & 0xffffff00;
}

