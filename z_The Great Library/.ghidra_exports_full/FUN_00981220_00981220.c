// FUN_00981220 @ 00981220 body=[[00981220, 009812fc] [00981300, 00981323] [00981327, 0098139f] [009813a3, 009813c7] [009813cb, 0098146c] [00981470, 00981493] [00981497, 00981582] [00981586, 009815af] [009815b3, 009815ce] [009815d2, 009815f4] [009815f8, 009816e3] [009816e7, 0098170d] [00981711, 00981735] [00981739, 0098175b] [0098175f, 00981846] [0098184a, 00981870] [00981874, 00981898] [0098189c, 009818be] [009818c2, 009819a7] [009819ab, 009819d1] [009819d5, 009819f9] [009819fd, 00981a1f] [00981a23, 00981afa] [00981afe, 00981bc1] [00981bc7, 00981c85] [00981c89, 00981cac] [00981cb0, 00981d3f] [00981d43, 00981d66] [00981d6a, 00981df9] [00981dfd, 00981e20] [00981e24, 00981efa] [00981efe, 00981f24] [00981f28, 00981f4c] [00981f50, 00981f72] [00981f76, 00981fcf] [00981fd3, 0098204a] [0098204e, 00982071] [00982075, 0098212f] [00982133, 009821ae] [009821b2, 00982233] [00982237, 009822c5] [009822c9, 009822f0] [009822f4, 0098236a] [0098236e, 0098239b] [0098239f, 00982416] [0098241a, 00982447] [0098244b, 00982503] [00982507, 009825f9] [009825fd, 0098271e] [00982722, 009827d2] [009827d6, 009828ab] [009828af, 009828c1]]


