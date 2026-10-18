// FUN_00889fc0 @ 00889fc0 body=[[00889fc0, 0088a104] [0088a108, 0088a133] [0088a137, 0088a180] [0088a184, 0088a203] [0088a207, 0088a234] [0088a238, 0088a297] [0088a2a0, 0088a341] [0088a34a, 0088a403] [0088a407, 0088a432] [0088a436, 0088a47f] [0088a483, 0088a506] [0088a50a, 0088a535] [0088a539, 0088a5e0] [0088a5e4, 0088a5f2] [0088a5f6, 0088a60a]]


undefined1 * FUN_00889fc0(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_e8 [8];
  undefined4 uStack_e0;
  uint *puStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  undefined4 local_a4;
  undefined1 local_74 [20];
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b69519;
  local_10 = ExceptionList;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_60 = 1;
  local_d0 = CONCAT44(0x88a013,(undefined4)local_d0);
  local_38 = in_ECX;
  FUN_008a88d0();
  uVar5 = *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28);
  local_18 = 0x2d2d2d;
  local_b4 = 0x2d2d2d;
  local_a4 = 0;
  local_b0 = 0;
  local_ac = (undefined1 *)0x0;
  if (*(int *)(param_2 + 0xc) == 0) {
    if ((uVar5 & 0xfffffffc) == 0) {
      local_d0 = CONCAT44(in_stack_0000002c,(undefined4)local_d0);
      local_d8 = 0xf00000000;
      local_e8[0] = 0;
      FUN_00408ed0(&param_4,0,0xffffffff);
      uVar3 = FUN_0087a6c0(local_34,local_bc,param_3 + 1);
      local_8 = 0x13;
      goto LAB_0088a5c7;
    }
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4) + 0x188
                    );
    puVar4 = *(undefined4 **)(iVar2 + 0x48);
    if (*(undefined4 **)(iVar2 + 0x4c) <= puVar4) goto LAB_0088a5e4;
    local_58 = *puVar4;
    local_d0 = 0x1100e29e68;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (uint)local_54[0]._1_3_ << 8;
    local_d8 = CONCAT44(0x88a3a2,(undefined4)local_d8);
    FUN_00409350();
    local_d0 = CONCAT44(local_54,local_74);
    local_8 = 0xb;
    local_d8 = CONCAT44(0x88a3b3,(undefined4)local_d8);
    local_14 = (undefined1 *)FUN_009a8ee0();
    local_8 = 0xc;
    local_d0 = CONCAT44(0x88a3bf,(undefined4)local_d0);
    iVar2 = FUN_00475500();
    local_d8 = *(undefined8 *)(iVar2 + 0x6c);
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    puStack_dc = (uint *)0x88a3e2;
    uVar3 = FUN_009a9880();
    local_d0 = 0xffffffff00000000;
    local_8 = 0xd;
    local_d8 = CONCAT44(uVar3,0x88a3f1);
    FUN_00448aa0();
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a404);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0xb;
    local_d0 = CONCAT44(local_74,0x88a421);
    FUN_009a9740();
    local_8 = 1;
    if (0xf < local_40) {
      local_d0 = CONCAT44(local_54[0],&UNK_0088a433);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = (ulonglong)(param_3 + 1U);
    local_ac = (undefined1 *)local_58;
    local_d8 = (ulonglong)param_2;
    puStack_dc = local_34;
    uStack_e0 = 0x88a45f;
    uVar3 = (**(code **)(*(int *)(local_38 + 0x20) + 0x2c))();
    local_d0 = 0xffffffff00000000;
    local_8 = 0xe;
    local_d8 = CONCAT44(uVar3,0x88a46e);
    FUN_00448aa0();
    local_8 = 1;
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a480);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0x800e29e58;
    local_ac = (undefined1 *)0x0;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_d8 = CONCAT44(0x88a4a5,(undefined4)local_d8);
    FUN_00409350();
    local_d0 = CONCAT44(local_54,local_74);
    local_8 = 0xf;
    local_d8 = CONCAT44(0x88a4b6,(undefined4)local_d8);
    FUN_009a8ee0();
    local_8 = 0x10;
    local_d0 = CONCAT44(0x88a4c2,(undefined4)local_d0);
    iVar2 = FUN_00475500();
    local_d8 = *(undefined8 *)(iVar2 + 0x6c);
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    puStack_dc = (uint *)0x88a4e5;
    uVar3 = FUN_009a9880();
    local_d0 = 0xffffffff00000000;
    local_8 = 0x11;
    local_d8 = CONCAT44(uVar3,0x88a4f4);
    FUN_00448aa0();
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a507);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0xf;
    local_d0 = CONCAT44(local_74,0x88a524);
    FUN_009a9740();
    local_8 = 1;
    if (0xf < local_40) {
      local_d0 = CONCAT44(local_54[0],&UNK_0088a536);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = CONCAT44(in_stack_0000002c,(undefined4)local_d0);
    local_d8 = 0xf00000000;
    local_e8[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    uVar3 = FUN_0087a6c0(local_34,local_bc,param_3 + 1U);
    local_d0 = 0xffffffff00000000;
    local_8 = 0x12;
    local_d8 = CONCAT44(uVar3,0x88a583);
    FUN_00448aa0();
  }
  else {
    if ((uVar5 & 0xfffffffc) == 0) {
      local_18 = *(undefined4 *)(param_2 + 8);
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
      puVar4 = *(undefined4 **)(iVar2 + 0x9d8);
      while ((*(undefined4 **)(iVar2 + 0x9d8) <= puVar4 &&
             (puVar4 < *(undefined4 **)(iVar2 + 0x9dc)))) {
        local_ac = (undefined1 *)*puVar4;
        local_5c = puVar4 + 1;
        local_d0 = CONCAT44(local_bc,0x88a2de);
        cVar1 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))();
        puVar4 = local_5c;
        if (cVar1 == '\x01') {
          local_d0 = CONCAT44(in_stack_0000002c,(undefined4)local_d0);
          local_14 = local_e8;
          local_d8 = 0xf00000000;
          local_e8[0] = 0;
          FUN_00408ed0(&param_4,0,0xffffffff);
          uVar3 = FUN_0087a6c0(local_34,local_bc,param_3);
          local_d0 = 0xffffffff00000000;
          local_8 = 10;
          local_d8 = CONCAT44(uVar3,0x88a32b);
          FUN_00448aa0();
          local_8 = 1;
          puVar4 = local_5c;
          if (0xf < local_20) {
            local_d0 = CONCAT44(local_34[0],&UNK_0088a342);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      goto LAB_0088a5e4;
    }
    local_18 = *(undefined4 *)(param_2 + 8);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
    puVar4 = *(undefined4 **)(iVar2 + 0x9d8);
    if (*(undefined4 **)(iVar2 + 0x9dc) <= puVar4) goto LAB_0088a5e4;
    local_14 = (undefined1 *)*puVar4;
    local_d0 = 0x1100e29e68;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (uint)local_54[0]._1_3_ << 8;
    local_d8 = CONCAT44(0x88a0a3,(undefined4)local_d8);
    FUN_00409350();
    local_d0 = CONCAT44(local_54,local_74);
    local_8 = 2;
    local_d8 = CONCAT44(0x88a0b4,(undefined4)local_d8);
    local_58 = FUN_009a8ee0();
    local_8 = 3;
    local_d0 = CONCAT44(0x88a0c0,(undefined4)local_d0);
    iVar2 = FUN_00475500();
    local_d8 = *(undefined8 *)(iVar2 + 0x6c);
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    puStack_dc = (uint *)0x88a0e3;
    uVar3 = FUN_009a9880();
    local_d0 = 0xffffffff00000000;
    local_8 = 4;
    local_d8 = CONCAT44(uVar3,0x88a0f2);
    FUN_00448aa0();
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a105);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 2;
    local_d0 = CONCAT44(local_74,0x88a122);
    FUN_009a9740();
    local_8 = 1;
    if (0xf < local_40) {
      local_d0 = CONCAT44(local_54[0],&UNK_0088a134);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = local_14;
    local_d0 = (ulonglong)(param_3 + 1U);
    local_d8 = (ulonglong)param_2;
    puStack_dc = local_34;
    uStack_e0 = 0x88a160;
    uVar3 = (**(code **)(*(int *)(local_38 + 0x20) + 0x2c))();
    local_d0 = 0xffffffff00000000;
    local_8 = 5;
    local_d8 = CONCAT44(uVar3,0x88a16f);
    FUN_00448aa0();
    local_8 = 1;
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a181);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0x800e29e58;
    local_ac = (undefined1 *)0x0;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_d8 = CONCAT44(0x88a1a6,(undefined4)local_d8);
    FUN_00409350();
    local_d0 = CONCAT44(local_54,local_74);
    local_8 = 6;
    local_d8 = CONCAT44(0x88a1b7,(undefined4)local_d8);
    FUN_009a8ee0();
    local_8 = 7;
    local_d0 = CONCAT44(0x88a1c3,(undefined4)local_d0);
    iVar2 = FUN_00475500();
    local_d8 = *(undefined8 *)(iVar2 + 0x6c);
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    puStack_dc = (uint *)0x88a1e6;
    uVar3 = FUN_009a9880();
    local_d0 = 0xffffffff00000000;
    local_8 = 8;
    local_d8 = CONCAT44(uVar3,0x88a1f5);
    FUN_00448aa0();
    if (0xf < local_20) {
      local_d0 = CONCAT44(local_34[0],&UNK_0088a204);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 6;
    local_d0 = CONCAT44(local_74,0x88a222);
    FUN_009a9740();
    local_8 = 1;
    if (0xf < local_40) {
      local_d0 = CONCAT44(local_54[0],&UNK_0088a235);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = CONCAT44(in_stack_0000002c,(undefined4)local_d0);
    local_d8 = 0xf00000000;
    local_e8[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    uVar3 = FUN_0087a6c0(local_34,local_bc,param_3 + 1U);
    local_8 = 9;
LAB_0088a5c7:
    local_d0 = 0xffffffff00000000;
    local_d8 = CONCAT44(uVar3,0x88a5d2);
    FUN_00448aa0();
  }
  if (0xf < local_20) {
    local_d0 = CONCAT44(local_34[0],&UNK_0088a5e1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_0088a5e4:
  if (0xf < in_stack_00000024) {
    local_d0 = CONCAT44(param_4,&UNK_0088a5f3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

