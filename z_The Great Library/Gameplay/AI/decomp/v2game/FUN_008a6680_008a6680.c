// FUN_008a6680 @ 008a6680 body=[[008a6680, 008a6743] [008a6747, 008a675c] [008a6760, 008a6775] [008a6779, 008a678d] [008a6791, 008a67ab]]


void FUN_008a6680(uint *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e899;
  local_10 = ExceptionList;
  local_8 = 3;
  piVar3 = (int *)*param_1;
  ExceptionList = &local_10;
  while (((int *)*param_1 <= piVar3 && (piVar3 < (int *)param_1[1]))) {
    puVar1 = (undefined4 *)*piVar3;
    piVar3 = piVar3 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)param_1[1]) {
    FID_conflict__memcpy(pvVar2,(void *)param_1[1],0);
    param_1[1] = (uint)pvVar2;
  }
  piVar3 = (int *)param_1[8];
  while (((int *)param_1[8] <= piVar3 && (piVar3 < (int *)param_1[9]))) {
    puVar1 = (undefined4 *)*piVar3;
    piVar3 = piVar3 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)param_1[9]) {
    FID_conflict__memcpy(pvVar2,(void *)param_1[9],0);
    param_1[9] = (uint)pvVar2;
  }
  if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_1[8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_10;
  return;
}

