// FUN_0054b3e0 @ 0054b3e0 body=[[0054b3e0, 0054b509]]


int * FUN_0054b3e0(int *param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cd00;
  pvStack_10 = ExceptionList;
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  ExceptionList = &pvStack_10;
  if (piVar4 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = 0;
  cVar2 = FUN_005486e0(param_1,1);
  local_8 = 1;
  if (cVar2 == '\0') {
    uVar3 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc);
    uVar5 = uVar3 | 2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar5 = uVar3 | 6;
    }
    FUN_00401120(uVar5,0);
    local_8 = 0xffffffff;
    piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_8 = 2;
  FUN_00409450(0,0xffffffff);
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if ((*(int *)piVar4[8] == 0) || (*(int *)piVar4[0xc] < 1)) {
    uVar3 = (**(code **)(*piVar4 + 0x18))();
  }
  else {
    uVar3 = (uint)**(byte **)piVar4[8];
  }
  while( true ) {
    if (uVar3 == 0xffffffff) {
      local_8 = 1;
      piVar4 = (int *)FUN_0054b53b();
      return piVar4;
    }
    if (uVar3 == param_2) break;
    if (0xfffffffd < *(uint *)(in_ECX + 0x10)) {
      local_8 = 1;
      piVar4 = (int *)FUN_0054b53b();
      return piVar4;
    }
    FUN_00448860(1,uVar3);
    uVar3 = FUN_005474a0();
  }
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if ((*(int *)piVar4[8] != 0) && (piVar1 = (int *)piVar4[0xc], 0 < *piVar1)) {
    *piVar1 = *piVar1 + -1;
    *(int *)piVar4[8] = *(int *)piVar4[8] + 1;
    local_8 = 1;
    piVar4 = (int *)FUN_0054b53b();
    return piVar4;
  }
  (**(code **)(*piVar4 + 0x1c))();
  local_8 = 1;
  piVar4 = (int *)FUN_0054b53b();
  return piVar4;
}

