// FUN_00826f50 @ 00826f50 body=[[00826f50, 00826f8d]]


undefined4 FUN_00826f50(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa0) != 0) {
    return *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0xa0) * 4);
  }
  if (0 < *(int *)(in_ECX + 0xec)) {
    return *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(in_ECX + 0xe8) * 4);
  }
  return 0;
}

