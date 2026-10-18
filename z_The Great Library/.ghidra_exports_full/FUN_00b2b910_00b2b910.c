// FUN_00b2b910 @ 00b2b910 body=[[00b2b910, 00b2b92c] [00b2b930, 00b2b97f]]


int FUN_00b2b910(int *param_1)

{
  int iVar1;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00b2b7e0(param_1,&local_c);
  if (iVar1 == 0) {
    while (local_c != 0 || local_8 != 0) {
      iVar1 = FUN_00b2b7e0(param_1,&local_14);
      if (((iVar1 == 0) && (local_10 == 0)) && (local_14 <= (uint)param_1[1])) {
        *param_1 = *param_1 + local_14;
        param_1[1] = param_1[1] - local_14;
      }
      iVar1 = FUN_00b2b7e0(param_1,&local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

