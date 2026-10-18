// FUN_004201e0 @ 004201e0 body=[[004201e0, 0042028e]]


undefined1 * FUN_004201e0(undefined1 *param_1,int *param_2)

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
    DAT_012587e1 = DAT_012587e1 == '\0';
    *param_1 = 1;
    if ((bool)DAT_012587e1) {
      uVar2 = 0x13;
      pcVar1 = "Instant research ON";
    }
    else {
      uVar2 = 0x14;
      pcVar1 = "Instant research OFF";
    }
  }
  else {
    uVar2 = 0x12;
    *param_1 = 0;
    pcVar1 = "Invalid arguments.";
  }
  FUN_00409350(pcVar1,uVar2);
  ExceptionList = local_10;
  return param_1;
}

