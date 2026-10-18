// FUN_008b9240 @ 008b9240 body=[[008b9240, 008b9282]]


undefined4 FUN_008b9240(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar3 * 4) + 0x18))(param_1);
      if (cVar1 == '\x01') {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 1;
}

