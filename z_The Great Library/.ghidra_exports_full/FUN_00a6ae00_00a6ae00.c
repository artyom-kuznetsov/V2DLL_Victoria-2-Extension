// FUN_00a6ae00 @ 00a6ae00 body=[[00a6ae00, 00a6ae0c] [00a6ae10, 00a6ae27] [00a6ae2b, 00a6ae44] [00a6ae48, 00a6ae5c] [00a6ae60, 00a6ae6d] [00a6ae71, 00a6ae7a]]


void FUN_00a6ae00(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_EAX;
  
  puVar1 = (undefined4 *)*in_EAX;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
  } while (piVar2 == (int *)0x0);
  if (0xf < (uint)piVar2[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2[8]);
  }
  piVar2[0xd] = 0xf;
  piVar2[0xc] = 0;
  *(undefined1 *)(piVar2 + 8) = 0;
  if (piVar2[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2[4]);
  }
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  if (*piVar2 == 0) {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*piVar2);
}

