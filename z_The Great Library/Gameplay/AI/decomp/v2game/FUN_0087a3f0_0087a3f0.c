// FUN_0087a3f0 @ 0087a3f0 body=[[0087a3f0, 0087a438] [0087a442, 0087a455] [0087a459, 0087a46d]]


void FUN_0087a3f0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a2eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CEffect::vftable;
  piVar1 = in_ECX + 2;
  local_8 = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

