// FUN_00408be0 @ 00408be0 body=[[00408be0, 00408c9f]]


void FUN_00408be0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47f6a;
  pvStack_10 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  ExceptionList = &pvStack_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) != 0) {
    FUN_00408cd4();
    return;
  }
  local_8 = 2;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if ((*(int *)piVar1[9] != 0) && (piVar2 = (int *)piVar1[0xd], 0 < *piVar2)) {
    *piVar2 = *piVar2 + -1;
    puVar3 = *(undefined1 **)piVar1[9];
    *(undefined1 **)piVar1[9] = puVar3 + 1;
    *puVar3 = 10;
    local_8 = 1;
    FUN_00408cd4();
    return;
  }
  (**(code **)(*piVar1 + 0xc))(10);
  local_8 = 1;
  FUN_00408cd4();
  return;
}

