// FUN_0048b780 @ 0048b780 body=[[0048b780, 0048b7ae] [0048b7b3, 0048b7c2]]


void FUN_0048b780(int *param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x16) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

