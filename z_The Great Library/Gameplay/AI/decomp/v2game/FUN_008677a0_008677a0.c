// FUN_008677a0 @ 008677a0 body=[[008677a0, 00867825] [00867829, 008678b6]]


undefined4 * FUN_008677a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5e7e6;
  local_10 = ExceptionList;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("interface/tutorial.gui",0x16);
  local_8 = 0;
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(local_3c,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(param_1 + 1,param_1);
  local_8._0_1_ = 3;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  *param_1 = CTutorial::vftable;
  puVar1 = param_1 + 8;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar1 = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined4 **)*puVar1 = puVar1;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    param_1[0xe] = 0xffffffff;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_00867990(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

