// FUN_005c5190 @ 005c5190 body=[[005c5190, 005c51be] [005c51c3, 005c51d2]]


void FUN_005c5190(int *param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}

