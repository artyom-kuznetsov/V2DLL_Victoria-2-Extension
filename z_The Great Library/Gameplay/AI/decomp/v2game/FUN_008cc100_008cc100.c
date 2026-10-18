// FUN_008cc100 @ 008cc100 body=[[008cc100, 008cc136]]


uint FUN_008cc100(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar1 = *(uint *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(param_1 + 0x10) * 4),
     (*(int *)(uVar1 + 300) == 0) == (bool)*(char *)(in_ECX + 0x1c))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

