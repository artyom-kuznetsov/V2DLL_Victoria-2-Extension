// FUN_00ae6a40 @ 00ae6a40 body=[[00ae6a40, 00ae6a7e]]


uint FUN_00ae6a40(undefined4 param_1)

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
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}

