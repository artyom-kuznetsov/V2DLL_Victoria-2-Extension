// FUN_0055cff0 @ 0055cff0 body=[[0055cff0, 0055d05a]]


void FUN_0055cff0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_3;
  for (; param_4 != iVar1; param_4 = param_4 + 0x10) {
    FUN_004134a0(param_4);
    iVar2 = iVar2 + 0x10;
  }
  FUN_00463b30(*(undefined4 *)(param_1 + 4),param_1);
  *(int *)(param_1 + 4) = iVar2;
  *param_2 = param_3;
  return;
}

