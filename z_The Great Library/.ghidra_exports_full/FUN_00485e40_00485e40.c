// FUN_00485e40 @ 00485e40 body=[[00485e40, 004868a8] [004868b0, 004869e7] [004869f0, 00486bcc] [00486bd0, 004872b1] [004872b5, 004873cd] [004873d1, 004873f1] [004873f5, 0048740d]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00485e40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  bool bVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uStack_1e8;
  undefined1 auStack_1e4 [4];
  int iStack_1e0;
  undefined1 auStack_1dc [56];
  uint auStack_1a4 [4];
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined1 local_174 [8];
  undefined1 local_16c [8];
  undefined1 local_164 [8];
  undefined1 local_15c [8];
  undefined1 local_154 [8];
  undefined **local_14c;
  undefined4 local_148;
  undefined1 local_144 [64];
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int *local_f4;
  undefined8 local_ec;
  longlong local_e4;
  longlong local_dc;
  undefined8 local_d4;
  longlong local_cc;
  longlong local_c4;
  undefined8 local_bc;
  longlong local_b4;
  longlong local_ac;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  uint local_8c;
  int *local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  bool local_51;
  int *local_50;
  bool local_4a;
  bool local_49;
  int local_48;
  undefined8 local_44;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined8 local_2c;
  char local_22;
  char local_21;
  uint local_20;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = param_2;
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60534;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    uStack_18c._4_4_ = 0x188;
    uStack_18c._0_4_ = 0x485e7a;
    ExceptionList = &local_10;
    local_44._4_4_ = (undefined1 *)FUN_00aae9af();
    local_8 = 0;
    if (local_44._4_4_ == (undefined1 *)0x0) {
      uStack_18c._4_4_ = 0;
    }
    else {
      uStack_18c._4_4_ = 0x485e92;
      uStack_18c._4_4_ = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    uStack_18c._0_4_ = 0x485e9f;
    FUN_00423700();
  }
  local_64 = *(int *)(param_2 + 0x20);
  local_48 = DAT_0131bb34;
  local_3c = *(int *)(param_1 + 0x808) - *(int *)(param_1 + 0x804) >> 2;
  local_38 = -1;
  local_34 = 0;
  if (0 < local_3c) {
    local_20 = local_64 * local_3c;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x804) + local_34 * 4);
      puVar12 = (uint *)(*(int *)(param_1 + 0x7e4) + (local_20 + iVar6) * 0x78);
      if (*(int *)(local_48 + 0x10) - *(int *)(local_48 + 0xc) >> 2 < iVar6) {
        uStack_18c._4_4_ = 0x485f16;
        iVar6 = FUN_0096bb70();
      }
      else {
        iVar6 = *(int *)(*(int *)(local_48 + 0xc) + iVar6 * 4);
      }
      if ((DAT_0125ba14 <= (int)puVar12[1]) &&
         ((DAT_0125ba14 < (int)puVar12[1] || (DAT_0125ba10 < *puVar12)))) {
        uStack_18c._4_4_ = param_3;
        uStack_18c._0_4_ = 0;
        uStack_194._4_4_ = iVar6 + 0x110;
        auStack_1a4[3] = param_2;
        auStack_1a4[2] = param_1;
        auStack_1a4[1] = 0x485f4e;
        uStack_194._0_4_ = (int *)iVar6;
        FUN_00484f90();
      }
      if ((DAT_0125ba14 <= (int)puVar12[3]) &&
         ((DAT_0125ba14 < (int)puVar12[3] || (DAT_0125ba10 < puVar12[2])))) {
        uStack_18c._4_4_ = param_3;
        uStack_18c._0_4_ = 1;
        uStack_194._4_4_ = iVar6 + 0x168;
        auStack_1a4[3] = param_2;
        auStack_1a4[2] = param_1;
        auStack_1a4[1] = 0x485f7e;
        uStack_194._0_4_ = (int *)iVar6;
        FUN_00484f90();
      }
      if ((DAT_0125ba14 <= (int)puVar12[5]) &&
         ((DAT_0125ba14 < (int)puVar12[5] || (DAT_0125ba10 < puVar12[4])))) {
        uStack_18c._4_4_ = param_3;
        uStack_18c._0_4_ = 2;
        uStack_194._4_4_ = iVar6 + 0x1c0;
        auStack_1a4[3] = param_2;
        auStack_1a4[2] = param_1;
        auStack_1a4[1] = 0x485fad;
        uStack_194._0_4_ = (int *)iVar6;
        FUN_00484f90();
      }
      if (*(char *)(iVar6 + 0x3da) != '\0') {
        local_38 = local_34;
      }
      local_34 = local_34 + 1;
    } while (local_34 < local_3c);
  }
  iVar6 = *(int *)(DAT_012586dc + 0x50);
  iVar1 = *(int *)(param_2 + 0xa60);
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486000;
  uVar20 = __alldiv();
  uVar14 = *(uint *)(iVar6 + 0x48);
  uVar17 = *(uint *)(iVar1 + 0x130);
  local_58 = (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar6 + 0x4c) +
             (uint)CARRY4((uint)uVar20,*(uint *)(iVar6 + 0x48));
  uStack_18c._4_4_ = 0;
  uStack_194._4_4_ =
       (((int)uVar17 >> 0x1f) << 0xf | uVar17 >> 0x11) << 0xf | (uVar17 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar17 << 0x1e);
  auStack_1a4[3] = 0x48602e;
  uStack_194 = __alldiv();
  uStack_18c._4_4_ = local_58;
  uStack_194 = uStack_194 + 0x8000;
  auStack_1a4[3] = 0x486042;
  uStack_18c._0_4_ = (uint)uVar20 + uVar14;
  local_ec = __allmul();
  local_ec = local_ec >> 0xf;
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486078;
  uVar20 = __alldiv();
  uVar14 = *(uint *)(iVar6 + 0x48);
  uVar17 = *(uint *)(iVar1 + 0x138);
  local_58 = (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar6 + 0x4c) +
             (uint)CARRY4((uint)uVar20,*(uint *)(iVar6 + 0x48));
  uStack_18c._4_4_ = 0;
  uStack_194._4_4_ =
       (((int)uVar17 >> 0x1f) << 0xf | uVar17 >> 0x11) << 0xf | (uVar17 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar17 << 0x1e);
  auStack_1a4[3] = 0x4860a6;
  uStack_194 = __alldiv();
  uStack_18c._4_4_ = local_58;
  uStack_194 = uStack_194 + 0x8000;
  auStack_1a4[3] = 0x4860ba;
  uStack_18c._0_4_ = (uint)uVar20 + uVar14;
  local_e4 = __allmul();
  local_e4 = local_e4 >> 0xf;
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x4860f0;
  uVar20 = __alldiv();
  uVar14 = *(uint *)(iVar6 + 0x48);
  uVar17 = *(uint *)(iVar1 + 0x140);
  local_58 = (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar6 + 0x4c) +
             (uint)CARRY4((uint)uVar20,*(uint *)(iVar6 + 0x48));
  uStack_18c._4_4_ = 0;
  uStack_194._4_4_ =
       (((int)uVar17 >> 0x1f) << 0xf | uVar17 >> 0x11) << 0xf | (uVar17 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar17 << 0x1e);
  auStack_1a4[3] = 0x48611e;
  uStack_194 = __alldiv();
  uStack_18c._4_4_ = local_58;
  uStack_194 = uStack_194 + 0x8000;
  auStack_1a4[3] = 0x486132;
  uStack_18c._0_4_ = (uint)uVar20 + uVar14;
  local_dc = __allmul();
  local_dc = local_dc >> 0xf;
  iVar9 = *(int *)(DAT_012586dc + 0x50);
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486171;
  uVar20 = __alldiv();
  local_1c._0_4_ = (uint)uVar20 + *(uint *)(iVar9 + 0x48);
  uStack_18c._4_4_ = 0;
  local_1c._4_4_ =
       (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar9 + 0x4c) +
       (uint)CARRY4((uint)uVar20,*(uint *)(iVar9 + 0x48));
  uVar14 = *(uint *)(iVar1 + 0x148);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x4861a0;
  local_2c = __alldiv();
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  local_2c = local_2c + 0x8000;
  local_20 = *(uint *)(param_2 + 0x500);
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  auStack_1a4[3] = 0x4861dd;
  local_30 = (int *)uStack_194;
  lVar21 = __allmul();
  local_44 = (lVar21 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  uStack_18c._4_4_ = local_1c._4_4_;
  uStack_18c._0_4_ = (uint)local_1c;
  auStack_1a4[3] = 0x48620d;
  uStack_194 = local_2c;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  auStack_1a4[3] = 0x486223;
  uStack_18c = local_44;
  local_d4 = __allmul();
  local_d4 = local_d4 >> 0xf;
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486259;
  uVar20 = __alldiv();
  local_1c._0_4_ = (uint)uVar20 + *(uint *)(iVar9 + 0x48);
  uStack_18c._4_4_ = 0;
  local_1c._4_4_ =
       (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar9 + 0x4c) +
       (uint)CARRY4((uint)uVar20,*(uint *)(iVar9 + 0x48));
  uVar14 = *(uint *)(iVar1 + 0x150);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486288;
  lVar21 = __alldiv();
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  local_2c = lVar21 + 0x8000;
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  auStack_1a4[3] = 0x4862bc;
  local_30 = (int *)uStack_194;
  lVar21 = __allmul();
  local_44 = (lVar21 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  uStack_18c._4_4_ = local_1c._4_4_;
  uStack_18c._0_4_ = (uint)local_1c;
  auStack_1a4[3] = 0x4862ec;
  uStack_194 = local_2c;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  auStack_1a4[3] = 0x486302;
  uStack_18c = local_44;
  local_cc = __allmul();
  local_cc = local_cc >> 0xf;
  local_1c._4_4_ = *(undefined4 *)(iVar9 + 0x4c);
  local_1c._0_4_ = *(undefined4 *)(iVar9 + 0x48);
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486344;
  lVar21 = __alldiv();
  lVar21 = lVar21 + CONCAT44(local_1c._4_4_,(uint)local_1c);
  uVar14 = *(uint *)(iVar1 + 0x158);
  local_58 = (int)((ulonglong)lVar21 >> 0x20);
  uStack_18c._4_4_ = 0;
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486372;
  local_1c = __alldiv();
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  local_1c = local_1c + 0x8000;
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  auStack_1a4[3] = 0x4863a6;
  local_30 = (int *)uStack_194;
  lVar22 = __allmul();
  local_2c = (lVar22 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  uStack_18c._4_4_ = local_58;
  auStack_1a4[3] = 0x4863d3;
  uStack_18c._0_4_ = (int)lVar21;
  uStack_194 = local_1c;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  auStack_1a4[3] = 0x4863e9;
  uStack_18c = local_2c;
  local_c4 = __allmul();
  local_c4 = local_c4 >> 0xf;
  puVar7 = &DAT_00f0ae08;
  if ((char)param_4 == '\0') {
    puVar7 = &DAT_00f0ae10;
  }
  local_2c._0_4_ = *puVar7;
  local_2c._4_4_ = puVar7[1];
  iVar9 = *(int *)(DAT_012586dc + 0x50);
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486443;
  uVar20 = __alldiv();
  local_1c._0_4_ = (uint)uVar20 + *(uint *)(iVar9 + 0x48);
  uStack_18c._4_4_ = 0;
  local_1c._4_4_ =
       (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar9 + 0x4c) +
       (uint)CARRY4((uint)uVar20,*(uint *)(iVar9 + 0x48));
  uVar14 = *(uint *)(iVar1 + 0x160);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486472;
  uStack_194 = __alldiv();
  uStack_18c._4_4_ = local_1c._4_4_;
  uStack_194 = uStack_194 + 0x8000;
  uStack_18c._0_4_ = (uint)local_1c;
  auStack_1a4[3] = 0x486489;
  local_1c = __allmul();
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  local_1c = local_1c >> 0xf;
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  auStack_1a4[3] = 0x4864bc;
  local_30 = (int *)uStack_194;
  lVar21 = __allmul();
  uStack_194 = (lVar21 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  auStack_1a4[3] = 0x4864e0;
  uStack_18c = local_1c;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  uStack_18c._4_4_ = local_2c._4_4_;
  uStack_18c._0_4_ = (uint)local_2c;
  auStack_1a4[3] = 0x4864f6;
  local_bc = __allmul();
  local_bc = local_bc >> 0xf;
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x48652c;
  uVar20 = __alldiv();
  local_1c._0_4_ = (uint)uVar20 + *(uint *)(iVar9 + 0x48);
  uStack_18c._4_4_ = 0;
  local_1c._4_4_ =
       (int)((ulonglong)uVar20 >> 0x20) + *(int *)(iVar9 + 0x4c) +
       (uint)CARRY4((uint)uVar20,*(uint *)(iVar9 + 0x48));
  uVar14 = *(uint *)(iVar1 + 0x168);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x48655b;
  uStack_18c = __alldiv();
  uStack_18c = uStack_18c + 0x8000;
  uStack_194._4_4_ = local_1c._4_4_;
  uStack_194._0_4_ = (int *)(uint)local_1c;
  auStack_1a4[3] = 0x486572;
  local_1c = __allmul();
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  local_1c = local_1c >> 0xf;
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  auStack_1a4[3] = 0x4865a5;
  local_30 = (int *)uStack_194;
  lVar21 = __allmul();
  uStack_194 = (lVar21 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  auStack_1a4[3] = 0x4865c9;
  uStack_18c = local_1c;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  uStack_18c._4_4_ = local_2c._4_4_;
  uStack_18c._0_4_ = (uint)local_2c;
  auStack_1a4[3] = 0x4865df;
  local_b4 = __allmul();
  local_b4 = local_b4 >> 0xf;
  local_1c._0_4_ = *(uint *)(iVar9 + 0x48);
  local_1c._4_4_ = *(undefined4 *)(iVar9 + 0x4c);
  uVar14 = *(uint *)(iVar1 + 0x230);
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._4_4_ = 0;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x486621;
  lVar21 = __alldiv();
  lVar21 = lVar21 + CONCAT44(local_1c._4_4_,(uint)local_1c);
  uVar14 = *(uint *)(iVar1 + 0x170);
  local_58 = (int)((ulonglong)lVar21 >> 0x20);
  uStack_18c._4_4_ = 0;
  uStack_194._4_4_ =
       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf | (uVar14 & 0x1ffff) >> 2;
  uStack_18c._0_4_ = 0x1f40000;
  uStack_194._0_4_ = (int *)(uVar14 << 0x1e);
  auStack_1a4[3] = 0x48664f;
  uStack_194 = __alldiv();
  uStack_18c._4_4_ = local_58;
  uStack_194 = uStack_194 + 0x8000;
  auStack_1a4[3] = 0x486663;
  uStack_18c._0_4_ = (int)lVar21;
  lVar21 = __allmul();
  uStack_18c._0_4_ = *(undefined4 *)(iVar6 + 0x170);
  uStack_18c._4_4_ = *(undefined4 *)(iVar6 + 0x174);
  uStack_194._4_4_ = ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11;
  uStack_194._0_4_ = (int *)(local_20 << 0xf);
  auStack_1a4[3] = 0x48668e;
  lVar22 = __allmul();
  uStack_194 = (lVar22 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  auStack_1a4[3] = 0x4866ac;
  uStack_18c = lVar21 >> 0xf;
  lVar21 = __allmul();
  uStack_194 = lVar21 >> 0xf;
  uStack_18c._4_4_ = local_2c._4_4_;
  uStack_18c._0_4_ = (uint)local_2c;
  auStack_1a4[3] = 0x4866c2;
  local_ac = __allmul();
  local_ac = local_ac >> 0xf;
  iVar6 = *(int *)(param_2 + 0xe4c);
  local_6c = DAT_012588e8;
  uStack_18c._4_4_ = 0x4866f3;
  iVar1 = iVar6 * -0x14;
  local_68 = (int *)(local_164 + iVar1 + -0x20);
  piVar18 = *(int **)(param_2 + 0xe44);
  local_34 = 0;
  if (piVar18 != (int *)0x0) {
    piVar13 = (int *)(local_164 + iVar1 + -0x1c);
    local_68 = (int *)(local_164 + iVar1 + -0x20);
    local_50 = piVar13;
    do {
      iVar9 = *piVar18;
      piVar18 = (int *)piVar18[2];
      *(undefined4 *)(iVar9 + 0x230) = 0;
      local_60 = iVar9;
      if ((*(int *)(iVar9 + 0x244) != 4) && (*(char *)(iVar9 + 0x248) != '\0')) {
        local_30 = *(int **)(iVar9 + 0x48);
        local_20 = 0;
        piVar15 = local_30;
        while ((local_30 <= piVar15 && (piVar15 < *(int **)(iVar9 + 0x4c)))) {
          iVar10 = *piVar15;
          piVar15 = piVar15 + 1;
          iVar8 = *(int *)(*(int *)(local_6c + 0xacc) + iVar10 * 4);
          iVar16 = *(int *)(iVar8 + 0x14c);
          iVar8 = *(int *)(iVar8 + 0x148);
          if (iVar8 != iVar16) {
            do {
              if (*(int *)(iVar8 + 4) == *(int *)(param_2 + 0x20)) break;
              iVar8 = iVar8 + 8;
            } while (iVar8 != iVar16);
          }
          local_20 = local_20 + ((iVar10 != *(int *)(param_2 + 0xbe4)) - 1 & 1000) +
                     (-(uint)(iVar8 != iVar16) & 200);
          piVar13 = local_50;
        }
        iVar10 = *(int *)(iVar9 + 0x84);
        iVar8 = *(int *)(iVar9 + 0x68) * 0x19 + local_20;
        if (local_38 != -1) {
          local_50[1] = *(int *)(*(int *)(iVar9 + 0x118) + local_38 * 4);
          piVar13 = local_50;
        }
        *piVar13 = ((0 < iVar10) - 1 & 0x32) + iVar8;
        piVar13[-1] = iVar9;
        piVar13[2] = *(int *)(iVar9 + 200);
        if ((*(int *)(iVar9 + 0x4c) - *(int *)(iVar9 + 0x48) & 0xfffffffcU) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = **(int **)(iVar9 + 0x48);
        }
        local_34 = local_34 + 1;
        piVar13[3] = iVar9;
        piVar13 = piVar13 + 5;
        local_50 = piVar13;
      }
    } while (piVar18 != (int *)0x0);
  }
  piVar18 = *(int **)(param_2 + 0x9d8);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_8 = 1;
  *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x48684d;
  FUN_0043a880();
  local_2c = 0;
  local_38 = 0;
  lVar21 = uStack_194;
  lVar22 = local_44;
  while ((piVar13 = local_68, *(int **)(param_2 + 0x9d8) <= piVar18 &&
         (piVar18 < *(int **)(param_2 + 0x9dc)))) {
    iVar9 = *piVar18;
    piVar18 = piVar18 + 1;
    local_80 = *(int *)(*(int *)(local_6c + 0xacc) + iVar9 * 4);
    local_f4 = piVar18;
    local_30 = (int *)0x0;
    if (0 < local_3c) {
      local_20 = local_64 * local_3c;
      do {
        iVar9 = *(int *)(*(int *)(param_1 + 0x804) + (int)local_30 * 4);
        if (*(int *)(local_48 + 0x10) - *(int *)(local_48 + 0xc) >> 2 < iVar9) {
          local_44 = lVar22;
          *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x4868d1;
          uStack_194 = lVar21;
          iVar10 = FUN_0096bb70();
          lVar21 = uStack_194;
          lVar22 = local_44;
        }
        else {
          iVar10 = *(int *)(*(int *)(local_48 + 0xc) + iVar9 * 4);
        }
        local_44._0_4_ = (undefined4)lVar22;
        iVar16 = 1;
        iVar8 = *(int *)(iVar10 + 0x15c) - *(int *)(iVar10 + 0x158) >> 3;
        if (1 < iVar8) {
          piVar18 = *(int **)(iVar10 + 0x158);
          do {
            if (piVar18[2] != 0 || piVar18[3] != 0) {
              bVar19 = false;
              goto LAB_00486915;
            }
            iVar16 = iVar16 + 1;
            piVar18 = piVar18 + 2;
          } while (iVar16 < iVar8);
        }
        bVar19 = true;
LAB_00486915:
        local_49 = !bVar19;
        iVar16 = 1;
        iVar8 = *(int *)(iVar10 + 0x1b4) - *(int *)(iVar10 + 0x1b0) >> 3;
        if (1 < iVar8) {
          piVar18 = *(int **)(iVar10 + 0x1b0);
          do {
            if (piVar18[2] != 0 || piVar18[3] != 0) {
              bVar19 = false;
              goto LAB_00486955;
            }
            iVar16 = iVar16 + 1;
            piVar18 = piVar18 + 2;
          } while (iVar16 < iVar8);
        }
        bVar19 = true;
LAB_00486955:
        local_4a = !bVar19;
        iVar16 = 1;
        iVar8 = *(int *)(iVar10 + 0x20c) - *(int *)(iVar10 + 0x208) >> 3;
        if (1 < iVar8) {
          piVar18 = *(int **)(iVar10 + 0x208);
          do {
            if (piVar18[2] != 0 || piVar18[3] != 0) {
              bVar19 = false;
              goto LAB_00486995;
            }
            iVar16 = iVar16 + 1;
            piVar18 = piVar18 + 2;
          } while (iVar16 < iVar8);
        }
        bVar19 = true;
LAB_00486995:
        local_51 = !bVar19;
        if ((*(char *)(iVar10 + 0x3da) == '\0') || (local_22 = '\x01', local_34 < 1)) {
          local_22 = '\0';
        }
        local_50 = *(int **)(*(int *)(local_80 + 0x194) + iVar9 * 0x10);
        local_60 = *(int *)(param_1 + 0x7e4) + (local_20 + iVar9) * 0x78;
        piVar18 = local_f4;
        while (iVar9 = (int)local_50, local_f4 = piVar18, iVar9 != 0) {
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          local_21 = '\0';
          local_50 = (int *)*(int *)(iVar9 + 0x27c);
          local_44._4_4_ = *(undefined1 **)(*(int *)(iVar9 + 0x68) + 0x3c);
          if ((*(char *)(*(int *)(iVar9 + 0x68) + 0x39c) != '\0') &&
             (*(int *)(*(int *)(iVar9 + 0x1d4) + 0xb0) != 0)) {
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x40;
            *(undefined4 *)((int)&uStack_18c + iVar1) = 0;
            *(undefined **)((int)&uStack_194 + iVar1 + 4) = &DAT_013f24b0;
            *(undefined4 *)((int)&uStack_194 + iVar1) = 0x486a37;
            _memset(*(void **)((int)&uStack_194 + iVar1 + 4),*(int *)((int)&uStack_18c + iVar1),
                    *(size_t *)((int)&uStack_18c + iVar1 + 4));
            if (DAT_013f24f0 != DAT_013f24f4) {
              DAT_013f24f4 = DAT_013f24f0;
            }
            if ((DAT_013f24f4 < (undefined4 *)((int)&DAT_0125e448 + 1)) ||
               (&DAT_0125e448 < DAT_013f24f0)) {
              if (DAT_013f24f4 == DAT_013f24f8) {
                uVar14 = (int)DAT_013f24f4 - (int)DAT_013f24f0 >> 3;
                if (0x1ffffffe < uVar14) goto LAB_00487027;
                uVar14 = uVar14 + 1;
                uVar17 = (int)DAT_013f24f8 - (int)DAT_013f24f0 >> 3;
                if (uVar17 < uVar14) {
                  if (0x1fffffff - (uVar17 >> 1) < uVar17) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = uVar17 + (uVar17 >> 1);
                  }
                  if (uVar17 < uVar14) {
                    uVar17 = uVar14;
                  }
                  *(uint *)((int)&uStack_18c + iVar1 + 4) = uVar17;
                  *(undefined4 *)((int)&uStack_18c + iVar1) = 0x486b3d;
                  FUN_004237e0();
                }
              }
              if (DAT_013f24f4 != (undefined4 *)0x0) {
                *DAT_013f24f4 = DAT_0125e448;
                uVar11 = DAT_0125e44c;
                goto LAB_00486b54;
              }
            }
            else {
              iVar10 = (int)&DAT_0125e448 - (int)DAT_013f24f0 >> 3;
              if (DAT_013f24f4 == DAT_013f24f8) {
                uVar14 = (int)DAT_013f24f4 - (int)DAT_013f24f0 >> 3;
                if (0x1ffffffe < uVar14) {
LAB_00487027:
                  *(char **)((int)&uStack_18c + iVar1 + 4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
                  *(undefined4 *)((int)&uStack_18c + iVar1) = 0x487031;
                  FUN_00aad3ad();
                }
                uVar14 = uVar14 + 1;
                uVar17 = (int)DAT_013f24f8 - (int)DAT_013f24f0 >> 3;
                if (uVar17 < uVar14) {
                  if (0x1fffffff - (uVar17 >> 1) < uVar17) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = uVar17 + (uVar17 >> 1);
                  }
                  if (uVar17 < uVar14) {
                    uVar17 = uVar14;
                  }
                  *(uint *)((int)&uStack_18c + iVar1 + 4) = uVar17;
                  *(undefined4 *)((int)&uStack_18c + iVar1) = 0x486ad5;
                  FUN_004237e0();
                }
              }
              puVar7 = DAT_013f24f0;
              if (DAT_013f24f4 != (undefined4 *)0x0) {
                *DAT_013f24f4 = DAT_013f24f0[iVar10 * 2];
                uVar11 = puVar7[iVar10 * 2 + 1];
LAB_00486b54:
                DAT_013f24f4[1] = uVar11;
              }
            }
            DAT_013f24f4 = DAT_013f24f4 + 2;
            uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x1d4) + 0xb0);
            *(int *)((int)&uStack_18c + iVar1 + 4) = *(int *)(iVar9 + 0x1d4);
            *(undefined4 *)((int)&uStack_18c + iVar1) = uVar11;
            *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x486b86;
            FUN_004dd3c0();
            iVar10 = *(int *)(iVar9 + 0x1d4);
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = DAT_012587f4;
            *(undefined **)((int)&uStack_18c + iVar1) = &DAT_013f2560;
            *(int *)((int)&uStack_194 + iVar1 + 4) = iVar10 + 0x60;
            *(undefined4 *)((int)&uStack_194 + iVar1) = 0x486ba0;
            FID_conflict__memcpy
                      (*(void **)((int)&uStack_194 + iVar1 + 4),*(void **)((int)&uStack_18c + iVar1)
                       ,*(size_t *)((int)&uStack_18c + iVar1 + 4));
            piVar18 = (int *)(iVar10 + 0xa0);
            iVar8 = DAT_013f25a4 - DAT_013f25a0 >> 3;
            local_84 = piVar18;
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x486bc2;
            FUN_0043a880();
            iVar10 = 1;
            if (1 < iVar8) {
              do {
                iVar3 = DAT_013f25a0;
                iVar16 = *piVar18;
                *(undefined4 *)(iVar16 + iVar10 * 8) = *(undefined4 *)(DAT_013f25a0 + iVar10 * 8);
                *(undefined4 *)(iVar16 + 4 + iVar10 * 8) = *(undefined4 *)(iVar3 + 4 + iVar10 * 8);
                iVar10 = iVar10 + 1;
                piVar18 = local_84;
              } while (iVar10 < iVar8);
            }
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = param_3;
            *(int *)((int)&uStack_18c + iVar1) = param_4;
            *(int *)((int)&uStack_194 + iVar1 + 4) = iVar9;
            *(int *)((int)&uStack_194 + iVar1) = param_2;
            auStack_1a4[iVar6 * -5 + 3] = param_1;
            auStack_1a4[iVar6 * -5 + 2] = 0x486c04;
            FUN_00483aa0();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
          }
          puVar5 = local_44._4_4_;
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          *(undefined4 *)(iVar9 + 0x260) = 0x50000;
          *(undefined4 *)(iVar9 + 0x264) = 0;
          if ((((char)param_4 != '\0') && (local_22 != '\0')) &&
             (*(int *)(*(int *)(*(int *)(iVar9 + 100) + 0x188) + 0x68) < 1)) {
            *(undefined4 *)((int)&uStack_18c + iVar1) = DAT_0125ba08;
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = DAT_0125ba0c;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(char **)((int)&uStack_194 + iVar1 + 4) = &local_21;
            *(undefined1 **)((int)&uStack_194 + iVar1) = local_15c;
            auStack_1a4[iVar6 * -5 + 3] = 0x486c61;
            puVar12 = (uint *)FUN_00485d50();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
            local_2c = CONCAT44(local_2c._4_4_ + puVar12[1] + (uint)CARRY4((uint)local_2c,*puVar12),
                                (uint)local_2c + *puVar12);
          }
          iVar10 = local_60;
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          if (local_49 == false) {
            local_a4 = DAT_00f0ae10;
            local_a0 = DAT_00f0ae14;
            piVar18 = &local_a4;
          }
          else {
            uVar11 = *(undefined4 *)((int)&local_ec + (int)puVar5 * 8 + 4);
            *(undefined4 *)((int)&uStack_18c + iVar1) = *(undefined4 *)(&local_ec + (int)puVar5);
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = uVar11;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(int **)((int)&uStack_194 + iVar1 + 4) = &local_7c;
            *(int *)((int)&uStack_194 + iVar1) = param_4;
            auStack_1a4[iVar6 * -5 + 3] = 0;
            auStack_1a4[iVar6 * -5 + 2] = iVar10;
            auStack_1a4[iVar6 * -5 + 1] = (uint)local_174;
            auStack_1a4[iVar6 * -5] = 0x486cac;
            piVar18 = (int *)FUN_00485390();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
          }
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          iVar8 = piVar18[1];
          *(int *)(iVar9 + 0x130) = *piVar18;
          *(int *)(iVar9 + 0x134) = iVar8;
          if (local_4a == false) {
            local_90 = DAT_00f0ae14;
            local_94 = DAT_00f0ae10;
            piVar18 = &local_94;
          }
          else {
            uVar11 = *(undefined4 *)((int)&local_d4 + (int)puVar5 * 8 + 4);
            *(undefined4 *)((int)&uStack_18c + iVar1) = *(undefined4 *)(&local_d4 + (int)puVar5);
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = uVar11;
            *(int **)((int)&uStack_194 + iVar1 + 4) = &local_7c;
            *(int *)((int)&uStack_194 + iVar1) = param_4;
            auStack_1a4[iVar6 * -5 + 3] = 1;
            auStack_1a4[iVar6 * -5 + 2] = iVar10;
            auStack_1a4[iVar6 * -5 + 1] = (uint)local_16c;
            auStack_1a4[iVar6 * -5] = 0x486d19;
            piVar18 = (int *)FUN_00485390();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
          }
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          iVar8 = piVar18[1];
          *(int *)(iVar9 + 0x138) = *piVar18;
          *(int *)(iVar9 + 0x13c) = iVar8;
          if ((((char)param_4 != '\0') && (local_22 != '\0')) &&
             (0 < *(int *)(*(int *)(*(int *)(iVar9 + 100) + 0x188) + 0x68))) {
            *(undefined4 *)((int)&uStack_18c + iVar1) = DAT_0125ba08;
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = DAT_0125ba0c;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(char **)((int)&uStack_194 + iVar1 + 4) = &local_21;
            *(undefined1 **)((int)&uStack_194 + iVar1) = local_154;
            auStack_1a4[iVar6 * -5 + 3] = 0x486d92;
            puVar12 = (uint *)FUN_00485d50();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
            local_2c = CONCAT44(local_2c._4_4_ + puVar12[1] + (uint)CARRY4((uint)local_2c,*puVar12),
                                (uint)local_2c + *puVar12);
          }
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          if (local_51 == false) {
            local_9c = DAT_00f0ae10;
            local_98 = DAT_00f0ae14;
            piVar18 = &local_9c;
          }
          else {
            uVar11 = *(undefined4 *)((int)&local_bc + (int)puVar5 * 8 + 4);
            *(undefined4 *)((int)&uStack_18c + iVar1) = *(undefined4 *)(&local_bc + (int)puVar5);
            *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = uVar11;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(int **)((int)&uStack_194 + iVar1 + 4) = &local_7c;
            *(int *)((int)&uStack_194 + iVar1) = param_4;
            auStack_1a4[iVar6 * -5 + 3] = 2;
            auStack_1a4[iVar6 * -5 + 2] = iVar10;
            auStack_1a4[iVar6 * -5 + 1] = (uint)local_164;
            auStack_1a4[iVar6 * -5] = 0x486dda;
            piVar18 = (int *)FUN_00485390();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
          }
          uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
          uStack_194._0_4_ = (int *)lVar21;
          iVar10 = *piVar18;
          *(int *)(iVar9 + 0x144) = piVar18[1];
          *(int *)(iVar9 + 0x140) = iVar10;
          uVar14 = *(uint *)(iVar9 + 0x260) >> 0x10;
          uVar17 = (*(uint *)(iVar9 + 0x260) & 0xffff) << 1 | uVar14 << 0x11;
          iVar10 = (int)(*(int *)(iVar9 + 0x264) << 0x10 | uVar14) >> 0xf;
          if ((char)param_4 == '\0') {
LAB_00486ed6:
            iVar8 = *(int *)(iVar9 + 0x184);
            local_8c = *(uint *)(iVar9 + 0x180);
            if ((10 < iVar8) && ((0xb < iVar8 || (0x71b00000 < *(uint *)(iVar9 + 0x180))))) {
LAB_00486efe:
              uVar11 = *(undefined4 *)(iVar9 + 0x180);
              *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = *(undefined4 *)(iVar9 + 0x184);
              *(undefined4 *)((int)&uStack_18c + iVar1) = uVar11;
              uVar11 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x110);
              *(undefined4 *)((int)&uStack_194 + iVar1 + 4) =
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x114);
              *(undefined4 *)((int)&uStack_194 + iVar1) = uVar11;
              auStack_1a4[iVar6 * -5 + 3] = 0x486f28;
              lVar21 = __allmul();
              lVar21 = lVar21 >> 0xf;
              if ((10 < *(int *)(iVar9 + 0x184)) &&
                 ((0xb < *(int *)(iVar9 + 0x184) || (0x71b00000 < *(uint *)(iVar9 + 0x180))))) {
                lVar21 = CONCAT44((iVar8 + -0xb) - (uint)(local_8c < 0x71b00000),
                                  local_8c + 0x8e500000);
              }
              iVar16 = (int)((ulonglong)lVar21 >> 0x20);
              local_1c._0_4_ = (uint)lVar21;
              *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = DAT_00f0ade4;
              *(undefined4 *)((int)&uStack_18c + iVar1) = DAT_00f0ade0;
              *(int *)((int)&uStack_194 + iVar1 + 4) = (int)((ulonglong)(lVar21 << 0xf) >> 0x20);
              *(int *)((int)&uStack_194 + iVar1) = (int)(lVar21 << 0xf);
              auStack_1a4[iVar6 * -5 + 3] = 0x486f7c;
              uVar20 = __alldiv();
              iVar8 = (int)((ulonglong)uVar20 >> 0x20);
              uVar17 = (uint)uVar20;
              iVar10 = *(int *)(*(int *)(iVar9 + 100) + 0x188);
              puVar12 = (uint *)(iVar10 + 600);
              uVar14 = *puVar12;
              *puVar12 = *puVar12 + uVar17;
              *(int *)(iVar10 + 0x25c) =
                   *(int *)(iVar10 + 0x25c) + iVar8 + (uint)CARRY4(uVar14,uVar17);
              local_44._0_4_ = *(undefined4 *)(iVar10 + 0x58);
              iVar10 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 0x5c) * 4) +
                               0xe88);
              puVar12 = (uint *)(iVar10 + 0x10);
              uVar14 = *puVar12;
              *puVar12 = *puVar12 + uVar17;
              piVar18 = (int *)(iVar10 + 0x14);
              *piVar18 = *piVar18 + iVar8 + (uint)CARRY4(uVar14,uVar17);
              bVar19 = (uint)local_1c != 0;
              iVar10 = -(uint)local_1c;
              *(undefined4 *)((int)&uStack_18c + iVar1) = 0;
              *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0;
              *(int *)((int)&uStack_18c + iVar1) = iVar10;
              *(uint *)((int)&uStack_18c + iVar1 + 4) = -(iVar16 + (uint)bVar19);
              local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
              *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x486fe4;
              FUN_0095a5f0();
              lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
              puVar12 = (uint *)(iVar9 + 0x250);
              uVar14 = *puVar12;
              *puVar12 = *puVar12 + (uint)local_1c;
              *(int *)(iVar9 + 0x254) =
                   *(int *)(iVar9 + 0x254) + iVar16 + (uint)CARRY4(uVar14,(uint)local_1c);
            }
          }
          else {
            iVar8 = *(int *)(iVar9 + 0x184);
            local_8c = *(uint *)(iVar9 + 0x180);
            if ((((iVar10 < iVar8) || ((iVar10 <= iVar8 && (uVar17 <= local_8c)))) ||
                (*(int *)(iVar9 + 0x254) < DAT_0125ba14)) ||
               ((*(int *)(iVar9 + 0x254) <= DAT_0125ba14 &&
                (*(uint *)(iVar9 + 0x250) <= DAT_0125ba10)))) {
              if ((*(int *)(iVar9 + 0x144) <= DAT_0125b9cc) &&
                 ((*(int *)(iVar9 + 0x144) < DAT_0125b9cc ||
                  (*(uint *)(iVar9 + 0x140) < DAT_0125b9c8)))) goto LAB_00486ed6;
              goto LAB_00486efe;
            }
            bVar19 = uVar17 < local_8c;
            *(uint *)((int)&uStack_18c + iVar1) = uVar17 - local_8c;
            *(uint *)((int)&uStack_18c + iVar1 + 4) = (iVar10 - iVar8) - (uint)bVar19;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(undefined4 **)((int)&uStack_194 + iVar1 + 4) = &local_5c;
            *(undefined4 *)((int)&uStack_194 + iVar1) = 0x486e94;
            FUN_004d1cd0();
            iVar10 = local_58;
            *(undefined4 *)((int)&uStack_18c + iVar1) = local_5c;
            *(int *)((int)&uStack_18c + iVar1 + 4) = iVar10;
            local_44._4_4_ = (undefined1 *)((int)&uStack_18c + iVar1);
            *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x486eb3;
            FUN_0095a5f0();
            lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
          }
          lVar22 = CONCAT44(local_44._4_4_,(undefined4)local_44);
          piVar18 = local_f4;
          if (local_21 != '\0') {
            local_38 = local_38 + *(int *)(iVar9 + 0x58);
          }
        }
        local_30 = (int *)((int)local_30 + 1);
        local_50 = (int *)0x0;
      } while ((int)local_30 < local_3c);
    }
  }
  local_44 = lVar22;
  if (local_34 != 0) {
    *(int **)((int)&uStack_18c + iVar1 + 4) = local_68 + 5;
    *(undefined4 *)((int)&uStack_18c + iVar1) = 0x48704f;
    uStack_194 = lVar21;
    FUN_0048c520();
    iVar9 = *piVar13;
    lVar21 = uStack_194;
    if (*(int *)(iVar9 + 0x228) == 0 && *(int *)(iVar9 + 0x22c) == 0) {
      iVar10 = 1;
      iVar8 = *(int *)(iVar9 + 0x21c) - *(int *)(iVar9 + 0x218) >> 3;
      if (1 < iVar8) {
        piVar18 = *(int **)(iVar9 + 0x218);
        do {
          if (piVar18[2] != 0 || piVar18[3] != 0) goto LAB_004870b9;
          iVar10 = iVar10 + 1;
          piVar18 = piVar18 + 2;
        } while (iVar10 < iVar8);
      }
      *(undefined4 *)(iVar9 + 0x244) = 4;
      *(undefined4 *)(iVar9 + 0x238) = 0;
      *(undefined4 *)(iVar9 + 0x23c) = 0;
      *(undefined4 *)(iVar9 + 0x240) = 0;
      *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x4870b9;
      FUN_004a46e0();
      lVar21 = uStack_194;
    }
LAB_004870b9:
    uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
    uStack_194._0_4_ = (int *)lVar21;
    uVar14 = (uint)local_2c;
    iVar10 = local_2c._4_4_;
    *(uint *)((int)&uStack_18c + iVar1) = (uint)local_2c;
    *(int *)((int)&uStack_18c + iVar1 + 4) = iVar10;
    *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = DAT_00f0ade4;
    *(undefined4 *)((int)&uStack_194 + iVar1) = DAT_00f0ade0;
    auStack_1a4[iVar6 * -5 + 3] = iVar10 << 0xf | uVar14 >> 0x11;
    auStack_1a4[iVar6 * -5 + 2] = uVar14 << 0xf;
    auStack_1a4[iVar6 * -5 + 1] = 0x4870e8;
    uVar20 = __alldiv();
    *(int *)((int)&uStack_18c + iVar1) = (int)uVar20;
    *(int *)((int)&uStack_18c + iVar1 + 4) = (int)((ulonglong)uVar20 >> 0x20);
    *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x4870f8;
    FUN_004a76f0();
    lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
    *(int *)(iVar9 + 0x230) = *(int *)(iVar9 + 0x230) + local_38;
  }
  uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
  uStack_194._0_4_ = (int *)lVar21;
  if ((char)param_3 == '\0') {
    param_4 = 0;
    if (0 < local_3c) {
      local_20 = local_64 * local_3c;
      param_2 = local_7c;
      do {
        iVar9 = *(int *)(*(int *)(iVar2 + 0x804) + param_4 * 4);
        if (*(int *)(local_48 + 0x10) - *(int *)(local_48 + 0xc) >> 2 < iVar9) {
          *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x487151;
          uStack_194 = lVar21;
          param_1 = FUN_0096bb70();
          lVar21 = uStack_194;
        }
        else {
          param_1 = *(int *)(*(int *)(local_48 + 0xc) + iVar9 * 4);
        }
        uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
        uStack_194._0_4_ = (int *)lVar21;
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 0;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_1 + 0x110;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = iVar2;
        auStack_1a4[iVar6 * -5 + 1] = 0x48718f;
        FUN_00485960();
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 1;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_1 + 0x168;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = iVar2;
        auStack_1a4[iVar6 * -5 + 1] = 0x4871aa;
        FUN_00485960();
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 2;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_1 + 0x1c0;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = iVar2;
        auStack_1a4[iVar6 * -5 + 1] = 0x4871c5;
        FUN_00485960();
        lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
        param_2 = param_2 + 8;
        param_4 = param_4 + 1;
      } while (param_4 < local_3c);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x828) - *(int *)(param_1 + 0x824)) / 0x58 <
        *(int *)(local_48 + 0x10) - *(int *)(local_48 + 0xc) >> 2) {
      local_148 = 0x18d;
      local_14c = CGoodsPool::vftable;
      local_104 = 0;
      local_100 = 0;
      local_fc = 0;
      *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x40;
      *(undefined4 *)((int)&uStack_18c + iVar1) = 0;
      *(undefined1 **)((int)&uStack_194 + iVar1 + 4) = local_144;
      local_8._0_1_ = 2;
      *(undefined4 *)((int)&uStack_194 + iVar1) = 0x487256;
      _memset(*(void **)((int)&uStack_194 + iVar1 + 4),*(int *)((int)&uStack_18c + iVar1),
              *(size_t *)((int)&uStack_18c + iVar1 + 4));
      *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x487269;
      FUN_00423920();
      local_8._0_1_ = 3;
      (&iStack_1e0)[iVar6 * -5] = (int)&local_14c;
      *(undefined1 **)(auStack_1e4 + iVar1) = auStack_1dc + iVar1;
      (&uStack_1e8)[iVar6 * -5] = 0x48728e;
      FUN_0047db00();
      (&iStack_1e0)[iVar6 * -5] = 0x48729e;
      FUN_0048b6f0();
      lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_104 != 0) {
        *(int *)((int)&uStack_18c + iVar1 + 4) = local_104;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)&uStack_18c + iVar1) = &UNK_004872b2;
        FUN_00aae91b();
      }
    }
    local_38 = 0;
    if (0 < local_3c) {
      local_20 = local_64 * local_3c;
      param_2 = local_7c;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x804) + local_38 * 4);
        if (*(int *)(local_48 + 0x10) - *(int *)(local_48 + 0xc) >> 2 < iVar2) {
          *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = 0x4872fa;
          uStack_194 = lVar21;
          param_4 = FUN_0096bb70();
          lVar21 = uStack_194;
        }
        else {
          param_4 = *(int *)(*(int *)(local_48 + 0xc) + iVar2 * 4);
        }
        uStack_194._4_4_ = (uint)((ulonglong)lVar21 >> 0x20);
        uStack_194._0_4_ = (int *)lVar21;
        *(undefined **)((int)&uStack_18c + iVar1 + 4) = &DAT_013f2500;
        *(undefined ****)((int)&uStack_18c + iVar1) = &local_14c;
        *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x487332;
        FUN_0047db00();
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = param_3;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 0;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_4 + 0x110;
        local_8._0_1_ = 4;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = param_1;
        auStack_1a4[iVar6 * -5 + 1] = 0x487355;
        FUN_00485960();
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = param_3;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 1;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_4 + 0x168;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = param_1;
        auStack_1a4[iVar6 * -5 + 1] = 0x487375;
        FUN_00485960();
        *(undefined4 *)((int)&uStack_18c + iVar1 + 4) = param_3;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 2;
        *(int *)((int)&uStack_194 + iVar1 + 4) = param_4 + 0x1c0;
        *(int *)((int)&uStack_194 + iVar1) = iVar4;
        auStack_1a4[iVar6 * -5 + 3] = param_2;
        auStack_1a4[iVar6 * -5 + 2] = param_1;
        auStack_1a4[iVar6 * -5 + 1] = 0x487395;
        FUN_00485960();
        *(undefined **)((int)&uStack_18c + iVar1 + 4) = &DAT_013f2500;
        *(undefined4 *)((int)&uStack_18c + iVar1) = 0x4873a5;
        FUN_0047dca0();
        iVar9 = *(int *)(param_1 + 0x824);
        *(undefined ****)((int)&uStack_18c + iVar1 + 4) = &local_14c;
        *(int *)((int)&uStack_18c + iVar1) = iVar2 * 0x58 + iVar9;
        *(undefined4 *)((int)&uStack_194 + iVar1 + 4) = 0x4873ba;
        FUN_0047dbb0();
        lVar21 = CONCAT44(uStack_194._4_4_,(int *)uStack_194);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_104 != 0) {
          *(int *)((int)&uStack_18c + iVar1 + 4) = local_104;
                    /* WARNING: Subroutine does not return */
          *(undefined **)((int)&uStack_18c + iVar1) = &UNK_004873ce;
          FUN_00aae91b();
        }
        param_2 = param_2 + 8;
        local_38 = local_38 + 1;
      } while (local_38 < local_3c);
    }
  }
  if (local_7c == 0) {
    ExceptionList = local_10;
    return;
  }
  *(int *)((int)&uStack_18c + iVar1 + 4) = local_7c;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((int)&uStack_18c + iVar1) = &UNK_004873f2;
  uStack_194 = lVar21;
  FUN_00aae91b();
}

