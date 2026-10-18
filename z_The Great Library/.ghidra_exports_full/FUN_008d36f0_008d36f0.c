// FUN_008d36f0 @ 008d36f0 body=[[008d36f0, 008d3749]]


uint FUN_008d36f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar2 * 4) + 0x156c);
  if ((iVar1 != 0) && (*(int **)(iVar1 + 8) != (int *)0x0)) {
    uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x1c))();
    if (((char)uVar2 != '\0') &&
       (uVar2 = *(uint *)(in_ECX + 0x1c), (int)uVar2 <= *(int *)(iVar1 + 0xc))) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

