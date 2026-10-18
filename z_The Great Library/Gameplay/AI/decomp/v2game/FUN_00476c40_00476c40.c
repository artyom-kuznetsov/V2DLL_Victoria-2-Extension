// FUN_00476c40 @ 00476c40 body=[[00476c40, 00476e31]]


void FUN_00476c40(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d47b;
  local_10 = ExceptionList;
  if (param_2[0x41] == 0) {
    local_20 = DAT_00f092dc;
    ExceptionList = &local_10;
  }
  else {
    ExceptionList = &local_10;
    fVar8 = (float10)(**(code **)(*(int *)(param_2[0x41] + 0x54) + 0x10))();
    local_20 = (float)fVar8;
  }
  (**(code **)(*param_2 + 0x24))();
  iVar7 = piVar5[1] - *piVar5;
  local_1c = 0;
  if (0 < iVar7 / 0x4c) {
    puVar1 = (uint *)(param_1 + 0x5c);
    local_18 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x6c) = iVar7 + 1;
      if (iVar7 < (int)(*(int *)(param_1 + 0x60) - *puVar1) >> 2) {
        local_14 = *(int **)(*puVar1 + iVar7 * 4);
      }
      else {
        param_3 = (int *)FUN_00aae9af(0x5c);
        local_8 = 0;
        if (param_3 == (int *)0x0) {
          local_14 = (int *)0x0;
        }
        else {
          local_14 = (int *)FUN_00476280(param_3);
        }
        local_8 = 0xffffffff;
        puVar2 = *(undefined4 **)(param_1 + 0x60);
        param_3 = local_14;
        if (&param_3 < puVar2) {
          puVar3 = (undefined4 *)*puVar1;
          if (&param_3 < puVar3) goto LAB_00476d59;
          if (puVar2 == *(undefined4 **)(param_1 + 100)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x60) =
                 *(undefined4 *)(*puVar1 + ((int)&param_3 - (int)puVar3 >> 2) * 4);
          }
        }
        else {
LAB_00476d59:
          if (puVar2 == *(undefined4 **)(param_1 + 100)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x60) = local_14;
          }
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
      }
      FUN_00476590(*piVar5 + local_18);
      (**(code **)(*param_2 + 0x10))(local_14,0);
      iVar7 = piVar5[1] - *piVar5;
      local_18 = local_18 + 0x4c;
      local_1c = local_1c + 1;
    } while (local_1c < iVar7 / 0x4c);
  }
  iVar4 = param_2[0x41];
  if ((iVar4 != 0) && (DAT_00f092dc < local_20)) {
    FUN_00401000((local_20 + 0.0005) * 1000.0,iVar7,1,1);
    uVar6 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar4 + 0x54) + 0x1c))(uVar6);
  }
  (**(code **)(*param_2 + 0x6c))();
  ExceptionList = local_10;
  return;
}

