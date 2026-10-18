// FUN_00aa9fc0 @ 00aa9fc0 body=[[00aa9fc0, 00aa9fdf] [00aa9fe3, 00aa9ffb]]


undefined4 FUN_00aa9fc0(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)lua_touserdata(param_1,1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  return 0;
}

