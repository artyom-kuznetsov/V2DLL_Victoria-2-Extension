// FUN_0041c450 @ 0041c450 body=[[0041c450, 0041c4cd]]


undefined1 * FUN_0041c450(undefined1 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  if (*(char *)(DAT_012588e8 + 0xd25) == '\0') {
    uVar2 = 0x24;
    *(undefined1 *)(DAT_012588e8 + 0xd25) = 1;
    pcVar1 = "Province id is now shown in tooltip.";
  }
  else {
    uVar2 = 0x2c;
    *(undefined1 *)(DAT_012588e8 + 0xd25) = 0;
    pcVar1 = "Province id is now removed from the tooltip.";
  }
  FUN_00409350(pcVar1,uVar2);
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

