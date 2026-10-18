// FUN_0045ffb0 @ 0045ffb0 body=[[0045ffb0, 00460052]]


undefined4 * FUN_0045ffb0(undefined4 *param_1)

{
  int iVar1;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46eed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsLayout::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 0;
  param_1[8] = 0;
  iVar1 = FUN_00aae9af(0x30);
  if (iVar1 != 0) {
    param_1[7] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[7] + 4) = param_1[7];
    *(undefined4 *)(param_1[7] + 8) = param_1[7];
    *(undefined1 *)(param_1[7] + 0x2c) = 1;
    *(undefined1 *)(param_1[7] + 0x2d) = 1;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

