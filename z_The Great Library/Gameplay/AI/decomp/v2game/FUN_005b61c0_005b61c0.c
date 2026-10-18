// FUN_005b61c0 @ 005b61c0 body=[[005b61c0, 005b6252] [005b6256, 005b636e] [005b6372, 005b6429] [005b642d, 005b64c4]]


undefined4 * FUN_005b61c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5aaaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  *param_1 = CLeader::vftable;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  FUN_005c3070(param_1 + 0xc,local_5c,0);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  param_1[0x21] = 43800000;
  param_1[0x21] = DAT_01259abc;
  local_18 = 0x2d2d2d;
  param_1[0x23] = 0x2d2d2d;
  param_1[0x24] = 0;
  param_1[0x2a] = 0xf;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  local_8._0_1_ = 4;
  param_1[0x32] = 0xf;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  FUN_00409350("no_leader",9);
  iVar2 = DAT_01258824;
  local_8._0_1_ = 5;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (iVar2 == 0) {
    local_14 = (undefined4 *)FUN_00aae9af(0x2c);
    local_8._0_1_ = 6;
    if (local_14 == (undefined4 *)0x0) {
      iVar2 = 0;
      DAT_01258824 = iVar2;
    }
    else {
      iVar2 = FUN_005c2bc0(local_14);
      DAT_01258824 = iVar2;
    }
  }
  local_8._0_1_ = 5;
  param_1[0x38] = iVar2;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("TRAIT_MORALE",0xc);
  local_14 = param_1 + 0x39;
  *local_14 = CTraitDefinition::vftable;
  param_1[0x3f] = 0xf;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  local_8._0_1_ = 8;
  param_1[0x42] = 3;
  param_1[0x41] = 0x2fb;
  FUN_00408ed0(local_3c,0,0xffffffff);
  *(undefined2 *)(param_1 + 0x43) = 0x101;
  iVar2 = DAT_01258824;
  if (local_28 < 0x10) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_8._0_1_ = 9;
    param_1[0x44] = 0;
    if (iVar2 == 0) {
      local_14 = (undefined4 *)FUN_00aae9af(0x2c);
      local_8._0_1_ = 10;
      if (local_14 == (undefined4 *)0x0) {
        iVar2 = 0;
        DAT_01258824 = iVar2;
      }
      else {
        iVar2 = FUN_005c2bc0(local_14);
        DAT_01258824 = iVar2;
      }
    }
    local_8._0_1_ = 9;
    param_1[0x45] = iVar2;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("TRAIT_ORGANISATION",0x12);
    local_14 = param_1 + 0x46;
    *local_14 = CTraitDefinition::vftable;
    param_1[0x4c] = 0xf;
    param_1[0x4b] = 0;
    *(undefined1 *)(param_1 + 0x47) = 0;
    local_8._0_1_ = 0xc;
    param_1[0x4f] = 4;
    param_1[0x4e] = 0x534;
    FUN_00408ed0(local_5c,0,0xffffffff);
    *(undefined2 *)(param_1 + 0x50) = 0x101;
    if (local_48 < 0x10) {
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_8._0_1_ = 0xd;
      param_1[0x38] = param_1 + 0x39;
      param_1[0x45] = param_1 + 0x46;
      if (DAT_01258828 == 0) {
        local_14 = (undefined4 *)FUN_00aae9af(0x2c);
        local_8._0_1_ = 0xe;
        if (local_14 == (undefined4 *)0x0) {
          DAT_01258828 = 0;
        }
        else {
          DAT_01258828 = FUN_004dada0();
        }
      }
      iVar2 = DAT_01258828;
      local_8._0_1_ = 0xd;
      uVar1 = **(undefined4 **)(DAT_01258828 + 0xc);
      param_1[0x1f] = uVar1;
      param_1[0x20] = **(undefined4 **)(iVar2 + 0x1c);
      param_1[0x2c] = 0;
      param_1[0x22] = 0;
      param_1[0x1f] = uVar1;
      FUN_005b5ef0(param_1);
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_3c[0]);
}

