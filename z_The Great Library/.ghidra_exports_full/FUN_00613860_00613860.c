// FUN_00613860 @ 00613860 body=[[00613860, 006138aa] [006138ae, 006138c7] [006138cb, 006138ec]]


void FUN_00613860(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cd16;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x50))();
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 == (int *)0x0) {
    FUN_004097a0(param_1 + 0x34);
    *(undefined ***)(param_1 + 0x10) = CTextBufferObserver::vftable;
    ExceptionList = local_10;
    return;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

