// FUN_009b6860 @ 009b6860 body=[[009b6860, 009b68bf]]


void FUN_009b6860(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x20) {
      FUN_00408ed0(param_4,0,0xffffffff);
      *(undefined1 *)(iVar2 + 0x1c) = *(undefined1 *)(param_4 + 0x1c);
      iVar2 = iVar2 + 0x20;
    }
    FUN_009e6a80();
    *(int *)(param_1 + 4) = iVar2;
  }
  *param_2 = param_3;
  return;
}

