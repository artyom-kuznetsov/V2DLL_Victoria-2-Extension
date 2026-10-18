// FUN_00a360a0 @ 00a360a0 body=[[00a360a0, 00a360ce] [00a360d3, 00a360e2]]


void FUN_00a360a0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puVar1 = (undefined4 *)param_1[1];
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xe) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

