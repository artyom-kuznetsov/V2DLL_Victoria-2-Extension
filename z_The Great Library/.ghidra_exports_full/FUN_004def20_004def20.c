// FUN_004def20 @ 004def20 body=[[004def20, 004def51] [004def56, 004def65]]


void FUN_004def20(int *param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x58) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

