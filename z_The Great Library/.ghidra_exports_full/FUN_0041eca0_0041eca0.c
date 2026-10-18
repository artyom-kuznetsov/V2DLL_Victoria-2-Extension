// FUN_0041eca0 @ 0041eca0 body=[[0041eca0, 0041ee92] [0041ee96, 0041eeb4] [0041eebd, 0041ef0f] [0041ef13, 0041ef32] [0041ef36, 0041efc8] [0041efcc, 0041efde]]


undefined1 * FUN_0041eca0(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b779b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  pbVar2 = (byte *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)pbVar2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify effect name",0x1a);
    ExceptionList = local_10;
    return param_1;
  }
  pbVar5 = pbVar2;
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar5 = *(byte **)pbVar2;
  }
  pbVar9 = &DAT_00df16e0;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_0041ed56:
      iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0041ed5b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_0041ed56;
    pbVar5 = pbVar5 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0041ed5b:
  if (iVar6 == 0) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    FUN_00802930();
    uVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
    FUN_0099d2f0(uVar7);
    *param_1 = 1;
    FUN_00409350("Map reloaded",0xc);
    ExceptionList = local_10;
    return param_1;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00408ed0(pbVar2,0,0xffffffff);
  local_8 = 1;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  uVar7 = *(undefined4 *)(iVar6 + 100);
  cVar4 = FUN_009bec30(local_4c,uVar7);
  if (cVar4 == '\0') {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("gfx/FX/",7);
    local_8._0_1_ = 4;
    uVar8 = FUN_00988f20(local_4c);
    local_8._0_1_ = 5;
    cVar4 = FUN_009bec30(uVar8,uVar7);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8._0_1_ = 1;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 1;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (cVar4 == '\0') {
      *param_1 = 0;
      local_8._0_1_ = uVar3;
      FUN_00409350("Reload failed",0xd);
    }
    else {
      uVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
      FUN_0099d2f0(uVar7);
      *param_1 = 1;
      FUN_009885d0();
      local_8._0_1_ = 6;
      uVar7 = FUN_00988f20(local_68);
      local_8._0_1_ = 7;
      FUN_00408ed0(uVar7,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
    }
  }
  else {
    uVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
    FUN_0099d2f0(uVar7);
    *param_1 = 1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(" reloaded",9);
    local_8._0_1_ = 2;
    uVar7 = FUN_00988f20(local_30);
    local_8._0_1_ = 3;
    FUN_00408ed0(uVar7,0,0xffffffff);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  if (local_38 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

