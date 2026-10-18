// FUN_0067a300 @ 0067a300 body=[[0067a300, 0067a321] [0067a325, 0067a336] [0067a344, 0067a351]]


void FUN_0067a300(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
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

