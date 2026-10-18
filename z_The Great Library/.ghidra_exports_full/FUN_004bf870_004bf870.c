// FUN_004bf870 @ 004bf870 body=[[004bf870, 004bf891] [004bf89b, 004bf8a9]]


void FUN_004bf870(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00955ae0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

