// FUN_009a23c0 @ 009a23c0 body=[[009a23c0, 009a241f]]


void FUN_009a23c0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x20) {
      FUN_00408ed0(param_4,0,0xffffffff);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
      iVar2 = iVar2 + 0x20;
    }
    FUN_009e6a80();
    *(int *)(param_1 + 4) = iVar2;
  }
  *param_2 = param_3;
  return;
}

