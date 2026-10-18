// FUN_007fc360 @ 007fc360 body=[[007fc360, 007fc4ca] [007fc4d0, 007fc73b] [007fc752, 007fc775]]


/* WARNING: Removing unreachable block (ram,0x007fc5e8) */
/* WARNING: Removing unreachable block (ram,0x007fc601) */

void FUN_007fc360(int param_1,undefined4 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40 [4];
  undefined4 local_30;
  char *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte local_15;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c828;
  pvStack_10 = ExceptionList;
  local_15 = (byte)param_2 & 1;
  local_1c = *(int *)(*(int *)(param_1 + 0x40) + 0x2ac0) + 1;
  iVar9 = *(int *)(*(int *)(param_1 + 0x40) + 0x2abc) + 1;
  local_78 = (int *)0x0;
  ExceptionList = &pvStack_10;
  local_20 = iVar9;
  piVar4 = (int *)FUN_00aae9af(8);
  if (piVar4 == (int *)0x0) {
    local_2c = (char *)0x0;
    std::exception::exception((exception *)local_40,&local_2c);
    local_40[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_40,&DAT_00e6fb20);
  }
  piVar4[1] = 0;
  *piVar4 = 0;
  *piVar4 = (int)&local_78;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_8 = 0;
  local_78 = piVar4;
  if (((param_3[1] - *param_3 & 0xfffffffcU) == 0) || (iVar5 = *(int *)*param_3, iVar5 == -1)) {
LAB_007fc5ac:
    FUN_0098bf40();
    local_60 = 0x100000001;
    local_58 = CONCAT44(local_1c + -2,iVar9 + -2);
    local_48 = local_58;
    local_50 = 0x100000001;
    if (iVar9 + -2 < iVar9 + -1) {
      local_48 = CONCAT44(local_1c + -2,iVar9 + -3);
    }
    if (local_1c + -2 < local_48._4_4_ + 1) {
      local_48 = CONCAT44(local_1c + -3,(int)local_48);
    }
    FUN_007d83b0(&local_50);
  }
  else {
    iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2238) + iVar5 * 4) + 0x5c);
    uVar1 = *(undefined8 *)(iVar9 + 0xb8);
    uVar2 = *(undefined8 *)(iVar9 + 0xc0);
    local_50._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    iVar8 = local_50._4_4_;
    local_50._0_4_ = (int)uVar1;
    local_48._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_48._0_4_ = (int)uVar2;
    iVar9 = local_50._4_4_ + -2;
    iVar5 = (int)local_50 + -2;
    iVar7 = (int)local_48 + ((int)local_50 - iVar5) + 2;
    iVar10 = local_48._4_4_ + (local_50._4_4_ - iVar9) + 2;
    if (iVar5 < 1) {
      iVar7 = iVar7 + (int)local_50 + -3;
      iVar5 = 1;
    }
    local_50 = CONCAT44(iVar9,iVar5);
    if (iVar9 < 1) {
      iVar10 = iVar10 + iVar8 + -3;
      iVar9 = 1;
      local_50 = CONCAT44(1,iVar5);
    }
    if (local_20 + -2 < iVar7 + iVar5) {
      iVar7 = (local_20 - iVar5) + -2;
    }
    if (local_1c + -2 < iVar10 + iVar9) {
      iVar10 = (local_1c - iVar9) + -2;
    }
    local_48 = CONCAT44(iVar10,iVar7);
    FUN_007d83b0(&local_50);
    local_28 = param_3[1] - *param_3 >> 2;
    local_24 = 1;
    if (1 < (int)local_28) {
      do {
        iVar5 = *(int *)(*param_3 + local_24 * 4);
        iVar9 = local_20;
        if (iVar5 == -1) goto LAB_007fc5ac;
        iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2238) + iVar5 * 4) + 0x5c);
        uVar1 = *(undefined8 *)(iVar9 + 0xb8);
        uVar2 = *(undefined8 *)(iVar9 + 0xc0);
        local_60._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        iVar10 = local_60._4_4_;
        local_60._0_4_ = (int)uVar1;
        local_58._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        local_58._0_4_ = (int)uVar2;
        iVar9 = local_60._4_4_ + -2;
        iVar5 = (int)local_60 + -2;
        iVar8 = (int)local_58 + ((int)local_60 - iVar5) + 2;
        iVar7 = local_58._4_4_ + (local_60._4_4_ - iVar9) + 2;
        if (iVar5 < 1) {
          iVar8 = iVar8 + (int)local_60 + -3;
          iVar5 = 1;
        }
        local_60 = CONCAT44(iVar9,iVar5);
        if (iVar9 < 1) {
          iVar7 = iVar7 + iVar10 + -3;
          iVar9 = 1;
          local_60 = CONCAT44(1,iVar5);
        }
        if (local_20 + -2 < iVar8 + iVar5) {
          iVar8 = (local_20 - iVar5) + -2;
        }
        if (local_1c + -2 < iVar7 + iVar9) {
          iVar7 = (local_1c - iVar9) + -2;
        }
        local_58 = CONCAT44(iVar7,iVar8);
        FUN_007d83b0(&local_60);
        local_24 = local_24 + 1;
      } while (local_24 < (int)local_28);
    }
  }
  if ((local_15 != 0) && (iVar9 = *(int *)(param_1 + 0x1580), iVar9 != 0)) {
    FUN_007d6a80(iVar9,param_2);
    if ((local_15 != 0) && (FUN_007d6f00(iVar9), local_15 != 0)) {
      FUN_007d70e0(iVar9);
    }
    FUN_0081ab00(*(undefined4 *)(param_1 + 0x158c));
  }
  local_30 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  if ((*(int *)(DAT_012588e8 + 0xb60) != 0) &&
     (param_3 = (int *)0x0, 0 < *(int *)(param_1 + 0x18c) * *(int *)(param_1 + 400))) {
    param_1 = 0;
    do {
      uVar11 = 0;
      local_28 = *(uint *)(*(int *)(iVar3 + 0x19c) + param_1 + 0x130);
      if (local_28 != 0) {
        do {
          uVar6 = uVar11;
          FUN_0099e240(uVar11);
          piVar4 = (int *)FUN_00868600(uVar6);
          iVar9 = 0;
          if ((int *)*piVar4 != (int *)0x0) {
            iVar9 = *(int *)*piVar4;
          }
          uVar6 = piVar4[2];
          if (*(uint *)(iVar9 + 8) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(iVar9 + 8);
          }
          uVar11 = uVar11 + 1;
          *(undefined1 *)(*(int *)(*(int *)(iVar9 + 4) + uVar6 * 4) + 0x44) = 1;
        } while (uVar11 < local_28);
      }
      param_1 = param_1 + 0x3c0;
      param_3 = (int *)((int)param_3 + 1);
    } while ((int)param_3 < *(int *)(iVar3 + 0x18c) * *(int *)(iVar3 + 400));
  }
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_78);
}

