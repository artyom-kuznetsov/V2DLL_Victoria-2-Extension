// FUN_007534e0 @ 007534e0 body=[[007534e0, 00753536]]


void FUN_007534e0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x10) {
      FUN_009beeb0(param_4);
      iVar2 = iVar2 + 0x10;
    }
    FUN_004651b0(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 4) = iVar2;
  }
  *param_2 = param_3;
  return;
}

