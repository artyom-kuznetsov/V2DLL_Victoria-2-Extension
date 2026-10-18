// FUN_00442720 @ 00442720 body=[[00442720, 0044274a]]


undefined4 FUN_00442720(int param_1)

{
  int in_ECX;
  
  if (((param_1 != *(int *)(in_ECX + 0x30)) || (*(int *)(in_ECX + 0x30) == 0)) &&
     ((param_1 != *(int *)(in_ECX + 0x38) || (*(int *)(in_ECX + 0x38) == 0)))) {
    return 0;
  }
  return 1;
}

