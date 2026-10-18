// FUN_00a5f0c0 @ 00a5f0c0 body=[[00a5f0c0, 00a5f20f]]


undefined4 * FUN_00a5f0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b5c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f0950 = DAT_013f0950 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  DAT_013f0958 = DAT_013f0958 + 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[6] = &PTR_FUN_00e42130;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  DAT_013f0960 = DAT_013f0960 + 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xc] = &PTR_FUN_00e42140;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  DAT_013f0968 = DAT_013f0968 + 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x12] = &PTR_FUN_00e42150;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  DAT_013f0970 = DAT_013f0970 + 1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = &PTR_FUN_00e42160;
  local_8 = 0xe;
  *param_1 = &PTR_FUN_00e42080;
  param_1[6] = &PTR_LAB_00e420e0;
  param_1[0xc] = &PTR_LAB_00e420f0;
  param_1[0x12] = &PTR_LAB_00e42100;
  param_1[0x18] = &PTR_LAB_00e42110;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0x3fc999999999999a;
  puVar2 = param_1 + 0x26;
  local_14 = 3;
  do {
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    uVar1 = (**(code **)(*DAT_00f20c18 + 4))();
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  ExceptionList = local_10;
  return param_1;
}

