// FUN_00418de0 @ 00418de0 body=[[00418de0, 00418dfc] [00418e00, 00418e15]]


void FUN_00418de0(int *param_1)

{
  int *in_EAX;
  
  while( true ) {
    if (in_EAX == param_1) {
      return;
    }
    if (*in_EAX != 0) break;
    *in_EAX = 0;
    in_EAX[1] = 0;
    in_EAX[2] = 0;
    in_EAX = in_EAX + 5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

