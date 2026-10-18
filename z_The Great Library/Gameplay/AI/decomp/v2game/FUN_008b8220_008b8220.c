// FUN_008b8220 @ 008b8220 body=[[008b8220, 008b825f]]


void FUN_008b8220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar1 * 4) + 0x30))
                (param_1,param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}

