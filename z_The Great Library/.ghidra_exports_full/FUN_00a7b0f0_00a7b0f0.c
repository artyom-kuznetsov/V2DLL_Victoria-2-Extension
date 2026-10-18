// FUN_00a7b0f0 @ 00a7b0f0 body=[[00a7b0f0, 00a7b1eb] [00a7b1ef, 00a7b274] [00a7b278, 00a7b381] [00a7b385, 00a7b48a]]


undefined4 * FUN_00a7b0f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_1bc [12];
  undefined4 uStack_1b0;
  uint *local_1ac;
  undefined ***local_1a8;
  undefined **local_d4;
  undefined4 local_d0;
  undefined1 local_cc [28];
  undefined1 local_b0 [28];
  undefined1 local_94 [16];
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_38;
  LARGE_INTEGER local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b54052;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e43a88;
  DAT_01258b6c = 0;
  BVar2 = IsDebuggerPresent();
  DAT_01258b6d = BVar2 != 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  local_34.QuadPart = 0.0;
  local_1a8 = (undefined ***)0xa7b152;
  BVar2 = QueryPerformanceFrequency(&local_34);
  if (BVar2 == 0) {
    local_1a8 = (undefined ***)0xe43a14;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    local_1ac = (uint *)0xa7b177;
    FUN_00409350();
    local_1ac = local_2c;
    local_1a8 = (undefined ***)0x18;
    local_8._0_1_ = 1;
    uStack_1b0 = 0xa7b191;
    FUN_004015b0();
    local_8._0_1_ = 2;
    FUN_00987d20();
    local_1a8 = (undefined ***)0xa7b1aa;
    FUN_00401280();
    local_8._0_1_ = 1;
    local_1a8 = (undefined ***)0xa7b1bd;
    FUN_00987ac0();
    local_1a8 = (undefined ***)0xa7b1d3;
    FUN_00aad52d();
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      local_1a8 = (undefined ***)&UNK_00a7b1ec;
      FUN_00aae91b();
    }
    local_1a8 = (undefined ***)0xe43a14;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = 0;
    local_1ac = (uint *)0xa7b20d;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_1a8 = (undefined ***)0xe43a3c;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_1ac = (uint *)0xa7b229;
    FUN_00409350();
    local_38 = local_1bc;
    local_8._0_1_ = 4;
    local_1a8 = (undefined ***)0xf;
    local_1ac = (uint *)0x0;
    local_1bc[0] = 0;
    FUN_00408ed0(local_2c,0,0xffffffff);
    FUN_009e7a90(&local_d4,0x19);
    local_d4 = &PTR_FUN_00e37db4;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      local_1a8 = (undefined ***)&UNK_00a7b275;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8._0_1_ = 5;
    local_1a8 = (undefined ***)0x0;
    local_1ac = (uint *)local_cc;
    local_78 = &PTR_FUN_00e37db4;
    local_74 = local_d0;
    local_5c = 0xf;
    local_60 = 0;
    local_70 = 0;
    uStack_1b0 = 0xa7b2b0;
    FUN_00408ed0();
    local_8._0_1_ = 6;
    local_1a8 = (undefined ***)0x0;
    local_1ac = (uint *)local_b0;
    local_40 = 0xf;
    local_44 = 0;
    local_54 = 0;
    uStack_1b0 = 0xa7b2cf;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,5);
  }
  else {
    if (local_34.s.LowPart != 0 || local_34.s.HighPart != 0) {
      *(double *)(param_1 + 6) = 1.0 / (double)(longlong)local_34;
      iVar3 = (int)DAT_013f075c;
      local_1a8 = (undefined ***)0xa7b43e;
      DAT_013f075c = (undefined4 *)FUN_00aae9af();
      if (DAT_013f075c == (undefined4 *)0x0) {
        DAT_013f075c = (undefined4 *)0x0;
      }
      else {
        *DAT_013f075c = param_1;
        DAT_013f075c[1] = iVar3;
        DAT_013f075c[2] = 0;
        *(undefined1 *)(DAT_013f075c + 3) = 0;
      }
      iVar4 = DAT_013f0760 + 1;
      bVar5 = DAT_013f0760 != 0;
      puVar1 = DAT_013f075c;
      DAT_013f0760 = iVar4;
      if (bVar5) {
        *(undefined4 **)(iVar3 + 8) = DAT_013f075c;
        puVar1 = DAT_013f0758;
      }
      DAT_013f0758 = puVar1;
      ExceptionList = local_10;
      return param_1;
    }
    local_1a8 = (undefined ***)0xe43a14;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    local_1ac = (uint *)0xa7b311;
    FUN_00409350();
    local_1ac = local_2c;
    local_1a8 = (undefined ***)0x1d;
    local_8._0_1_ = 7;
    uStack_1b0 = 0xa7b32b;
    FUN_004015b0();
    local_8._0_1_ = 8;
    FUN_00987d20();
    local_1a8 = (undefined ***)0xa7b344;
    FUN_00401280();
    local_8._0_1_ = 7;
    local_1a8 = (undefined ***)0xa7b357;
    FUN_00987ac0();
    local_1a8 = (undefined ***)0xa7b36d;
    FUN_00aad52d();
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      local_1a8 = (undefined ***)&UNK_00a7b382;
      FUN_00aae91b();
    }
    local_1a8 = (undefined ***)0xe43a14;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = 0;
    local_1ac = (uint *)0xa7b3a3;
    FUN_00409350();
    local_38 = local_1bc;
    local_8._0_1_ = 9;
    local_1a8 = (undefined ***)0xf;
    local_1ac = (uint *)0x0;
    local_1bc[0] = 0;
    FUN_00409350("Clock rate is zero!",0x13);
    iVar3 = FUN_009d77e0(0x1e,local_94);
    local_8._0_1_ = 10;
    local_78 = &PTR_FUN_00e37db4;
    local_74 = *(undefined4 *)(iVar3 + 4);
    local_1a8 = (undefined ***)0x0;
    local_1ac = (uint *)(iVar3 + 8);
    local_5c = 0xf;
    local_60 = 0;
    local_70 = 0;
    uStack_1b0 = 0xa7b402;
    FUN_00408ed0();
    local_8._0_1_ = 0xb;
    local_1a8 = (undefined ***)0x0;
    local_1ac = (uint *)(iVar3 + 0x24);
    local_40 = 0xf;
    local_44 = 0;
    local_54 = 0;
    uStack_1b0 = 0xa7b41e;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,10);
  }
  local_1a8 = &local_78;
  local_78 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
  local_1ac = (uint *)0xa7b2e8;
  __CxxThrowException_8();
}

