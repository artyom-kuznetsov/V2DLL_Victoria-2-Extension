// FUN_00a87130 @ 00a87130 body=[[00a87130, 00a87238] [00a87240, 00a8746d] [00a87471, 00a87485]]


undefined4 *
FUN_00a87130(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            ushort param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint in_stack_0000002c;
  int *in_stack_00000034;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b93ae6;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009a6a30();
  param_1[0x15] = &PTR___purecall_00e4470c;
  param_1[0x16] = &PTR_FUN_00e41e84;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = CTernary<int,0>::vftable;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = CScrollbarObserver::vftable;
  *param_1 = &PTR_FUN_00e44718;
  param_1[0x15] = &PTR_FUN_00e447c8;
  param_1[0x28] = &PTR_LAB_00e447d0;
  param_1[0x29] = param_2;
  param_1[0x2a] = param_4;
  param_1[0x2b] = 0;
  param_1[0x2d] = &PTR_FUN_00e446f8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,5);
  for (iVar1 = *in_stack_00000034; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    DAT_0131c898 = 1;
    FUN_00408ed0(iVar1,0,0xffffffff);
    piVar3 = (int *)FUN_00a5b560();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
      (**(code **)(param_1[0x16] + 0x18))();
      piVar4 = (int *)(**(code **)(*piVar3 + 0x18))();
      iVar6 = *piVar4;
      iVar5 = (**(code **)(*piVar3 + 0x18))();
      iVar6 = *(int *)(iVar5 + 4) - iVar6;
      if (0x39580d < iVar6 + 0x189373U) {
        uVar7 = __allmul(iVar6);
        __alldiv(uVar7);
      }
      (**(code **)(*piVar3 + 0x18))();
      FUN_00401000();
      FUN_00b31c00();
      FUN_00a8db40();
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  (**(code **)(param_1[0x2d] + 4))();
  (**(code **)param_1[0x2d])();
  if (param_1[0x17] != 0) {
    FUN_00a87850();
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
  puVar8 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar2 = (undefined4 *)param_1[0x2b];
  if ((puVar8 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)();
  }
  param_1[0x2b] = puVar8;
  param_1[0xf] = (float)param_5;
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

