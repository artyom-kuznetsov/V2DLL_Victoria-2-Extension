// FUN_004194a0 @ 004194a0 body=[[004194a0, 0041950a]]


void FUN_004194a0(int param_1,int *param_2,int param_3,int param_4)

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
    FUN_00419a50(param_4);
    iVar2 = iVar2 + 0x10;
  }
  FUN_00419800(*(undefined4 *)(param_1 + 4),param_1);
  *(int *)(param_1 + 4) = iVar2;
  *param_2 = param_3;
  return;
}

