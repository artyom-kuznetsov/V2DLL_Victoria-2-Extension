// FUN_009010c0 @ 009010c0 body=[[009010c0, 00901120]]


ulonglong FUN_009010c0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 in_EDX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return CONCAT44(in_EDX,param_1) & 0xffffffffffffff00;
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if ((*(char *)(iVar1 + 0xcf5) == '\0') && (*(char *)(iVar1 + 0xcf4) == '\0')) {
    return (ulonglong)(*(char *)(in_ECX + 0x1c) != '\0');
  }
  return (ulonglong)(*(char *)(in_ECX + 0x1c) != '\x01');
}

