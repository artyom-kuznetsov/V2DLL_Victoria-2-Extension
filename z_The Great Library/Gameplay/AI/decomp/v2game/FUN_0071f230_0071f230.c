// FUN_0071f230 @ 0071f230 body=[[0071f230, 0071f2b3] [0071f2b7, 0071f338] [0071f33c, 0071f37e] [0071f380, 0071f477] [0071f480, 0071f71e] [0071f722, 0071f74d] [0071f751, 0071f771] [0071f775, 0071f799] [0071f79d, 0071f872] [0071f876, 0071f8a1] [0071f8a5, 0071f8c5] [0071f8c9, 0071f8ed] [0071f8f1, 0071f9c3] [0071f9c7, 0071f9f1] [0071f9f5, 0071fa1b] [0071fa1f, 0071fa48]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071f230(int param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  char **ppcStack_188;
  char local_168 [36];
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
  uint *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint *local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint *local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  uint *local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  uint local_5c;
  undefined **local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  int *local_3c;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6db71;
  local_10 = ExceptionList;
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
  local_8 = 0xffffffff;
  local_3c = piVar4;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  iVar12 = *(int *)(DAT_012588e8 + 0xbcc);
  local_114 = 0xf;
  local_118 = 0;
  local_128 = local_128 & 0xffffff00;
  ppcStack_188 = (char **)0x71f2fd;
  FUN_00409350();
  local_8 = 1;
  iVar5 = (**(code **)(*piVar4 + 0x44))();
  local_80 = *(undefined4 *)(iVar5 + 0x94);
  local_8 = 0xffffffff;
  if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
    ppcStack_188 = (char **)&UNK_0071f339;
    FUN_00aae91b();
  }
  iVar12 = *(int *)(iVar12 + 0x334);
  local_114 = 0xf;
  local_118 = 0;
  local_128 = local_128 & 0xffffff00;
  local_28._0_4_ = (char **)0x0;
  local_28._4_4_ = 0;
  if (iVar12 != 0) {
    local_2c = *(int *)(param_1 + 0x6c);
    local_1c = *(int *)(local_2c + 8);
    iVar5 = iVar12;
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
        bVar13 = (uint)local_38 != 0;
        local_38._0_4_ = -(uint)local_38;
        local_38._4_4_ = -(local_38._4_4_ + (uint)bVar13);
      }
      local_60 = (uint)(char **)local_28;
      local_5c = local_28._4_4_;
      if (((int)local_28._4_4_ < local_38._4_4_) ||
         (((int)local_28._4_4_ <= local_38._4_4_ && ((char **)local_28 <= (uint)local_38)))) {
        puVar6 = (uint *)&local_38;
      }
      else {
        puVar6 = &local_60;
      }
      local_28._0_4_ = (char **)*puVar6;
      local_28._4_4_ = puVar6[1];
    } while (iVar5 != 0);
  }
  local_60 = (uint)(char **)local_28;
  local_5c = local_28._4_4_;
  local_38._0_4_ = 0x8000;
  local_38._4_4_ = 0;
  if (((int)local_28._4_4_ < 1) && (((int)local_28._4_4_ < 0 || ((char **)local_28 < 0x8000)))) {
    puVar6 = (uint *)&local_38;
  }
  else {
    puVar6 = &local_60;
  }
  local_28 = *(undefined8 *)puVar6;
  local_18 = (undefined1 *)iVar12;
  if ((_DAT_013f2ac4 & 1) == 0) {
    _DAT_013f2ac4 = _DAT_013f2ac4 | 1;
    DAT_013f2ab4 = 0;
    _DAT_013f2ab8 = 0;
    _DAT_013f2abc = 0;
    ppcStack_188 = (char **)0x71f44e;
    _atexit((_func_4879 *)&LAB_00c824c0);
  }
  ppcStack_188 = (char **)0x71f460;
  FUN_0047b5a0();
  local_1c = 0x23;
  if (iVar12 != 0) {
    local_2c = 0x460;
    do {
      if (local_2c < 0) goto LAB_0071f642;
      pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x6c) + 8) + 8 + iVar12);
      piVar4 = (int *)(iVar12 + 0x48);
      iVar12 = *(int *)(iVar12 + 0x58);
      ppcStack_188 = (char **)local_28;
      lVar14 = __alldiv((*(int *)(*piVar4 + (uint)*pbVar1 * 8) -
                        *(int *)(*(int *)(param_1 + 0x6c) + 0x30)) * 0x8000);
      local_18 = (undefined1 *)(float)((float10)lVar14 * (float10)3.0517578125e-05);
      local_38 = lVar14;
      local_18 = (undefined1 *)FUN_00b31c00();
      puVar11 = (undefined4 *)(local_2c + DAT_013f2ab4);
      local_4c = (float)(int)local_18 / 100.0;
      local_50 = 1.0 - local_4c;
      local_48 = 0;
      local_54 = 0x18d;
      local_58 = CColor::vftable;
      local_44 = DAT_00f092fc;
      local_40 = 0;
      ppcStack_188 = (char **)0x71f566;
      puVar7 = (undefined4 *)FUN_0047bb00();
      local_1c = local_1c + -1;
      local_2c = local_2c + -0x20;
      *puVar11 = *puVar7;
      puVar11[2] = puVar7[2];
      *(undefined8 *)(puVar11 + 3) = *(undefined8 *)(puVar7 + 3);
      *(undefined8 *)(puVar11 + 5) = *(undefined8 *)(puVar7 + 5);
      *(undefined1 *)(puVar11 + 7) = *(undefined1 *)(puVar7 + 7);
    } while (iVar12 != 0);
    if (local_1c < 0) goto LAB_0071f642;
  }
  local_18 = (undefined1 *)0x32;
  iVar12 = local_1c << 5;
  do {
    local_50 = DAT_00f17898;
    local_4c = DAT_00f17898;
    local_48 = 0;
    puVar7 = (undefined4 *)(iVar12 + DAT_013f2ab4);
    local_54 = 0x18d;
    local_58 = CColor::vftable;
    local_44 = DAT_00f092fc;
    local_40 = 0;
    ppcStack_188 = (char **)0x71f605;
    puVar11 = (undefined4 *)FUN_0047bb00();
    *puVar7 = *puVar11;
    puVar7[2] = puVar11[2];
    *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar11 + 3);
    *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(puVar11 + 5);
    *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar11 + 7);
    local_1c = local_1c + -1;
    iVar12 = iVar12 + -0x20;
  } while (-1 < local_1c);
