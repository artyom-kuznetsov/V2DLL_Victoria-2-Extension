// FUN_004931f0 @ 004931f0 body=[[004931f0, 00493315]]


int * FUN_004931f0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_34;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d052;
  pvStack_10 = ExceptionList;
  piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_14 = &stack0xffffffbc;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffbc;
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
    FUN_00446040(&local_1c);
    local_8._0_1_ = 2;
    FUN_00448b90();
    local_8._0_1_ = 1;
    if (local_1c != 0) {
      std::_Lockit::_Lockit((_Lockit *)&local_20,0);
      iVar1 = *(int *)(local_1c + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)(local_1c + 4) = iVar1 + -1;
      }
      iVar1 = *(int *)(local_1c + 4);
      FUN_00aad9f1();
      puVar7 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_1c);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar1 = *(int *)(*param_1 + 4);
    local_34 = local_34 & 0xffffff00;
    local_20 = CONCAT31(local_20._1_3_,*(undefined1 *)(iVar1 + 0x40 + (int)param_1));
    pcVar4 = (char *)FUN_00455690(*(int *)(*param_1 + 4) + (int)param_1,local_20,local_34,
                                  *(undefined4 *)(iVar1 + 0x38 + (int)param_1));
    if (*pcVar4 != '\0') {
      local_18 = 4;
    }
    local_8 = 1;
    piVar5 = (int *)FUN_00493347();
    return piVar5;
  }
  if (local_18 != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
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

