// FUN_004a11d0 @ 004a11d0 body=[[004a11d0, 004a1273] [004a1277, 004a1286]]


void FUN_004a11d0(int param_1)

{
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined *local_58;
  int iStack_54;
  undefined **local_50 [5];
  undefined4 local_3c;
  uint local_28;
  int local_20;
  char local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dbe8;
  local_10 = ExceptionList;
  local_14 = local_6c;
  local_58 = (undefined *)0xf;
  local_5c = 0;
  local_6c[0] = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_50,&DAT_00f0aef4,1);
  local_8 = 0;
  if (local_18 == '\0') {
    local_58 = (undefined *)(param_1 + 0x2c);
    iStack_54 = 4;
    local_5c = 0x4a1240;
    FUN_00993720();
  }
  local_50[0] = &PTR_FUN_00e37dc0;
  if (local_20 != 0) {
    iStack_54 = local_20;
    local_58 = (undefined *)0x4a1254;
    PHYSFS_close();
    local_20 = 0;
  }
  local_50[0] = &PTR_FUN_00e3b540;
  if (0xf < local_28) {
    iStack_54 = local_3c;
                    /* WARNING: Subroutine does not return */
    local_58 = &UNK_004a1274;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

