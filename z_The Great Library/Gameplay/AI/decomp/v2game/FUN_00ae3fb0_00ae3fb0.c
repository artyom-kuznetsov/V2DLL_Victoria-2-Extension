// FUN_00ae3fb0 @ 00ae3fb0 body=[[00ae3fb0, 00ae400c]]


void FUN_00ae3fb0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x80) + uVar3 * 4) + 0x1c);
      if (((*(int *)(iVar2 + 4) != 0) &&
          (iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x10))(), iVar2 != 0)) &&
         (iVar2 = FUN_00add310(0xfadefade,0), iVar2 != -1)) {
        FUN_00addac0(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

