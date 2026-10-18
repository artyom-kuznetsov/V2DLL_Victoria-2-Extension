// FUN_0041d1c0 @ 0041d1c0 body=[[0041d1c0, 0041d235]]


undefined1 * FUN_0041d1c0(undefined1 *param_1)

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
  DAT_00f09739 = DAT_00f09739 == '\0';
  if ((bool)DAT_00f09739) {
    uVar2 = 0x11;
    pcVar1 = "Pops are updating";
  }
  else {
    uVar2 = 0x15;
    pcVar1 = "Pops are NOT updating";
  }
  FUN_00409350(pcVar1,uVar2);
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

