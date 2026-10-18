// FUN_00a40980 @ 00a40980 body=[[00a40980, 00a409a9] [00a409ad, 00a409c1]]


void FUN_00a40980(int *param_1)

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
  FUN_00a409d0(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

