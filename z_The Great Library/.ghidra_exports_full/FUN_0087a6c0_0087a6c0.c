// FUN_0087a6c0 @ 0087a6c0 body=[[0087a6c0, 0087a750] [0087a754, 0087a7e3] [0087a7e7, 0087a8ee] [0087a8f2, 0087a90b] [0087a90f, 0087a92f] [0087a938, 0087a9aa] [0087a9ae, 0087a9cb] [0087a9cf, 0087a9f9] [0087a9fd, 0087aa35] [0087aa39, 0087aa53] [0087aa57, 0087aa6a] [0087aa6e, 0087aa97] [0087aa9b, 0087aaa8] [0087aaac, 0087aac0]]


undefined1 *
FUN_0087a6c0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *in_ECX;
  int *piVar6;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 auStack_154 [16];
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint *puStack_13c;
  uint *puStack_138;
  undefined4 *puStack_134;
  uint *puStack_130;
  uint *puStack_12c;
  undefined4 uStack_128;
  undefined1 local_124 [16];
  undefined4 local_114;
  uint *local_110;
  undefined *puStack_10c;
  uint uStack_108;
  undefined4 local_f8 [4];
  int local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  int local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  int local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b426cd;
  local_10 = ExceptionList;
  local_18 = (undefined1 *)0x0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  uStack_7 = 0;
  uVar3 = uStack_7;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (0 < (int)param_3) {
    local_14 = param_3;
    ExceptionList = &local_10;
    do {
      local_8 = 1;
      uStack_108 = 3;
      puStack_10c = &DAT_00e29ba0;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_110 = (uint *)0x87a728;
      FUN_00409350();
      uStack_108 = 0xffffffff;
      puStack_10c = (undefined *)0x0;
      local_110 = local_34;
      local_8 = 2;
      local_114 = 0x87a73e;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_20) {
        uStack_108 = local_34[0];
                    /* WARNING: Subroutine does not return */
        puStack_10c = &UNK_0087a751;
        FUN_00aae91b();
      }
      local_14 = (undefined4 *)((int)local_14 + -1);
      uVar3 = uStack_7;
    } while (local_14 != (undefined4 *)0x0);
  }
  uStack_7 = uVar3;
  local_8 = 1;
  uStack_108 = in_stack_0000002c;
  local_18 = local_124;
  uStack_128 = 0xffffffff;
  puStack_12c = (uint *)0x0;
  puStack_130 = &param_4;
  local_110 = (uint *)0xf;
  local_114 = 0;
  local_124[0] = 0;
  puStack_134 = (undefined4 *)0x87a779;
  FUN_00408ed0();
  uStack_128 = param_2;
  puStack_12c = local_a4;
  puStack_130 = (uint *)0x87a78d;
  (**(code **)(*in_ECX + 0x24))();
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8 = 4;
  if (1 < local_94) {
    puStack_130 = local_a4;
    puStack_134 = (undefined4 *)0x87a7bb;
    puStack_138 = (uint *)FUN_00988f20();
    puStack_130 = (uint *)0xffffffff;
    puStack_134 = (undefined4 *)0x0;
    local_8 = 5;
    puStack_13c = (uint *)0x87a7cb;
    FUN_00448aa0();
    local_8 = 4;
    if (0xf < local_e4) {
      puStack_130 = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
      puStack_134 = (undefined4 *)&UNK_0087a7e4;
      FUN_00aae91b();
    }
  }
  local_8 = 4;
  puStack_130 = (uint *)0x0;
  puStack_134 = (undefined4 *)&DAT_00ded94d;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_138 = (uint *)0x87a803;
  FUN_00409350();
  puVar2 = (undefined4 *)in_ECX[2];
  do {
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = 6;
      puStack_130 = (uint *)0xffffffff;
      puStack_134 = (undefined4 *)0x0;
      puStack_138 = local_34;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      puStack_13c = (uint *)0x87aa23;
      FUN_00408ed0();
      if (0xf < local_3c) {
        puStack_130 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087aa36;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_20) {
        puStack_130 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087aa54;
        FUN_00aae91b();
      }
      if (0xf < local_90) {
        puStack_130 = (uint *)local_a4[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087aa6b;
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (local_ac < 0x10) {
        if (in_stack_00000024 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
        puStack_130 = (uint *)param_4;
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087aaa9;
        FUN_00aae91b();
      }
      puStack_130 = (uint *)local_c0;
                    /* WARNING: Subroutine does not return */
      puStack_134 = (undefined4 *)&UNK_0087aa98;
      FUN_00aae91b();
    }
    local_8 = 6;
    piVar1 = (int *)*puVar2;
    local_14 = (undefined4 *)puVar2[2];
    if (local_14 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*local_14;
    }
    puStack_130 = (uint *)param_2;
    puStack_134 = local_f8;
    puStack_138 = (uint *)0x87a83d;
    (**(code **)(*piVar1 + 0x28))();
    local_8 = 7;
    uVar4 = local_8;
    local_8 = 7;
    if (piVar6 == (int *)0x0) {
LAB_0087a938:
      local_8 = uVar4;
      puStack_138 = (uint *)in_stack_0000002c;
      local_18 = auStack_154;
      uStack_140 = 0xf;
      uStack_144 = 0;
      auStack_154[0] = 0;
      FUN_00408ed0(local_50,0,0xffffffff);
      puStack_130 = (uint *)(**(code **)(*piVar1 + 0x20))(local_88,param_2,param_3);
      local_8 = 0xb;
      puStack_134 = (undefined4 *)0x87a988;
      puStack_138 = (uint *)FUN_00988f20();
      puStack_130 = (uint *)0xffffffff;
      puStack_134 = (undefined4 *)0x0;
      local_8 = 0xc;
      puStack_13c = (uint *)0x87a998;
      FUN_00448aa0();
      if (0xf < local_58) {
        puStack_130 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087a9ab;
        FUN_00aae91b();
      }
      local_8 = 7;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_74) {
        puStack_130 = (uint *)local_88[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087a9cc;
        FUN_00aae91b();
      }
      if (0 < local_40) {
        puStack_130 = (uint *)0x0;
        puStack_134 = (undefined4 *)&DAT_00ded94d;
        puStack_138 = (uint *)0x87a9e2;
        FUN_00409350();
      }
    }
    else {
      puStack_138 = (uint *)0x87a852;
      local_18 = (undefined1 *)(**(code **)(*piVar1 + 0x18))();
      puStack_138 = (uint *)0x87a85e;
      puVar5 = (undefined1 *)(**(code **)(*piVar6 + 0x18))();
      uVar4 = local_8;
      if ((puVar5 != local_18) || (local_e8 < 1)) goto LAB_0087a938;
      puStack_138 = (uint *)0x6;
      puStack_13c = (uint *)&DAT_00e29ba4;
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      uStack_140 = 0x87a89c;
      FUN_00409350();
      local_8 = 8;
      puStack_138 = (uint *)param_2;
      puStack_13c = local_6c;
      uStack_140 = 0x87a8b1;
      (**(code **)(*piVar1 + 0x28))();
      puStack_130 = local_dc;
      local_8 = 9;
      puStack_134 = (undefined4 *)0x87a8c9;
      puStack_138 = (uint *)FUN_00988f20();
      puStack_130 = (uint *)0xffffffff;
      puStack_134 = (undefined4 *)0x0;
      local_8 = 10;
      puStack_13c = (uint *)0x87a8d9;
      FUN_00448aa0();
      if (0xf < local_74) {
        puStack_130 = (uint *)local_88[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087a8ef;
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_58) {
        puStack_130 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087a90c;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_c8) {
        puStack_130 = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
        puStack_134 = (undefined4 *)&UNK_0087a930;
        FUN_00aae91b();
      }
    }
    local_8 = 6;
    puVar2 = local_14;
    if (0xf < local_e4) {
      puStack_130 = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
      puStack_134 = (undefined4 *)&UNK_0087a9fa;
      FUN_00aae91b();
    }
  } while( true );
}

