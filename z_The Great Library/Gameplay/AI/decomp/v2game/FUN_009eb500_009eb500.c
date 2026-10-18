// FUN_009eb500 @ 009eb500 body=[[009eb500, 009eb689]]


undefined4 *
FUN_009eb500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_58 [17];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009f8e80();
  uVar2 = DAT_00f177e0;
  uVar1 = DAT_00f092fc;
  param_1[0x3d] = DAT_00f092fc;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00e3c938;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = uVar1;
  param_1[0x48] = 0;
  param_1[0x47] = uVar2;
  param_1[0x49] = uVar2;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = param_2;
  param_1[0x4e] = param_3;
  param_1[0x4f] = param_4;
  param_1[0x50] = param_5;
  *(undefined1 *)(param_1 + 0x51) = 0;
  FUN_005da1e0();
  FUN_00408b00();
  FUN_005da1e0();
  FUN_00408b00();
  FUN_00408b00();
  if (*(char *)(param_1 + 0x51) == '\0') {
    D3DXMatrixPerspectiveFovLH(local_58,param_1[0x4d],param_1[0x4e],param_1[0x4f],param_1[0x50]);
  }
  else {
    D3DXMatrixOrthoRH(local_58,param_1[0x4d],param_1[0x4e],param_1[0x4f],param_1[0x50]);
  }
  puVar4 = local_58;
  puVar5 = param_1 + 0x52;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_009ebd70(&local_14);
  return param_1;
}

