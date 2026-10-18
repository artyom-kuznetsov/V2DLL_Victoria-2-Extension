// FUN_0043c730 @ 0043c730 body=[[0043c730, 0043c869]]


void FUN_0043c730(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5c1b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00443560();
  iVar1 = FUN_00aae9af(0x80);
  local_8 = 0;
  if (iVar1 == 0) {
    DAT_012586dc = 0;
  }
  else {
    DAT_012586dc = FUN_0042d820(iVar1);
  }
  local_8 = 0xffffffff;
  FUN_009732c0();
  FUN_00975dd0();
  FUN_0067d940();
  iVar1 = FUN_00aae9af(0xe0);
  local_8 = 1;
  if (iVar1 == 0) {
    DAT_012587f0 = 0;
  }
  else {
    DAT_012587f0 = FUN_00561550(iVar1);
  }
  local_8 = 0xffffffff;
  iVar1 = FUN_00aae9af(0x2c);
  local_8 = 2;
  if (iVar1 == 0) {
    DAT_012587e8 = 0;
  }
  else {
    DAT_012587e8 = FUN_004dada0();
  }
  local_8 = 0xffffffff;
  iVar1 = FUN_00aae9af(0x58);
  local_8 = 3;
  if (iVar1 == 0) {
    DAT_012588d4 = 0;
  }
  else {
    DAT_012588d4 = FUN_005edd10(iVar1);
  }
  local_8 = 0xffffffff;
  FUN_0055cdc0();
  if (DAT_012586f4 == 0) {
    iVar1 = FUN_00aae9af(0x1f0,iVar1);
    local_8 = 4;
    if (iVar1 != 0) {
      DAT_012586f4 = FUN_0045fdd0(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_012586f4 = 0;
  }
  ExceptionList = local_10;
  return;
}

