// FUN_00884950 @ 00884950 body=[[00884950, 008849e1] [008849e5, 00884ae0] [00884ae4, 00884b05] [00884b09, 00884b31] [00884b35, 00884c5e] [00884c62, 00884c86] [00884c8a, 00884ca0] [00884ca4, 00884cba] [00884cbe, 00884cd8] [00884cdc, 00884d24] [00884d28, 00884d6d] [00884d71, 00884dba] [00884dbe, 00884eb9] [00884ebd, 00884ed8] [00884edc, 00884efb] [00884eff, 00884fe4] [00884fe8, 00885003] [00885007, 00885026] [0088502a, 00885123] [00885127, 00885143] [00885147, 0088516c] [00885170, 0088518f] [00885193, 008851ad] [008851b1, 008851fa] [008851fe, 0088522e] [00885232, 00885246]]


undefined4 FUN_00884950(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_00000020;
  undefined8 local_12c;
  undefined1 local_108 [20];
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  int local_88;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined4 *local_68;
  uint local_64 [2];
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8820f;
  local_10 = ExceptionList;
  local_8c = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_88 = in_ECX;
  if (*(int *)((int)param_2 + 0xc) != *(int *)(DAT_012588e8 + 0xb60)) {
    local_12c = 0x1000e29d98;
    ExceptionList = &local_10;
    FUN_00409350();
    local_12c = CONCAT44(local_48,local_108);
    local_8._0_1_ = 0x14;
    FUN_009a8ee0();
    local_8._0_1_ = 0x16;
    if (0xf < local_34) {
      local_12c = CONCAT44(local_48[0],&UNK_00884dbb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_12c = 0x700e29d38;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    local_12c = CONCAT44(in_ECX,0x884df6);
    FUN_008852b0();
    local_12c = CONCAT44(0x884dfe,(undefined4)local_12c);
    uVar1 = FUN_0055dd40();
    local_12c = CONCAT44(uVar1,local_5c);
    local_8._0_1_ = 0x18;
    puVar2 = (undefined4 *)FUN_009a8ee0();
    local_8._0_1_ = 0x19;
    local_12c = 0x3800884e19;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x1a;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[1] = local_108;
      local_12c = 0xffffffff00000000;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      local_68 = puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      puVar3[9] = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0x1c;
      local_12c = CONCAT44(0x884e78,(undefined4)local_12c);
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x19;
    local_12c = CONCAT44(&local_68,local_2c);
    local_68 = puVar3;
    FUN_009e6810();
    local_8._0_1_ = 0x1d;
    local_12c = CONCAT44(0x884ea2,(undefined4)local_12c);
    FUN_009adb70();
    if (local_58 != 0) {
      local_12c = CONCAT44(0x884eb1,(undefined4)local_12c);
      FUN_009e6a80();
      local_12c = CONCAT44(local_58,&UNK_00884eba);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_70) {
      local_12c = CONCAT44(local_84,&UNK_00884ed9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x16;
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_18) {
      local_12c = CONCAT44(local_2c[0],&UNK_00884efc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_12c = 0x600e29d58;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1e;
    local_12c = CONCAT44(0x884f29,(undefined4)local_12c);
    uVar1 = FUN_0055dd40();
    local_12c = CONCAT44(uVar1,local_5c);
    local_8._0_1_ = 0x1f;
    puVar2 = (undefined4 *)FUN_009a8ee0();
    local_8._0_1_ = 0x20;
    local_12c = 0x3800884f44;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x21;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[1] = local_108;
      local_12c = 0xffffffff00000000;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      param_2 = (undefined8 *)puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      puVar3[9] = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0x23;
      local_12c = CONCAT44(0x884fa3,(undefined4)local_12c);
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x20;
    local_12c = CONCAT44(&param_2,local_2c);
    param_2 = (undefined8 *)puVar3;
    FUN_009e6810();
    local_8._0_1_ = 0x24;
    local_12c = CONCAT44(0x884fcd,(undefined4)local_12c);
    FUN_009adb70();
    if (local_58 != 0) {
      local_12c = CONCAT44(0x884fdc,(undefined4)local_12c);
      FUN_009e6a80();
      local_12c = CONCAT44(local_58,&UNK_00884fe5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_70) {
      local_12c = CONCAT44(local_84,&UNK_00885004);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x16;
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_18) {
      local_12c = CONCAT44(local_2c[0],&UNK_00885027);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_12c = 0x200df963c;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x25;
    if (*(int *)(local_88 + 0x28) < 1) {
      if (*(int *)(local_88 + 0x28) < 0) {
        local_12c = CONCAT44(local_f4,0x885086);
        FUN_004012f0();
      }
    }
    else {
      local_12c = 0x200df8518;
      FUN_00409350();
    }
    local_12c = 0x200df8514;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x26;
    local_12c = 0x400e29d40;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    param_2 = &local_12c;
    local_8._0_1_ = 0x27;
    local_12c = (ulonglong)*(uint *)(local_88 + 0x28);
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 0x28;
    local_12c = CONCAT44(uVar1,0x8850ec);
    FUN_00988f20();
    local_8._0_1_ = 0x29;
    local_12c = CONCAT44(local_2c,0x8850fe);
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 0x2a;
    local_12c = CONCAT44(uVar1,0x885111);
    FUN_009a9980();
    if (0xf < local_70) {
      local_12c = CONCAT44(local_84,&UNK_00885124);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_c4) {
      local_12c = CONCAT44(local_d8,&UNK_00885144);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_a8) {
      local_12c = CONCAT44(local_bc,&UNK_0088516d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_34) {
      local_12c = CONCAT44(local_48[0],&UNK_00885190);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x25;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
      local_12c = CONCAT44(local_2c[0],&UNK_008851ae);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_12c = CONCAT44(0x8851b6,(undefined4)local_12c);
    iVar4 = FUN_00475500();
    local_12c = *(undefined8 *)(iVar4 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8c = 1;
    if (0xf < local_e0) {
      local_12c = CONCAT44(local_f4[0],&UNK_008851fb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_12c = CONCAT44(local_108,0x885220);
    FUN_009a9740();
    goto LAB_00885220;
  }
  local_12c = 0x1600e29d80;
  ExceptionList = &local_10;
  FUN_00409350();
  local_12c = CONCAT44(local_48,local_a0);
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_34) {
    local_12c = CONCAT44(local_48[0],&UNK_008849e2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0x700e29d38;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_12c = CONCAT44(in_ECX,0x884a1d);
  FUN_008852b0();
  local_12c = CONCAT44(0x884a28,(undefined4)local_12c);
  uVar1 = FUN_0055dd40();
  local_12c = CONCAT44(uVar1,local_5c);
  local_8._0_1_ = 6;
  puVar2 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 7;
  local_12c = 0x3800884a43;
  puVar3 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00e38ecc;
    puVar3[1] = local_a0;
    local_12c = 0xffffffff00000000;
    puVar3[7] = 0xf;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    param_2 = (undefined8 *)puVar3;
    FUN_00408ed0();
    *puVar3 = &PTR_FUN_00e38f08;
    local_68 = puVar3 + 9;
    *local_68 = *puVar2;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    local_8._0_1_ = 10;
    local_12c = CONCAT44(0x884a9f,(undefined4)local_12c);
    FUN_009a97b0();
  }
  local_8._0_1_ = 7;
  local_12c = CONCAT44(&param_2,local_2c);
  param_2 = (undefined8 *)puVar3;
  FUN_009e6810();
  local_8._0_1_ = 0xb;
  local_12c = CONCAT44(0x884ac9,(undefined4)local_12c);
  FUN_009adb70();
  if (local_58 != 0) {
    local_12c = CONCAT44(0x884ad8,(undefined4)local_12c);
    FUN_009e6a80();
    local_12c = CONCAT44(local_58,&UNK_00884ae1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  if (0xf < local_c4) {
    local_12c = CONCAT44(local_d8,&UNK_00884b06);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if (0xf < local_18) {
    local_12c = CONCAT44(local_2c[0],&UNK_00884b32);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0x200df963c;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  if (*(int *)(local_88 + 0x28) < 1) {
    if (*(int *)(local_88 + 0x28) < 0) {
      local_12c = 0x200df8510;
      goto LAB_00884b7c;
    }
  }
  else {
    local_12c = 0x200df8518;
LAB_00884b7c:
    FUN_00409350();
  }
  local_12c = 0x200df8514;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  local_12c = 0x400e29d40;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  param_2 = &local_12c;
  local_8._0_1_ = 0xe;
  local_12c = (ulonglong)*(uint *)(local_88 + 0x28);
  uVar1 = FUN_00988a50();
  local_8._0_1_ = 0xf;
  local_12c = CONCAT44(uVar1,0x884be7);
  FUN_00988f20();
  local_8._0_1_ = 0x10;
  local_12c = CONCAT44(local_2c,0x884bfc);
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 0x11;
  local_12c = 0x4000884c09;
  param_2 = (undefined8 *)FUN_00aae9af();
  local_8._0_1_ = 0x12;
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x0;
  }
  else {
    local_12c = CONCAT44(uVar1,local_a0);
    param_2 = (undefined8 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x11;
  local_12c = CONCAT44(&param_2,local_64);
  FUN_009e6810();
  if (0xf < local_c4) {
    local_12c = CONCAT44(local_d8,&UNK_00884c5f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if (0xf < local_34) {
    local_12c = CONCAT44(local_48[0],&UNK_00884c87);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_70) {
    local_12c = CONCAT44(local_84,&UNK_00884ca1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_50) {
    local_12c = CONCAT44(local_64[0],&UNK_00884cbb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
    local_12c = CONCAT44(local_2c[0],&UNK_00884cd9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = CONCAT44(0x884ce1,(undefined4)local_12c);
  iVar4 = FUN_00475500();
  local_12c = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8c = 1;
  if (0xf < local_a8) {
    local_12c = CONCAT44(local_bc,&UNK_00884d25);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_12c = CONCAT44(0x884d4d,(undefined4)local_12c);
  FUN_009adb70();
  if (local_9c != 0) {
    local_12c = CONCAT44(0x884d62,(undefined4)local_12c);
    FUN_009e6a80();
    local_12c = CONCAT44(local_9c,&UNK_00884d6e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
LAB_00885220:
  if (0xf < in_stack_00000020) {
    local_12c = CONCAT44(param_3,&UNK_0088522f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

