// FUN_00a8d2c0 @ 00a8d2c0 body=[[00a8d2c0, 00a8d37f]]


int FUN_00a8d2c0(int *param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  if (((in_EAX == 0) || (param_1 == (int *)0x0)) || (param_2 == 0)) {
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_00a8c470();
    if (iVar1 == 0) {
      iVar1 = *param_1;
      iVar2 = FUN_00a8d030();
      if (iVar2 != 0) {
        if (iVar2 != 4) {
          FUN_00a8d1a0();
          return iVar2;
        }
        *param_1 = *param_1 - iVar1;
        FUN_00a8d1a0();
        return 0;
      }
      if (iVar1 != 0) {
        FUN_00a8d1a0();
        return -7;
      }
      FUN_00a8d1a0();
      return -8;
    }
  }
  return iVar1;
}

