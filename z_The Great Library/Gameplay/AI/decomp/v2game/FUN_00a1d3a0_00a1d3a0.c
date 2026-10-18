// FUN_00a1d3a0 @ 00a1d3a0 body=[[00a1d3a0, 00a1d409]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1d3a0(int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    _DAT_01258b38 = 0x10000;
    return;
  }
  if (*param_1 != 1) {
    _DAT_01258b38 = 0x80000;
    return;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1[1] != -1) {
    FUN_00a1c810();
  }
  piVar1[1] = -1;
  if (*piVar1 != 0) {
    FUN_00a1bf10();
  }
  *piVar1 = 0;
  _DAT_01258b38 = 0;
  FUN_00a1d350();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

