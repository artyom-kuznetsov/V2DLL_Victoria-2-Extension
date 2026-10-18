// FUN_0041d5e0 @ 0041d5e0 body=[[0041d5e0, 0041d73f] [0041d743, 0041d762] [0041d766, 0041d778]]


undefined1 * FUN_0041d5e0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *_String;
  undefined1 local_54 [20];
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4da69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  _String = (char *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)_String) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < *(uint *)(_String + 0x14)) {
    _String = *(char **)_String;
  }
  _atof(_String);
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  *(int *)(iVar1 + 0x1a8) = iVar2;
  if (iVar2 < 1000) {
    *(undefined4 *)(iVar1 + 0x1a8) = 1000;
  }
  if (100000 < *(int *)(iVar1 + 0x1a8)) {
    *(undefined4 *)(iVar1 + 0x1a8) = 100000;
  }
  *param_1 = 1;
  FUN_00988a50(local_54);
  local_8 = 1;
  uVar3 = FUN_00988fa0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00408ed0(uVar3);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

