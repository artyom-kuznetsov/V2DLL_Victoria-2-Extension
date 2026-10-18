// FUN_006122e0 @ 006122e0 body=[[006122e0, 00612358]]


void FUN_006122e0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (in_ECX <= param_2) {
    *(int *)(param_1 + in_ECX * 4) = *param_3;
    return;
  }
  do {
    iVar2 = (in_ECX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + iVar1 * 0x10) + param_4 * 4) <=
        *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *param_3 * 0x10) + param_4 * 4)) {
      *(int *)(param_1 + in_ECX * 4) = *param_3;
      return;
    }
    *(int *)(param_1 + in_ECX * 4) = iVar1;
    in_ECX = iVar2;
  } while (param_2 < iVar2);
  *(int *)(param_1 + iVar2 * 4) = *param_3;
  return;
}

