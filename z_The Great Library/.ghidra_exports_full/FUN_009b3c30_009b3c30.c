// FUN_009b3c30 @ 009b3c30 body=[[009b3c30, 009b3c68] [009b3c76, 009b3c7a]]


void FUN_009b3c30(int param_1)

{
  int iVar1;
  int *in_EAX;
  
  if (param_1 == *in_EAX) {
    FUN_009a63f0();
    return;
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    in_EAX[1] = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}

