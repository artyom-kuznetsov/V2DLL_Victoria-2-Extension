// FUN_006a5a90 @ 006a5a90 body=[[006a5a90, 006a5ab2] [006a5abd, 006a5acc]]


void FUN_006a5a90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_006a81a0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

