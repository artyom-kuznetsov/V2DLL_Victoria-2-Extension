// FUN_004138b0 @ 004138b0 body=[[004138b0, 00413909]]


void FUN_004138b0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x1c) {
      FUN_00408ed0(param_4,0,0xffffffff);
      iVar2 = iVar2 + 0x1c;
    }
    FUN_00413860();
    *(int *)(param_1 + 4) = iVar2;
  }
  *param_2 = param_3;
  return;
}

