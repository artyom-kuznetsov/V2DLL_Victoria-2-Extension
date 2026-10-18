// FUN_0066a290 @ 0066a290 body=[[0066a290, 0066a2b9]]


uint FUN_0066a290(void)

{
  int iVar1;
  uint in_EAX;
  undefined3 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1614) == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(in_ECX + 0x1d18);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe1) != '\0')) {
    return CONCAT31(uVar2,1);
  }
  return CONCAT31(uVar2,*(char *)(in_ECX + 0x5c) == '\0');
}

