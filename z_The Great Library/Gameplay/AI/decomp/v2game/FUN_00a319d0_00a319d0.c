// FUN_00a319d0 @ 00a319d0 body=[[00a319d0, 00a31a51] [00a31a55, 00a31b4a]]


/* WARNING: Removing unreachable block (ram,0x00a31a48) */

void FUN_00a319d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iStack_44;
  int local_40;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4be63;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00a31760();
  FUN_00409350();
  local_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x30) + 0x7c))();
  puStack_10 = (undefined1 *)0xffffffff;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  piVar5 = (int *)*puVar3;
  iVar1 = *(int *)(iVar1 + 0x24) - *(int *)(iStack_44 + 0x20) >> 2;
  local_40 = 0;
  if (0 < iVar1) {
    do {
      if (piVar5 == (int *)0x0) {
        iVar4 = FUN_00aae9af();
        puStack_10 = (undefined1 *)0x1;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00a33d40();
        }
        puStack_10 = (undefined1 *)0xffffffff;
        (**(code **)(*(int *)(iVar4 + 0x1c) + 0x28))();
        (**(code **)(*piVar2 + 0x10))(iVar4);
      }
      else {
        iVar4 = *piVar5;
        piVar5 = (int *)piVar5[2];
      }
      FUN_00a34000(iVar4);
      local_40 = local_40 + 1;
    } while (local_40 < iVar1);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x60))();
  }
  (**(code **)(*piVar2 + 0x6c))();
  ExceptionList = pvStack_18;
  return;
}

