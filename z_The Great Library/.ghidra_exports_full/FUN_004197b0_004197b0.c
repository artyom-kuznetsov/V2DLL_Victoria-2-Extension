// FUN_004197b0 @ 004197b0 body=[[004197b0, 004197db] [004197df, 004197f2]]


void FUN_004197b0(int *param_1)

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
  FUN_00419800(in_EAX[1],param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

