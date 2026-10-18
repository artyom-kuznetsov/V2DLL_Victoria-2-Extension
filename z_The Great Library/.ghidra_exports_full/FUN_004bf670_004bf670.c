// FUN_004bf670 @ 004bf670 body=[[004bf670, 004bf6a1] [004bf6ae, 004bf6e9]]


void FUN_004bf670(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    iVar1 = *in_EAX;
    if (iVar1 != 0) break;
    in_EAX[2] = 0;
    *in_EAX = 0;
    in_EAX[1] = 0;
    *(undefined1 *)(in_EAX + 3) = 0;
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x27c);
      FUN_004be140(iVar1);
      iVar1 = iVar2;
    }
    param_1 = param_1 + 4;
    in_EAX = in_EAX + 4;
  }
  FUN_00955ae0(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