LAB_0071f642:
  ppcStack_188 = (char **)0xdfba08;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (uint *)((uint)local_9c[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 2;
  ppcStack_188 = (char **)&DAT_00df830c;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (uint *)((uint)local_7c[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 3;
  local_18 = (undefined1 *)&ppcStack_188;
  ppcStack_188 = (char **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x30) - (int)(char **)local_28);
  FUN_00988bb0(local_b8);
  local_8._0_1_ = 4;
  ppcStack_188 = (char **)0x71f6cf;
  uVar8 = FUN_00988f20();
  piVar4 = local_3c;
  local_8 = CONCAT31(local_8._1_3_,5);
  ppcStack_188 = (char **)0x71f6e8;
  local_3c = (int *)(**(code **)(*local_3c + 0x3c))();
  ppcStack_188 = (char **)0xffffffff;
  FUN_00408ed0(uVar8);
  ppcStack_188 = (char **)0x0;
  FUN_00a5ecc0();
  if (0xf < local_c0) {
    ppcStack_188 = (char **)local_d4[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = (uint *)((uint)local_d4[0] & 0xffffff00);
  if (0xf < local_a4) {
    ppcStack_188 = (char **)local_b8[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = (uint *)((uint)local_b8[0] & 0xffffff00);
  if (0xf < local_68) {
    ppcStack_188 = (char **)local_7c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (uint *)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
    ppcStack_188 = (char **)local_9c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppcStack_188 = (char **)0x10;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (uint *)((uint)local_9c[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 6;
  ppcStack_188 = (char **)0x1;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (uint *)((uint)local_7c[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 7;
  ppcStack_188 = (char **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x34) + local_28._4_4_ +
                          (uint)CARRY4(*(uint *)(*(int *)(param_1 + 0x6c) + 0x30),
                                       (uint)(char **)local_28));
  FUN_00988bb0(local_d4,1);
  ppcStack_188 = (char **)local_7c;
  local_8._0_1_ = 8;
  uVar8 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,9);
  ppcStack_188 = (char **)local_9c;
  (**(code **)(*piVar4 + 0x3c))();
  FUN_00408ed0(uVar8,0);
  FUN_00a5ecc0(uVar8);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = (uint *)((uint)local_b8[0] & 0xffffff00);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = (uint *)((uint)local_d4[0] & 0xffffff00);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (uint *)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = (undefined **)((uint)local_58 & 0xffffff00);
  FUN_00409350("price_chart_time");
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  local_8._0_1_ = 0xb;
  local_8._1_3_ = 0;
  pcVar9 = __itoa(0x24,local_168,10);
  pcVar10 = pcVar9;
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar9);
  local_8._0_1_ = 0xc;
  uVar8 = FUN_0042c180(local_144);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  (**(code **)(*piVar4 + 0x3c))();
  FUN_00408ed0(uVar8,0,0xffffffff);
  FUN_00a5ecc0(uVar8,0);
  if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_144[0]);
  }
  local_130 = 0xf;
  local_134 = 0;
  local_144[0] = local_144[0] & 0xffffff00;
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_10c);
  }
  local_8 = 0xffffffff;
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = (undefined **)((uint)local_58 & 0xffffff00);
  FUN_009d92f0(local_80);
  ExceptionList = local_10;
  return;
}

