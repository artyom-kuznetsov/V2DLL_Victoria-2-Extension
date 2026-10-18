// FUN_00413860 @ 00413860 body=[[00413860, 00413874] [00413878, 00413891]]


void FUN_00413860(void)

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
    in_EAX = in_EAX + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

