// FUN_00ad4a10 @ 00ad4a10 body=[[00ad4a10, 00ad4a73]]


uint FUN_00ad4a10(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar4 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar5 * 4) + 0x1c);
      if (((*(int *)(iVar2 + 4 + param_1 * 0x20) != 0) &&
          (iVar2 = (**(code **)(**(int **)(iVar2 + 4 + param_1 * 0x20) + 0x10))(), iVar2 != 0)) &&
         (uVar3 = FUN_00add910(), uVar4 <= uVar3)) {
        uVar4 = uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return uVar4;
}

