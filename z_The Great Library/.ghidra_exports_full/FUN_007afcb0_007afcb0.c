// FUN_007afcb0 @ 007afcb0 body=[[007afcb0, 007afd12]]


void FUN_007afcb0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return;
  }
  iVar2 = FUN_007b0180(*(undefined4 *)(param_1 + 4),param_1);
  iVar1 = *(int *)(param_1 + 4);
  for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x24) {
    FUN_007a91c0(iVar3);
  }
  *(int *)(param_1 + 4) = iVar2;
  *param_2 = param_3;
  return;
}

