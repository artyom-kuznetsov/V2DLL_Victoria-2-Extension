// FUN_0041fb70 @ 0041fb70 body=[[0041fb70, 0041fc58]]


undefined1 * FUN_0041fb70(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  uVar2 = DAT_01259abc;
  local_8 = 0;
  pcVar4 = (char *)*param_2;
  if ((param_2[1] - (int)pcVar4) / 0x1c < 1) {
    *param_1 = 0;
  }
  else {
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar4 = *(char **)pcVar4;
    }
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
    FUN_0043bb10();
    *(undefined4 *)(DAT_012588e8 + 0xb0c) = uVar2;
    *param_1 = 1;
  }
  FUN_00409350();
  ExceptionList = local_10;
  return param_1;
}

