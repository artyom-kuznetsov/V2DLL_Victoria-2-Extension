// FUN_00903d40 @ 00903d40 body=[[00903d40, 00903d77]]


bool FUN_00903d40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x40) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_00464de0(*(int *)(param_1 + 0x28));
    return *(int *)(in_ECX + 0x3c) < iVar1;
  }
  return false;
}