void FUN_00981220(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint **ppuVar7;
  uint *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uStack_164;
  uint **ppuStack_15c;
  uint **ppuStack_158;
  uint **ppuStack_154;
  undefined8 uStack_150;
  uint **ppuStack_148;
  char **ppcStack_144;
  undefined1 auStack_140 [8];
  uint **ppuStack_138;
  uint **local_128;
  uint **local_124;
  undefined1 local_110 [76];
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  char **local_9c [4];
  undefined4 local_8c;
  uint local_88;
  char local_80 [4];
  char **local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined8 local_60;
  char **local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  char **local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba274a;
  local_10 = ExceptionList;
  local_128 = *(uint ***)(param_1 + 0x2c);
  local_124 = *(uint ***)(param_1 + 0x30);
  local_38 = CONCAT44(&local_128,(undefined4)local_38);
  ExceptionList = &local_10;
  iVar4 = FUN_009c16d0();
  if (iVar4 == 0) {
    local_124 = (uint **)0x981276;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x18) + 0x38))();
    ExceptionList = local_10;
    return;
  }
  local_124 = (uint **)0xb;
  local_128 = (uint **)0xe37138;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 0;
  local_124 = *(uint ***)(*(int *)(param_1 + 0x28) + 0x6c);
  local_128 = (uint **)0x9812b8;
  FUN_00974c50();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_124 = (uint **)local_54;
  local_128 = (uint **)0x9812cc;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  local_128 = (uint **)0xffffffff;
  local_60 = CONCAT44(uVar5,(undefined4)local_60);
  FUN_00408ed0();
  local_128 = (uint **)0x0;
  FUN_00a5ecc0();
  if (0xf < local_1c) {
    local_128 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_40) {
    local_128 = (uint **)local_54[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_128 = (uint **)0x8;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 2;
  local_128 = (uint **)local_30;
  FUN_0096d650();
  local_8 = CONCAT31(local_8._1_3_,3);
  local_128 = (uint **)local_54;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  local_60 = CONCAT44(uVar5,(undefined4)local_60);
  ppuStack_138 = (uint **)0x981381;
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  uVar1 = (uint)local_30[0] >> 8;
  local_30[0] = (char **)(uVar1 << 8);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)(uVar1 << 8);
  FUN_00409350();
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  ppuStack_138 = (uint **)0x98140b;
  pcVar6 = __itoa(*(int *)(*(int *)(param_1 + 0x28) + 0x58),local_80,10);
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,6);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  ppuStack_138 = (uint **)local_54;
  auStack_140._4_4_ = 0x98144e;
  FUN_00408ed0();
  ppuStack_138 = (uint **)0x98145e;
  FUN_00a5ecc0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_138 = (uint **)0x9814b5;
  FUN_00409350();
  local_8 = 7;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  ppuStack_138 = (uint **)0x9814d5;
  FUN_00409350();
  local_8._0_1_ = 8;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 0x180);
  local_38 = CONCAT44(&stack0xfffffecc,(undefined4)local_38);
  ppuStack_138 = DAT_00f0eb4c;
  auStack_140._0_4_ = *(int *)(*(int *)(param_1 + 0x28) + 0x184) << 0xf | uVar1 >> 0x11;
  auStack_140._4_4_ = DAT_00f0eb48;
  ppcStack_144 = (char **)(uVar1 << 0xf);
  ppuStack_148 = (uint **)0x981511;
  __alldiv();
  ppuStack_138 = (uint **)0x2;
  auStack_140._4_4_ = 0x981520;
  FUN_009ca140();
  local_8._0_1_ = 9;
  ppuVar7 = (uint **)FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,10);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  ppuStack_138 = (uint **)0x0;
  local_60 = CONCAT44(uVar5,(undefined4)local_60);
  auStack_140._0_4_ = 0x98155e;
  auStack_140._4_4_ = ppuVar7;
  FUN_00408ed0();
  auStack_140._4_4_ = 0x98156e;
  ppuStack_138 = ppuVar7;
  FUN_00a5ecc0();
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    ppuStack_138 = (uint **)&UNK_00981583;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    ppuStack_138 = (uint **)&UNK_009815b0;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    ppuStack_138 = (uint **)&UNK_009815cf;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    ppuStack_138 = (uint **)&UNK_009815f5;
    FUN_00aae91b();
  }
  ppuStack_138 = (uint **)&DAT_00df830c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  auStack_140._4_4_ = 0x981616;
  FUN_00409350();
  local_8 = 0xb;
  ppuStack_138 = (uint **)0xe37144;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  auStack_140._4_4_ = 0x981636;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  puVar8 = (uint *)FUN_00965d40();
  ppuStack_138 = (uint **)*puVar8;
  local_38 = CONCAT44(&ppuStack_138,(undefined4)local_38);
  auStack_140._4_4_ = DAT_00f0eb4c;
  ppcStack_144 = (char **)(puVar8[1] << 0xf | (uint)ppuStack_138 >> 0x11);
  auStack_140._0_4_ = DAT_00f0eb48;
  ppuStack_148 = (uint **)((int)ppuStack_138 << 0xf);
  uStack_150._4_4_ = (char *)0x981678;
  ppuStack_138 = (uint **)__alldiv();
  auStack_140._4_4_ = 2;
  auStack_140._0_4_ = 0x98168a;
  FUN_009ca140();
  local_8._0_1_ = 0xd;
  ppuStack_138 = (uint **)0x98169f;
  uVar5 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  ppuStack_138 = (uint **)0x9816b3;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  ppuStack_138 = (uint **)0xffffffff;
  auStack_140._4_4_ = 0;
  local_60 = CONCAT44(uVar9,(undefined4)local_60);
  ppcStack_144 = (char **)0x9816c5;
  auStack_140._0_4_ = uVar5;
  FUN_00408ed0();
  ppuStack_138 = (uint **)0x0;
  auStack_140._0_4_ = 0x9816d5;
  auStack_140._4_4_ = uVar5;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    ppuStack_138 = (uint **)local_7c[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._4_4_ = &UNK_009816e4;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
    ppuStack_138 = (uint **)local_9c[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._4_4_ = &UNK_0098170e;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_40) {
    ppuStack_138 = (uint **)local_54[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._4_4_ = &UNK_00981736;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_138 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._4_4_ = &UNK_0098175c;
    FUN_00aae91b();
  }
  ppuStack_138 = (uint **)0x1;
  auStack_140._4_4_ = &DAT_00df830c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  auStack_140._0_4_ = 0x98177d;
  FUN_00409350();
  local_8 = 0xf;
  ppuStack_138 = (uint **)0xe;
  auStack_140._4_4_ = "expenses_value";
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  auStack_140._0_4_ = 0x981799;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  ppuStack_138 = (uint **)0x9817ab;
  puVar8 = (uint *)FUN_00965de0();
  auStack_140._4_4_ = *puVar8;
  ppuStack_138 = (uint **)puVar8[1];
  local_38 = CONCAT44(auStack_140 + 4,(undefined4)local_38);
  auStack_140._0_4_ = DAT_00f0eb4c;
  ppuStack_148 = (uint **)((int)ppuStack_138 << 0xf | (uint)auStack_140._4_4_ >> 0x11);
  ppcStack_144 = (char **)DAT_00f0eb48;
  uStack_150._4_4_ = (char *)(auStack_140._4_4_ << 0xf);
  uStack_150._0_4_ = (char ***)0x9817db;
  join_0x00000008_0x00000000_ = __alldiv();
  auStack_140._0_4_ = 2;
  ppcStack_144 = (char **)0x9817ed;
  FUN_009ca140();
  ppuStack_138 = (uint **)local_30;
  local_8._0_1_ = 0x11;
  auStack_140._4_4_ = 0x981802;
  uVar5 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x12);
  ppuStack_138 = (uint **)local_54;
  auStack_140._4_4_ = 0x981816;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  auStack_140._4_4_ = 0xffffffff;
  auStack_140._0_4_ = 0;
  local_60 = CONCAT44(uVar9,(undefined4)local_60);
  ppuStack_148 = (uint **)0x981828;
  ppcStack_144 = (char **)uVar5;
  FUN_00408ed0();
  auStack_140._4_4_ = 0;
  ppcStack_144 = (char **)0x981838;
  auStack_140._0_4_ = uVar5;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    auStack_140._4_4_ = local_7c[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._0_4_ = &UNK_00981847;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
    auStack_140._4_4_ = local_9c[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._0_4_ = &UNK_00981871;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_40) {
    auStack_140._4_4_ = local_54[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._0_4_ = &UNK_00981899;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
    auStack_140._4_4_ = local_30[0];
                    /* WARNING: Subroutine does not return */
    auStack_140._0_4_ = &UNK_009818bf;
    FUN_00aae91b();
  }
  auStack_140._4_4_ = 1;
  auStack_140._0_4_ = &DAT_00df830c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppcStack_144 = (char **)0x9818e0;
  FUN_00409350();
  local_8 = 0x13;
  auStack_140._4_4_ = 10;
  auStack_140._0_4_ = "bank_value";
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  ppcStack_144 = (char **)0x981900;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  auStack_140._0_4_ = *(uint *)(*(int *)(param_1 + 0x28) + 0x250);
  auStack_140._4_4_ = *(int *)(*(int *)(param_1 + 0x28) + 0x254);
  local_38 = CONCAT44(auStack_140,(undefined4)local_38);
  ppcStack_144 = (char **)DAT_00f0eb4c;
  uStack_150._4_4_ = (char *)(auStack_140._4_4_ << 0xf | (uint)auStack_140._0_4_ >> 0x11);
  ppuStack_148 = (uint **)DAT_00f0eb48;
  uStack_150._0_4_ = (char ***)(auStack_140._0_4_ << 0xf);
  ppuStack_154 = (uint **)0x98193c;
  auStack_140 = (undefined1  [8])__alldiv();
  ppcStack_144 = (char **)0x2;
  ppuStack_148 = (uint **)0x98194e;
  FUN_009ca140();
  auStack_140._4_4_ = local_30;
  local_8._0_1_ = 0x15;
  auStack_140._0_4_ = 0x981963;
  uVar5 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x16);
  auStack_140._4_4_ = local_54;
  auStack_140._0_4_ = 0x981977;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  auStack_140._0_4_ = 0xffffffff;
  ppcStack_144 = (char **)0x0;
  local_60 = CONCAT44(uVar9,(undefined4)local_60);
  uStack_150._4_4_ = (char *)0x981989;
  ppuStack_148 = (uint **)uVar5;
  FUN_00408ed0();
  auStack_140._0_4_ = 0;
  ppuStack_148 = (uint **)0x981999;
  ppcStack_144 = (char **)uVar5;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    auStack_140._0_4_ = local_7c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_144 = (char **)&UNK_009819a8;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
    auStack_140._0_4_ = local_9c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_144 = (char **)&UNK_009819d2;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_40) {
    auStack_140._0_4_ = local_54[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_144 = (char **)&UNK_009819fa;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
    auStack_140._0_4_ = local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_144 = (char **)&UNK_00981a20;
    FUN_00aae91b();
  }
  auStack_140._0_4_ = 0x14;
  ppcStack_144 = (char **)0xe18918;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_148 = (uint **)0x981a40;
  FUN_00409350();
  local_8 = 0x17;
  auStack_140._0_4_ = local_30;
  ppcStack_144 = (char **)0x981a55;
  piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
  iVar4 = *(int *)(param_1 + 0x28);
  local_38._4_4_ = piVar10;
  if (*(int *)(iVar4 + 0x58) == 0) {
    local_60 = 0;
  }
  else if (*(char *)(*(int *)(iVar4 + 0x68) + 0x40) == '\0') {
    local_60 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar4 + 0x58);
    local_60 = CONCAT44(uVar1,(undefined4)local_60);
    uVar13 = uVar1 - *(int *)(iVar4 + 0x60);
    ppcStack_144 = (char **)(((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
    uStack_150._4_4_ =
         (char *)((((int)uVar13 >> 0x1f) << 0xf | uVar13 >> 0x11) << 0xf | (uVar13 & 0x1ffff) >> 2);
    ppuStack_148 = (uint **)(uVar1 << 0xf);
    uStack_150._0_4_ = (char ***)(uVar13 * 0x40000000);
    ppuStack_154 = (uint **)0x981ab1;
    local_60 = __alldiv();
  }
  piVar10 = local_38._4_4_;
  ppcStack_144 = (char **)0x0;
  ppuStack_148 = (uint **)0x320000;
  ppuStack_154 = (uint **)0x981acd;
  uStack_150 = local_60;
  lVar16 = __allmul();
  ppcStack_144 = (char **)((uint)(lVar16 >> 0xf) >> 0xf |
                          (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11);
  ppuStack_148 = (uint **)0x981ae5;
  (**(code **)(*piVar10 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    ppuStack_148 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    uStack_150._4_4_ = &UNK_00981afb;
    FUN_00aae91b();
  }
  iVar4 = *(int *)(param_1 + 0x28);
  ppuStack_148 = (uint **)0x10;
  uStack_150._4_4_ = "growth_indicator";
  iVar4 = *(int *)(iVar4 + 0x178) + *(int *)(iVar4 + 0x174) + *(int *)(iVar4 + 0x170) +
          *(int *)(iVar4 + 0x16c) + *(int *)(iVar4 + 0x168) + *(int *)(iVar4 + 0x164) +
          *(int *)(iVar4 + 0x160) + *(int *)(iVar4 + 0x15c) + *(int *)(iVar4 + 0x158);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
      uStack_150._0_4_ = (char ***)0x981bdd;
      FUN_00409350();
      local_8 = 0x1a;
      ppuStack_148 = (uint **)local_7c;
      uStack_150._4_4_ = (char *)0x981bf2;
      piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
      uStack_150._4_4_ = (char *)0x2;
      uStack_150._0_4_ = (char ***)0x981bfd;
      (**(code **)(*piVar10 + 0x48))();
      local_8 = 0xffffffff;
      uStack_150._0_4_ = (char ***)0x981c0c;
      FUN_00408ad0();
      goto LAB_00981c0c;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (char **)((uint)local_30[0]._1_3_ << 8);
    uStack_150._0_4_ = (char ***)0x981b8c;
    FUN_00409350();
    local_8 = 0x19;
    ppuStack_148 = (uint **)local_30;
    uStack_150._4_4_ = (char *)0x981ba1;
    piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    uStack_150._4_4_ = (char *)0x3;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (char **)((uint)local_30[0]._1_3_ << 8);
    uStack_150._0_4_ = (char ***)0x981b5b;
    FUN_00409350();
    local_8 = 0x18;
    ppuStack_148 = (uint **)local_30;
    uStack_150._4_4_ = (char *)0x981b70;
    piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    uStack_150._4_4_ = (char *)0x1;
  }
  uStack_150._0_4_ = (char ***)0x981bac;
  (**(code **)(*piVar10 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    uStack_150._0_4_ = (char ***)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_154 = (uint **)&UNK_00981bc2;
    FUN_00aae91b();
  }
LAB_00981c0c:
  uStack_150._0_4_ = (char ***)0xc;
  ppuStack_154 = (uint **)0xe18908;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_158 = (uint **)0x981c29;
  FUN_00409350();
  local_8 = 0x1b;
  uStack_150._0_4_ = local_7c;
  ppuStack_154 = (uint **)0x981c41;
  ppuVar7 = (uint **)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 100) + 0x1c))();
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  ppuStack_154 = (uint **)local_30;
  ppuStack_158 = (uint **)0x981c55;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  ppuStack_158 = (uint **)0xffffffff;
  ppuStack_15c = (uint **)0x0;
  local_38 = CONCAT44(uVar5,(undefined4)local_38);
  uStack_164._0_4_ = (char *)0x981c67;
  uStack_164._4_4_ = (char *)ppuVar7;
  FUN_00408ed0();
  ppuStack_158 = (uint **)0x0;
  uStack_164._4_4_ = (char *)0x981c77;
  ppuStack_15c = ppuVar7;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    ppuStack_158 = (uint **)local_7c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_15c = (uint **)&UNK_00981c86;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_158 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_15c = (uint **)&UNK_00981cad;
    FUN_00aae91b();
  }
  ppuStack_158 = (uint **)0x9;
  ppuStack_15c = (uint **)0xe37170;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  uStack_164._4_4_ = (char *)0x981ccd;
  FUN_00409350();
  local_8 = 0x1d;
  ppuStack_15c = *(uint ***)(*(int *)(param_1 + 0x28) + 0x120);
  local_38 = CONCAT44(&ppuStack_15c,(undefined4)local_38);
  ppuStack_158 = *(uint ***)(*(int *)(param_1 + 0x28) + 0x124);
  uStack_164._4_4_ = (char *)0x2;
  uStack_164._0_4_ = (char *)local_7c;
  uVar5 = FUN_00988bb0();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  ppuStack_158 = (uint **)local_30;
  ppuStack_15c = (uint **)0x981d0f;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  ppuStack_15c = (uint **)0xffffffff;
  uStack_164._4_4_ = (char *)0x0;
  local_38 = CONCAT44(uVar9,(undefined4)local_38);
  uStack_164._0_4_ = (char *)uVar5;
  FUN_00408ed0();
  ppuStack_15c = (uint **)0x0;
  uStack_164._0_4_ = (char *)0x981d31;
  uStack_164._4_4_ = (char *)uVar5;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    ppuStack_15c = (uint **)local_7c[0];
                    /* WARNING: Subroutine does not return */
    uStack_164._4_4_ = &UNK_00981d40;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_15c = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    uStack_164._4_4_ = &UNK_00981d67;
    FUN_00aae91b();
  }
  ppuStack_15c = (uint **)0x9;
  uStack_164._4_4_ = "con_value";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  uStack_164._0_4_ = (char *)0x981d87;
  FUN_00409350();
  local_8 = 0x1f;
  uStack_164._4_4_ = *(char **)(*(int *)(param_1 + 0x28) + 0x118);
  local_38 = CONCAT44((int)&uStack_164 + 4,(undefined4)local_38);
  ppuStack_15c = *(uint ***)(*(int *)(param_1 + 0x28) + 0x11c);
  uStack_164._0_4_ = (char *)0x2;
  uVar5 = FUN_00988bb0(local_7c);
  local_8 = CONCAT31(local_8._1_3_,0x20);
  ppuStack_15c = (uint **)local_30;
  uStack_164._4_4_ = (char *)0x981dc9;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  uStack_164._4_4_ = (char *)0xffffffff;
  uStack_164._0_4_ = (char *)0x0;
  local_38 = CONCAT44(uVar9,(undefined4)local_38);
  FUN_00408ed0(uVar5);
  uStack_164._4_4_ = (char *)0x0;
  uStack_164._0_4_ = (char *)uVar5;
  FUN_00a5ecc0();
  if (0xf < local_68) {
    uStack_164._4_4_ = (char *)local_7c[0];
                    /* WARNING: Subroutine does not return */
    uStack_164._0_4_ = &UNK_00981dfa;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_1c) {
    uStack_164._4_4_ = (char *)local_30[0];
                    /* WARNING: Subroutine does not return */
    uStack_164._0_4_ = &UNK_00981e21;
    FUN_00aae91b();
  }
  uStack_164._4_4_ = (char *)0xe;
  uStack_164._0_4_ = "literacy_value";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 0x21;
  uStack_164._4_4_ = (char *)0x1;
  uStack_164._0_4_ = &DAT_00df9644;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 0x22;
  local_38 = CONCAT44(&uStack_164,(undefined4)local_38);
  uStack_164 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x128),
                        *(undefined4 *)(*(int *)(param_1 + 0x28) + 300),0x320000,0);
  uStack_164 = uStack_164 >> 0xf;
  FUN_00988bb0(local_9c,2);
  uStack_164._4_4_ = (char *)local_54;
  local_8._0_1_ = 0x23;
  uStack_164._0_4_ = (char *)0x981eb6;
  uVar5 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x24);
  uStack_164._4_4_ = (char *)local_30;
  uStack_164._0_4_ = (char *)0x981eca;
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  uStack_164._0_4_ = (char *)0xffffffff;
  local_38 = CONCAT44(uVar9,(undefined4)local_38);
  FUN_00408ed0(uVar5,0);
  uStack_164._0_4_ = (char *)0x0;
  FUN_00a5ecc0(uVar5);
  if (0xf < local_68) {
    uStack_164._0_4_ = (char *)local_7c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
    uStack_164._0_4_ = (char *)local_9c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_40) {
    uStack_164._0_4_ = (char *)local_54[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_1c) {
    uStack_164._0_4_ = (char *)local_30[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_164._0_4_ = (char *)0xd;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("icon_religion");
  local_8 = 0x25;
  uStack_164._0_4_ = (char *)local_30;
  piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
  (**(code **)(*piVar10 + 0x48))(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x70) + 0x70));
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("religion",8);
  local_8 = 0x26;
  uVar5 = FUN_00567250(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x70));
  local_8 = CONCAT31(local_8._1_3_,0x27);
  uVar9 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_30);
  local_38 = CONCAT44(uVar9,(undefined4)local_38);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  local_38._0_4_ = *(undefined4 *)(iVar4 + 0x130);
  local_38._4_4_ = *(int **)(iVar4 + 0x134);
  local_60._0_4_ = *(undefined4 *)(iVar4 + 0x138);
  local_60._4_4_ = *(undefined4 *)(iVar4 + 0x13c);
  local_a8 = *(undefined4 *)(iVar4 + 0x140);
  local_a4 = *(undefined4 *)(iVar4 + 0x144);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("lifeneed_progress",0x11);
  local_8 = 0x28;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_30);
  piVar10 = *(int **)(iVar4 + 0x94);
  uVar17 = __allmul((undefined4)local_38,local_38._4_4_,0x320000,0);
  (**(code **)(*piVar10 + 0x60))
            (((uint)uVar17 >> 0xf | (int)((ulonglong)uVar17 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("eveneed_progress",0x10);
  local_8 = 0x29;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_30);
  piVar10 = *(int **)(iVar4 + 0x94);
  uVar17 = __allmul((undefined4)local_60,local_60._4_4_,0x320000,0);
  (**(code **)(*piVar10 + 0x60))
            (((uint)uVar17 >> 0xf | (int)((ulonglong)uVar17 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("luxneed_progress",0x10);
  local_8 = 0x2a;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_30);
  piVar10 = *(int **)(iVar4 + 0x94);
  uVar17 = __allmul(local_a8,local_a4,0x320000,0);
  (**(code **)(*piVar10 + 0x60))
            (((uint)uVar17 >> 0xf | (int)((ulonglong)uVar17 >> 0x20) << 0x11) >> 0xf & 0xffff);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_008a8800(*(undefined4 *)(param_1 + 0x28));
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350("internal_migration_val",0x16);
  local_8 = 0x2b;
  FUN_00963e50();
  uVar5 = FUN_009888f0(local_7c);
  local_8 = CONCAT31(local_8._1_3_,0x2c);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_30);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_009885d0();
  local_8 = 0x2d;
  FUN_00963fa0(*(undefined4 *)(param_1 + 0x28));
  uVar5 = FUN_009888f0(local_7c);
  local_8 = CONCAT31(local_8._1_3_,0x2e);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_9c);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  FUN_009885d0();
  local_8 = 0x2f;
  FUN_00964150(*(undefined4 *)(param_1 + 0x28),local_110);
  uVar5 = FUN_009888f0(local_7c);
  local_8 = CONCAT31(local_8._1_3_,0x30);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_9c);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_8 = 0xffffffff;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char **)((uint)local_7c[0] & 0xffffff00);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  piVar10 = (int *)FUN_0095b0d0(*(undefined4 *)(param_1 + 0x28),local_110);
  cVar3 = (**(code **)(*piVar10 + 0x18))();
  bVar15 = cVar3 == '\0';
  if (bVar15) {
    uVar5 = FUN_009885d0();
    local_8 = 0x32;
  }
  else {
    FUN_0095a780(*(undefined4 *)(param_1 + 0x28));
    uVar5 = FUN_009888f0(local_9c);
    local_8 = 0x31;
  }
  FUN_009885d0();
  local_8 = 0x33;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_30);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (bVar15) {
    FUN_00408ad0();
  }
  local_8 = 0xffffffff;
  if (!bVar15) {
    FUN_00408ad0();
  }
  piVar10 = (int *)FUN_0095b740(*(undefined4 *)(param_1 + 0x28),local_110);
  cVar3 = (**(code **)(*piVar10 + 0x18))();
  bVar15 = cVar3 == '\0';
  if (bVar15) {
    uVar5 = FUN_009885d0();
    local_8 = 0x35;
  }
  else {
    FUN_0095aa30(*(undefined4 *)(param_1 + 0x28));
    uVar5 = FUN_009888f0(local_9c);
    local_8 = 0x34;
  }
  FUN_009885d0();
  local_8 = 0x36;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_30);
  FUN_00408ed0(uVar5,0,0xffffffff);
  FUN_00a5ecc0(uVar5,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  iVar4 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (bVar15) {
    FUN_00408ad0();
  }
  local_8 = 0xffffffff;
  if (!bVar15) {
    FUN_00408ad0();
  }
  iVar11 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar11 + 0x1d4) == 0) || (*(int *)(*(int *)(iVar11 + 0x1d4) + 0xb0) == 0)) {
    iVar11 = *(int *)(*(int *)(iVar11 + 100) + 0x58);
    piVar10 = (int *)FUN_004c25b0();
    iVar11 = *(int *)(iVar11 * 0xb0 + 8 + *piVar10);
    iVar2 = *(int *)(iVar11 + 0x108);
    iVar11 = *(int *)(iVar11 + 0x10c) - iVar2 >> 5;
    iVar14 = 0;
    if (0 < iVar11) {
      piVar10 = (int *)(iVar2 + 8);
      do {
        if (*piVar10 == *(int *)(*(int *)(param_1 + 0x28) + 0x68)) {
          iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 100) + 0x58);
          piVar10 = (int *)FUN_004c25b0();
          iVar4 = *(int *)(*(int *)(iVar4 * 0xb0 + 8 + *piVar10) + 0x80);
          goto LAB_009826ce;
        }
        iVar14 = iVar14 + 1;
        piVar10 = piVar10 + 8;
      } while (iVar14 < iVar11);
      iVar4 = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(iVar11 + 0x1d4) + 0xb0) + 0x80);
  }
