// FUN_00420130 @ 00420130 body=[[00420130, 004201de]]


undefined1 * FUN_00420130(undefined1 *param_1,int *param_2)

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
    DAT_012586d6 = DAT_012586d6 == '\0';
    *param_1 = 1;
    if ((bool)DAT_012586d6) {
      uVar2 = 0x17;
      pcVar1 = "Instant construction ON";
    }
    else {
      uVar2 = 0x18;
      pcVar1 = "Instant construction OFF";
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

