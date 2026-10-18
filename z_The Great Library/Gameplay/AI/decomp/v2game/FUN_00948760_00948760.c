// FUN_00948760 @ 00948760 body=[[00948760, 00948816] [0094881a, 00948834] [00948838, 00948855] [00948859, 009488dd] [009488e1, 009488fb] [009488ff, 0094891c] [00948920, 00948a1c] [00948a20, 00948a3a] [00948a3e, 00948a58] [00948a5c, 00948a70]]


undefined1 * FUN_00948760(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *local_8c;
  uint *puStack_88;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b837b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  puStack_88 = (uint *)0x1;
  local_8c = (uint *)&DAT_00dee2cc;
  local_14 = 1;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_8c = *(uint **)(param_1 + 0x28);
  puStack_88 = local_74;
  FUN_0094c600();
  puStack_88 = local_3c;
  local_8._0_1_ = 2;
  local_8c = (uint *)0x9487f5;
  FUN_00988f20();
  puStack_88 = (uint *)0xffffffff;
  local_8c = (uint *)0x0;
  local_8._0_1_ = 3;
  FUN_00408ed0();
  if (0xf < local_44) {
    puStack_88 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
    local_8c = (uint *)&UNK_00948817;
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  if (0xf < local_60) {
    puStack_88 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
    local_8c = (uint *)&UNK_00948835;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  if (0xf < local_28) {
    puStack_88 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    local_8c = (uint *)&UNK_00948856;
    FUN_00aae91b();
  }
  local_8c = *(uint **)(param_1 + 0x28);
  puStack_88 = (uint *)local_18;
  piVar1 = (int *)FUN_009503d0();
  local_8c = (uint *)*piVar1;
  if (local_8c != (uint *)0x0) {
    puStack_88 = (uint *)0x1;
    local_1c = (undefined1 *)&local_8c;
    puStack_88 = (uint *)FUN_009c9360();
    local_8c = local_58;
    local_8 = 4;
    FUN_0042c180();
    local_8._0_1_ = 5;
    FUN_00988fa0();
    puStack_88 = (uint *)0xffffffff;
    local_8c = (uint *)0x0;
    local_8._0_1_ = 6;
    FUN_00448aa0();
    if (0xf < local_60) {
      puStack_88 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_009488de;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_44) {
      puStack_88 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_009488fc;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_28) {
      puStack_88 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_0094891d;
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(iVar4 + 0x18);
  iVar2 = -*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2e0);
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x1c) * 4);
  puStack_88 = (uint *)0x0;
  local_8c = (uint *)0x3e8;
  iVar3 = __alldiv((longlong)(*(int *)(iVar3 + 0xea0) + *(int *)(*(int *)(iVar3 + 0xbcc) + 0x28c)) *
                   (longlong)-*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2e4));
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  puStack_88 = (uint *)0x0;
  local_8c = (uint *)0x3e8;
  iVar4 = __alldiv((longlong)*(int *)(*(int *)(iVar4 + 0xc) + 0x100) * (longlong)iVar3);
  local_8c = (uint *)-iVar4;
  if (local_8c != (uint *)0x0) {
    puStack_88 = (uint *)0x1;
    puStack_88 = (uint *)FUN_009c9360();
    local_8c = local_58;
    local_8 = 7;
    FUN_0042c180();
    local_8._0_1_ = 8;
    FUN_00988fa0();
    puStack_88 = (uint *)0xffffffff;
    local_8c = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00448aa0();
    if (0xf < local_60) {
      puStack_88 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_00948a1d;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_44) {
      puStack_88 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_00948a3b;
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_28) {
      puStack_88 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      local_8c = (uint *)&UNK_00948a59;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

