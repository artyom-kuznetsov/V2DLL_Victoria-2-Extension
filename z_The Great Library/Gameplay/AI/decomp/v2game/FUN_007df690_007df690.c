// FUN_007df690 @ 007df690 body=[[007df690, 007df6b0] [007df6b4, 007df6e5]]


void FUN_007df690(int *param_1)

{
  int *in_EAX;
  int *in_ECX;
  
  do {
    if (in_ECX == param_1) {
      return;
    }
    if (in_EAX != in_ECX) {
      if (*in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      *in_EAX = 0;
      in_EAX[1] = 0;
      in_EAX[2] = 0;
      *in_EAX = *in_ECX;
      in_EAX[1] = in_ECX[1];
      in_EAX[2] = in_ECX[2];
      *in_ECX = 0;
      in_ECX[1] = 0;
      in_ECX[2] = 0;
    }
    in_ECX = in_ECX + 4;
    in_EAX = in_EAX + 4;
  } while( true );
}

