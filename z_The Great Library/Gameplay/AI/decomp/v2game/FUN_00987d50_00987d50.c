// FUN_00987d50 @ 00987d50 body=[[00987d50, 00987dfe]]


int * FUN_00987d50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a4fa;
  pvStack_10 = ExceptionList;
  piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  ExceptionList = &pvStack_10;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    local_8 = 2;
    FUN_00419180(param_2,param_3,param_4);
    local_8 = 1;
    piVar2 = (int *)FUN_00987e30();
    return piVar2;
  }
  FUN_00401120(*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | 4,0);
  local_8 = 4;
  cVar1 = thunk_FUN_00ab4d81();
  if (cVar1 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = pvStack_10;
  return param_1;
}

