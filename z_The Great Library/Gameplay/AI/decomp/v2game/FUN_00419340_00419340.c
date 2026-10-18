// FUN_00419340 @ 00419340 body=[[00419340, 004193ab]]


void FUN_00419340(int param_1,int *param_2,int param_3,int param_4)

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
    FUN_00419950();
    iVar2 = iVar2 + 0x10;
  }
  FUN_004197b0(*(undefined4 *)(param_1 + 4),param_1);
  *(int *)(param_1 + 4) = iVar2;
  *param_2 = param_3;
  return;
}

