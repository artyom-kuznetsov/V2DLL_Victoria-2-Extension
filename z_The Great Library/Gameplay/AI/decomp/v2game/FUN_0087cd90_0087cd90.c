// FUN_0087cd90 @ 0087cd90 body=[[0087cd90, 0087ce23] [0087ce27, 0087ce84] [0087ce88, 0087cfce] [0087cfd2, 0087cff1] [0087cff5, 0087d010] [0087d014, 0087d0c2] [0087d0c6, 0087d0ed] [0087d0f1, 0087d174] [0087d178, 0087d192] [0087d196, 0087d1b0] [0087d1b4, 0087d1d4] [0087d1d8, 0087d1e5] [0087d1e9, 0087d1fd]]


undefined1 * FUN_0087cd90(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  undefined4 *puVar8;
  uint in_stack_00000024;
  int *in_stack_0000002c;
  undefined1 auStack_12c [16];
  undefined4 uStack_11c;
  uint *puStack_118;
  undefined4 *puStack_114;
  undefined1 local_104 [16];
  undefined4 local_f4;
  uint *local_f0;
  undefined *puStack_ec;
  uint uStack_e8;
  undefined1 local_d4 [16];
  int local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  int local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ba3abd;
  local_10 = ExceptionList;
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_7 = 0;
  uVar4 = uStack_7;
  uStack_7 = 0;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  if (0 < (int)param_3) {
    do {
      ExceptionList = ppvVar3;
      local_8 = 1;
      uStack_e8 = 3;
      puStack_ec = &DAT_00e29ba0;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      local_f0 = (uint *)0x87cdfb;
      FUN_00409350();
      uStack_e8 = 0xffffffff;
      puStack_ec = (undefined *)0x0;
      local_f0 = local_48;
      local_8 = 2;
      local_f4 = 0x87ce11;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_34) {
        uStack_e8 = local_48[0];
                    /* WARNING: Subroutine does not return */
        puStack_ec = &UNK_0087ce24;
        FUN_00aae91b();
      }
      param_3 = (undefined4 *)((int)param_3 + -1);
      ppvVar3 = ExceptionList;
      uVar4 = uStack_7;
    } while (param_3 != (undefined4 *)0x0);
  }
  uStack_7 = uVar4;
  local_8 = 1;
  uStack_e8 = 0;
  param_3 = (undefined4 *)local_104;
  local_f0 = (uint *)0xf;
  local_f4 = 0;
  local_104[0] = 0;
  puStack_114 = (undefined4 *)0x87ce49;
  FUN_00408ed0();
  (**(code **)(*in_ECX + 0x24))();
  local_8 = 3;
  puStack_114 = (undefined4 *)0x87ce70;
  FUN_00988f20();
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    puStack_114 = (undefined4 *)&UNK_0087ce85;
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if ((DAT_013f34a8 & 1) == 0) {
    DAT_013f34a8 = DAT_013f34a8 | 1;
    local_8 = 7;
    puStack_114 = (undefined4 *)0x87ceb8;
    FUN_008a8650();
    puStack_114 = (undefined4 *)0x87cec2;
    _atexit((_func_4879 *)&DAT_00c84fd0);
  }
  local_8 = 6;
  puStack_114 = (undefined4 *)0x87ceda;
  FUN_00876240();
  puStack_114 = (undefined4 *)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puStack_118 = (uint *)0x87cef5;
  FUN_00409350();
  puVar8 = (undefined4 *)in_ECX[2];
  param_2 = in_stack_0000002c;
  do {
    if (puVar8 == (undefined4 *)0x0) {
      local_8 = 8;
      if (local_54 < 1) {
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        puStack_114 = (undefined4 *)&DAT_00ded94d;
        *param_1 = 0;
        puStack_118 = (uint *)0x87d042;
        FUN_00409350();
      }
      else {
        puStack_114 = &param_2;
        puStack_118 = local_64;
        uVar2 = (uint)param_2 >> 8;
        param_2 = (int *)CONCAT31((int3)uVar2,10);
        uStack_11c = 0x87d122;
        iVar6 = FUN_005484e0();
        if (iVar6 == -1) {
          puStack_114 = (undefined4 *)&DAT_00dee2cc;
          puStack_118 = (uint *)0x87d136;
          FUN_00448740();
        }
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = local_64;
        uStack_11c = 0x87d145;
        FUN_00448aa0();
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = local_80;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        uStack_11c = 0x87d162;
        FUN_00408ed0();
      }
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087d175;
        FUN_00aae91b();
      }
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_1c = 0;
      local_18 = 0xf;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087d193;
        FUN_00aae91b();
      }
      local_64[0] = local_64[0] & 0xffffff00;
      local_54 = 0;
      local_50 = 0xf;
      if (local_6c < 0x10) {
        local_80[0] = local_80[0] & 0xffffff00;
        local_70 = 0;
        local_6c = 0xf;
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          puStack_114 = (undefined4 *)&UNK_0087d1d5;
          FUN_00aae91b();
        }
        if (in_stack_00000024 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087d1e6;
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      puStack_114 = (undefined4 *)&UNK_0087d1b1;
      FUN_00aae91b();
    }
    local_8 = 8;
    piVar1 = (int *)*puVar8;
    puVar8 = (undefined4 *)puVar8[2];
    if (puVar8 == (undefined4 *)0x0) {
      in_stack_0000002c = (int *)0x0;
    }
    else {
      in_stack_0000002c = (int *)*puVar8;
    }
    puStack_114 = (undefined4 *)local_d4;
    puStack_118 = (uint *)0x87cf3b;
    param_3 = puVar8;
    (**(code **)(*piVar1 + 0x28))();
    local_8 = 9;
    uVar5 = local_8;
    local_8 = 9;
    if (in_stack_0000002c == (int *)0x0) {
LAB_0087d04a:
      local_8 = uVar5;
      param_3 = (undefined4 *)auStack_12c;
      puStack_118 = (uint *)0xf;
      uStack_11c = 0;
      auStack_12c[0] = 0;
      FUN_00408ed0(local_2c,0,0xffffffff);
      (**(code **)(*piVar1 + 0x20))(local_48,&DAT_013f3460,0);
      local_8 = 0xc;
      puStack_114 = (undefined4 *)0x87d097;
      puStack_118 = (uint *)FUN_00988f20();
      puStack_114 = (undefined4 *)0x0;
      local_8 = 0xd;
      uStack_11c = 0x87d0a7;
      FUN_00448aa0();
      param_2 = (int *)((int)param_2 + 1);
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087d0c3;
        FUN_00aae91b();
      }
      local_8 = 9;
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087d0ee;
        FUN_00aae91b();
      }
      if (0 < local_1c) {
        puStack_114 = (undefined4 *)&DAT_00ded94d;
        puStack_118 = (uint *)0x87d108;
        FUN_00409350();
      }
    }
    else {
      iVar6 = (**(code **)(*in_stack_0000002c + 0x18))();
      iVar7 = (**(code **)(*piVar1 + 0x18))();
      puVar8 = param_3;
      uVar5 = local_8;
      if ((iVar6 != iVar7) || (local_c4 < 1)) goto LAB_0087d04a;
      puStack_114 = (undefined4 *)&DAT_00e29ba4;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      puStack_118 = (uint *)0x87cf8d;
      FUN_00409350();
      local_8 = 10;
      puStack_114 = (undefined4 *)0x87cfa6;
      puStack_118 = (uint *)FUN_00988f20();
      puStack_114 = (undefined4 *)0x0;
      local_8 = 0xb;
      uStack_11c = 0x87cfb6;
      FUN_00448aa0();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087cfcf;
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      puVar8 = param_3;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        puStack_114 = (undefined4 *)&UNK_0087cff2;
        FUN_00aae91b();
      }
    }
    local_8 = 8;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      puStack_114 = (undefined4 *)&UNK_0087d011;
      FUN_00aae91b();
    }
  } while( true );
}

