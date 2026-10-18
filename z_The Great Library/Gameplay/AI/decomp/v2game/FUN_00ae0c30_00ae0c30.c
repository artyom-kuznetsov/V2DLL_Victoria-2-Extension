// FUN_00ae0c30 @ 00ae0c30 body=[[00ae0c30, 00ae0c44]]


void FUN_00ae0c30(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  if (*(uint *)(in_ECX + 0x28) < *(uint *)(in_ECX + 0x24)) {
    FUN_00ae0ab0(*(uint *)(in_ECX + 0x24) + 10);
  }
  return;
}

