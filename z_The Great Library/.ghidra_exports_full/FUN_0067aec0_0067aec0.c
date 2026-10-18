// FUN_0067aec0 @ 0067aec0 body=[[0067aec0, 0067b04a] [0067b04e, 0067b0bf]]


void FUN_0067aec0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint in_stack_00000024;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c528;
  iVar1 = param_2 - param_1;
  local_8 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  do {
    iVar1 = iVar1 / 0x1c;
    if (iVar1 < 0x21) {
LAB_0067b007:
      if (1 < iVar1) {
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0067b6f0(param_1,param_2);
      }
LAB_0067b03c:
      if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0067b5f0();
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0067b680(param_1,param_2);
        goto LAB_0067b03c;
      }
      goto LAB_0067b007;
    }
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0067b1a0(&local_18,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_18 - param_1) / 0x1c < (param_2 - local_14) / 0x1c) {
      FUN_00408ed0(&param_4,0,0xffffffff);
      FUN_0067aec0(param_1,local_18,param_3);
      param_1 = local_14;
    }
    else {
      FUN_00408ed0(&param_4,0,0xffffffff);
      FUN_0067aec0(local_14,param_2,param_3);
      param_2 = local_18;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

