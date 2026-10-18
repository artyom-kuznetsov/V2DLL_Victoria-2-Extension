// FUN_00788920 @ 00788920 body=[[00788920, 00788994]]


void FUN_00788920(int param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  
  if (in_ECX <= param_2) {
    *(int *)(param_1 + in_ECX * 4) = *param_3;
    return;
  }
  while( true ) {
    iVar4 = (in_ECX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar4 * 4);
    iVar2 = *(int *)(iVar1 + 0x5c);
    if (param_4 == '\0') {
      bVar3 = iVar2 < *(int *)(*param_3 + 0x5c);
    }
    else {
      bVar3 = *(int *)(*param_3 + 0x5c) < iVar2;
    }
    if (!bVar3) break;
    *(int *)(param_1 + in_ECX * 4) = iVar1;
    in_ECX = iVar4;
    if (iVar4 <= param_2) {
      *(int *)(param_1 + iVar4 * 4) = *param_3;
      return;
    }
  }
  *(int *)(param_1 + in_ECX * 4) = *param_3;
  return;
}

