// PHYSFS_setBuffer @ 00b22430 body=[[00b22430, 00b22516]]


undefined4 PHYSFS_setBuffer(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x722430  51  PHYSFS_setBuffer */
  if (param_3 != 0) {
    FUN_00b1f840("buffer must fit in 32-bits");
    return 0;
  }
  iVar1 = PHYSFS_flush(param_1);
  if ((iVar1 != 0) &&
     (((*(char *)(param_1 + 1) == '\0' || (param_1[6] == param_1[7])) ||
      ((lVar2 = (**(code **)(param_1[3] + 0x44))(*param_1), lVar2 != -1 &&
       (iVar1 = (**(code **)(param_1[3] + 0x48))
                          (*param_1,lVar2 + CONCAT44(-(uint)((uint)param_1[7] < (uint)param_1[6]),
                                                     param_1[7] - param_1[6])), iVar1 != 0)))))) {
    iVar1 = param_1[4];
    if (param_2 == 0) {
      if (iVar1 != 0) {
        (*DAT_013f3ab0)(iVar1);
        param_1[4] = 0;
      }
    }
    else {
      iVar1 = (*DAT_013f3aac)(iVar1,param_2,0);
      if (iVar1 == 0) {
        FUN_00b1f840("Out of memory");
        return 0;
      }
      param_1[4] = iVar1;
    }
    param_1[5] = param_2;
    param_1[7] = 0;
    param_1[6] = 0;
    return 1;
  }
  return 0;
}