LAB_009826ce:
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  FUN_00409350("pop_types_list",0xe);
  local_8 = 0x37;
  iVar11 = (**(code **)(**(int **)(param_1 + 0x20) + 0x9c))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = (char **)((uint)local_54[0] & 0xffffff00);
  puVar12 = (undefined4 *)(**(code **)(*(int *)(iVar11 + 0x74) + 0x2c))();
  puVar12 = (undefined4 *)*puVar12;
  while (puVar12 != (undefined4 *)0x0) {
    piVar10 = (int *)*puVar12;
    puVar12 = (undefined4 *)puVar12[2];
    (**(code **)(*piVar10 + 0x20))();
  }
  FUN_004471e0("pop_producing_icon");
  if (iVar4 == 0) {
    local_8 = 0x39;
    piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_7c);
    (**(code **)(*piVar10 + 0x48))(1);
  }
  else {
    local_8 = 0x38;
    piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_7c);
    (**(code **)(*piVar10 + 0x48))(*(int *)(iVar4 + 8) + 2);
  }
  if (0xf < local_68) {
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_8 = 0xffffffff;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  FUN_00409350("pop_unemployment_bar",0x14);
  local_8 = 0x3a;
  piVar10 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_c4);
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar4 + 0x58) == 0) {
    local_38 = 0;
  }
  else if (*(char *)(*(int *)(iVar4 + 0x68) + 0x40) == '\0') {
    local_38 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar4 + 0x58);
    uVar13 = uVar1 - *(int *)(iVar4 + 0x60);
    local_38 = __alldiv(uVar13 * 0x40000000,((int)uVar13 >> 0x1f) << 0x1e | uVar13 >> 2,uVar1 << 0xf
                        ,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  }
  iVar4 = *piVar10;
  uVar17 = __allmul(local_38,0x320000,0);
  (**(code **)(iVar4 + 0x48))((uint)uVar17 >> 0x1e | (int)((ulonglong)uVar17 >> 0x20) << 2);
  if (local_b0 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_c4[0]);
}

