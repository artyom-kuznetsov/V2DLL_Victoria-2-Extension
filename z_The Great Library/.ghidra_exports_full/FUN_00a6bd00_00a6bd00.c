// FUN_00a6bd00 @ 00a6bd00 body=[[00a6bd00, 00a6bd58] [00a6bd5c, 00a6bd89] [00a6bd8d, 00a6bdb3] [00a6bdb7, 00a6be0b]]


void FUN_00a6bd00(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b40cdf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e42930;
  param_1[0x15] = &PTR_LAB_00e42a48;
  local_8 = 4;
  FUN_009963d0(param_1[0x28]);
  if (0xf < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x39]);
  }
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  if (0xf < (uint)param_1[0x37]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x32]);
  }
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (0xf < (uint)param_1[0x30]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2b]);
  }
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  local_8 = 0xffffffff;
  *param_1 = &PTR_FUN_00e3a6d8;
  param_1[0x15] = &PTR_LAB_00e3a7f0;
  FUN_009c2f40();
  ExceptionList = local_10;
  return;
}

