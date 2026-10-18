// FUN_0088ee50 @ 0088ee50 body=[[0088ee50, 0088ee9c] [0088eea6, 0088eecb]]


void FUN_0088ee50(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3aacb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00849e90();
  *param_1 = CEffect::vftable;
  piVar1 = param_1 + 2;
  local_8 = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}

