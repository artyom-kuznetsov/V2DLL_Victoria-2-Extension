// FUN_0047ac30 @ 0047ac30 body=[[0047ac30, 0047acb3] [0047acb7, 0047ad41] [0047ad45, 0047b118] [0047b11c, 0047b147] [0047b14b, 0047b16b] [0047b16f, 0047b190] [0047b194, 0047b263] [0047b267, 0047b292] [0047b296, 0047b2b6] [0047b2ba, 0047b2db] [0047b2df, 0047b32c] [0047b330, 0047b3b0] [0047b3b4, 0047b3d9] [0047b3dd, 0047b3fe] [0047b402, 0047b4ea] [0047b4ee, 0047b518] [0047b51c, 0047b541] [0047b545, 0047b56b] [0047b56f, 0047b59b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ac30(int param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  char **ppcStack_180;
  uint local_150;
  char local_148 [4];
  uint local_144 [4];
  undefined4 local_134;
  uint local_130;
  uint local_128;
  undefined4 local_118;
  uint local_114;
  uint local_10c;
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint *local_d4;
  undefined4 local_c4;
  uint local_c0;
  int local_b8;
  undefined4 local_b4;
  uint *local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint *local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78;
  uint local_74;
  undefined **local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_58;
  uint *local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  int *local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b76be7;
  local_10 = ExceptionList;
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  local_8 = 0xffffffff;
  local_20 = piVar4;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  iVar11 = *(int *)(DAT_012588e8 + 0xbcc);
  local_114 = 0xf;
  local_118 = 0;
  local_128 = local_128 & 0xffffff00;
  ppcStack_180 = (char **)0x47ad03;
  local_b8 = iVar11;
  FUN_00409350();
  local_8 = 1;
  iVar5 = (**(code **)(*piVar4 + 0x44))();
  local_b4 = *(undefined4 *)(iVar5 + 0x94);
  local_8 = 0xffffffff;
  if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
    ppcStack_180 = (char **)&UNK_0047ad42;
    FUN_00aae91b();
  }
  iVar11 = *(int *)(iVar11 + 0x334);
  local_114 = 0xf;
  local_118 = 0;
  local_128 = local_128 & 0xffffff00;
  local_28._0_4_ = (char **)0x0;
  local_28._4_4_ = 0;
  if (iVar11 != 0) {
    local_2c = *(int *)(param_1 + 0x10);
    local_1c = *(int *)(local_2c + 8);
    iVar5 = iVar11;
    do {
      pbVar1 = (byte *)(local_1c + 8 + iVar5);
      piVar4 = (int *)(iVar5 + 0x48);
      iVar5 = *(int *)(iVar5 + 0x58);
      puVar6 = (uint *)(*piVar4 + (uint)*pbVar1 * 8);
      uVar3 = *puVar6;
      local_38._0_4_ = uVar3 - *(uint *)(local_2c + 0x30);
      local_38._4_4_ =
           (puVar6[1] - *(int *)(local_2c + 0x34)) - (uint)(uVar3 < *(uint *)(local_2c + 0x30));
      if ((local_38._4_4_ < 1) && (local_38._4_4_ < 0)) {
        bVar12 = (uint)local_38 != 0;
        local_38._0_4_ = -(uint)local_38;
        local_38._4_4_ = -(local_38._4_4_ + (uint)bVar12);
      }
      local_78 = (uint)(char **)local_28;
      local_74 = local_28._4_4_;
      if (((int)local_28._4_4_ < local_38._4_4_) ||
         (((int)local_28._4_4_ <= local_38._4_4_ && ((char **)local_28 <= (uint)local_38)))) {
        puVar6 = (uint *)&local_38;
      }
      else {
        puVar6 = &local_78;
      }
      local_28._0_4_ = (char **)*puVar6;
      local_28._4_4_ = puVar6[1];
    } while (iVar5 != 0);
  }
  local_78 = (uint)(char **)local_28;
  local_74 = local_28._4_4_;
  local_38._0_4_ = 0x8000;
  local_38._4_4_ = 0;
  if (((int)local_28._4_4_ < 1) && (((int)local_28._4_4_ < 0 || ((char **)local_28 < 0x8000)))) {
    puVar6 = (uint *)&local_38;
  }
  else {
    puVar6 = &local_78;
  }
  local_28 = *(undefined8 *)puVar6;
  local_18 = (undefined1 *)iVar11;
  if ((_DAT_013f2dac & 1) == 0) {
    _DAT_013f2dac = _DAT_013f2dac | 1;
    DAT_013f2d9c = 0;
    _DAT_013f2da0 = 0;
    _DAT_013f2da4 = 0;
    ppcStack_180 = (char **)0x47ae52;
    _atexit((_func_4879 *)&LAB_00c7eb60);
  }
  ppcStack_180 = (char **)0x47ae64;
  FUN_0047b5a0();
  local_1c = 0x23;
  if (iVar11 != 0) {
    local_2c = 0x460;
    do {
      if (local_2c < 0) goto LAB_0047b042;
      iVar11 = *(int *)(iVar11 + 0x58);
      ppcStack_180 = (char **)local_28;
      lVar13 = __alldiv();
      local_18 = (undefined1 *)(float)((float10)lVar13 * (float10)3.0517578125e-05);
      local_38 = lVar13;
      local_18 = (undefined1 *)FUN_00b31c00();
      puVar10 = (undefined4 *)(local_2c + DAT_013f2d9c);
      local_64 = (float)(int)local_18 / 100.0;
      local_68 = 1.0 - local_64;
      local_60 = 0;
      local_6c = 0x18d;
      local_70 = CColor::vftable;
      local_5c = DAT_00f092fc;
      local_58 = 0;
      ppcStack_180 = (char **)0x47af66;
      puVar7 = (undefined4 *)FUN_0047bb00();
      local_1c = local_1c + -1;
      local_2c = local_2c + -0x20;
      *puVar10 = *puVar7;
      puVar10[2] = puVar7[2];
      *(undefined8 *)(puVar10 + 3) = *(undefined8 *)(puVar7 + 3);
      *(undefined8 *)(puVar10 + 5) = *(undefined8 *)(puVar7 + 5);
      *(undefined1 *)(puVar10 + 7) = *(undefined1 *)(puVar7 + 7);
    } while (iVar11 != 0);
    if (local_1c < 0) goto LAB_0047b042;
  }
  local_18 = (undefined1 *)0x32;
  iVar11 = local_1c << 5;
  do {
    local_68 = DAT_00f17898;
    local_64 = DAT_00f17898;
    local_60 = 0;
    puVar7 = (undefined4 *)(iVar11 + DAT_013f2d9c);
    local_6c = 0x18d;
    local_70 = CColor::vftable;
    local_5c = DAT_00f092fc;
    local_58 = 0;
    ppcStack_180 = (char **)0x47b005;
    puVar10 = (undefined4 *)FUN_0047bb00();
    *puVar7 = *puVar10;
    puVar7[2] = puVar10[2];
    *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar10 + 3);
    *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(puVar10 + 5);
    *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar10 + 7);
    local_1c = local_1c + -1;
    iVar11 = iVar11 + -0x20;
  } while (-1 < local_1c);
