// FUN_009a83a0 @ 009a83a0 body=[[009a83a0, 009a83f2] [009a83f6, 009a8423] [009a8427, 009a844d] [009a8451, 009a8477] [009a847b, 009a84a1] [009a84a5, 009a8503] [009a8507, 009a8522]]


void FUN_009a83a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3be66;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38b90;
  param_1[0x15] = &PTR_FUN_00e38c40;
  local_8 = 7;
  FUN_009963d0(param_1[0x1c]);
  if (0xf < (uint)param_1[0x49]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x44]);
  }
  param_1[0x49] = 0xf;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (0xf < (uint)param_1[0x41]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3c]);
  }
  param_1[0x41] = 0xf;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
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
  if (0xf < (uint)param_1[0x29]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x24]);
  }
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_8._0_1_ = 1;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_009a8dd0();
  *param_1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(param_1[0xd] + 0x98) == param_1) {
    *(undefined4 *)(param_1[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

