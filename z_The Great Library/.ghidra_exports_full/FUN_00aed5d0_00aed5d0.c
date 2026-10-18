// FUN_00aed5d0 @ 00aed5d0 body=[[00aed5d0, 00aed60e]]


undefined4 FUN_00aed5d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x14) + uVar3 * 4) + 4))();
      if (iVar2 == param_1) {
        return *(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

