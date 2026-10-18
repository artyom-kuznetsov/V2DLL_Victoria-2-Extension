// FUN_006e00b0 @ 006e00b0 body=[[006e00b0, 006e00c4] [006e00c8, 006e00e1]]


void FUN_006e00b0(void)

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
    in_EAX = in_EAX + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

