// FUN_00ad4b10 @ 00ad4b10 body=[[00ad4b10, 00ad4b27] [00ad4b30, 00ad4b5c]]


undefined4 FUN_00ad4b10(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_00ae8af0(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

