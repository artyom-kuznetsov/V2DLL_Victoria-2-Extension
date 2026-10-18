// FUN_0043c6a0 @ 0043c6a0 body=[[0043c6a0, 0043c6d1] [0043c6d5, 0043c6eb] [0043c6ef, 0043c71b]]


void FUN_0043c6a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (param_1[2] != 0) {
    FUN_0043c6a0(param_1[2],param_2);
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar1);
    }
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1);
  }
  if (param_1[4] != 0) {
    FUN_0043c6a0(param_1[4],param_2);
  }
  if (param_1[3] != 0) {
    FUN_0043c6a0(param_1[3],param_2);
  }
  return;
}

