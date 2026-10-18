// FUN_00ace390 @ 00ace390 body=[[00ace390, 00ace3ee]]


void FUN_00ace390(byte param_1)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x1ed);
  if (param_1 != (bVar1 >> 1 & 1)) {
    if (param_1 != 0) {
      *(byte *)(in_ECX + 0x1ed) = bVar1 | 2;
      (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x24))();
      return;
    }
    *(byte *)(in_ECX + 0x1ed) = bVar1 & 0xfd;
    (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x28))();
  }
  return;
}

