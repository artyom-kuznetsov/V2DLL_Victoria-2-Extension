// FUN_0068f9c0 @ 0068f9c0 body=[[0068f9c0, 0068f9e8] [0068f9f2, 0068fa29]]


void FUN_0068f9c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*in_EAX != 0) break;
    in_EAX[2] = 0;
    *in_EAX = 0;
    in_EAX[1] = 0;
    *(undefined1 *)(in_EAX + 3) = 0;
    iVar2 = *param_1;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
      FUN_00679b80(iVar2);
      iVar2 = iVar1;
    }
    param_1 = param_1 + 4;
    in_EAX = in_EAX + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*in_EAX);
}

