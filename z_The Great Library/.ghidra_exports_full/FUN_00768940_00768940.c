// FUN_00768940 @ 00768940 body=[[00768940, 00768960] [0076896b, 0076897a]]


void FUN_00768940(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00648a60();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

