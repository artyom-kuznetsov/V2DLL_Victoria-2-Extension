// FUN_00ad8640 @ 00ad8640 body=[[00ad8640, 00ad8657] [00ad8660, 00ad86a4]]


undefined4 FUN_00ad8640(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b15770(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar3 * 4) + 0x10));
      cVar2 = FUN_00b147b0(param_1);
      if (cVar2 != '\0') {
        return *(undefined4 *)(*(int *)(in_ECX + 0x80) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

