// FUN_00ae6930 @ 00ae6930 body=[[00ae6930, 00ae6975]]


undefined4 FUN_00ae6930(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 8);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_00b147b0(param_1);
      if (cVar2 != '\0') {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc + uVar3 * 0x10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}

