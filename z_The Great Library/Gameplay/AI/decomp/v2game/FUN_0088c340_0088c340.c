// FUN_0088c340 @ 0088c340 body=[[0088c340, 0088c3e4]]


undefined4 * FUN_0088c340(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3c36e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = CLeaderEffect::vftable;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_8 = 1;
  uStack_7 = 0;
  if (DAT_01258828 == 0) {
    iVar1 = FUN_00aae9af(0x2c);
    _local_8 = CONCAT31(uStack_7,2);
    if (iVar1 == 0) {
      DAT_01258828 = 0;
    }
    else {
      DAT_01258828 = FUN_004dada0();
    }
  }
  iVar1 = DAT_01258828;
  param_1[0x10] = **(undefined4 **)(DAT_01258828 + 0x1c);
  param_1[0xf] = **(undefined4 **)(iVar1 + 0xc);
  ExceptionList = local_10;
  return param_1;
}

