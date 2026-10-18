// FUN_0067c7c0 @ 0067c7c0 body=[[0067c7c0, 0067c7f7] [0067c800, 0067c8c1] [0067c8c5, 0067c8d5]]


void FUN_0067c7c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c528;
  local_8 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = in_ECX;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar3 = iVar1 + 2;
    if (param_2 <= iVar3) break;
    cVar2 = FUN_006477c0();
    if (cVar2 != '\0') {
      iVar3 = iVar1 + 1;
    }
    FUN_00408ed0();
  }
  if (iVar3 == param_2) {
    FUN_00408ed0();
  }
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0067c960(param_1,in_ECX,param_3);
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

