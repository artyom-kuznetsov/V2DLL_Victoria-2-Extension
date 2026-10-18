// FUN_0048c130 @ 0048c130 body=[[0048c130, 0048c250]]


int * FUN_0048c130(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_28;
  _Lockit local_24 [4];
  uint local_20;
  uint local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d0f2;
  pvStack_10 = ExceptionList;
  piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_14 = &stack0xffffffc0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffc0;
  if (piVar5 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar5 + 4))();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    FUN_00446040(&local_20);
    local_8._0_1_ = 2;
    FUN_00448b90();
    local_8._0_1_ = 1;
    if (local_20 != 0) {
      std::_Lockit::_Lockit(local_24,0);
      iVar1 = *(int *)(local_20 + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)(local_20 + 4) = iVar1 + -1;
      }
      iVar1 = *(int *)(local_20 + 4);
      FUN_00aad9f1();
      puVar7 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_20);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_28 = local_28 & 0xffffff00;
    pcVar4 = (char *)FUN_0048b890(*(int *)(*param_1 + 4) + (int)param_1,local_28,
                                  *(undefined4 *)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1));
    if (*pcVar4 != '\0') {
      local_1c = 4;
    }
    local_8 = 1;
    piVar5 = (int *)FUN_0048c282();
    return piVar5;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    FUN_00401120(uVar6,0);
  }
  local_8 = 5;
  cVar3 = thunk_FUN_00ab4d81();
  if (cVar3 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = pvStack_10;
  return param_1;
}

