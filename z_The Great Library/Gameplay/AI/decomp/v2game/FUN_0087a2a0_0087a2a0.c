// FUN_0087a2a0 @ 0087a2a0 body=[[0087a2a0, 0087a2cc] [0087a2d0, 0087a308] [0087a312, 0087a32c]]


void FUN_0087a2a0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3aacb;
  local_10 = ExceptionList;
  if (0xf < (uint)param_1[0xd]) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[8]);
  }
  ExceptionList = &local_10;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
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

