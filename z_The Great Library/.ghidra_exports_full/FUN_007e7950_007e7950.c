// FUN_007e7950 @ 007e7950 body=[[007e7950, 007e7acd] [007e7ad1, 007e7b98] [007e7ba0, 007e7bf0] [007e7bf4, 007e7c38] [007e7c3c, 007e7e0c] [007e7e10, 007e7e24]]


undefined4 *
FUN_007e7950(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 in_ECX;
  int *piVar7;
  float fVar8;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b026;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f8e80();
  param_1[0x3d] = DAT_00f092fc;
  param_1[0xb] = 0;
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x45] = param_4;
  *param_1 = CHoiAvatar::vftable;
  param_1[0x46] = param_5;
  param_1[0x47] = param_7;
  param_1[0x48] = param_6;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = param_9;
  iVar4 = FUN_005c2ad0(in_ECX);
  if (iVar4 != 0) {
    piVar7 = (int *)param_1[0x46];
    piVar5 = (int *)FUN_005c2ad0(in_ECX);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x48))();
    (**(code **)(*piVar7 + 0x10))(piVar5);
    param_1[0x49] = piVar5;
    (**(code **)(*piVar5 + 0x80))();
    (**(code **)(*(int *)param_1[0x49] + 0x74))(param_1);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 2;
    cVar3 = FUN_00416db0();
    local_8._0_1_ = 1;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    if (cVar3 == '\0') {
      piVar7 = (int *)param_1[0x46];
      piVar5 = (int *)FUN_005c2ad0(param_2);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*piVar7 + 0x10))(piVar5);
      param_1[0x4b] = piVar5;
      (**(code **)(*piVar5 + 0x80))();
      (**(code **)(*(int *)param_1[0x4b] + 0x74))(param_1);
      if (0xf < (uint)param_3[5]) {
        param_3 = (undefined4 *)*param_3;
      }
      iVar1 = param_1[0x49];
      puVar6 = (undefined4 *)FUN_009bf050(param_3);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_00ad0650(*puVar6,*(undefined4 *)(iVar1 + 0x144));
        *(undefined1 *)(iVar1 + 0x19c) = 1;
        FUN_004e9b90();
      }
    }
    iVar1 = *(int *)(iVar4 + 0xec);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x48);
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 3;
      FUN_007e8a80(param_1,local_48,iVar1 + 8,*(undefined4 *)(iVar1 + 0x40),iVar1 + 0x24);
      local_8._0_1_ = 1;
      iVar1 = iVar2;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e02bd4,4);
    local_8._0_1_ = 4;
    FUN_007e81a0(local_48,0);
    local_8._0_1_ = 1;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df2404,4);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (param_8 != 0) {
      if (param_8 == 2) {
        FUN_00448740("Floating",8);
      }
      piVar7 = (int *)param_1[0x46];
      piVar5 = (int *)FUN_005c2ad0(local_2c);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*piVar7 + 0x10))(piVar5);
      param_1[0x4a] = piVar5;
      (**(code **)(*piVar5 + 0x80))();
      (**(code **)(*(int *)param_1[0x4a] + 0x74))(param_1);
    }
    (**(code **)(*(int *)param_1[0x49] + 0x38))();
    if ((int *)param_1[0x4b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x4b] + 0x38))();
    }
    if ((int *)param_1[0x50] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x50] + 0x38))();
    }
    if ((int *)param_1[0x4a] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x4a] + 0x38))();
    }
    fVar8 = 0.0;
    if (*(char *)(param_1 + 0x53) != '\0') {
      fVar8 = 0.0 - (float)param_1[0x54] * 3.1415927;
    }
    piVar7 = (int *)param_1[0x4b];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)param_1[0x49];
    }
    (**(code **)(*piVar7 + 0x94))(fVar8);
    if (param_1[0x4b] == 0) {
      *(float *)(param_1[0x49] + 0x158) = *(float *)(iVar4 + 0x11c) * 0.75;
    }
    else {
      iVar4 = FUN_005c2ad0(param_2);
      *(float *)(param_1[0x4b] + 0x158) = *(float *)(iVar4 + 0x11c) * 0.75;
    }
    if (param_1[0x4a] != 0) {
      iVar4 = FUN_005c2ad0(local_2c);
      *(float *)(param_1[0x4a] + 0x158) = *(float *)(iVar4 + 0x11c) * 0.75;
    }
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

