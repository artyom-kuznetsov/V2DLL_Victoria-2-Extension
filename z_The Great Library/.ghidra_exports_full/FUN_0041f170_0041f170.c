// FUN_0041f170 @ 0041f170 body=[[0041f170, 0041f2f5] [0041f2fb, 0041f391] [0041f395, 0041f3c2] [0041f3cb, 0041f514] [0041f518, 0041f5d5] [0041f5d9, 0041f602] [0041f606, 0041f63c] [0041f640, 0041f656]]


/* WARNING: Removing unreachable block (ram,0x0041f633) */
/* WARNING: Removing unreachable block (ram,0x0041f2ec) */

undefined1 * FUN_0041f170(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iStack_e4;
  int iStack_dc;
  uint uStack_b4;
  undefined1 local_ac;
  uint uStack_84;
  uint uStack_70;
  int iStack_44;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00ba23b7;
  local_14 = ExceptionList;
  local_c = 0;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    ExceptionList = &local_14;
    FUN_00409350();
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = 0;
    FUN_00408ed0();
  }
  else {
    ExceptionList = &local_14;
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x58))();
    iStack_e4 = 0;
    if (1 < (param_2[1] - *param_2) / 0x1c) {
      uStack_b4 = 0xf;
      FUN_00408ed0();
      iStack_e4 = FUN_00aaf0c5();
      iVar1 = FUN_0055c6c0();
      iStack_dc = *(int *)(iVar1 + 4);
      if (iStack_dc == 0) {
        iStack_dc = *(int *)(DAT_012588e8 + 0xb60);
      }
    }
    FUN_00aaf0c5();
    if ((DAT_01258a98 == 0) || (iVar1 = FUN_009c1d40(), iVar1 == 0)) {
      local_ac = 0;
      FUN_009888f0();
      local_c._0_1_ = 1;
      FUN_00988fa0();
      local_c._0_1_ = 2;
      FUN_00408ed0();
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else if ((iStack_dc == 0) && (iStack_e4 == 0)) {
      local_ac = 0;
      FUN_00409350();
    }
    else {
      FUN_009b7950();
      FUN_008a8650();
      FUN_008a8dc0();
      if (iStack_44 == 0) {
        FUN_008a6620();
        FUN_008a84c0();
      }
      local_ac = 1;
      (**(code **)(*(int *)(iVar1 + 0x30) + 0x2c))();
      FUN_00408ed0();
      if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar2 = FUN_00aae9af();
      if (iVar2 != 0) {
        FUN_008a88d0();
        FUN_008a8f30(iVar2,iVar1);
      }
      FUN_006480e0();
      (**(code **)(*(int *)(iVar1 + 0x74) + 0x2c))();
      FUN_009888f0();
      local_c._0_1_ = 5;
      FUN_00988fa0();
      local_c._0_1_ = 6;
      FUN_00448aa0();
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    *param_1 = local_ac;
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = 0;
    FUN_00408ed0();
  }
  ExceptionList = local_14;
  return param_1;
}

