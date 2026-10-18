// FUN_008b91e0 @ 008b91e0 body=[[008b91e0, 008b9238]]


void FUN_008b91e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  param_4 = param_4 / iVar2;
  if (param_4 < 1) {
    param_4 = 1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar1 * 4) + 0x30))
                (param_1,param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}

