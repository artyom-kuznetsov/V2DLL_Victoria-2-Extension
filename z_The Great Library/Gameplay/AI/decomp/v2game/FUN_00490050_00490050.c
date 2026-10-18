// FUN_00490050 @ 00490050 body=[[00490050, 004900a8] [004900b5, 004900c4] [004900c8, 004900cd] [004900da, 004900f4]]


void FUN_00490050(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b468a8;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_0048f3f0();
    local_8 = 0xffffffff;
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar2);
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2);
  }
  ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

