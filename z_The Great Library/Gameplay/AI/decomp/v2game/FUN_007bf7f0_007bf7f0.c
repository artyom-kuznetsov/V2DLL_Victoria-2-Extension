// FUN_007bf7f0 @ 007bf7f0 body=[[007bf7f0, 007bf871] [007bf875, 007bf88d] [007bf891, 007bfbf9]]


undefined4 * FUN_007bf7f0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined **local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb9a3b;
  local_10 = ExceptionList;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("topcolor_pop",0xc);
  local_8 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("country_pop",0xb);
  local_8._0_1_ = 1;
  FUN_007536e0(param_1,param_2,local_38,local_54);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  *param_1 = CPopView::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = CScrollbarObserverGlue<CPopView>::vftable;
  param_1[0x20] = param_1;
  param_1[0x21] = &LAB_007c7a70;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 43800000;
  param_1[0x2d] = DAT_01259abc;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = CButtonObserverGlue<CPopView>::vftable;
  param_1[0x33] = param_1;
  param_1[0x34] = FUN_007c6710;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = CButtonObserverGlue<CPopView>::vftable;
  param_1[0x3e] = param_1;
  param_1[0x3f] = FUN_007c7580;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = CCheckBoxObserverGlue<CPopView>::vftable;
  param_1[0x49] = param_1;
  param_1[0x4a] = FUN_007c6800;
  param_1[0x4b] = FUN_007c6800;
  param_1[0x4c] = FUN_007c6800;
  param_1[0x4d] = 0;
  param_1[0x4e] = FUN_007c7660;
  param_1[0x4f] = 0;
  param_1[0x50] = CButtonObserverGlue<CPopView>::vftable;
  param_1[0x51] = param_1;
  param_1[0x52] = &LAB_007bfe10;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  local_8._0_1_ = 0xe;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  puVar2 = param_1 + 0x5c;
  *puVar2 = 0;
  puVar5 = (undefined4 *)FUN_00aae9af(8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar2 = puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 **)*puVar2 = puVar2;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    *(undefined1 *)(param_1 + 0x69) = 0;
    param_1[0x6a] = CButtonObserverGlue<CPopView>::vftable;
    param_1[0x6b] = param_1;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = FUN_007c7510;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x79] = 1;
    param_1[0x7b] = 0;
    param_1[0x7c] = CWindowObserverGlue<CPopView>::vftable;
    param_1[0x7d] = param_1;
    param_1[0x7e] = 0;
    param_1[0x7f] = FUN_007c7a80;
    local_8._0_1_ = 0x12;
    uVar4 = (undefined1)local_8;
    local_8._0_1_ = 0x12;
    param_1[0x2d] = DAT_01259abc;
    if (DAT_0131bb34 == 0) {
      param_2 = (char *)FUN_00aae9af(0x188);
      local_8._0_1_ = 0x13;
      if (param_2 == (char *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0041a160();
      }
      local_8._0_1_ = 0x12;
      FUN_00423700(uVar6);
      uVar4 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar4;
    iVar3 = param_1[0x1c];
    piVar1 = param_1 + 0x1b;
    param_2 = (char *)0x0;
    uVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    uVar8 = iVar3 - *piVar1 >> 2;
    if (uVar8 < uVar7) {
      FUN_0043cb20(piVar1,iVar3,&param_2);
    }
    else if (uVar7 < uVar8) {
      FUN_0054ab90(piVar1,*piVar1 + uVar7 * 4,iVar3);
    }
    FUN_007c1560(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_1c,&param_2);
  local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_00e6fb20);
}

