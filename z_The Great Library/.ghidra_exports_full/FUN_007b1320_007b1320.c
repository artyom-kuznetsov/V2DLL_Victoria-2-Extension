// FUN_007b1320 @ 007b1320 body=[[007b1320, 007b1392] [007b1396, 007b1437] [007b143b, 007b1471]]


void FUN_007b1320(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 auStack_5c [8];
  uint uStack_54;
  undefined1 local_50 [12];
  undefined4 uStack_44;
  uint local_40;
  uint local_3c [3];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  pvStack_14 = ExceptionList;
  local_3c[0] = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("unit_queue",10);
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x7c))(local_50);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  local_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  iVar2 = *(int *)(iVar2 + 8);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x58))(auStack_5c);
  if (iVar2 != 0) {
    FUN_007b1520();
    ExceptionList = pvStack_1c;
    return;
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("unit_queue",10);
  pvStack_14 = (void *)0x1;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x7c))(local_3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  local_40 = local_40 & 0xffffff00;
  for (puVar3 = (undefined4 *)*puVar3; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]
      ) {
    (**(code **)(*(int *)*puVar3 + 0x20))();
  }
  ExceptionList = pvStack_20;
  return;
}

