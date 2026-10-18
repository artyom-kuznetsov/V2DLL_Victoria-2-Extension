// FUN_00aed590 @ 00aed590 body=[[00aed590, 00aed5ce]]


undefined4 FUN_00aed590(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 8);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 4) + uVar3 * 4) + 4))();
      if (iVar2 == param_1) {
        return *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

