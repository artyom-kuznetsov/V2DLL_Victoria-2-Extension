// FUN_0068fae0 @ 0068fae0 body=[[0068fae0, 0068fafe] [0068fb08, 0068fb1c]]


void FUN_0068fae0(int *param_1)

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

