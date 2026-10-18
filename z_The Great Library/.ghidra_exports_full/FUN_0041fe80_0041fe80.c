// FUN_0041fe80 @ 0041fe80 body=[[0041fe80, 0041ff68]]


undefined1 * FUN_0041fe80(undefined1 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
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
    uVar3 = 0x1f;
    pcVar2 = "Please specify the province id.";
  }
  else {
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x90))();
    if (iVar1 != 0) {
      param_2 = (int *)*param_2;
      if (0xf < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      iVar1 = FUN_00aaf0c5(param_2);
      if (iVar1 < 1) {
        ExceptionList = local_10;
        return param_1;
      }
      uVar3 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4);
      FUN_005d1890();
      FUN_005cb2c0(uVar3);
      uVar3 = 0xb;
      *param_1 = 1;
      pcVar2 = "Unit moved.";
      goto LAB_0041ff4e;
    }
    uVar3 = 0x20;
    pcVar2 = "Select transportable unit first!";
  }
  *param_1 = 0;
LAB_0041ff4e:
  FUN_00409350(pcVar2,uVar3);
  ExceptionList = local_10;
  return param_1;
}

