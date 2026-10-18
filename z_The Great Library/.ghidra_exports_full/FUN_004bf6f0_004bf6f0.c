// FUN_004bf6f0 @ 004bf6f0 body=[[004bf6f0, 004bf707] [004bf710, 004bf721] [004bf72b, 004bf742]]


void FUN_004bf6f0(int *param_1)

{
  int iVar1;
  int *in_EAX;
  
  while( true ) {
    if (in_EAX == param_1) {
      return;
    }
    iVar1 = *in_EAX;
    if (iVar1 != 0) break;
    *in_EAX = 0;
    in_EAX[1] = 0;
    in_EAX[2] = 0;
    in_EAX = in_EAX + 4;
  }
  FUN_00955ae0(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

