// FUN_00add270 @ 00add270 body=[[00add270, 00add2b2]]


uint FUN_00add270(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x24);
  iVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + uVar4 * 4) + 4))();
      if (iVar2 == param_1) {
        if (param_2 == iVar3) {
          return uVar4;
        }
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}

