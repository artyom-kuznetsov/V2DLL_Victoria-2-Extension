// FUN_00ace930 @ 00ace930 body=[[00ace930, 00ace9a1]]


uint FUN_00ace930(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x19c) + 4 + param_1 * 0x10);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x19c) + param_1 * 0x10);
      if (*(int *)(iVar2 + 4 + uVar4 * 8) != 0) {
        (**(code **)(**(int **)(iVar2 + uVar4 * 8 + 4) + 0x10))();
      }
      uVar5 = param_2;
      FUN_00adf900(param_2);
      cVar3 = FUN_00b14730(uVar5);
      if (cVar3 != '\0') {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}

