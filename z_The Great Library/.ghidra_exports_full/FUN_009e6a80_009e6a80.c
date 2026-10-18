// FUN_009e6a80 @ 009e6a80 body=[[009e6a80, 009e6a94] [009e6a98, 009e6ab1]]


void FUN_009e6a80(void)

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
    in_EAX = in_EAX + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

