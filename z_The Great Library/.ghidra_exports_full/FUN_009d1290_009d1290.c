// FUN_009d1290 @ 009d1290 body=[[009d1290, 009d1406]]


undefined1 * FUN_009d1290(undefined1 *param_1)

{
  int iVar1;
  undefined **local_30 [3];
  undefined **local_24 [3];
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b49abe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_8 = 3;
  uStack_7 = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xf;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x58] = 0;
  FUN_00409350(&DAT_00e36b24,3);
  *(undefined4 *)(param_1 + 0x88) = 0xf;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x74] = 0;
  local_8 = 5;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = FUN_00aae9af(300);
  if (iVar1 == 0) {
    local_18 = (char *)0x0;
    std::exception::exception((exception *)local_30,&local_18);
    local_30[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_00e6fb20);
  }
  *(int *)(param_1 + 0x94) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(*(int *)(param_1 + 0x94) + 4) = *(int *)(param_1 + 0x94);
  *(int *)(*(int *)(param_1 + 0x94) + 8) = *(int *)(param_1 + 0x94);
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x128) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x129) = 1;
  _local_8 = CONCAT31(uStack_7,6);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = FUN_00aae9af(300);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xa4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 0xa4) + 4) = *(int *)(param_1 + 0xa4);
    *(int *)(*(int *)(param_1 + 0xa4) + 8) = *(int *)(param_1 + 0xa4);
    *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x128) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x129) = 1;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_14);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

