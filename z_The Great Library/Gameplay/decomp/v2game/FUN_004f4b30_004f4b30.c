// FUN_004f4b30 @ 004f4b30  (requested 004F4B30, first bytes: 55 8B EC 83 E4 F8 64 A1)


/* WARNING: Removing unreachable block (ram,0x004f4fb6) */
/* WARNING: Removing unreachable block (ram,0x004f4ea7) */
/* WARNING: Removing unreachable block (ram,0x004f4ca5) */
/* WARNING: Removing unreachable block (ram,0x004f4d70) */
/* WARNING: Removing unreachable block (ram,0x004f4f44) */
/* WARNING: Removing unreachable block (ram,0x004f5060) */

void FUN_004f4b30(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 **ppuVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 local_68;
  uint *local_50;
  undefined1 *local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(uint *)(param_1 + 0x160) = param_3;
  *(int *)(param_1 + 0x164) = param_4;
  if ((*(int *)(param_1 + 0x15c) < param_4) ||
     ((*(int *)(param_1 + 0x15c) <= param_4 && (*(uint *)(param_1 + 0x158) <= param_3)))) {
    if (0 < *(int *)(param_1 + 0x178)) {
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
  }
  local_68._4_4_ = param_2 + 0x280;
  local_68._0_4_ = (undefined1 *)(param_1 + 0x80);
  FUN_0047e3e0();
  local_68._4_4_ = (uint)local_2c;
  local_68._0_4_ = local_30;
  local_38 = __allmul(DAT_00f0b2d0,DAT_00f0b2d4);
  local_38 = local_38 >> 0xf;
  uVar5 = (ulonglong)local_38 >> 0x20;
  local_68._4_4_ = 0x4f4be9;
  FUN_004ef1b0();
  local_68._4_4_ = 0x4f4bf4;
  uVar13 = FUN_00b31c36();
  local_68._4_4_ = local_40._4_4_;
  local_68._0_4_ = (undefined1 *)local_40;
  lVar14 = __allmul(uVar13);
  local_68 = (lVar14 >> 0xf) + CONCAT44((int)uVar5,(undefined4)local_38);
  if (*(int *)(param_1 + 0x154) < 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    puVar8 = (uint *)(param_1 + 0x150);
    uVar12 = *puVar8;
    *puVar8 = *puVar8 + param_3;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + param_4 + (uint)CARRY4(uVar12,param_3);
  }
  else {
    puVar8 = (uint *)(param_1 + 0x150);
    uVar12 = *puVar8;
    *puVar8 = *puVar8 + param_3;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + param_4 + (uint)CARRY4(uVar12,param_3);
    if ((*(int *)(param_1 + 0x154) < 1) && (*(int *)(param_1 + 0x154) < 0)) {
      *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x154) = 0x7fffffff;
    }
  }
  if ((*(char *)(param_1 + 0x180) == '\0') || (local_68 <= *(longlong *)(param_1 + 0x150))) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  else {
    local_68 = local_68 - *(longlong *)(param_1 + 0x150);
    uVar10 = (uint)local_68;
    iVar6 = (int)((ulonglong)local_68 >> 0x20);
    local_48 = (undefined1 *)&local_68;
    local_28[1] = iVar6;
    uVar13 = __alldiv(uVar10 * 0x8000,iVar6 * 0x8000 | uVar10 >> 0x11,DAT_00f0b2d0,DAT_00f0b2d4);
    local_28[2] = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x58);
    local_68 = uVar13;
    FUN_00525770(7);
    *(uint *)(param_1 + 0x1d8) = uVar10;
    *(uint *)(param_1 + 0x1dc) = local_28[1];
    puVar8 = (uint *)(param_1 + 0x150);
    uVar12 = *puVar8;
    *puVar8 = *puVar8 + uVar10;
    *(int *)(param_1 + 0x154) =
         *(int *)(param_1 + 0x154) + local_28[1] + (uint)CARRY4(uVar12,uVar10);
  }
  local_44 = *(undefined4 *)(param_1 + 0x154);
  local_48 = *(undefined1 **)(param_1 + 0x150);
  lVar14 = *(longlong *)(param_1 + 0x150);
  local_68._4_4_ = param_8;
  local_68._0_4_ = (undefined1 *)param_7;
  local_40 = __allmul((undefined1 *)local_40,local_40._4_4_);
  local_40 = local_40 >> 0xf;
  if (local_40 < lVar14) {
    ppuVar7 = (undefined1 **)&local_40;
  }
  else {
    ppuVar7 = &local_48;
  }
  local_30 = *ppuVar7;
  local_2c = ppuVar7[1];
  iVar6 = *(int *)(DAT_012586dc + 0x10);
  uVar12 = *(uint *)(iVar6 + 0x4c);
  local_68._4_4_ = 0;
  local_68._0_4_ = (undefined1 *)0x1f40000;
  local_68 = __alldiv(uVar12 << 0x1e,((int)uVar12 >> 0x1f) << 0x1e | uVar12 >> 2);
  lVar14 = __allmul(DAT_00f0b2d0,DAT_00f0b2d4);
  uVar12 = *(uint *)(param_1 + 0x20);
  local_68._4_4_ = ((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11;
  local_68._0_4_ = (undefined1 *)(uVar12 << 0xf);
  lVar14 = __allmul(lVar14 >> 0xf);
  local_40 = lVar14 >> 0xf;
  uVar5 = (ulonglong)local_40 >> 0x20;
  local_28[0] = param_3 - *(uint *)(param_1 + 0x158);
  uVar12 = (uint)(param_3 < *(uint *)(param_1 + 0x158));
  iVar11 = param_4 - *(int *)(param_1 + 0x15c);
  local_28[1] = iVar11 - uVar12;
  local_28[2] = 0;
  local_28[3] = 0;
  if (((int)local_28[1] < 0) ||
     ((local_28[1] == 0 || SBORROW4(param_4,*(int *)(param_1 + 0x15c)) != SBORROW4(iVar11,uVar12) &&
      (local_28[0] == 0)))) {
    local_50 = local_28 + 2;
  }
  else {
    local_50 = local_28;
  }
  uVar12 = *(uint *)(iVar6 + 0x48);
  local_68._4_4_ = 0;
  local_68._0_4_ = (undefined1 *)0x1f40000;
  uVar13 = __alldiv(uVar12 << 0x1e,((int)uVar12 >> 0x1f) << 0x1e | uVar12 >> 2);
  local_48 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  local_68._0_4_ = (undefined1 *)local_40;
  local_68._4_4_ = (int)uVar5;
  local_68 = __alldiv(*(uint *)(param_1 + 0x150) << 0xf,
                      *(int *)(param_1 + 0x154) << 0xf | *(uint *)(param_1 + 0x150) >> 0x11);
  lVar14 = __allmul((int)uVar13,local_48);
  local_68._4_4_ = local_50[1];
  local_68._0_4_ = (undefined1 *)*local_50;
  lVar14 = __allmul(lVar14 >> 0xf);
  lVar14 = lVar14 >> 0xf;
  if (0 < lVar14) {
    local_68._4_4_ = 0;
    local_68._0_4_ = (undefined1 *)0x38000;
    lVar15 = __allmul(local_38);
    iVar6 = (int)((ulonglong)(lVar15 >> 0xf) >> 0x20);
    if ((*(int *)(param_1 + 0x154) <= iVar6) &&
       ((*(int *)(param_1 + 0x154) < iVar6 || (*(uint *)(param_1 + 0x150) < (uint)(lVar15 >> 0xf))))
       ) {
      local_28[0] = 0;
      local_28[1] = 0;
      lVar14 = 0;
    }
  }
  iVar11 = (int)((ulonglong)lVar14 >> 0x20);
  uVar12 = (uint)lVar14;
  iVar6 = *(int *)(param_1 + 0xe8);
  local_28[2] = uVar12;
  if (iVar6 == 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0xec) + 0x188);
  }
  local_68 = lVar14;
  if ((*(int *)(*(int *)(iVar6 + 0x118) +
               *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 300) + 0xf0) + 0x28) * 4) != 0)
     && (local_68 = CONCAT44(local_2c,local_30),
        CONCAT44((int)((int)local_2c << 0x10 | (uint)local_30 >> 0x10) >> 0xf,
                 ((uint)local_30 & 0xffff) << 1 | ((uint)local_30 >> 0x10) << 0x11) < lVar14)) {
    local_68._4_4_ = 0;
    local_68._0_4_ = (undefined1 *)0x10000;
    local_68 = __alldiv(lVar14 << 0xf);
  }
  iVar9 = (int)((ulonglong)local_68 >> 0x20);
  uVar10 = (uint)local_68;
  iVar6 = iVar11 - iVar9;
  local_28[1] = iVar6 - (uint)(uVar12 < uVar10);
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = uVar12 - uVar10;
  if (((int)local_28[1] < 0) ||
     ((local_28[1] == 0 || SBORROW4(iVar11,iVar9) != SBORROW4(iVar6,(uint)(uVar12 < uVar10)) &&
      (uVar12 - uVar10 == 0)))) {
    puVar8 = local_28 + 2;
  }
  else {
    puVar8 = local_28;
  }
  uVar12 = *puVar8;
  uVar2 = puVar8[1];
  iVar6 = *(int *)(param_1 + 0x154);
  uVar3 = *(uint *)(param_1 + 0x150);
  if ((0 < local_68) && ((*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) & 0xfffffff0U) != 0))
  {
    puVar8 = (uint *)(param_1 + 0x150);
    uVar1 = *puVar8;
    *puVar8 = *puVar8 - uVar10;
    *(int *)(param_1 + 0x154) = (*(int *)(param_1 + 0x154) - iVar9) - (uint)(uVar1 < uVar10);
    local_48 = (undefined1 *)&local_68;
    FUN_004ef240(param_1 + 0xe0);
  }
  lVar14 = local_40;
  if ((-1 < (int)uVar2) && ((0 < (int)uVar2 || (uVar12 != 0)))) {
    puVar8 = (uint *)(param_1 + 0x150);
    uVar10 = *puVar8;
    *puVar8 = *puVar8 - uVar12;
    *(int *)(param_1 + 0x154) = (*(int *)(param_1 + 0x154) - uVar2) - (uint)(uVar10 < uVar12);
    local_48 = (undefined1 *)&local_68;
    local_68._0_4_ = (undefined1 *)uVar12;
    local_68._4_4_ = uVar2;
    FUN_004cfe20(*(undefined4 *)(param_1 + 0x1c));
    lVar14 = local_40;
  }
  local_40._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
  local_40._0_4_ = (undefined1 *)lVar14;
  *(uint *)(param_1 + 0x168) = uVar3 - *(uint *)(param_1 + 0x150);
  *(uint *)(param_1 + 0x16c) =
       (iVar6 - *(int *)(param_1 + 0x154)) - (uint)(uVar3 < *(uint *)(param_1 + 0x150));
  puVar4 = *(undefined1 **)(param_1 + 0x150);
  if (lVar14 < *(longlong *)(param_1 + 0x150)) {
    local_68._0_4_ = (undefined1 *)((int)puVar4 - (int)(undefined1 *)local_40);
    uVar12 = (uint)(puVar4 < (undefined1 *)local_40);
    iVar6 = *(int *)(param_1 + 0x154) - local_40._4_4_;
    local_68._4_4_ = iVar6 - uVar12;
    if ((-1 < (int)local_68._4_4_) &&
       ((local_68._4_4_ != 0 &&
         SBORROW4(*(int *)(param_1 + 0x154),local_40._4_4_) == SBORROW4(iVar6,uVar12) ||
        ((undefined1 *)local_68 != (undefined1 *)0x0)))) {
      puVar8 = (uint *)(param_1 + 0x150);
      uVar12 = *puVar8;
      *puVar8 = *puVar8 - (int)(undefined1 *)local_68;
      *(int *)(param_1 + 0x154) =
           (*(int *)(param_1 + 0x154) - local_68._4_4_) - (uint)(uVar12 < (undefined1 *)local_68);
      local_48 = (undefined1 *)&local_68;
      local_40 = lVar14;
      FUN_004cfe20(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  ExceptionList = local_14;
  return;
}

