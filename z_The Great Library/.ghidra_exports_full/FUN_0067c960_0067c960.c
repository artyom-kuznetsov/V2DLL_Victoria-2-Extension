// FUN_0067c960 @ 0067c960 body=[[0067c960, 0067ca08] [0067ca0c, 0067ca1c]]


void FUN_0067c960(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  int in_ECX;
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c528;
  local_8 = 0;
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar2, param_2 < in_ECX) {
    in_ECX = (in_ECX + -1) / 2;
    iVar1 = param_1 + in_ECX * 0x1c;
    cVar3 = FUN_006477c0(&param_4,iVar1,param_3);
    if (cVar3 == '\0') break;
    FUN_00408ed0(iVar1,0,0xffffffff);
    ppvVar2 = ExceptionList;
  }
  FUN_00408ed0(param_3,0,0xffffffff);
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_4);
}

