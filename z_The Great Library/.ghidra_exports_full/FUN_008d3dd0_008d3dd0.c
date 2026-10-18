// FUN_008d3dd0 @ 008d3dd0 body=[[008d3dd0, 008d3e13]]


uint FUN_008d3dd0(int param_1)

{
  uint in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    in_EAX = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x156c);
    if ((in_EAX != 0) && (*(int *)(in_ECX + 0x1c) == *(int *)(in_EAX + 8))) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

