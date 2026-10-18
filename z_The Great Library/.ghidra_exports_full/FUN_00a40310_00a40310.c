// FUN_00a40310 @ 00a40310 body=[[00a40310, 00a40324] [00a40328, 00a40341]]


void FUN_00a40310(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (0xf < (uint)in_EAX[5]) break;
    in_EAX[5] = 0xf;
    in_EAX[4] = 0;
    *(undefined1 *)in_EAX = 0;
    in_EAX = in_EAX + 0xf;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

