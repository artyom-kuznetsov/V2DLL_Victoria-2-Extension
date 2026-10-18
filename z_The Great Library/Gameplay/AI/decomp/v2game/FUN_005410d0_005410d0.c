// FUN_005410d0 @ 005410d0 body=[[005410d0, 00541156] [0054115a, 00541374] [00541378, 005413a2] [005413a6, 005413cb] [005413cf, 005413ee] [005413f2, 00541408] [0054140c, 00541422] [00541426, 00541442] [00541446, 005414e6] [005414ea, 00541505] [00541509, 0054151f] [00541523, 0054153f] [00541543, 005415e3] [005415e7, 00541601] [00541605, 0054161f] [00541623, 00541643] [00541647, 00541671]]


undefined4 FUN_005410d0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 local_11c;
  undefined8 local_114;
  uint local_ec;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7326a;
  local_10 = ExceptionList;
  local_114._4_4_ = (uint *)0x3;
  local_1c._4_4_ = &local_114;
  local_11c._4_4_ = (uint *)&local_114;
  local_8 = 0;
  local_90 = 0;
  local_11c._0_4_ = (uint *)param_1;
  ExceptionList = &local_10;
  FUN_00540ee0();
  local_11c._4_4_ = local_c8;
  local_11c._0_4_ = (uint *)0x54111a;
  local_114._4_4_ = (uint *)FUN_00988a50();
  local_8 = 1;
  local_114._0_4_ = (undefined2 *)param_2;
  local_11c._4_4_ = (uint *)0x541136;
  FUN_0042c180();
  local_8 = local_8 & 0xffffff00;
  local_90 = 1;
  if (0xf < local_b4) {
    local_114._4_4_ = (uint *)local_c8[0];
                    /* WARNING: Subroutine does not return */
    local_114._0_4_ = (undefined2 *)&UNK_00541157;
    FUN_00aae91b();
  }
  iVar1 = *(int *)(param_1 + 0x1338);
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffffff00;
  if (DAT_0131bb34 == 0) {
    local_114._4_4_ = (uint *)0x188;
    local_114._0_4_ = (undefined2 *)0x541188;
    local_1c._4_4_ = (undefined8 *)FUN_00aae9af();
    local_8 = 2;
    if (local_1c._4_4_ == (undefined8 *)0x0) {
      local_114._4_4_ = (uint *)0x0;
    }
    else {
      local_114._4_4_ = (uint *)0x5411a0;
      local_114._4_4_ = (uint *)FUN_0041a160();
    }
    local_8 = local_8 & 0xffffff00;
    local_114._0_4_ = (undefined2 *)0x5411b0;
    FUN_00423700();
  }
  uVar2 = *(uint *)(param_1 + 0x12e8);
  uVar3 = *(uint *)(iVar1 + *(int *)(DAT_0131bb34 + 0x17c) * 4);
  if (uVar2 != 0) {
    uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xa0);
    local_11c._4_4_ =
         (uint *)((((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2);
    local_114._4_4_ = (uint *)0x0;
    local_114._0_4_ = (undefined2 *)0x1f40000;
    local_11c._0_4_ = (uint *)(uVar4 << 0x1e);
    local_1c = __alldiv();
    local_114._4_4_ = (uint *)(uVar2 >> 0x11);
    local_11c._4_4_ = (uint *)((uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2);
    local_114._0_4_ = (undefined2 *)(uVar2 << 0xf);
    local_11c._0_4_ = (uint *)(uVar3 << 0x1e);
    local_11c = __alldiv();
    local_114 = local_1c;
    lVar7 = __allmul();
    local_114._4_4_ = (uint *)0x2;
    local_114._0_4_ = (undefined2 *)&DAT_00df9638;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_11c._4_4_ = (uint *)0x54125e;
    FUN_00409350();
    local_114._4_4_ = (uint *)0x1;
    local_114._0_4_ = (undefined2 *)0x2;
    local_8 = 3;
    local_1c._4_4_ = &local_11c;
    local_11c = lVar7 >> 0xf;
    uVar5 = FUN_009c80d0();
    local_8._0_1_ = 4;
    if (DAT_0131bb34 == 0) {
      local_114._4_4_ = (uint *)0x188;
      local_114._0_4_ = (undefined2 *)0x54129b;
      local_1c._4_4_ = (undefined8 *)FUN_00aae9af();
      local_8._0_1_ = 5;
      if (local_1c._4_4_ == (undefined8 *)0x0) {
        local_114._4_4_ = (uint *)0x0;
      }
      else {
        local_114._4_4_ = (uint *)0x5412b0;
        local_114._4_4_ = (uint *)FUN_0041a160();
      }
      local_8._0_1_ = 4;
      local_114._0_4_ = (undefined2 *)0x5412be;
      FUN_00423700();
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
        *(int *)(DAT_0131bb34 + 0x17c)) {
      local_114._4_4_ = (uint *)0x5412db;
      local_114._0_4_ = (undefined2 *)FUN_0096bb70();
    }
    else {
      local_114._0_4_ =
           *(undefined2 **)(*(int *)(DAT_0131bb34 + 0xc) + *(int *)(DAT_0131bb34 + 0x17c) * 4);
    }
    local_114._4_4_ = local_54;
    local_11c._4_4_ = (uint *)0x5412ed;
    uVar6 = FUN_0096d650();
    local_8._0_1_ = 7;
    local_114._4_4_ = (uint *)0x1;
    local_114._0_4_ = &DAT_00dee2cc;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    local_11c._4_4_ = (uint *)0x54130f;
    FUN_00409350();
    local_8._0_1_ = 8;
    local_114._0_4_ = (undefined2 *)0x541322;
    local_114._4_4_ = (uint *)uVar6;
    FUN_00988f20();
    local_114._4_4_ = local_8c;
    local_8._0_1_ = 9;
    local_114._0_4_ = (undefined2 *)0x54133a;
    FUN_00988f20();
    local_8._0_1_ = 10;
    local_114._0_4_ = (undefined2 *)0x54134c;
    local_114._4_4_ = (uint *)uVar5;
    local_11c._4_4_ = (uint *)FUN_00988f20();
    local_114._4_4_ = (uint *)0xffffffff;
    local_114._0_4_ = (undefined2 *)0x0;
    local_8._0_1_ = 0xb;
    local_11c._0_4_ = (uint *)0x54135c;
    FUN_00448aa0();
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_00541375;
      FUN_00aae91b();
    }
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_005413a3;
      FUN_00aae91b();
    }
    if (0xf < local_98) {
      local_114._4_4_ = (uint *)local_ac[0];
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_005413cc;
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_24) {
      local_114._4_4_ = (uint *)local_38;
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_005413ef;
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    if (0xf < local_40) {
      local_114._4_4_ = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_00541409;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_114._4_4_ = (uint *)local_70;
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_00541423;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
      local_114._4_4_ = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_114._0_4_ = (undefined2 *)&UNK_00541443;
      FUN_00aae91b();
    }
    local_114._4_4_ = (uint *)0x0;
    local_114._0_4_ = (undefined2 *)&DAT_00ded94d;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_11c._4_4_ = (uint *)0x541463;
    FUN_00409350();
    local_114._4_4_ = local_8c;
    local_1c._4_4_ = &local_114;
    local_8 = 0xc;
    local_114._0_4_ = (undefined2 *)0x3e8;
    local_11c._4_4_ = (uint *)0x6d;
    local_11c._0_4_ = local_54;
    (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))();
    local_8._0_1_ = 0xd;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    uVar5 = FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_00448aa0(uVar5);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0 < *(int *)(*(int *)(param_1 + 0xbcc) + 0x2a0)) {
      FUN_009c8c30(local_ac);
      local_8 = 0x10;
      FUN_0042c180();
      local_8._0_1_ = 0x11;
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x12;
      uVar5 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_00448aa0(uVar5);
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_2;
    }
  }
  ExceptionList = local_10;
  return param_2;
}

