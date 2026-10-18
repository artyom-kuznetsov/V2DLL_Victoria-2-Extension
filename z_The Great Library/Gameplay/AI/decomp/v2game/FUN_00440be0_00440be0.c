// FUN_00440be0 @ 00440be0 body=[[00440be0, 00440c15]]


undefined4 FUN_00440be0(int param_1)

{
  int in_ECX;
  
  if ((((param_1 != *(int *)(in_ECX + 0x28)) || (*(int *)(in_ECX + 0x28) == 0)) &&
      ((param_1 != *(int *)(in_ECX + 0x3c) || (*(int *)(in_ECX + 0x3c) == 0)))) &&
     ((param_1 != *(int *)(in_ECX + 0x40) || (*(int *)(in_ECX + 0x40) == 0)))) {
    return 0;
  }
  return 1;
}

