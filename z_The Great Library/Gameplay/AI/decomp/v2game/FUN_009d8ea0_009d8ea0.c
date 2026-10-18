// FUN_009d8ea0 @ 009d8ea0 body=[[009d8ea0, 009d8fce]]


int * FUN_009d8ea0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint local_34;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b498b2;
  pvStack_10 = ExceptionList;
  piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_14 = &stack0xffffffc0;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc0;
  if (piVar3 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar3 + 4))();
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    FUN_00446040(&local_1c);
    local_8._0_1_ = 2;
    piVar3 = (int *)FUN_00448b90();
    local_8._0_1_ = 1;
    if (local_1c != 0) {
      std::_Lockit::_Lockit((_Lockit *)&local_20,0);
      iVar4 = *(int *)(local_1c + 4);
      if ((iVar4 != 0) && (iVar4 != -1)) {
        *(int *)(local_1c + 4) = iVar4 + -1;
      }
      iVar4 = *(int *)(local_1c + 4);
      FUN_00aad9f1();
      puVar6 = (undefined4 *)(~-(uint)(iVar4 != 0) & local_1c);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar4 = *(int *)(*param_1 + 4);
    uVar7 = *(undefined4 *)(iVar4 + 0x38 + (int)param_1);
    local_20 = CONCAT31(local_20._1_3_,*(undefined1 *)(iVar4 + 0x40 + (int)param_1));
    iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
    local_34 = local_34 & 0xffffff00;
    (**(code **)(*piVar3 + 0x10))(&param_2,local_34,uVar7,iVar4,local_20,param_2,param_3);
    if ((char)param_2 != '\0') {
      local_18 = 4;
    }
    local_8 = 1;
    piVar3 = (int *)FUN_009d9000(local_34,uVar7,iVar4);
    return piVar3;
  }
  if (local_18 != 0) {
    uVar5 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_00401120(uVar5,0);
  }
  local_8 = 5;
  cVar2 = thunk_FUN_00ab4d81();
  if (cVar2 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = pvStack_10;
  return param_1;
}

