// FUN_00a8d220 @ 00a8d220 body=[[00a8d220, 00a8d2bf]]


int FUN_00a8d220(int *param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  if (((in_EAX == 0) || (param_1 == (int *)0x0)) || (param_2 == 0)) {
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_00a8bd90();
    if (iVar1 == 0) {
      iVar1 = *param_1;
      iVar2 = FUN_00a8c350();
      if (iVar2 == 3) {
        FUN_00a8c3f0();
        return -8;
      }
      if (iVar2 != 4) {
        FUN_00a8c3f0();
        return iVar2;
      }
      *param_1 = *param_1 - iVar1;
      FUN_00a8c3f0();
      return 0;
    }
  }
  return iVar1;
}

