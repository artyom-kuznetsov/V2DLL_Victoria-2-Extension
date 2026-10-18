// FUN_0041f660 @ 0041f660 body=[[0041f660, 0041f71b]]


undefined1 * FUN_0041f660(undefined1 *param_1,int *param_2)

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
    FUN_0051d490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
    uVar2 = 0x10;
    *param_1 = 1;
    pcVar1 = "Election started";
  }
  else {
    uVar2 = 0x18;
    *param_1 = 0;
    pcVar1 = "Invalid arguments count.";
  }
  FUN_00409350(pcVar1,uVar2);
  ExceptionList = local_10;
  return param_1;
}

