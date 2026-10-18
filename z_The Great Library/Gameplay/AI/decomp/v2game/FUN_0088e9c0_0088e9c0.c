// FUN_0088e9c0 @ 0088e9c0 body=[[0088e9c0, 0088ea18] [0088ea20, 0088ea60] [0088ea64, 0088eac5] [0088eac9, 0088eb1e] [0088eb22, 0088ebed] [0088ebf1, 0088ec0f] [0088ec13, 0088ecae] [0088ecb2, 0088ed45] [0088ed49, 0088ed64] [0088ed6b, 0088ed8c] [0088ed90, 0088edb9] [0088edbd, 0088edca] [0088edce, 0088ede2]]


undefined1 *
FUN_0088e9c0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  void **ppvVar2;
  undefined3 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_stack_00000024;
  undefined4 *in_stack_0000002c;
  undefined1 local_e4 [12];
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b692bf;
  local_10 = ExceptionList;
  local_48 = 0;
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  uStack_7 = 0;
  uVar3 = uStack_7;
  uStack_7 = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < (int)param_3) {
    do {
      ExceptionList = ppvVar2;
      local_8 = 2;
      local_cc = 0x300e29ba0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_d4 = CONCAT44(0x88ea38,(undefined4)local_d4);
      FUN_00409350();
      local_cc = 0xffffffff00000000;
      local_8 = 3;
      local_d4 = CONCAT44(local_2c,0x88ea4e);
      FUN_00448aa0();
      local_8 = 2;
      if (0xf < local_18) {
        local_cc = CONCAT44(local_2c[0],&UNK_0088ea61);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_3 = (undefined4 *)((int)param_3 + -1);
      ppvVar2 = ExceptionList;
      uVar3 = uStack_7;
    } while (param_3 != (undefined4 *)0x0);
  }
  uStack_7 = uVar3;
  local_8 = 2;
  local_cc = CONCAT44(in_stack_0000002c,(undefined4)local_cc);
  param_3 = (undefined4 *)local_e4;
  local_d4 = 0xf00000000;
  local_e4[0] = 0;
  FUN_00408ed0(&param_4,0,0xffffffff);
  uVar5 = FUN_0087a6c0(local_2c,param_2,0);
  local_8 = 4;
  local_cc = CONCAT44(uVar5,0x88eaaf);
  FUN_00988f20();
  local_8 = 6;
  if (0xf < local_18) {
    local_cc = CONCAT44(local_2c[0],&UNK_0088eac6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *param_1 = 0;
  local_cc = 0xd00e29f70;
  local_48 = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_d4 = CONCAT44(0x88eafc,(undefined4)local_d4);
  FUN_00409350();
  local_cc = CONCAT44(local_64,local_44);
  local_8 = 7;
  local_d4 = CONCAT44(0x88eb0d,(undefined4)local_d4);
  FUN_009a8ee0();
  local_8 = 9;
  if (0xf < local_50) {
    local_cc = CONCAT44(local_64[0],&UNK_0088eb1f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0x600e29f80;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_d4 = CONCAT44(0x88eb43,(undefined4)local_d4);
  FUN_00409350();
  param_3 = (undefined4 *)((int)&local_cc + 4);
  local_8 = 10;
  local_cc = CONCAT44(*(undefined4 *)(local_30 + 0x20),local_80);
  local_d4 = CONCAT44(0x88eb5e,(undefined4)local_d4);
  param_3 = (undefined4 *)FUN_00988970();
  local_8 = 0xb;
  local_cc = 0x400088eb6c;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8 = 0xc;
  in_stack_0000002c = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = local_44;
    *puVar6 = &PTR_FUN_00e38ecc;
    local_cc = 0xffffffff00000000;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    local_d4 = CONCAT44(local_2c,0x88eb9f);
    FUN_00408ed0();
    local_8 = 0xd;
    *puVar6 = &PTR_FUN_00e38ef4;
    local_cc = 0xffffffff00000000;
    puVar6[0xe] = 0xf;
    puVar6[0xd] = 0;
    *(undefined1 *)(puVar6 + 9) = 0;
    local_d4 = CONCAT44(param_3,0x88ebc0);
    FUN_00408ed0();
    param_3 = puVar6;
  }
  local_8 = 0xb;
  local_cc = CONCAT44(&param_3,local_2c);
  local_d4 = CONCAT44(0x88ebdb,(undefined4)local_d4);
  FUN_009e6810();
  if (0xf < local_6c) {
    local_cc = CONCAT44(local_80[0],&UNK_0088ebee);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 9;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_18) {
    local_cc = CONCAT44(local_2c[0],&UNK_0088ec10);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_cc = 0x1800088ec26;
    param_3 = (undefined4 *)FUN_00aae9af();
    local_8 = 0xe;
    if (param_3 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      local_cc = CONCAT44(param_3,0x88ec3a);
      puVar6 = (undefined4 *)FUN_00475150();
    }
    local_8 = 0xf;
    param_3 = (undefined4 *)0x0;
    if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      local_cc = 0x10088ec5d;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar6;
  local_8 = 9;
  local_d4 = *(undefined8 *)(DAT_0125b5e0 + 0x1b);
  local_cc = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
  uStack_d8 = 0x88ec8b;
  uVar5 = FUN_009a9880();
  local_8 = 0x10;
  local_cc = 0xffffffff00000000;
  local_d4 = CONCAT44(uVar5,0x88ec9d);
  FUN_00448aa0();
  _local_8 = CONCAT31(uStack_7,9);
  if (0xf < local_6c) {
    local_cc = CONCAT44(local_80[0],&UNK_0088ecaf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = *(undefined4 **)(local_30 + 8);
  param_3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    do {
      piVar1 = (int *)*puVar6;
      puVar6 = (undefined4 *)puVar6[2];
      local_cc = CONCAT44(0x88eccc,(undefined4)local_cc);
      cVar4 = (**(code **)(*piVar1 + 0x30))();
      if (cVar4 != '\0') {
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
    } while (puVar6 != (undefined4 *)0x0);
    if (1 < (int)param_3) {
      local_cc = 0x300e29f88;
      local_d4 = CONCAT44(0x88eceb,(undefined4)local_d4);
      FUN_00448740();
    }
  }
  local_cc = 0xffffffff00000000;
  local_d4 = CONCAT44(local_b8,0x88ecfc);
  FUN_00448aa0();
  if (1 < (int)param_3) {
    local_cc = 0x100defdfc;
    local_d4 = CONCAT44(0x88ed10,(undefined4)local_d4);
    FUN_00448740();
  }
  local_cc = 0x100dee2cc;
  local_d4 = CONCAT44(0x88ed1e,(undefined4)local_d4);
  FUN_00448740();
  _local_8 = CONCAT31(uStack_7,0x11);
  local_cc = CONCAT44(0x88ed2a,(undefined4)local_cc);
  FUN_009adb70();
  puVar6 = local_40;
  if (local_40 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar6 == local_3c) {
        local_cc = CONCAT44(local_40,&UNK_0088ed65);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar6[5]) break;
      puVar6[5] = 0xf;
      puVar6[4] = 0;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 8;
    }
    local_cc = CONCAT44(*puVar6,&UNK_0088ed46);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = 0;
  if (0xf < local_a4) {
    local_cc = CONCAT44(local_b8[0],&UNK_0088ed8d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (local_88 < 0x10) {
    if (in_stack_00000024 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_cc = CONCAT44(param_4,&UNK_0088edcb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = CONCAT44(local_9c,&UNK_0088edba);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

