// FUN_0041e9d0 @ 0041e9d0 body=[[0041e9d0, 0041ea74]]


undefined1 * FUN_0041e9d0(undefined1 *param_1,int *param_2)

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
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 1;
    uVar2 = 0x16;
    if (DAT_01258a65 == '\0') {
      DAT_01258a65 = '\x01';
      pcVar1 = "Random Logging started";
    }
    else {
      DAT_01258a65 = '\0';
      pcVar1 = "Random Logging stopped";
    }
  }
  else {
    uVar2 = 0x17;
    *param_1 = 0;
    pcVar1 = "Invalid arguments count";
  }
  FUN_00409350(pcVar1,uVar2);
  ExceptionList = local_10;
  return param_1;
}

