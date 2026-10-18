// FUN_009bc1e0 @ 009bc1e0 body=[[009bc1e0, 009bc2d1]]


undefined4 * FUN_009bc1e0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e1f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a2c8;
  _eh_vector_constructor_iterator_
            (param_1 + 1,0x2c,10000,(_func_void_void_ptr *)&LAB_009bc310,FUN_009bc330);
  local_8 = 0;
  param_1[0x1adb3] = 0;
  iVar1 = FUN_00aae9af(0x30);
  if (iVar1 != 0) {
    param_1[0x1adb2] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x1adb2] + 4) = param_1[0x1adb2];
    *(undefined4 *)(param_1[0x1adb2] + 8) = param_1[0x1adb2];
    *(undefined1 *)(param_1[0x1adb2] + 0x2c) = 1;
    *(undefined1 *)(param_1[0x1adb2] + 0x2d) = 1;
    param_1[0x1adb5] = 0;
    param_1[0x1adb6] = 0;
    param_1[0x1adb7] = 0;
    _memset(param_1 + 1,0,440000);
    pvVar2 = _malloc(0x1000000);
    param_1[0x1adb8] = pvVar2;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

