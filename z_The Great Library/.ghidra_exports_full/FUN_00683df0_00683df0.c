// FUN_00683df0 @ 00683df0 body=[[00683df0, 00683f67] [00683f6b, 00683f82] [00683f86, 00683fd0] [00683fd4, 0068401a] [0068401e, 00684083] [00684087, 006840b1] [006840b7, 006840cb] [006840cf, 006840e1]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00683df0(undefined1 *param_1,int param_2,int param_3)

{
  undefined3 uVar1;
  int iVar2;
  int iVar3;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b8bcbc;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  iVar2 = param_3 - param_2 >> 3;
  if (iVar2 < 2) {
    ExceptionList = &local_10;
    uStack_7 = uVar1;
    FUN_0055dd40();
  }
  else {
    iVar2 = iVar2 + -2;
    ExceptionList = &local_10;
    local_14 = iVar2;
    if ((DAT_013f3094 & 1) == 0) {
      DAT_013f3094 = DAT_013f3094 | 1;
      local_8 = 2;
      uStack_7 = 0;
      DAT_013f308c = 0xf;
      _DAT_013f3088 = 0;
      DAT_013f3078._0_1_ = 0;
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00e0aa40,2);
      _atexit((_func_4879 *)&LAB_00c81720);
    }
    if ((DAT_013f3094 & 2) == 0) {
      DAT_013f3094 = DAT_013f3094 | 2;
      local_8 = 3;
      DAT_013f3070 = 0xf;
      _DAT_013f306c = 0;
      DAT_013f305c._0_1_ = 0;
      FUN_00409350(&DAT_00ded950,1);
      _atexit((_func_4879 *)&LAB_00c816f0);
    }
    if ((DAT_013f3094 & 4) == 0) {
      DAT_013f3094 = DAT_013f3094 | 4;
      local_8 = 4;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfaa6c,3);
      local_8 = 5;
      FUN_009a8ee0(local_28,local_60);
      local_8 = 6;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8 = 7;
      FUN_009adb70();
      if (local_24 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      _atexit((_func_4879 *)&LAB_00c816c0);
      iVar2 = local_14;
    }
    local_8 = 1;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        FUN_0055dd40();
        local_8 = 8;
        FUN_00448aa0();
        local_8 = 1;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00448aa0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
    FUN_0055dd40();
    local_8 = 9;
    FUN_00448aa0();
    local_8 = 1;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448aa0();
    FUN_00448aa0();
    FUN_00448aa0();
    FUN_0055dd40();
    local_8 = 10;
    FUN_00448aa0();
    local_8 = 1;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

