// FUN_008f0740 @ 008f0740 body=[[008f0740, 008f07cb]]


uint FUN_008f0740(int param_1)

{
  uint in_EAX;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)in_EAX != '\0') {
      in_EAX = *(uint *)(*(int *)(param_1 + 0x14) + 0x1c4);
      if ((*(int *)(in_ECX + 0x24) <= (int)in_EAX) &&
         ((*(int *)(in_ECX + 0x24) < (int)in_EAX ||
          (*(uint *)(in_ECX + 0x20) <= *(uint *)(*(int *)(param_1 + 0x14) + 0x1c0))))) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      goto LAB_008f07c2;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    if ((*(int *)(in_ECX + 0x24) <= *(int *)(in_EAX + 0xdfc)) &&
       ((*(int *)(in_ECX + 0x24) < *(int *)(in_EAX + 0xdfc) ||
        (in_EAX = *(uint *)(in_EAX + 0xdf8), *(uint *)(in_ECX + 0x20) <= in_EAX)))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
LAB_008f07c2:
  return in_EAX & 0xffffff00;
}

