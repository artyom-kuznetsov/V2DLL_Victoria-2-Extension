// FUN_004a4210 @ 004a4210 body=[[004a4210, 004a428d] [004a4291, 004a42a2]]


void FUN_004a4210(void)

{
  int in_ECX;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_004e9b90();
  local_30 = 0x2d2d2d;
  local_2c = 0;
  FUN_004b5a90(local_28,in_ECX + 0x40,DAT_012588e8 + 0xb0c,1,&local_30);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28[0]);
  }
  ExceptionList = local_14;
  return;
}

