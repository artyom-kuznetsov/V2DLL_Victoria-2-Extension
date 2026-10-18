// FUN_00b27360 @ 00b27360 body=[[00b27360, 00b27410]]


int FUN_00b27360(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8);
  iVar1 = 1;
  if ((iVar2 != 4) && (iVar2 != 5)) {
    if (iVar2 == 2) {
      FUN_00b1f840("Infinite symbolic link loop");
      return 0;
    }
    if (iVar2 != 3) {
      *(undefined4 *)(param_3 + 8) = 2;
      iVar1 = FUN_00b271b0();
      if (iVar1 == 0) {
        if (iVar2 == 1) {
          *(undefined4 *)(param_3 + 8) = 5;
          return 0;
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_00b26fe0(param_1,param_2,param_3);
        *(uint *)(param_3 + 8) = (uint)(iVar2 == 0) * 2 + 3;
        return iVar2;
      }
      if (iVar2 == 0) {
        *(uint *)(param_3 + 8) = 4 - (uint)(iVar1 != 0);
      }
    }
    return iVar1;
  }
  FUN_00b1f840("Corrupted archive");
  return 0;
}

