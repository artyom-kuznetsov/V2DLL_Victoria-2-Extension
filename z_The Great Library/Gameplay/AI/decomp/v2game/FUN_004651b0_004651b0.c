// FUN_004651b0 @ 004651b0 body=[[004651b0, 004651cc] [004651d0, 004651e5]]


void FUN_004651b0(int *param_1)

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
    in_EAX = in_EAX + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

