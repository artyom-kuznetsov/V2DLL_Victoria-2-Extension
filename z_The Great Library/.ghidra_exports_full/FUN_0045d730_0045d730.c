// FUN_0045d730 @ 0045d730 body=[[0045d730, 0045d859]]


undefined1 * FUN_0045d730(undefined1 *param_1)

{
  int iVar1;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46fa4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined4 *)(param_1 + 0x3c) = 0x18d;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = CAndTrigger::vftable;
  local_8._0_1_ = 2;
  _eh_vector_constructor_iterator_(param_1 + 0x54,0x10,3,FUN_00413490,FUN_0045d860);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar1 = FUN_00aae9af(0x30);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x90) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 0x90) + 4) = *(int *)(param_1 + 0x90);
    *(int *)(*(int *)(param_1 + 0x90) + 8) = *(int *)(param_1 + 0x90);
    *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x2c) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x2d) = 1;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

