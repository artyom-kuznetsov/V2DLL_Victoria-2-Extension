// FUN_005cf1b0 @ 005cf1b0 body=[[005cf1b0, 005cf256]]


uint FUN_005cf1b0(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (((0 < *(int *)(in_ECX + 0xec)) &&
      (in_EAX = *(uint *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(in_ECX + 0xe8) * 4),
      in_EAX != 0)) && (*(int *)(in_EAX + 0x134) != 0)) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x134) * 4);
    if ((*(int *)(in_ECX + 0xc4) != *(int *)(in_EAX + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(in_EAX + 0xbe8) + *(int *)(in_ECX + 0xc4) * 4) + 0x34) != 0 ||
         (((*(char *)(in_ECX + 0xc0) == 'R' && (*(char *)(in_ECX + 0xc1) == 'E')) &&
          (*(char *)(in_ECX + 0xc2) == 'B')))) ||
        (((*(char *)(in_EAX + 0x1c) == 'R' && (*(char *)(in_EAX + 0x1d) == 'E')) &&
         (*(char *)(in_EAX + 0x1e) == 'B')))))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

