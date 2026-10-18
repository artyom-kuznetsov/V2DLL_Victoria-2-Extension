// FUN_0041fab0 @ 0041fab0 body=[[0041fab0, 0041fb65]]


undefined1 * FUN_0041fab0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  iVar1 = DAT_012588e8;
  local_8 = 0;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 1;
    bVar2 = *(char *)(*(int *)(iVar1 + 0xb24) + 8) == '\0';
    *(bool *)(*(int *)(iVar1 + 0xb24) + 8) = bVar2;
    if (bVar2) {
      uVar4 = 0x38;
      pcVar3 = "Now painting continent. Shift-click to painting the map.";
    }
    else {
      uVar4 = 0x11;
      pcVar3 = "Painting disabled";
    }
  }
  else {
    uVar4 = 0x17;
    *param_1 = 0;
    pcVar3 = "Invalid arguments count";
  }
  FUN_00409350(pcVar3,uVar4);
  ExceptionList = local_10;
  return param_1;
}

