// FUN_0068fa30 @ 0068fa30 body=[[0068fa30, 0068fa4e] [0068fa58, 0068fa6c]]


void FUN_0068fa30(int *param_1)

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

