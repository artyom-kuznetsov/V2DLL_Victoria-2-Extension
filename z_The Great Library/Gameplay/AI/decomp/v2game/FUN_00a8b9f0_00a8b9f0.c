// FUN_00a8b9f0 @ 00a8b9f0 body=[[00a8b9f0, 00a8bb09]]


undefined4 * FUN_00a8b9f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f8e80();
  uVar1 = DAT_00f092fc;
  local_8 = 0;
  *param_1 = &PTR_FUN_00e38350;
  param_1[0x3e] = uVar1;
  param_1[0x41] = param_2;
  param_1[0x47] = 0xf;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e44a80;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  puVar2 = (undefined4 *)FUN_005da1e0();
  puVar4 = param_1 + 0x15;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_005da1e0();
  uVar1 = DAT_00f092fc;
  puVar4 = param_1 + 0x25;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x3e] = uVar1;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  ExceptionList = local_10;
  return param_1;
}

