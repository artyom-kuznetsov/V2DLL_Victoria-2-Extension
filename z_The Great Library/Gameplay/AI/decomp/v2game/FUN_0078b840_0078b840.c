// FUN_0078b840 @ 0078b840 body=[[0078b840, 0078b8aa] [0078b8ae, 0078b925]]


undefined4 FUN_0078b840(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00409350(&DAT_00dfad80,4);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  do {
    if (piVar3 == (int *)0x0) {
      uVar5 = (**(code **)(*(int *)(*(int *)(local_14 + 4) + 0x18) + 0x94))(param_1);
      ExceptionList = local_10;
      return uVar5;
    }
    iVar1 = *piVar3;
    piVar3 = (int *)piVar3[2];
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x58))(param_1);
  } while (cVar2 == '\0');
  ExceptionList = local_10;
  return 1;
}

