// FUN_00723a40 @ 00723a40 body=[[00723a40, 00723aa3] [00723aa7, 00723ada]]


void FUN_00723a40(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("government_needs_list",0x15);
  local_8 = 0;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_007238b0(*(undefined4 *)(unaff_ESI + 0x15c),uVar1,unaff_ESI + 300);
  ExceptionList = local_10;
  return;
}

