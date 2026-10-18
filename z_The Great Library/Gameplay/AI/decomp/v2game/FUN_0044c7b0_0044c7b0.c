// FUN_0044c7b0 @ 0044c7b0 body=[[0044c7b0, 0044c879] [0044c87d, 0044c889] [0044c890, 0044c8e7] [0044c8eb, 0044c948] [0044c94c, 0044c9f9] [0044c9fd, 0044ca20] [0044ca24, 0044ca45] [0044ca49, 0044ca76] [0044ca7a, 0044ca8a] [0044ca8e, 0044caab]]


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0044c7b0(undefined1 *param_1,int param_2,uint ***param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 ****local_bc;
  uint ***local_ac;
  uint local_98;
  uint ***local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint ***local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint ***local_54 [4];
  int local_44;
  uint local_40;
  undefined4 local_38;
  uint ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4d6af;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_38 = 1;
  local_18 = 0;
  if (in_ECX[4] == 0) {
    local_bc = (undefined4 ****)0x3f000000;
    FUN_00401000();
    local_bc = (undefined4 ****)0x44c82f;
    iVar3 = FUN_00b31c00();
    if (*(int *)(in_ECX[6] + param_2 * 8) != iVar3) {
      local_14 = (int *)&local_bc;
      local_bc = (undefined4 ****)param_3;
      uVar4 = (**(code **)(*in_ECX + 0x20))(local_54);
      local_bc = (undefined4 ****)0xffffffff;
      local_8 = 1;
      FUN_00408ed0(uVar4);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_40) {
        local_bc = (undefined4 ****)local_54[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  piVar1 = (int *)in_ECX[2];
  do {
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_14 = (int *)piVar1[2];
    piVar1 = (int *)*piVar1;
    if (local_18 < *(int *)(param_1 + 0x10)) {
      local_bc = (undefined4 ****)0x1;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (uint ***)((uint)local_34[0] & 0xffffff00);
      FUN_00409350();
      local_bc = (undefined4 ****)0xffffffff;
      local_8 = 2;
      FUN_00448aa0(local_34);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
        local_bc = (undefined4 ****)local_34[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_18 = *(int *)(param_1 + 0x10);
    local_bc = (undefined4 ****)0x0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (uint ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_bc = local_34;
    local_8 = 3;
    (**(code **)(*piVar1 + 0x24))(local_54,param_2);
    local_8._0_1_ = 5;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (uint ***)((uint)local_34[0] & 0xffffff00);
    if (local_44 != 0) {
      FUN_00448aa0(param_4,0,0xffffffff);
    }
    cVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((cVar2 != '\0') && (0 < local_44)) {
      local_bc = (undefined4 ****)0x2;
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (uint ***)((uint)local_8c[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 6;
      local_bc = local_70;
      (**(code **)(*(int *)piVar1[0xc] + 0x1c))();
      local_bc = local_8c;
      local_8._0_1_ = 7;
      uVar4 = FUN_00988f20();
      local_bc = (undefined4 ****)0xffffffff;
      local_8._0_1_ = 8;
      FUN_00448aa0(uVar4);
      if (0xf < local_98) {
        local_bc = (undefined4 ****)local_ac;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_ac = (uint ***)((uint)local_ac & 0xffffff00);
      if (0xf < local_5c) {
        local_bc = (undefined4 ****)local_70[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = (uint ***)((uint)local_70[0] & 0xffffff00);
      if (0xf < local_78) {
        local_bc = (undefined4 ****)local_8c[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_bc = local_70;
    uVar4 = FUN_00989330();
    local_bc = (undefined4 ****)0xffffffff;
    local_8._0_1_ = 9;
    FUN_00448aa0(uVar4);
    if (0xf < local_5c) {
      local_bc = (undefined4 ****)local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    piVar1 = local_14;
  } while (local_40 < 0x10);
  local_bc = (undefined4 ****)local_54[0];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

