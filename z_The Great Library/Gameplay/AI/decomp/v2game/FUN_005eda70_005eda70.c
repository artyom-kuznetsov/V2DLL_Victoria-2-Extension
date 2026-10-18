// FUN_005eda70 @ 005eda70 body=[[005eda70, 005edac8] [005edad2, 005edaed]]


void FUN_005eda70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3a44b;
  ExceptionList = &local_10;
  *param_1 = CHistoryContainer::vftable;
  local_8 = 0;
  piVar3 = (int *)param_1[3];
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_10;
  return;
}

