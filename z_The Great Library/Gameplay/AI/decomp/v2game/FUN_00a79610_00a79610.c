// FUN_00a79610 @ 00a79610 body=[[00a79610, 00a79653] [00a79657, 00a79668] [00a7966c, 00a7969a] [00a7969e, 00a796af] [00a796b3, 00a796d9]]


void FUN_00a79610(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *in_ECX = &PTR_FUN_00e43790;
  for (puVar1 = DAT_013f0744;
      (puVar2 = DAT_013f0734, DAT_013f0744 <= puVar1 && (puVar1 < DAT_013f0748));
      puVar1 = puVar1 + 1) {
    puVar2 = (undefined4 *)*puVar1;
    if (puVar2 != (undefined4 *)0x0) {
      if ((uint)puVar2[5] < 0x10) {
        puVar2[5] = 0xf;
        puVar2[4] = 0;
        *(undefined1 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar2);
    }
  }
  while( true ) {
    if (puVar2 < DAT_013f0734) {
      *in_ECX = &PTR_FUN_00e38a40;
      return;
    }
    if (DAT_013f0738 <= puVar2) break;
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 != (undefined4 *)0x0) {
      if ((uint)puVar1[5] < 0x10) {
        puVar1[5] = 0xf;
        puVar1[4] = 0;
        *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar1);
    }
    puVar2 = puVar2 + 1;
  }
  *in_ECX = &PTR_FUN_00e38a40;
  return;
}

