// FUN_00485390 @ 00485390 body=[[00485390, 00485959]]


/* WARNING: Removing unreachable block (ram,0x004856d0) */
/* WARNING: Removing unreachable block (ram,0x004854e5) */
/* WARNING: Removing unreachable block (ram,0x0048542a) */
/* WARNING: Removing unreachable block (ram,0x004855f8) */
/* WARNING: Removing unreachable block (ram,0x00485796) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00485390(uint *param_1,int param_2,int param_3,char param_4,int *param_5,
                   undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_2c;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  undefined8 *local_14;
  char local_9;
  
  if ((_DAT_013f1bf8 & 1) == 0) {
    DAT_013f1bf0 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x168);
    _DAT_013f1bf8 = _DAT_013f1bf8 | 1;
    DAT_013f1bf4 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x16c);
  }
  local_60._4_4_ = *(uint **)(in_EAX + 0x1b4);
  local_60._0_4_ = *(undefined4 *)(in_EAX + 0x1b0);
  local_58 = CONCAT44(param_7,param_6);
  lVar9 = __allmul();
  lVar9 = lVar9 >> 0xf;
  local_60._4_4_ = *(uint **)(param_2 + 100 + param_3 * 8);
  local_60._0_4_ = *(undefined4 *)(param_2 + 0x60 + param_3 * 8);
  local_58 = lVar9;
  uVar10 = __allmul();
  local_58 = CONCAT44(0x485424,(undefined4)local_58);
  lVar11 = FUN_00b31c36();
  if (lVar9 <= lVar11) {
    *param_1 = *(uint *)(param_2 + 0x30 + param_3 * 8);
    param_1[1] = *(uint *)(param_2 + 0x34 + param_3 * 8);
    return param_1;
  }
  local_60._4_4_ = *(uint **)(param_2 + 0x1c + param_3 * 8);
  local_60._0_4_ = *(undefined4 *)(param_2 + 0x18 + param_3 * 8);
  local_58 = lVar9;
  uVar12 = __allmul();
  lVar11 = (longlong)uVar12 >> 0xf;
  lVar13 = lVar11;
  if (param_3 == 2) {
    local_60._4_4_ =
         (uint *)((int)((ulonglong)lVar11 >> 0x20) << 0xf |
                 (uint)((uVar12 & 0x7fffffff8000) >> 0x20));
    local_58 = CONCAT44(DAT_00f0ae0c,DAT_00f0ae08);
    local_60._0_4_ = (uint)(uVar12 & 0x7fffffff8000);
    lVar13 = __alldiv();
  }
  uVar7 = _DAT_013f1bf8 & 2;
  *(longlong *)(in_EAX + 0x260) = lVar13 + *(longlong *)(in_EAX + 0x260);
  if (uVar7 == 0) {
    _DAT_013f1bf8 = _DAT_013f1bf8 | 2;
    _DAT_013f1be8 = 0;
  }
  local_2c = *(undefined1 **)(in_EAX + 0x184);
  puVar3 = (uint *)(in_EAX + 0x180);
  uVar7 = *puVar3;
  if (((*(longlong *)puVar3 < lVar11) && ((int)DAT_0125ba14 <= *(int *)(in_EAX + 0x254))) &&
     (((int)DAT_0125ba14 < *(int *)(in_EAX + 0x254) || (DAT_0125ba10 < *(uint *)(in_EAX + 0x250)))))
  {
    local_18 = *(uint *)(in_EAX + 0x250);
    if (((int)DAT_0125ba14 <= *(int *)(in_EAX + 0x254)) &&
       (((int)DAT_0125ba14 < *(int *)(in_EAX + 0x254) || (DAT_0125ba10 < local_18)))) {
      local_14 = &local_58;
      local_58 = lVar11 - *(longlong *)puVar3;
      local_60._4_4_ = &local_18;
      local_60._0_4_ = 0x485553;
      FUN_004d1cd0();
      bVar8 = CARRY4(uVar7,local_18);
      uVar7 = uVar7 + local_18;
      local_2c = (undefined1 *)((int)local_14 + (int)(local_2c + bVar8));
      local_58 = CONCAT44(local_14,local_18);
      local_60._4_4_ = (uint *)0x485577;
      local_14 = &local_58;
      FUN_0095a5f0();
    }
  }
  if ((*(uint *)(param_2 + 0x18 + param_3 * 8) == DAT_0125ba10) &&
     (*(uint *)(param_2 + 0x1c + param_3 * 8) == DAT_0125ba14)) {
    *(undefined1 *)(in_EAX + 0x1d0 + param_3) = 1;
    if (param_3 == 0) {
      *(int *)(in_EAX + 0x26c) = *(int *)(in_EAX + 0x26c) + 1;
    }
    *param_1 = DAT_0125ba10;
    param_1[1] = DAT_0125ba14;
    return param_1;
  }
  local_60._4_4_ =
       (uint *)((int)((longlong)uVar10 >> 0x2f) << 0xf | (uint)((uVar10 & 0x7fffffff8000) >> 0x20));
  local_58 = CONCAT44(DAT_00f0ade4,DAT_00f0ade0);
  local_60._0_4_ = (uint)(uVar10 & 0x7fffffff8000);
  lVar13 = __alldiv();
  if (CONCAT44(DAT_0125ba14,DAT_0125ba10) < lVar13) {
    local_60._4_4_ = (uint *)((int)local_2c << 0xf | uVar7 >> 0x11);
    local_58 = CONCAT44(DAT_00f0ade4,DAT_00f0ade0);
    local_60._0_4_ = uVar7 << 0xf;
    lVar14 = __alldiv();
    local_14 = &local_58;
    local_60 = lVar13;
    local_58 = __alldiv(lVar14 << 0xf);
    local_14 = &local_60;
    local_60._0_4_ = DAT_00f0ae10;
    local_60._4_4_ = (uint *)DAT_00f0ae14;
    puVar3 = (uint *)FUN_0048bfc0();
    local_60._0_4_ = *puVar3;
    local_60._4_4_ = (uint *)puVar3[1];
    if (((int)local_60._4_4_ <= (int)DAT_0125ba14) &&
       (((int)local_60._4_4_ < (int)DAT_0125ba14 || ((uint)local_60 < DAT_0125ba10)))) {
      local_60._4_4_ = (uint *)DAT_00f0ae14;
      local_60._0_4_ = DAT_00f0ae10;
    }
    local_58 = lVar13;
    lVar13 = __allmul();
    uVar4 = (uint)(lVar13 >> 0xf);
    puVar3 = (uint *)(*param_5 + *(int *)(*(int *)(in_EAX + 0x68) + 0x28) * 8);
    uVar6 = *puVar3;
    *puVar3 = *puVar3 + uVar4;
    puVar3[1] = puVar3[1] + (int)((ulonglong)(lVar13 >> 0xf) >> 0x20) + (uint)CARRY4(uVar6,uVar4);
  }
  local_20 = 0;
  if (CONCAT44(DAT_0125ba14,DAT_0125ba10) < lVar11) {
    local_14 = &local_58;
    local_58 = CONCAT44(local_2c,uVar7);
    local_60 = lVar11;
    uVar15 = __alldiv(uVar7 << 0xf,(int)local_2c << 0xf | uVar7 >> 0x11);
    *local_14 = uVar15;
    local_14 = &local_60;
    local_60._0_4_ = DAT_00f0ae10;
    local_60._4_4_ = (uint *)DAT_00f0ae14;
    puVar5 = (undefined8 *)FUN_0048bfc0();
    uStack_1c = *(uint *)((int)puVar5 + 4);
    local_20 = (uint)*puVar5;
  }
  else {
    uStack_1c = 0;
  }
  if (param_4 == '\0') {
    local_20 = DAT_00f0ae10;
    uStack_1c = DAT_00f0ae14;
  }
  local_9 = *(char *)(*(int *)(in_EAX + 0x68) + 0x39c);
  if ((param_3 == 2) && (local_9 != '\0')) {
    local_60._4_4_ = (uint *)(DAT_00f0ae14 << 0xf | DAT_00f0ae10 >> 0x11);
    local_58 = CONCAT44(DAT_00f0ae0c,DAT_00f0ae08);
    local_60._0_4_ = DAT_00f0ae10 << 0xf;
    lVar13 = __alldiv();
    if (lVar13 < CONCAT44(uStack_1c,local_20)) {
      local_20 = DAT_00f0ae10;
      uStack_1c = DAT_00f0ae14;
    }
  }
  if ((DAT_0125b9cc < (int)uStack_1c) ||
     ((DAT_0125b9cc <= (int)uStack_1c && (DAT_0125b9c8 <= local_20)))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(in_EAX + 0x1d0 + param_3) = cVar2;
  if (param_3 == 0) {
    if (cVar2 == '\0') {
      *(undefined4 *)(in_EAX + 0x26c) = 0;
    }
    else {
      *(int *)(in_EAX + 0x26c) = *(int *)(in_EAX + 0x26c) + 1;
    }
  }
  if (param_4 != '\0') {
    local_60._0_4_ = -local_20;
    local_60._4_4_ = (uint *)-(uStack_1c + (local_20 != 0));
    local_58 = lVar11;
    local_60 = __allmul();
    local_60 = local_60 >> 0xf;
    local_58 = CONCAT44(DAT_0125ba34,DAT_0125ba30);
    local_58 = __allmul();
    local_14 = &local_58;
    local_58 = local_58 >> 0xf;
    local_60._4_4_ = (uint *)0x485845;
    FUN_0095a5f0();
  }
  local_60._0_4_ = local_20;
  local_60._4_4_ = (uint *)uStack_1c;
  local_58 = lVar9;
  lVar11 = __allmul();
  uVar6 = (uint)(lVar11 >> 0xf);
  puVar3 = (uint *)(param_2 + 0x48 + param_3 * 8);
  uVar7 = *puVar3;
  *puVar3 = *puVar3 + uVar6;
  piVar1 = (int *)(param_2 + 0x4c + param_3 * 8);
  *piVar1 = *piVar1 + (int)((ulonglong)(lVar11 >> 0xf) >> 0x20) + (uint)CARRY4(uVar7,uVar6);
  if (((param_3 == 2) && (local_9 == '\0')) && (param_4 != '\0')) {
    local_58 = CONCAT44(0x485897,(undefined4)local_58);
    FUN_0043a6a0();
    local_58 = CONCAT44(0x4858a6,(undefined4)local_58);
    FUN_0043a6a0();
    local_58 = 0x3ff028f5c28f5c29;
    local_60._4_4_ = (uint *)0x4858be;
    FUN_0048b5d0();
    local_58 = CONCAT44(0x4858c6,(undefined4)local_58);
    cVar2 = FUN_0043a700();
    if (cVar2 != '\0') {
      local_58 = CONCAT44(DAT_013f1bf4,DAT_013f1bf0);
      local_60._4_4_ = (uint *)0x4858ea;
      FUN_0095fc50();
    }
    local_58 = CONCAT44(DAT_00f0ae14,DAT_00f0ae10);
    local_60 = lVar9;
    FUN_0048bfc0();
    return param_1;
  }
  uVar7 = *(uint *)(param_2 + 0x30 + param_3 * 8);
  *param_1 = uVar7;
  local_58 = CONCAT44(*(undefined4 *)(param_2 + 0x34 + param_3 * 8),uVar7);
  local_60._0_4_ = local_20;
  local_60._4_4_ = (uint *)uStack_1c;
  lVar9 = __allmul();
  *(longlong *)param_1 = lVar9 >> 0xf;
  return param_1;
}

