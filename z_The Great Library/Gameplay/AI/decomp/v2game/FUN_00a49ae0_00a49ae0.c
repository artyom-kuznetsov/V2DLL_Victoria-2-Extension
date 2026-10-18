// FUN_00a49ae0 @ 00a49ae0 body=[[00a49ae0, 00a49b4b] [00a49b4f, 00a49b6a] [00a49b6e, 00a49b8f] [00a49b93, 00a49bb1]]


void FUN_00a49ae0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b85e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41450;
  local_8 = 2;
  (**(code **)(*(int *)param_1[0xc] + 8))((int *)param_1[0xc]);
  if (param_1[0x2d] != 0) {
    if (param_1[0x2d] == DAT_01258b5c) {
      DAT_01258b5c = 0;
    }
    (**(code **)(*(int *)param_1[0x2d] + 8))((int *)param_1[0x2d]);
  }
  if (0xf < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x15]);
  }
  param_1[0x1a] = 0xf;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (0xf < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd]);
  }
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_00e3b228;
  if (0xf < (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[3]);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  ExceptionList = local_10;
  return;
}

