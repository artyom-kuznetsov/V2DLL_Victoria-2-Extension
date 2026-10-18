// FUN_00420290 @ 00420290 body=[[00420290, 00420388]]


undefined1 * FUN_00420290(undefined1 *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5c3e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  iVar1 = DAT_01258a74;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 1;
    local_1c = *(undefined4 *)(iVar1 + 0x6b9bc);
    local_30 = *(undefined4 *)(iVar1 + 0x6b9c0);
    local_34 = *(undefined4 *)(iVar1 + 0x6b9bc);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_8 = 1;
    bVar2 = *(char *)(*(int *)(iVar1 + 0x6bc48) + 0x44) == '\0';
    *(bool *)(*(int *)(iVar1 + 0x6bc48) + 0x44) = bVar2;
    local_18 = local_30;
    FUN_0099bf60(&local_34,*(undefined4 *)(*(int *)(iVar1 + 0x6bc48) + 0x40),bVar2);
    if (bVar2) {
      uVar4 = 0x13;
      pcVar3 = "Fullscreen mode ON.";
    }
    else {
      uVar4 = 0x14;
      pcVar3 = "Fullscreen mode OFF.";
    }
  }
  else {
    uVar4 = 0x12;
    *param_1 = 0;
    pcVar3 = "Invalid arguments.";
  }
  FUN_00409350(pcVar3,uVar4);
  ExceptionList = local_10;
  return param_1;
}

