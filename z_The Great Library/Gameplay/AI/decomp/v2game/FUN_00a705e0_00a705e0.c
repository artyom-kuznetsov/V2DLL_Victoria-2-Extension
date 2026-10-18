// FUN_00a705e0 @ 00a705e0 body=[[00a705e0, 00a70638] [00a7063c, 00a70669] [00a7066d, 00a70693] [00a70697, 00a706eb]]


void FUN_00a705e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b40c8f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e42d48;
  param_1[0x15] = &PTR_LAB_00e42e60;
  local_8 = 4;
  FUN_009963d0(param_1[0x25]);
  if (0xf < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3d]);
  }
  param_1[0x42] = 0xf;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  if (0xf < (uint)param_1[0x3b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36]);
  }
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  if (0xf < (uint)param_1[0x34]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2f]);
  }
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
  }
  local_8 = 0xffffffff;
  *param_1 = &PTR_FUN_00e3a6d8;
  param_1[0x15] = &PTR_LAB_00e3a7f0;
  FUN_009c2f40();
  ExceptionList = local_10;
  return;
}

