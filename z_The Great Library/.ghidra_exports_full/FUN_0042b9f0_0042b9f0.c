// FUN_0042b9f0 @ 0042b9f0 body=[[0042b9f0, 0042ba12] [0042ba16, 0042ba30] [0042ba34, 0042ba45] [0042ba53, 0042ba60]]


void FUN_0042b9f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < (uint)puVar1[0xc]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1[7]);
  }
  puVar1[0xc] = 0xf;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
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

