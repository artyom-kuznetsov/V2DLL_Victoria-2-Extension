// FUN_00463b30 @ 00463b30 body=[[00463b30, 00463b5d] [00463b61, 00463b80] [00463b84, 00463b9a]]


void FUN_00463b30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  while( true ) {
    if (in_EAX == param_1) {
      return;
    }
    puVar2 = (undefined4 *)*in_EAX;
    if (puVar2 != (undefined4 *)0x0) break;
    *in_EAX = 0;
    in_EAX[1] = 0;
    in_EAX[2] = 0;
    in_EAX = in_EAX + 4;
  }
  puVar1 = (undefined4 *)in_EAX[1];
  while( true ) {
    if (puVar2 == puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    if (0xf < (uint)puVar2[5]) break;
    puVar2[5] = 0xf;
    puVar2[4] = 0;
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar2);
}

