// FUN_009c6cf0 @ 009c6cf0 body=[[009c6cf0, 009c6e56]]


int * FUN_009c6cf0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  _Lockit local_24 [4];
  uint local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49ce8;
  pvStack_10 = ExceptionList;
  piVar8 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_14 = &stack0xffffffb4;
  uVar9 = 0;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffffb4;
  if (piVar8 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar8 + 4))();
    puVar3 = local_14;
  }
  local_14 = puVar3;
  local_8 = 0;
  cVar4 = FUN_005486e0(param_1,0);
  local_8 = 1;
  if (cVar4 == '\0') {
    iVar6 = *(int *)(*param_1 + 4);
    *(undefined4 *)(iVar6 + 0x20 + (int)param_1) = 0;
    *(undefined4 *)(iVar6 + 0x24 + (int)param_1) = 0;
    if (local_15 == '\0') {
      uVar9 = 2;
    }
    if (uVar9 != 0) {
      uVar9 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | uVar9;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
        uVar9 = uVar9 | 4;
      }
      FUN_00401120(uVar9,0);
    }
    local_8 = 0xffffffff;
    piVar8 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))();
    }
    ExceptionList = pvStack_10;
    return param_1;
  }
  uVar5 = FUN_00446040(&local_20);
  local_8._0_1_ = 2;
  iVar6 = FUN_00549710(uVar5);
  local_8._0_1_ = 1;
  if (local_20 != 0) {
    std::_Lockit::_Lockit(local_24,0);
    iVar1 = *(int *)(local_20 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_20 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(local_20 + 4);
    FUN_00aad9f1();
    puVar10 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_20);
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)*puVar10)(1);
    }
  }
  FUN_00409450(0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = *(int *)(*param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x24 + (int)param_1);
  uVar9 = *(uint *)(iVar1 + 0x20 + (int)param_1);
  if ((iVar2 < 0) || (((iVar2 < 1 && (uVar9 == 0)) || (0xfffffffd < uVar9)))) {
    uVar9 = 0xfffffffe;
  }
  piVar8 = *(int **)(iVar1 + 0x38 + (int)param_1);
  if ((*(int *)piVar8[8] == 0) || (*(int *)piVar8[0xc] < 1)) {
    uVar7 = (**(code **)(*piVar8 + 0x18))();
  }
  else {
    uVar7 = (uint)**(byte **)piVar8[8];
  }
  do {
    if (uVar9 == 0) {
LAB_009c6e20:
      local_8 = 1;
      piVar8 = (int *)FUN_009c6e88();
      return piVar8;
    }
    if (uVar7 == 0xffffffff) {
      local_1c = local_1c | 1;
      goto LAB_009c6e20;
    }
    if ((*(byte *)(*(int *)(iVar6 + 0x10) + (uVar7 & 0xff) * 2) & 0x48) != 0) goto LAB_009c6e20;
    FUN_00448860(1,uVar7);
    local_15 = '\x01';
    uVar9 = uVar9 - 1;
    uVar7 = FUN_005474a0();
  } while( true );
}

