// FUN_00a03d00 @ 00a03d00 body=[[00a03d00, 00a03d4c] [00a03d50, 00a03d6b] [00a03d6f, 00a03d90] [00a03d94, 00a03db2]]


void FUN_00a03d00(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b94e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3e82c;
  local_8 = 2;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if (0xf < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x19]);
  }
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (0xf < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x12]);
  }
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *param_1 = CCommand::vftable;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

