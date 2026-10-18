// FUN_00b18850 @ 00b18850 body=[[00b18850, 00b1886a]]


undefined4 FUN_00b18850(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xc) < param_1) {
    return 0;
  }
  *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 4) + param_1;
  return 1;
}

