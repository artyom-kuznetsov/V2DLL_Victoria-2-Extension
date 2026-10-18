// FUN_007b1480 @ 007b1480 body=[[007b1480, 007b14a9] [007b14b0, 007b1515]]


void FUN_007b1480(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  void **ppvVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  param_3 = (undefined4 *)*param_3;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar1, param_3 != (undefined4 *)0x0) {
    uVar3 = *param_3;
    param_3 = (undefined4 *)param_3[2];
    iVar2 = FUN_00aae9af(0x100);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007b0bf0(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb24),param_1,uVar3);
    }
    local_8 = 0xffffffff;
    (**(code **)(*param_2 + 0x10))(uVar3,1);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

