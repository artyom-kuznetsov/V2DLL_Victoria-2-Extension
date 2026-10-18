// FUN_00730ec0 @ 00730ec0 body=[[00730ec0, 00730fb3] [00730fb7, 00730fdf] [00730fe3, 00731002] [00731006, 00731029] [0073102d, 007310a6] [007310aa, 007310c9] [007310cd, 007310f0] [007310f6, 00731137] [0073113b, 007311bb] [007311bf, 0073124d] [00731251, 007313ce] [007313d2, 007313e4]]


/* WARNING: Removing unreachable block (ram,0x00731382) */
/* WARNING: Removing unreachable block (ram,0x007312fc) */

void FUN_00730ec0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  longlong lVar7;
  undefined8 uStack_e4;
  uint *puStack_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  uint *puStack_d0;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined4 local_84;
  undefined1 *local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b7c3ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x38) = *param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_3[1];
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_34 = (int *)in_ECX[3];
  local_30 = in_ECX[2];
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (*in_ECX == 0) {
    local_40 = 0;
    local_3c = 0;
  }
  else {
    if (1 < in_ECX[5]) {
      puStack_d0 = (uint *)0x3;
      local_4c = 0xf;
      puStack_d4 = (uint *)&DAT_00e125f4;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      puStack_d8 = (uint *)0x730f4d;
      FUN_00409350();
      puStack_d0 = local_2c;
      local_8._0_1_ = 1;
      puStack_d4 = (uint *)0x730f5d;
      puStack_d0 = (uint *)FUN_009888f0();
      local_8._0_1_ = 2;
      puStack_d4 = (uint *)0x730f6f;
      FUN_00988fa0();
      puStack_d0 = local_60;
      local_8._0_1_ = 3;
      puStack_d4 = (uint *)0x730f87;
      puStack_d8 = (uint *)FUN_00988f20();
      puStack_d0 = (uint *)0xffffffff;
      puStack_d4 = (uint *)0x0;
      local_8._0_1_ = 4;
      puStack_dc = (uint *)0x730f9b;
      FUN_00448aa0();
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_00730fb4;
        FUN_00aae91b();
      }
      if (0xf < local_68) {
        puStack_d0 = (uint *)local_7c;
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_00730fe0;
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      if (0xf < local_18) {
        puStack_d0 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_00731003;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_4c) {
        puStack_d0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_0073102a;
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0;
    local_40 = *(undefined4 *)(*in_ECX + 8);
    local_3c = *(undefined4 *)(*in_ECX + 0xc);
    puStack_d0 = (uint *)0x1;
    puStack_d4 = (uint *)&DAT_00ded950;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    puStack_d8 = (uint *)0x73105c;
    FUN_00409350();
    local_8._0_1_ = 5;
    puStack_d0 = *(uint **)(*in_ECX + 0x6c);
    puStack_d4 = (uint *)0x73106e;
    FUN_00974c50();
    puStack_d0 = local_60;
    local_8._0_1_ = 6;
    puStack_d4 = (uint *)0x731080;
    puStack_d8 = (uint *)FUN_00988f20();
    puStack_d0 = (uint *)0xffffffff;
    puStack_d4 = (uint *)0x0;
    local_8._0_1_ = 7;
    puStack_dc = (uint *)0x731094;
    FUN_00448aa0();
    if (0xf < local_18) {
      puStack_d0 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      puStack_d4 = (uint *)&UNK_007310a7;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_68) {
      puStack_d0 = (uint *)local_7c;
                    /* WARNING: Subroutine does not return */
      puStack_d4 = (uint *)&UNK_007310ca;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    if (0xf < local_4c) {
      puStack_d0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
      puStack_d4 = (uint *)&UNK_007310f1;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0;
  piVar2 = (int *)in_ECX[1];
  puStack_d0 = local_2c;
  puStack_d4 = (uint *)0x731111;
  local_38 = piVar2;
  puStack_dc = (uint *)(**(code **)(*piVar2 + 0x18))();
  puStack_d4 = (uint *)0xffffffff;
  puStack_d8 = (uint *)0x0;
  local_8._0_1_ = 8;
  uStack_e4._4_4_ = (undefined *)0x731125;
  FUN_00448aa0();
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    puStack_d4 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    puStack_d8 = (uint *)&UNK_00731138;
    FUN_00aae91b();
  }
  puStack_d4 = (uint *)0xffffffff;
  puStack_d8 = (uint *)0x0;
  puStack_dc = local_a0;
  uStack_e4._4_4_ = (undefined *)0x731157;
  FUN_00408ed0();
  puStack_d4 = (uint *)0x0;
  puStack_d8 = local_a0;
  puStack_dc = (uint *)0x73116b;
  FUN_00a5ecc0();
  puStack_d4 = local_2c;
  puStack_d8 = (uint *)0x731179;
  uVar6 = (**(code **)(*local_34 + 0x1c))();
  puStack_d8 = (uint *)0xffffffff;
  local_8._0_1_ = 9;
  puStack_dc = (uint *)0x0;
  uStack_e4._0_4_ = 0x731198;
  uStack_e4._4_4_ = (undefined *)uVar6;
  FUN_00408ed0();
  puStack_d8 = (uint *)0x0;
  uStack_e4._4_4_ = (undefined *)0x7311a9;
  puStack_dc = (uint *)uVar6;
  FUN_00a5ecc0();
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    puStack_d8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    puStack_dc = (uint *)&UNK_007311bc;
    FUN_00aae91b();
  }
  puStack_d8 = (uint *)0x7311cc;
  (**(code **)(**(int **)(param_1 + 0xac) + 0x34))();
  local_84 = *param_3;
  puStack_d8 = (uint *)local_34;
  puStack_dc = (uint *)0x7311ee;
  param_3 = (undefined4 *)FUN_00514310();
  puStack_d8 = (uint *)&param_3;
  puStack_dc = local_2c;
  uStack_e4._4_4_ = (undefined *)0x731208;
  uVar6 = FUN_0054a540();
  puStack_d8 = (uint *)0xffffffff;
  local_8._0_1_ = 10;
  param_3 = *(undefined4 **)(param_1 + 0xac);
  puStack_dc = (uint *)0x0;
  uStack_e4._0_4_ = 0x73122a;
  uStack_e4._4_4_ = (undefined *)uVar6;
  FUN_00408ed0();
  puStack_d8 = (uint *)0x0;
  uStack_e4._4_4_ = (undefined *)0x73123b;
  puStack_dc = (uint *)uVar6;
  FUN_00a5ecc0();
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    puStack_d8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    puStack_dc = (uint *)&UNK_0073124e;
    FUN_00aae91b();
  }
  puStack_d8 = (uint *)piVar2[10];
  puStack_dc = (uint *)0x731262;
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x48))();
  puStack_dc = (uint *)0x73126f;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
  puStack_dc = *(uint **)(param_1 + 0xb0);
  uStack_e4._4_4_ = (undefined *)param_4;
  uStack_e4._0_4_ = 0x73127f;
  FUN_00737be0();
  iVar5 = DAT_012587f0;
  local_44 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  param_3 = (undefined4 *)0x0;
  if (0 < local_44) {
    do {
      local_84 = *(undefined4 *)(param_1 + 0x38);
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c) * 4);
      uVar4 = *(uint *)(iVar3 + 0xe70);
      uStack_e4._0_4_ = -(uint)(0x10000 < uVar4) - *(int *)(iVar3 + 0xe74);
      puVar1 = (undefined4 *)(piVar2[0x44] + (uint)*(byte *)((int)piVar2 + (int)param_3 + 0xd0) * 8)
      ;
      puStack_dc = (uint *)puVar1[1];
      uStack_e4._4_4_ = (undefined *)*puVar1;
      lVar7 = __allmul(0x10000 - uVar4);
      iVar3 = (int)param_3;
      if (0 < lVar7 >> 0xf) {
        param_3 = *(undefined4 **)(*(int *)(iVar5 + 0xc) + (int)param_3 * 4);
        puStack_dc = (uint *)0x0;
        local_80 = (undefined1 *)&uStack_e4;
        uStack_e4 = lVar7 >> 0xf;
        uVar6 = FUN_00737900(param_4,param_2,param_3);
        uStack_e4._0_4_ = 0x731340;
        uStack_e4._4_4_ = (undefined *)uVar6;
        (**(code **)(**(int **)(param_1 + 0xb0) + 0xb4))();
      }
      param_3 = (undefined4 *)(iVar3 + 1);
    } while ((int)param_3 < local_44);
  }
  puStack_dc = (uint *)0x731362;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xe4))();
  puStack_dc = (uint *)0x73136f;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x34))();
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
  }
  puStack_dc = (uint *)0x7313af;
  FUN_00738440();
  puStack_dc = (uint *)0x7313ba;
  (**(code **)(*(int *)(param_1 + 0x1c) + 0x24))();
  if (local_8c < 0x10) {
    ExceptionList = local_10;
    return;
  }
  puStack_dc = (uint *)local_a0[0];
                    /* WARNING: Subroutine does not return */
  uStack_e4._4_4_ = &UNK_007313cf;
  FUN_00aae91b();
}