LAB_0047b042:
  ppcStack_180 = (char **)0xdfba08;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = (uint *)((uint)local_94[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 2;
  ppcStack_180 = (char **)&DAT_00df830c;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 3;
  local_18 = (undefined1 *)&ppcStack_180;
  ppcStack_180 = (char **)(*(int *)(*(int *)(param_1 + 0x10) + 0x30) - (int)(char **)local_28);
  FUN_00988bb0();
  local_8._0_1_ = 4;
  ppcStack_180 = (char **)0x47b0c9;
  FUN_00988f20();
  piVar4 = local_20;
  local_8 = CONCAT31(local_8._1_3_,5);
  ppcStack_180 = (char **)0x47b0e2;
  local_20 = (int *)(**(code **)(*local_20 + 0x3c))();
  ppcStack_180 = (char **)0xffffffff;
  FUN_00408ed0();
  ppcStack_180 = (char **)0x0;
  FUN_00a5ecc0();
  if (0xf < local_c0) {
    ppcStack_180 = (char **)local_d4;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = (uint *)((uint)local_d4 & 0xffffff00);
  if (0xf < local_9c) {
    ppcStack_180 = (char **)local_b0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
  if (0xf < local_40) {
    ppcStack_180 = (char **)local_54[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_80) {
    ppcStack_180 = (char **)local_94[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppcStack_180 = (char **)0x10;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = (uint *)((uint)local_94[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 6;
  ppcStack_180 = (char **)0x1;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 7;
  local_20 = (int *)&stack0xfffffe7c;
  ppcStack_180 = (char **)(*(int *)(*(int *)(param_1 + 0x10) + 0x34) + local_28._4_4_ +
                          (uint)CARRY4(*(uint *)(*(int *)(param_1 + 0x10) + 0x30),
                                       (uint)(char **)local_28));
  FUN_00988bb0();
  ppcStack_180 = (char **)local_54;
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,9);
  ppcStack_180 = (char **)local_94;
  local_20 = (int *)(**(code **)(*piVar4 + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = (uint *)((uint)local_d4 & 0xffffff00);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = (uint *)((uint)local_94[0] & 0xffffff00);
  FUN_00409350();
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  local_8._0_1_ = 0xb;
  local_8._1_3_ = 0;
  pcVar8 = __itoa(0x24,local_148,10);
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0xc;
  uVar9 = FUN_0042c180();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  local_20 = (int *)(**(code **)(*piVar4 + 0x3c))();
  FUN_00408ed0(uVar9);
  FUN_00a5ecc0();
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (uint *)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (undefined **)((uint)local_70 & 0xffffff00);
  FUN_00409350();
  local_8 = 0xe;
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xf;
  FUN_00988bb0(local_144,3);
  local_8._0_1_ = 0x10;
  uVar9 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  (**(code **)(*piVar4 + 0x3c))();
  FUN_00408ed0(uVar9,0);
  FUN_00a5ecc0(uVar9);
  if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_130 = 0xf;
  local_134 = 0;
  local_144[0] = local_144[0] & 0xffffff00;
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (undefined **)((uint)local_70 & 0xffffff00);
  FUN_009d92f0();
  ExceptionList = local_10;
  return;
}

