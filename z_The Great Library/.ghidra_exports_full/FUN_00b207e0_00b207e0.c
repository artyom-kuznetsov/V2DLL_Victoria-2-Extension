// PHYSFS_flush @ 00b207e0 body=[[00b207e0, 00b20834]]


/* WARNING: Removing unreachable block (ram,0x00b20816) */

undefined4 PHYSFS_flush(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x7207e0  10  PHYSFS_flush */
  if (*(char *)(param_1 + 1) == '\0') {
    iVar1 = param_1[7];
    if (iVar1 != param_1[6]) {
      lVar2 = (**(code **)(param_1[3] + 0x3c))(*param_1,param_1[4] + iVar1,param_1[6] - iVar1,1);
      if (lVar2 < 1) {
        return 0;
      }
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  return 1;
}

