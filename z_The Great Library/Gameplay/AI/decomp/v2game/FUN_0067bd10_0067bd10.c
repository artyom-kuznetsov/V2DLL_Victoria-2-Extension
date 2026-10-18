// FUN_0067bd10 @ 0067bd10 body=[[0067bd10, 0067be81] [0067be85, 0067be95]]


void FUN_0067bd10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c528;
  local_10 = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x1c;
  local_8 = 0;
  if (iVar1 < 0x29) {
    ExceptionList = &local_10;
    FUN_00408ed0(&param_4,0,0xffffffff);
  }
  else {
    iVar1 = iVar1 + 1;
    iVar3 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    ExceptionList = &local_10;
    FUN_00408ed0(&param_4,0,0xffffffff);
    iVar1 = iVar3 * 0x1c + param_1;
    FUN_0067c6a0(param_1,iVar1,iVar3 * 0x38 + param_1);
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0067c6a0(param_2 + iVar3 * -0x1c,param_2,iVar3 * 0x1c + param_2);
    FUN_00408ed0(&param_4,0,0xffffffff);
    iVar2 = param_3 + iVar3 * -0x1c;
    FUN_0067c6a0(param_3 + iVar3 * -0x38,iVar2,param_3);
    FUN_00408ed0(&param_4,0,0xffffffff);
    param_1 = iVar1;
    param_3 = iVar2;
  }
  FUN_0067c6a0(param_1,param_2,param_3);
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

