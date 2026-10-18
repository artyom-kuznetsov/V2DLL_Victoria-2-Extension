// FUN_0087a5f0 @ 0087a5f0 body=[[0087a5f0, 0087a62b] [0087a62f, 0087a668] [0087a672, 0087a68c]]


void FUN_0087a5f0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c3be;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_008b32d0();
  if (0xf < (uint)param_1[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[8]);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = CEffect::vftable;
  piVar1 = param_1 + 2;
  local_8 = 2;
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

