// FUN_00923a10 @ 00923a10 body=[[00923a10, 00923acf]]


undefined4 FUN_00923a10(char param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != '\0') {
    return 1;
  }
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2c) * 4) + 0x31) != '\0')
     && (*(int *)(in_ECX + 0x2c) != *(int *)(in_ECX + 0xc))) {
    iVar1 = FUN_009311f0();
    if (0 < iVar1) {
      iVar1 = FUN_009311f0();
      iVar2 = FUN_009311f0();
      if (iVar2 <= iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

