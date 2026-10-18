// FUN_009f9f00 @ 009f9f00 body=[[009f9f00, 009f9fdd] [009f9fe0, 009fa0bb] [009fa0bf, 009fa0d3]]


undefined4 *
FUN_009f9f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            ushort param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_stack_0000002c;
  int *in_stack_00000034;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b417d4;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009a6a30();
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
  param_1[0x27] = param_4;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  param_1[0x2b] = 0;
  for (iVar1 = *in_stack_00000034; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_00408ed0(iVar1,0,0xffffffff);
    iVar4 = FUN_00a5ac10();
    if (iVar4 != 0) {
      FUN_009a8b10();
      pcVar2 = *(code **)(*(int *)(iVar4 + 0x54) + 4);
      *(undefined1 *)(iVar4 + 0xe4) = 1;
      (*pcVar2)();
      (**(code **)(param_1[0x16] + 0x18))();
    }
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puVar5 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar3 = (undefined4 *)param_1[0x29];
  if ((puVar5 != puVar3) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)();
  }
  param_1[0x29] = puVar5;
  param_1[0xf] = (float)param_5;
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

