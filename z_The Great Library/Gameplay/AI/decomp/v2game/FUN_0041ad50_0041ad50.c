// FUN_0041ad50 @ 0041ad50 body=[[0041ad50, 0041adf0]]


undefined1 * FUN_0041ad50(undefined1 *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
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
  local_8 = 0;
  iVar1 = param_2[1] - *param_2 >> 0x1f;
  if ((param_2[1] - *param_2) / 0x1c + iVar1 == iVar1) {
    cVar2 = FUN_00461ee0();
    if (cVar2 != '\0') {
      uVar4 = 0x1c;
      *param_1 = 1;
      pcVar3 = "Newspaper database reloaded.";
      goto LAB_0041add7;
    }
    uVar4 = 0x24;
    pcVar3 = "Failed to reload newspaper database.";
  }
  else {
    uVar4 = 0x14;
    pcVar3 = "No arguments needed.";
  }
  *param_1 = 0;
LAB_0041add7:
  FUN_00409350(pcVar3,uVar4);
  ExceptionList = local_10;
  return param_1;
}

