// FUN_00ad3b90 @ 00ad3b90 body=[[00ad3b90, 00ad3bd7]]


uint FUN_00ad3b90(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_00b14730(param_1);
      if (cVar2 == '\x01') {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}

