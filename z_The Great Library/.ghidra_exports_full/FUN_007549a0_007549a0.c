// FUN_007549a0 @ 007549a0 body=[[007549a0, 007549c0] [007549cb, 007549da]]


void FUN_007549a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00753c40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

