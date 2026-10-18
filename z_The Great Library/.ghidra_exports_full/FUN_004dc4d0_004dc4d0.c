// FUN_004dc4d0 @ 004dc4d0 body=[[004dc4d0, 004dc4f6] [004dc4fa, 004dc510] [004dc514, 004dc519] [004dc528, 004dc534]]


void FUN_004dc4d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puVar2 = (undefined4 *)*puVar1;
  if (puVar2 != (undefined4 *)0x0) {
    if (0xf < (uint)puVar2[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar2);
    }
    puVar2[5] = 0xf;
    puVar2[4] = 0;
    *(undefined1 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

