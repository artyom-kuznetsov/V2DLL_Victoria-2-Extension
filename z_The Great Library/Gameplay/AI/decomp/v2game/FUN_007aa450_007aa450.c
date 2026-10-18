// FUN_007aa450 @ 007aa450 body=[[007aa450, 007aa47a] [007aa47f, 007aa48e]]


void FUN_007aa450(int *param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_007a91c0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

