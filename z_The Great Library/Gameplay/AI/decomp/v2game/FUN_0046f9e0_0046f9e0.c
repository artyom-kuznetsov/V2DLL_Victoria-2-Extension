// FUN_0046f9e0 @ 0046f9e0 body=[[0046f9e0, 0046fa45] [0046fa49, 0046fa98] [0046fa9c, 0046fab7]]


void FUN_0046f9e0(void)

{
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63410;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("TestDLC1",8);
  local_8 = 0;
  local_11 = FUN_009d16c0(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (local_11 != '\0') {
    DAT_0125b2c5 = 1;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("TestDLC2",8);
  local_8 = 1;
  local_11 = FUN_009d16c0(local_4c);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  if (local_11 != '\0') {
    DAT_0125b2c4 = 1;
  }
  ExceptionList = local_10;
  return;
}

