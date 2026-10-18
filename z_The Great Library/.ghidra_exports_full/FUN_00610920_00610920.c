// FUN_00610920 @ 00610920 body=[[00610920, 006109c3]]


void FUN_00610920(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *param_1 * 0x10) + param_3 * 4) <
      *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4)) {
    *in_ECX = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_2;
  if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *in_ECX * 0x10) + param_3 * 4) <
      *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4)) {
    *param_2 = *in_ECX;
    *in_ECX = iVar1;
  }
  iVar1 = *in_ECX;
  if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *param_1 * 0x10) + param_3 * 4) <
      *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4)) {
    *in_ECX = *param_1;
    *param_1 = iVar1;
  }
  return;
}

