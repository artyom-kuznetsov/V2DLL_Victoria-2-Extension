// FUN_00b2b980 @ 00b2b980 body=[[00b2b980, 00b2ba19]]


int FUN_00b2b980(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00b2b7e0(param_1,&local_c);
  if (iVar1 == 0) {
    while( true ) {
      if ((local_c == param_2) && (local_8 == param_3)) {
        return 0;
      }
      if (local_c == 0 && local_8 == 0) break;
      iVar1 = FUN_00b2b7e0(param_1,&local_14);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((local_10 == 0) && (local_14 <= (uint)param_1[1])) {
        *param_1 = *param_1 + local_14;
        param_1[1] = param_1[1] - local_14;
        iVar1 = 0;
      }
      else {
        iVar1 = 6;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_00b2b7e0(param_1,&local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 6;
  }
  return iVar1;
}

