// FUN_009fa120 @ 009fa120 body=[[009fa120, 009fa252]]


undefined4 * FUN_009fa120(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4176c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a6a30(param_1,param_3);
  param_1[0x15] = &PTR___purecall_00e3d5dc;
  param_1[0x16] = &PTR_FUN_00e41e84;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = CCheckBoxObserver::vftable;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  DAT_013f0934 = DAT_013f0934 + 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x20] = &PTR_FUN_00e3d5bc;
  *param_1 = &PTR_FUN_00e3d5e0;
  param_1[0x15] = &PTR_FUN_00e3d698;
  param_1[0x1f] = &PTR_LAB_00e3d69c;
  param_1[0x20] = &PTR_LAB_00e3d6b8;
  param_1[0x26] = param_2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  piVar2 = DAT_00f20c18;
  local_8 = 6;
  param_1[0x2b] = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
      DAT_00f20c18 = piVar2;
    }
    else {
      *piVar2 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar2;
    }
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))();
  puVar1 = (undefined4 *)param_1[0x29];
  if ((puVar3 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1[0x29] = puVar3;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  ExceptionList = local_10;
  return param_1;
}

