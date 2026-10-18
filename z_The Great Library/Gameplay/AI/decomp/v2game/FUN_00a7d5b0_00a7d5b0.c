// FUN_00a7d5b0 @ 00a7d5b0 body=[[00a7d5b0, 00a7d5dd] [00a7d5e2, 00a7d5f1]]


void FUN_00a7d5b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  iVar1 = param_1[1];
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x60) {
    FUN_00a7dfe0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

