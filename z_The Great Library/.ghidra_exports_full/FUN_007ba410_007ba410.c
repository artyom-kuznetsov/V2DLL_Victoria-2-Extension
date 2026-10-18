// FUN_007ba410 @ 007ba410 body=[[007ba410, 007ba484] [007ba488, 007ba538] [007ba53c, 007ba561] [007ba565, 007ba5bb] [007ba5bf, 007ba63e] [007ba642, 007ba66c] [007ba670, 007ba6f1] [007ba6f5, 007ba720] [007ba724, 007ba814] [007ba818, 007ba8af] [007ba8b3, 007ba8dd] [007ba8e1, 007ba978] [007ba97c, 007ba9a6] [007ba9aa, 007bab84] [007bab88, 007babaf] [007babb3, 007babd8] [007babdc, 007babff] [007bac03, 007bac57] [007bac5b, 007bacc7] [007baccb, 007bad37] [007bad3b, 007bad92] [007bad96, 007bb040] [007bb044, 007bb071] [007bb075, 007bb094] [007bb098, 007bb0c1] [007bb0c5, 007bb180] [007bb184, 007bb203] [007bb207, 007bb28c] [007bb290, 007bb379] [007bb37d, 007bb3dc] [007bb3e0, 007bb4ae] [007bb4b2, 007bb5e0] [007bb5e4, 007bb6fe] [007bb702, 007bb73e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba410(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  char *pcStack_134;
  uint *puStack_130;
  uint *puStack_12c;
  uint *puStack_128;
  uint *puStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *puStack_110;
  uint *puStack_10c;
  uint *puStack_108;
  uint *puStack_104;
  char local_e4 [4];
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  int *local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a4;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined8 local_5c;
  char local_4d;
  float local_4c;
  char local_46;
  char local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int *apiStack_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b1c5;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    return;
  }
  ExceptionList = &local_10;
  FUN_0072d4e0();
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x28) = local_44;
  *(undefined4 *)(param_1 + 0x2c) = local_40;
  *(undefined4 *)(param_1 + 0x30) = local_3c;
  puStack_104 = (uint *)0x7ba46f;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar1 = *(int **)(param_1 + 0x20);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  puStack_104 = (uint *)0x7ba4d3;
  pcVar5 = __itoa(*(int *)(param_2 + 0x58),local_e4,10);
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*piVar1 + 0x3c))();
  puStack_104 = local_78;
  puStack_108 = (uint *)0x7ba519;
  FUN_00408ed0();
  puStack_104 = (uint *)0x7ba52a;
  FUN_00a5ecc0();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_104 = (uint *)0x7ba582;
  FUN_00409350();
  local_8 = 4;
  piVar6 = (int *)(**(code **)(*piVar1 + 0x34))();
  puStack_104 = (uint *)0x7ba5a6;
  (**(code **)(*piVar6 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_24) {
    puStack_104 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_108 = (uint *)&UNK_007ba5bc;
    FUN_00aae91b();
  }
  puStack_104 = (uint *)0xa;
  puStack_108 = (uint *)0xe188fc;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_10c = (uint *)0x7ba5e0;
  FUN_00409350();
  local_8 = 5;
  puStack_104 = *(uint **)(param_2 + 0x6c);
  puStack_108 = (uint *)0x7ba5f6;
  uVar7 = FUN_00974c50();
  local_8 = CONCAT31(local_8._1_3_,6);
  puStack_104 = local_38;
  puStack_108 = (uint *)0x7ba609;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  puStack_108 = (uint *)0xffffffff;
  puStack_10c = (uint *)0x0;
  uStack_118._4_4_ = (char *)0x7ba61c;
  puStack_110 = (uint *)uVar7;
  FUN_00408ed0();
  puStack_108 = (uint *)0x0;
  puStack_110 = (uint *)0x7ba62d;
  puStack_10c = (uint *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_80) {
    puStack_108 = (uint *)local_94[0];
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_007ba63f;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_24) {
    puStack_108 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_007ba66d;
    FUN_00aae91b();
  }
  puStack_108 = (uint *)0xc;
  puStack_10c = (uint *)0xe18908;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_110 = (uint *)0x7ba691;
  FUN_00409350();
  local_8 = 7;
  puStack_108 = local_94;
  puStack_10c = (uint *)0x7ba6a9;
  uVar7 = (**(code **)(**(int **)(param_2 + 100) + 0x1c))();
  local_8 = CONCAT31(local_8._1_3_,8);
  puStack_10c = local_38;
  puStack_110 = (uint *)0x7ba6bc;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  puStack_110 = (uint *)0xffffffff;
  uStack_118._4_4_ = (char *)0x0;
  uStack_120._4_4_ = (char *)0x7ba6cf;
  uStack_118._0_4_ = (uint *)uVar7;
  FUN_00408ed0();
  puStack_110 = (uint *)0x0;
  uStack_118._0_4_ = (uint *)0x7ba6e0;
  uStack_118._4_4_ = (char *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_80) {
    puStack_110 = (uint *)local_94[0];
                    /* WARNING: Subroutine does not return */
    uStack_118._4_4_ = &UNK_007ba6f2;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_24) {
    puStack_110 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    uStack_118._4_4_ = &UNK_007ba721;
    FUN_00aae91b();
  }
  puStack_110 = (uint *)0x14;
  uStack_118._4_4_ = "pop_unemployment_bar";
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  uStack_118._0_4_ = (uint *)0x7ba741;
  FUN_00409350();
  local_8 = 9;
  puStack_110 = local_38;
  uStack_118._4_4_ = (char *)0x7ba755;
  piVar6 = (int *)(**(code **)(*piVar1 + 0x44))();
  uStack_118._4_4_ = (char *)0x7ba765;
  apiStack_18[0] = piVar6;
  local_a4 = FUN_00b31c36();
  if (*(int *)(param_2 + 0x58) == 0) {
    local_5c = 0;
  }
  else if (*(char *)(*(int *)(param_2 + 0x68) + 0x40) == '\0') {
    local_5c = 0;
  }
  else {
    uVar8 = *(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x60);
    uVar2 = *(uint *)(param_2 + 0x58);
    uStack_118._4_4_ = (char *)(((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11);
    uStack_120._4_4_ =
         (char *)((((int)uVar8 >> 0x1f) << 0xf | uVar8 >> 0x11) << 0xf | (uVar8 & 0x1ffff) >> 2);
    uStack_118._0_4_ = (uint *)(uVar2 << 0xf);
    uStack_120._0_4_ = (char *)(uVar8 * 0x40000000);
    puStack_124 = (uint *)0x7ba7c3;
    local_5c = __alldiv();
    piVar6 = apiStack_18[0];
  }
  puStack_124 = (uint *)0x7ba7e7;
  uStack_118 = local_a4;
  uStack_120 = local_5c;
  lVar12 = __allmul();
  uStack_118._4_4_ =
       (char *)((uint)(lVar12 >> 0xf) >> 0xf | (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) << 0x11);
  uStack_118._0_4_ = (uint *)0x7ba7ff;
  (**(code **)(*piVar6 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_24) {
    uStack_118._0_4_ = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    uStack_120._4_4_ = &UNK_007ba815;
    FUN_00aae91b();
  }
  uStack_118._0_4_ = (uint *)0x7;
  uStack_120._4_4_ = "pop_mil";
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  uStack_120._0_4_ = (char *)0x7ba839;
  FUN_00409350();
  local_8 = 10;
  uStack_120._4_4_ = *(char **)(param_2 + 0x120);
  apiStack_18[0] = (int *)((int)&uStack_120 + 4);
  uStack_118._0_4_ = *(uint **)(param_2 + 0x124);
  uStack_120._0_4_ = (char *)0x2;
  puStack_124 = local_94;
  puStack_128 = (uint *)0x7ba867;
  uVar7 = FUN_00988bb0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  uStack_118._0_4_ = local_38;
  uStack_120._4_4_ = (char *)0x7ba87a;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  uStack_120._4_4_ = (char *)0xffffffff;
  uStack_120._0_4_ = (char *)0x0;
  puStack_128 = (uint *)0x7ba88d;
  puStack_124 = (uint *)uVar7;
  FUN_00408ed0();
  uStack_120._4_4_ = (char *)0x0;
  puStack_124 = (uint *)0x7ba89e;
  uStack_120._0_4_ = (char *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_80) {
    uStack_120._4_4_ = (char *)local_94[0];
                    /* WARNING: Subroutine does not return */
    uStack_120._0_4_ = &UNK_007ba8b0;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_24) {
    uStack_120._4_4_ = (char *)local_38[0];
                    /* WARNING: Subroutine does not return */
    uStack_120._0_4_ = &UNK_007ba8de;
    FUN_00aae91b();
  }
  uStack_120._4_4_ = (char *)0x7;
  uStack_120._0_4_ = "pop_con";
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_124 = (uint *)0x7ba902;
  FUN_00409350();
  local_8 = 0xc;
  uStack_120._0_4_ = *(char **)(param_2 + 0x118);
  apiStack_18[0] = (int *)&uStack_120;
  uStack_120._4_4_ = *(char **)(param_2 + 0x11c);
  puStack_124 = (uint *)0x2;
  puStack_128 = local_94;
  puStack_12c = (uint *)0x7ba930;
  uVar7 = FUN_00988bb0();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  uStack_120._4_4_ = (char *)local_38;
  uStack_120._0_4_ = (char *)0x7ba943;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  uStack_120._0_4_ = (char *)0xffffffff;
  puStack_124 = (uint *)0x0;
  puStack_12c = (uint *)0x7ba956;
  puStack_128 = (uint *)uVar7;
  FUN_00408ed0();
  uStack_120._0_4_ = (char *)0x0;
  puStack_128 = (uint *)0x7ba967;
  puStack_124 = (uint *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_80) {
    uStack_120._0_4_ = (char *)local_94[0];
                    /* WARNING: Subroutine does not return */
    puStack_124 = (uint *)&UNK_007ba979;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_24) {
    uStack_120._0_4_ = (char *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_124 = (uint *)&UNK_007ba9a7;
    FUN_00aae91b();
  }
  local_1c = *(undefined4 *)(param_2 + 0x180);
  uStack_120._0_4_ = (char *)0x8;
  local_24 = 0xf;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_124 = (uint *)0xe18940;
  apiStack_18[0] = (int *)(float)((float10)_DAT_00f0c6d8 * (float10)3.0517578125e-05);
  local_4c = (float)((float10)*(longlong *)(param_2 + 0x180) * (float10)3.0517578125e-05) /
             (float)apiStack_18[0];
  if (10.0 <= local_4c) {
    local_28 = 0;
    if (999.0 <= local_4c) {
      puStack_128 = (uint *)0x7baae8;
      FUN_00409350();
      local_8 = 0x16;
      uStack_120._0_4_ = (char *)0x1;
      puStack_124 = (uint *)&DAT_00df830c;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      puStack_128 = (uint *)0x7bab0c;
      FUN_00409350();
      puStack_124 = (uint *)(int)local_4c;
      uStack_120._0_4_ = (char *)0x2;
      puStack_128 = local_c0;
      local_8._0_1_ = 0x17;
      puStack_12c = (uint *)0x7bab24;
      FUN_009c9e20();
      uStack_120._0_4_ = (char *)local_78;
      local_8._0_1_ = 0x18;
      puStack_124 = (uint *)0x7bab3c;
      uVar7 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x19);
    }
    else {
      puStack_128 = (uint *)0x7baa8b;
      FUN_00409350();
      local_8 = 0x12;
      uStack_120._0_4_ = (char *)0x1;
      puStack_124 = (uint *)&DAT_00df830c;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      puStack_128 = (uint *)0x7baaaf;
      FUN_00409350();
      uStack_120._0_4_ = (char *)0x1;
      puStack_124 = local_c0;
      local_8._0_1_ = 0x13;
      puStack_128 = (uint *)0x7baac6;
      FUN_00988d00();
      uStack_120._0_4_ = (char *)local_78;
      local_8._0_1_ = 0x14;
      puStack_124 = (uint *)0x7baadb;
      uVar7 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x15);
    }
  }
  else {
    local_28 = 0;
    puStack_128 = (uint *)0x7baa10;
    FUN_00409350();
    local_8 = 0xe;
    uStack_120._0_4_ = (char *)0x1;
    puStack_124 = (uint *)&DAT_00df830c;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    puStack_128 = (uint *)0x7baa34;
    FUN_00409350();
    uStack_120._0_4_ = (char *)0x2;
    puStack_124 = local_c0;
    local_8._0_1_ = 0xf;
    puStack_128 = (uint *)0x7baa4b;
    FUN_00988d00();
    uStack_120._0_4_ = (char *)local_78;
    local_8._0_1_ = 0x10;
    puStack_124 = (uint *)0x7baa60;
    uVar7 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x11);
  }
  uStack_120._0_4_ = (char *)local_38;
  puStack_124 = (uint *)0x7bab4f;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  puStack_124 = (uint *)0xffffffff;
  puStack_128 = (uint *)0x0;
  puStack_130 = (uint *)0x7bab62;
  puStack_12c = (uint *)uVar7;
  FUN_00408ed0();
  puStack_124 = (uint *)0x0;
  puStack_12c = (uint *)0x7bab73;
  puStack_128 = (uint *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_80) {
    puStack_124 = (uint *)local_94[0];
                    /* WARNING: Subroutine does not return */
    puStack_128 = (uint *)&UNK_007bab85;
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_ac) {
    puStack_124 = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    puStack_128 = (uint *)&UNK_007babb0;
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_64) {
    puStack_124 = (uint *)local_78[0];
                    /* WARNING: Subroutine does not return */
    puStack_128 = (uint *)&UNK_007babd9;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_64 = 0xf;
  local_68 = 0;
  uVar2 = local_78[0] >> 8;
  local_78[0] = uVar2 << 8;
  if (0xf < local_24) {
    puStack_124 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_128 = (uint *)&UNK_007bac00;
    FUN_00aae91b();
  }
  local_4c = *(float *)(param_2 + 0x274);
  puStack_124 = (uint *)0x13;
  puStack_128 = (uint *)0xe1894c;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = uVar2 << 8;
  puStack_12c = (uint *)0x7bac2b;
  FUN_00409350();
  local_8 = 0x1a;
  puStack_124 = local_78;
  puStack_128 = (uint *)0x7bac3f;
  uVar7 = (**(code **)(*piVar1 + 0x44))();
  local_8 = 0xffffffff;
  local_5c = CONCAT44(uVar7,(undefined4)local_5c);
  if (0xf < local_64) {
    puStack_128 = (uint *)local_78[0];
                    /* WARNING: Subroutine does not return */
    puStack_12c = (uint *)&UNK_007bac58;
    FUN_00aae91b();
  }
  puStack_128 = (uint *)0x16;
  puStack_12c = (uint *)0xe18960;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  puStack_130 = (uint *)0x7bac8f;
  FUN_00409350();
  local_8 = 0x1b;
  puStack_128 = local_c0;
  puStack_12c = (uint *)0x7baca6;
  piVar6 = (int *)(**(code **)(*piVar1 + 0x44))();
  local_8 = 0xffffffff;
  local_a4._4_4_ = piVar6;
  if (0xf < local_ac) {
    puStack_12c = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    puStack_130 = (uint *)&UNK_007bacc8;
    FUN_00aae91b();
  }
  puStack_12c = (uint *)0xa;
  puStack_130 = (uint *)0xe18978;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  pcStack_134 = (char *)0x7bad02;
  FUN_00409350();
  local_8 = 0x1c;
  puStack_12c = local_94;
  puStack_130 = (uint *)0x7bad19;
  local_c4 = (int *)(**(code **)(*piVar1 + 0x44))();
  local_8 = 0xffffffff;
  if (0xf < local_80) {
    puStack_130 = (uint *)local_94[0];
                    /* WARNING: Subroutine does not return */
    pcStack_134 = &UNK_007bad38;
    FUN_00aae91b();
  }
  puStack_130 = (uint *)0x11;
  pcStack_134 = "pop_movement_flag";
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_138 = (undefined *)0x7bad66;
  FUN_00409350();
  local_8 = 0x1d;
  puStack_130 = local_38;
  pcStack_134 = (char *)0x7bad7a;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x44))();
  local_8 = 0xffffffff;
  if (0xf < local_24) {
    pcStack_134 = (char *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_138 = &UNK_007bad93;
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_46 = '\0';
  local_4d = '\0';
  local_45 = '\0';
  pcStack_134 = (char *)0x7badbf;
  iVar9 = FUN_00967f50();
  piVar6 = local_c4;
  if (iVar9 == 0) {
    if (local_4c != 0.0) {
      piVar6 = *(int **)((int)local_4c + 0xc);
      if (piVar6 != (int *)0x0) {
        pcStack_134 = (char *)0x7badde;
        cVar4 = (**(code **)(*piVar6 + 0x34))();
        if (cVar4 != '\0') {
          if (*(int *)(piVar6[0x15] + 0x5c) == 3) {
            local_4d = '\x01';
          }
          else {
            local_46 = '\x01';
          }
          goto LAB_007badef;
        }
      }
      local_45 = '\x01';
    }
LAB_007badef:
    pcStack_134 = (char *)0x7badff;
    (**(code **)(*local_c4 + 0x104))();
    piVar6 = local_a4._4_4_;
    if (local_46 != '\0') {
      pcStack_134 = (char *)0x7bae1b;
      (**(code **)(*local_a4._4_4_ + 0x108))();
      pcStack_134 = (char *)0x7bae24;
      (**(code **)(*piVar6 + 0x34))();
      pcStack_134 = *(char **)(*(int *)(*(int *)((int)local_4c + 0xc) + 0x54) + 0x50);
      puStack_138 = (undefined *)0x7bae3a;
      (**(code **)(*piVar6 + 0x48))();
      goto LAB_007bae95;
    }
  }
  else {
    pcStack_134 = (char *)0x7bae5a;
    (**(code **)(*local_c4 + 0x108))();
    pcStack_134 = (char *)0x7bae63;
    (**(code **)(*piVar6 + 0x34))();
    pcStack_134 = (char *)0x7bae6e;
    iVar9 = FUN_00967f50();
    pcStack_134 = *(char **)(*(int *)(iVar9 + 0x30) + 0x128);
    puStack_138 = (undefined *)0x7bae85;
    (**(code **)(*local_c4 + 0x48))();
  }
  pcStack_134 = (char *)0x7bae95;
  (**(code **)(*local_a4._4_4_ + 0x104))();
LAB_007bae95:
  piVar6 = local_5c._4_4_;
  if (local_4d == '\0') {
    puStack_138 = (undefined *)0x7baed8;
    (**(code **)(*local_5c._4_4_ + 0x104))();
  }
  else {
    puStack_138 = (undefined *)0x7baeaa;
    (**(code **)(*local_5c._4_4_ + 0x108))();
    puStack_138 = (undefined *)0x7baeb3;
    (**(code **)(*piVar6 + 0x34))();
    puStack_138 = *(undefined **)(*(int *)(*(int *)((int)local_4c + 0xc) + 0x54) + 0x50);
    uStack_13c = 0x7baec9;
    (**(code **)(*piVar6 + 0x48))();
  }
  piVar6 = apiStack_18[0];
  if (local_45 == '\0') {
    uStack_13c = 0x7baf54;
    (**(code **)(*apiStack_18[0] + 0x104))();
  }
  else {
    uStack_13c = 0x7baeed;
    (**(code **)(*apiStack_18[0] + 0x108))();
    uStack_13c = 0x7baef6;
    (**(code **)(*piVar6 + 0x34))();
    uStack_13c = *(undefined4 *)((int)local_4c + 0x14);
    uStack_140 = 0x7baf09;
    (**(code **)(*piVar6 + 0xd4))();
    uStack_140 = 0x7baf15;
    apiStack_18[0] = (int *)(**(code **)(*piVar6 + 0xec))();
    iVar9 = *apiStack_18[0];
    local_5c = CONCAT44(local_5c._4_4_,*(undefined4 *)((int)local_4c + 0x10));
    uStack_140 = 0x7baf39;
    uStack_140 = FUN_0052fc10();
    uStack_148._4_4_ = (uint *)0x7baf45;
    (**(code **)(iVar9 + 0x150))();
  }
  uStack_148._4_4_ = (uint *)0xc;
  uStack_148._0_4_ = "pop_literacy";
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1e;
  uStack_148._4_4_ = (uint *)0x1;
  uStack_148._0_4_ = &DAT_00df9644;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  apiStack_18[0] = (int *)&uStack_148;
  local_8._0_1_ = 0x1f;
  uStack_148 = __allmul(*(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 300),0x320000,0);
  uStack_148 = uStack_148 >> 0xf;
  FUN_00988bb0(local_78,2);
  uStack_148._4_4_ = local_38;
  local_8._0_1_ = 0x20;
  uStack_148._0_4_ = (char *)0x7baff2;
  uVar7 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x21);
  uStack_148._4_4_ = local_94;
  uStack_148._0_4_ = (char *)0x7bb008;
  apiStack_18[0] = (int *)(**(code **)(*piVar1 + 0x3c))();
  uStack_148._0_4_ = (char *)0xffffffff;
  FUN_00408ed0(uVar7,0);
  uStack_148._0_4_ = (char *)0x0;
  FUN_00a5ecc0(uVar7);
  if (0xf < local_ac) {
    uStack_148._0_4_ = (char *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_64) {
    uStack_148._0_4_ = (char *)local_78[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_24) {
    uStack_148._0_4_ = (char *)local_38[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_24 = 0xf;
  local_28 = 0;
  uVar2 = local_38[0] >> 8;
  local_38[0] = uVar2 << 8;
  if (0xf < local_80) {
    uStack_148._0_4_ = (char *)local_94[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c._0_4_ = *(undefined4 *)(param_2 + 0x138);
  local_1c = *(undefined4 *)(param_2 + 0x130);
  apiStack_18[0] = *(int **)(param_2 + 0x134);
  local_a4._4_4_ = *(int **)(param_2 + 0x144);
  local_5c._4_4_ = *(int **)(param_2 + 0x13c);
  local_a4._0_4_ = *(undefined4 *)(param_2 + 0x140);
  uStack_148._0_4_ = (char *)0x11;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = uVar2 << 8;
  FUN_00409350("lifeneed_progress");
  local_8 = 0x22;
  uStack_148._0_4_ = (char *)local_38;
  iVar9 = (**(code **)(*piVar1 + 0x44))();
  piVar6 = *(int **)(iVar9 + 0x94);
  uVar13 = __allmul(local_1c,apiStack_18[0],0x320000,0);
  (**(code **)(*piVar6 + 0x60))
            (((uint)uVar13 >> 0xf | (int)((ulonglong)uVar13 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("eveneed_progress",0x10);
  local_8 = 0x23;
  iVar9 = (**(code **)(*piVar1 + 0x44))(local_38);
  piVar6 = *(int **)(iVar9 + 0x94);
  uVar13 = __allmul((undefined4)local_5c,local_5c._4_4_,0x320000,0);
  (**(code **)(*piVar6 + 0x60))
            (((uint)uVar13 >> 0xf | (int)((ulonglong)uVar13 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("luxneed_progress",0x10);
  local_8 = 0x24;
  iVar9 = (**(code **)(*piVar1 + 0x44))(local_38);
  piVar6 = *(int **)(iVar9 + 0x94);
  uVar13 = __allmul((undefined4)local_a4,local_a4._4_4_,0x320000,0);
  (**(code **)(*piVar6 + 0x60))
            (((uint)uVar13 >> 0xf | (int)((ulonglong)uVar13 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  iVar9 = FUN_0095ca40();
  if (iVar9 < 1) {
    iVar9 = FUN_0095ca40();
    if (iVar9 < 0) {
      FUN_009885d0();
      local_8 = 0x26;
      piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
      uVar7 = 3;
    }
    else {
      FUN_009885d0();
      local_8 = 0x27;
      piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
      uVar7 = 2;
    }
  }
  else {
    FUN_009885d0();
    local_8 = 0x25;
    piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
    uVar7 = 1;
  }
  (**(code **)(*piVar6 + 0x48))(uVar7);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("pop_religion",0xc);
  local_8 = 0x28;
  piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
  (**(code **)(*piVar6 + 0x48))(*(undefined4 *)(*(int *)(param_2 + 0x70) + 0x70));
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_2 + 0x1d4) == 0) ||
     (iVar9 = *(int *)(*(int *)(param_2 + 0x1d4) + 0xb0), iVar9 == 0)) {
    iVar9 = *(int *)(*(int *)(param_2 + 100) + 0x58);
    piVar6 = (int *)FUN_004c25b0();
    iVar9 = *(int *)(iVar9 * 0xb0 + 8 + *piVar6);
    iVar10 = *(int *)(iVar9 + 0x108);
    iVar9 = *(int *)(iVar9 + 0x10c) - iVar10 >> 5;
    iVar11 = 0;
    if (0 < iVar9) {
      piVar6 = (int *)(iVar10 + 8);
      do {
        if (*piVar6 == *(int *)(param_2 + 0x68)) {
          iVar9 = *(int *)(*(int *)(param_2 + 100) + 0x58);
          piVar6 = (int *)FUN_004c25b0();
          *(undefined4 *)(param_1 + 0x50) =
               *(undefined4 *)(*(int *)(iVar9 * 0xb0 + 8 + *piVar6) + 0x80);
          break;
        }
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 8;
      } while (iVar11 < iVar9);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar9 + 0x80);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00409350("pop_producing_icon",0x12);
    local_8 = 0x2a;
    piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
    (**(code **)(*piVar6 + 0x48))(1);
  }
  else {
    FUN_00409350("pop_producing_icon",0x12);
    local_8 = 0x29;
    piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(local_38);
    (**(code **)(*piVar6 + 0x48))(*(int *)(*(int *)(param_1 + 0x50) + 8) + 2);
  }
  if (0xf < local_24) {
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_8 = 0xffffffff;
  local_38[0] = local_38[0] & 0xffffff00;
  local_28 = 0;
  local_24 = 0xf;
  if ((_DAT_013f2740 & 1) == 0) {
    _DAT_013f2740 = _DAT_013f2740 | 1;
    DAT_013f2730 = 0;
    DAT_013f2734 = 0;
    _DAT_013f2738 = 0;
    _atexit((_func_4879 *)&LAB_00c83480);
  }
  if (DAT_013f2730 != DAT_013f2734) {
    DAT_013f2734 = FUN_006a2070(param_1);
  }
  iVar10 = DAT_01258a48 + 0x18;
  iVar9 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
  iVar11 = 1;
  local_5c._4_4_ = (int *)iVar9;
  if (1 < iVar9) {
    do {
      uVar2 = *(uint *)(*(int *)(param_2 + 0xa4) + iVar11 * 8);
      iVar3 = *(int *)(*(int *)(param_2 + 0xa4) + iVar11 * 8 + 4);
      if ((DAT_00f0c6ec <= iVar3) && ((DAT_00f0c6ec < iVar3 || (DAT_00f0c6e8 < uVar2)))) {
        apiStack_18[0] = (int *)(uVar2 >> 0xf | iVar3 << 0x11);
        FUN_00549af0(apiStack_18);
        FUN_0054a870();
        iVar9 = (int)local_5c._4_4_;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar9);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("pop_issues",10);
  local_8 = 0x2b;
  iVar9 = (**(code **)(*piVar1 + 0x44))(local_38);
  local_8 = 0xffffffff;
  if (local_24 < 0x10) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_009e11f0(*(undefined4 *)(iVar9 + 0x94),&DAT_013f2730,1);
    if (DAT_013f2730 != DAT_013f2734) {
      DAT_013f2734 = FUN_006a2070(iVar10);
    }
    iVar9 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
    iVar10 = 1;
    local_5c._4_4_ = (int *)iVar9;
    if (1 < iVar9) {
      do {
        uVar2 = *(uint *)(*(int *)(param_2 + 0x7c) + iVar10 * 8);
        iVar11 = *(int *)(*(int *)(param_2 + 0x7c) + iVar10 * 8 + 4);
        if ((-1 < iVar11) && ((0 < iVar11 || (uVar2 != 0)))) {
          apiStack_18[0] = (int *)(uVar2 >> 0xf | iVar11 << 0x11);
          FUN_00549af0(apiStack_18);
          FUN_0054a870();
          iVar9 = (int)local_5c._4_4_;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    FUN_00409350("pop_ideology",0xc);
    local_8 = 0x2c;
    iVar9 = (**(code **)(*piVar1 + 0x44))(local_e0);
    local_8 = 0xffffffff;
    if (local_cc < 0x10) {
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      FUN_009e11f0(*(undefined4 *)(iVar9 + 0x94),&DAT_013f2730,1);
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

