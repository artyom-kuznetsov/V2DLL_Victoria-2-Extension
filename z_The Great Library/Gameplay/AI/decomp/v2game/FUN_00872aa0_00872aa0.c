// FUN_00872aa0 @ 00872aa0 body=[[00872aa0, 00872ab4] [00872ab8, 00872ace] [00872ad2, 00872ad3]]


void FUN_00872aa0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  
  puVar1 = (undefined4 *)*in_EAX;
  if (puVar1 == (undefined4 *)0x0) {
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

