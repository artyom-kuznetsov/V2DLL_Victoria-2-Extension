// FUN_007e8a80 @ 007e8a80 body=[[007e8a80, 007e8ba9] [007e8bad, 007e8c6d] [007e8c71, 007e8c81]]


void FUN_007e8a80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_30 [5];
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63450;
  local_10 = ExceptionList;
  puVar6 = param_5;
  if (0xf < (uint)param_5[5]) {
    puVar6 = (undefined4 *)*param_5;
  }
  ExceptionList = &local_10;
  iVar3 = FUN_009bf050(puVar6);
  if (iVar3 == 0) {
    ExceptionList = local_10;
    return;
  }
  piVar1 = (int *)(param_1 + 0x130);
  local_14 = *(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x130) >> 2;
  if (local_14 <= param_4) {
    FUN_0068ea30(param_4 + 1);
    for (iVar3 = local_14; iVar3 < param_4 + 1; iVar3 = iVar3 + 1) {
      *(undefined4 *)(*piVar1 + iVar3 * 4) = 0;
    }
  }
  if (*(int *)(*piVar1 + param_4 * 4) != 0) {
    FUN_009962f0(*(undefined4 *)(param_1 + 0x118));
    *(undefined4 *)(*piVar1 + param_4 * 4) = 0;
  }
  FUN_00988f20(param_3);
  local_8 = 0;
  iVar3 = FUN_005c2ad0(local_30);
  if (iVar3 == 0) {
    uVar5 = FUN_00988fa0(param_3);
    local_8._0_1_ = 1;
    FUN_00408ed0(uVar5,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    iVar3 = FUN_005c2ad0(local_30);
    if (iVar3 == 0) goto LAB_007e8c5d;
  }
  piVar2 = *(int **)(param_1 + 0x118);
  piVar4 = (int *)FUN_005c2ad0(local_30);
  uVar5 = (**(code **)(*piVar4 + 0x48))();
  (**(code **)(*piVar2 + 0x10))(uVar5);
  *(undefined4 *)(*piVar1 + param_4 * 4) = uVar5;
  if (0xf < (uint)param_5[5]) {
    param_5 = (undefined4 *)*param_5;
  }
  iVar3 = *(int *)(*piVar1 + param_4 * 4);
  puVar6 = (undefined4 *)FUN_009bf050(param_5);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00ad0650(*puVar6,*(undefined4 *)(iVar3 + 0x144));
    *(undefined1 *)(iVar3 + 0x19c) = 1;
    FUN_004e9b90();
  }
LAB_007e8c5d:
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

