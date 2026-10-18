// FUN_00460250 @ 00460250 body=[[00460250, 00460298] [0046029e, 004602ab] [004602af, 004602d3]]


void FUN_00460250(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d437;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CNewsDataBase::vftable;
  local_8 = 0;
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    local_8 = 5;
    FUN_004622f0(*(undefined4 *)param_1[0x79],(undefined4 *)param_1[0x79]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x79]);
  }
  if (*piVar1 != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

