// FUN_0061aab0 @ 0061aab0 body=[[0061aab0, 0061ab1e] [0061ab22, 0061ab88]]


undefined4 FUN_0061aab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  local_18 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("cb_list",7);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (piVar3 == (int *)0x0) {
LAB_0061ab5b:
    FUN_006ba800(param_1,param_2);
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
    piVar3 = (int *)*puVar4;
    do {
      if (piVar3 == (int *)0x0) goto LAB_0061ab5b;
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      cVar2 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x58))(param_2);
    } while (cVar2 == '\0');
    FUN_00619680(iVar1,param_1);
  }
  ExceptionList = local_10;
  return param_1;
}

