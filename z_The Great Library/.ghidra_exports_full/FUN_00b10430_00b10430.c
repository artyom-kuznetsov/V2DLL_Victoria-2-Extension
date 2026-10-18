// FUN_00b10430 @ 00b10430 body=[[00b10430, 00b10473]]


uint FUN_00b10430(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(in_ECX + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = param_1;
      FUN_00b0f3f0(param_1);
      cVar2 = FUN_00b14730(uVar4);
      if (cVar2 != '\0') {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}

