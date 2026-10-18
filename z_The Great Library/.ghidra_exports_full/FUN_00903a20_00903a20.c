// FUN_00903a20 @ 00903a20 body=[[00903a20, 00903a57]]


bool FUN_00903a20(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x40) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_00464de0(*(int *)(param_1 + 0x28));
    return iVar1 == *(int *)(in_ECX + 0x3c);
  }
  return false;
}

