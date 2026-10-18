// FUN_00993e30 @ 00993e30 body=[[00993e30, 00993ee7]]


undefined4 * FUN_00993e30(undefined4 *param_1)

{
  int iVar1;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e4c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e384c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_8 = 2;
  param_1[0xf] = 0;
  iVar1 = FUN_00aae9af(0x30);
  if (iVar1 != 0) {
    param_1[0xe] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xe];
    *(undefined4 *)(param_1[0xe] + 8) = param_1[0xe];
    *(undefined1 *)(param_1[0xe] + 0x2c) = 1;
    *(undefined1 *)(param_1[0xe] + 0x2d) = 1;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

