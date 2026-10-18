// FUN_009a2420 @ 009a2420 body=[[009a2420, 009a2442] [009a2446, 009a2460] [009a2464, 009a2475] [009a2483, 009a2490]]


void FUN_009a2420(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < (uint)puVar1[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1[8]);
  }
  puVar1[0xd] = 0xf;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
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

