// FUN_00460190 @ 00460190 body=[[00460190, 004601bd] [004601c2, 004601d1]]


void FUN_00460190(int *param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xac) {
    FUN_0045f8a0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

