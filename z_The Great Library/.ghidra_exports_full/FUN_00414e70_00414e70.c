// FUN_00414e70 @ 00414e70 body=[[00414e70, 00414fec] [00414ff0, 0041512e] [00415132, 00415150] [00415156, 004151b5] [004151b9, 004151d3] [004151d7, 004152a5] [004152a9, 004152c3] [004152c7, 004152f3] [004152f7, 00415324]]


undefined4 FUN_00414e70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_17c [16];
  int local_16c;
  undefined1 local_120 [16];
  int local_110;
  int local_f4;
  undefined4 local_c4;
  undefined1 local_c0;
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47e8f;
  local_10 = ExceptionList;
  local_c4 = 0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = 0;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = 0;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = 0;
  local_6c = 0;
  local_68 = 1;
  local_8 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    FUN_0040c830(param_1);
    FUN_00459820();
    ExceptionList = local_10;
    return param_1;
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("-----------------\n",0x12);
  local_8._0_1_ = 1;
  cVar5 = (**(code **)(**(int **)(param_2 + 0x188) + 0x24))();
  if ((cVar5 != '\0') &&
     (iVar1 = *(int *)(param_2 + 0x188),
     (*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) != 0)) {
    if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **(int **)(iVar1 + 0x48);
    }
    if (*(int *)(param_2 + 0x58) == iVar7) {
      (**(code **)(*(int *)(iVar1 + 0x30) + 0xc))(local_17c,param_2);
      local_8._0_1_ = 2;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 2;
      if (local_16c != 0) {
        FUN_009885d0();
        local_8._0_1_ = 3;
        uVar6 = FUN_00988f20(local_48);
        local_8._0_1_ = 4;
        FUN_00448aa0(uVar6,0,0xffffffff);
        FUN_00408ad0();
        local_8._0_1_ = 2;
        FUN_00408ad0();
        uVar4 = (undefined1)local_8;
      }
      local_8._0_1_ = uVar4;
      piVar2 = *(int **)(*(int *)(param_2 + 0x188) + 0x60);
      do {
        piVar3 = piVar2;
        if (piVar3 == (int *)0x0) goto LAB_0041505d;
        piVar2 = (int *)piVar3[0x89];
      } while (piVar3[0x5f] == 0);
      if (local_b0 != 0) {
        FUN_00448aa0(local_64,0,0xffffffff);
      }
      (**(code **)(*piVar3 + 0xc))(local_120,param_2);
      local_8._0_1_ = 5;
      if (local_110 != 0) {
        FUN_00448aa0(local_120,0,0xffffffff);
      }
      FUN_00459820();
LAB_0041505d:
      local_8._0_1_ = 1;
      FUN_00459820();
    }
  }
  piVar2 = *(int **)(param_2 + 0xd8);
  do {
    if (piVar2 == (int *)0x0) goto LAB_004151e9;
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    cVar5 = (**(code **)(*piVar3 + 0x30))();
  } while (cVar5 == '\0');
  if (local_b0 != 0) {
    FUN_00448aa0(local_64,0,0xffffffff);
  }
  (**(code **)(piVar3[0xc] + 0xc))(local_120,param_2);
  local_8._0_1_ = 6;
  if (local_110 != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 7;
    uVar6 = FUN_00988f20(local_2c);
    local_8._0_1_ = 8;
    FUN_00448aa0(uVar6,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  if (local_f4 != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 9;
    uVar6 = FUN_00988f20(local_2c);
    local_8._0_1_ = 10;
    FUN_00448aa0(uVar6,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 1;
  FUN_00459820();
LAB_004151e9:
  piVar2 = *(int **)(param_2 + 0xd8);
  do {
    if (piVar2 == (int *)0x0) goto LAB_004152d6;
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    cVar5 = (**(code **)(*piVar3 + 0x34))();
  } while (cVar5 == '\0');
  if (local_b0 != 0) {
    FUN_00448aa0(local_64,0,0xffffffff);
  }
  (**(code **)(piVar3[0xc] + 0xc))(local_17c,param_2);
  local_8._0_1_ = 0xb;
  if (local_16c != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0xc;
    uVar6 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0xd;
    FUN_00448aa0(uVar6,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 1;
  FUN_00459820();
LAB_004152d6:
  FUN_0040c830(param_1);
  if (local_50 < 0x10) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00459820();
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64[0]);
}

