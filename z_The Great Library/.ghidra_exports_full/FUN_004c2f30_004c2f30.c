// FUN_004c2f30 @ 004c2f30 body=[[004c2f30, 004c2fab] [004c2fc7, 004c2fea]]


int FUN_004c2f30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined **local_24 [3];
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b400b8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x14) = 1;
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 1;
    local_8 = 1;
    FUN_004c03c0(param_2);
    ExceptionList = local_10;
    return param_1;
  }
  local_18 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_18);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

