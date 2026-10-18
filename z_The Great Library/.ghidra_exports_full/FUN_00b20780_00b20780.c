// PHYSFS_tell @ 00b20780 body=[[00b20780, 00b207bf]]


longlong PHYSFS_tell(undefined4 *param_1)

{
  longlong lVar1;
  
                    /* 0x720780  68  PHYSFS_tell */
  lVar1 = (**(code **)(param_1[3] + 0x44))(*param_1);
  if (*(char *)(param_1 + 1) != '\0') {
    return lVar1 + CONCAT44(-(uint)((uint)param_1[7] < (uint)param_1[6]),param_1[7] - param_1[6]);
  }
  return lVar1 + (ulonglong)(uint)param_1[6];
}

