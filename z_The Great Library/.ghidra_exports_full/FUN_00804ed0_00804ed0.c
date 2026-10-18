// FUN_00804ed0 @ 00804ed0 body=[[00804ed0, 00804efb] [00804f01, 00804f17] [00804f1d, 00804f31]]


void FUN_00804ed0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *piVar2;
  
  while( true ) {
    if (in_EAX == param_1) {
      return;
    }
    piVar2 = (int *)*in_EAX;
    if (piVar2 != (int *)0x0) break;
    *in_EAX = 0;
    in_EAX[1] = 0;
    in_EAX[2] = 0;
    in_EAX = in_EAX + 4;
  }
  piVar1 = (int *)in_EAX[1];
  while( true ) {
    if (piVar2 == piVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    if (*piVar2 != 0) break;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2 = piVar2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*piVar2);
}

