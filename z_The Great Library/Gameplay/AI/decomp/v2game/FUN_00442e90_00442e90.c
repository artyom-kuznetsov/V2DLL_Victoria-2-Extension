// FUN_00442e90 @ 00442e90 body=[[00442e90, 00442ebf]]


undefined4 FUN_00442e90(int param_1)

{
  int in_ECX;
  
  if ((((param_1 != *(int *)(in_ECX + 0x30)) || (*(int *)(in_ECX + 0x30) == 0)) &&
      ((param_1 != *(int *)(in_ECX + 0x38) || (*(int *)(in_ECX + 0x38) == 0)))) &&
     (param_1 != *(int *)(in_ECX + 0x34))) {
    return 0;
  }
  return 1;
}

