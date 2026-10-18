// PHYSFS_getSearchPathCallback @ 00b20170 body=[[00b20170, 00b201b8]]


void PHYSFS_getSearchPathCallback(code *param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0x720170  22  PHYSFS_getSearchPathCallback */
  FUN_00b2a660(DAT_00f20aa0);
  for (iVar1 = DAT_00f20a80; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    (*param_1)(param_2,*(undefined4 *)(iVar1 + 4));
  }
  FUN_00b2a680(DAT_00f20aa0);
  return;
}

