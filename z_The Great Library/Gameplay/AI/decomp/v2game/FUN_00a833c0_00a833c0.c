// FUN_00a833c0 @ 00a833c0 body=[[00a833c0, 00a8347c]]


undefined4 * FUN_00a833c0(undefined4 *param_1)

{
  int iVar1;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40bf1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e4436c;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8 = 2;
  param_1[0x16] = 0;
  iVar1 = FUN_00aae9af(0x6c);
  if (iVar1 != 0) {
    param_1[0x15] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x15];
    *(undefined4 *)(param_1[0x15] + 8) = param_1[0x15];
    *(undefined1 *)(param_1[0x15] + 0x68) = 1;
    *(undefined1 *)(param_1[0x15] + 0x69) = 1;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

