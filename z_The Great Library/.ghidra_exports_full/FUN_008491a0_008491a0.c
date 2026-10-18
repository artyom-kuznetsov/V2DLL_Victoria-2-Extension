// FUN_008491a0 @ 008491a0 body=[[008491a0, 008491fc] [00849200, 00849231]]


void FUN_008491a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_64;
  
  iVar1 = param_1;
  if (param_1 != param_2) {
    while (iVar2 = iVar1 + 100, iVar2 != param_2) {
      FUN_00849680();
      if (*(int *)(param_1 + 4) < local_64) {
        FUN_00849b60(param_1);
        FUN_00849680();
        iVar1 = iVar2;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
        iVar3 = iVar2;
        while (iVar1 < local_64) {
          FUN_00849680();
          iVar1 = *(int *)(iVar3 + -0xc4);
          iVar3 = iVar3 + -100;
        }
        FUN_00849680();
        iVar1 = iVar2;
      }
    }
  }
  return;
}

