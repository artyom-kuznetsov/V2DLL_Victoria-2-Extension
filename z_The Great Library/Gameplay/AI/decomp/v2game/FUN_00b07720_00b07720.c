// FUN_00b07720 @ 00b07720 body=[[00b07720, 00b07742]]


int FUN_00b07720(char param_1)

{
  int in_ECX;
  
  if ((param_1 != '\0') && (*(char *)(in_ECX + 8) != '\0')) {
    return *(int *)(in_ECX + 0x14) * *(int *)(in_ECX + 4) * 2;
  }
  return *(int *)(in_ECX + 0x14) * *(int *)(in_ECX + 4);
}

