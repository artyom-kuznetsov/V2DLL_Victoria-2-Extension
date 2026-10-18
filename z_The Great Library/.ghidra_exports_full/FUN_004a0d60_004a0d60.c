// FUN_004a0d60 @ 004a0d60 body=[[004a0d60, 004a0e24]]


undefined4 * FUN_004a0d60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a4b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  param_1 = (int *)((int)param_1 + 0x2268);
  local_8 = 0;
  local_14 = 0x100;
  do {
    if (*param_1 != 0) {
      for (piVar3 = (int *)*param_2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*piVar3 == *param_1) goto LAB_004a0e07;
      }
      iVar1 = param_2[1];
      piVar3 = (int *)FUN_00aae9af(0x10);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = *param_1;
        piVar3[1] = iVar1;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = param_2[2];
      param_2[1] = piVar3;
      param_2[2] = iVar2 + 1;
      if (iVar2 == 0) {
        *param_2 = piVar3;
      }
      else {
        *(int **)(iVar1 + 8) = piVar3;
      }
    }
LAB_004a0e07:
    param_1 = param_1 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
  } while( true );
}

