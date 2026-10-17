// FUN_00482ff0 @ 00482ff0  (requested 00482FF0, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x004831bf) */
/* WARNING: Removing unreachable block (ram,0x004830e1) */
/* WARNING: Removing unreachable block (ram,0x0048303e) */
/* WARNING: Removing unreachable block (ram,0x00483062) */
/* WARNING: Removing unreachable block (ram,0x00483145) */
/* WARNING: Removing unreachable block (ram,0x004833b2) */
/* WARNING: Removing unreachable block (ram,0x004833fc) */

void FUN_00482ff0(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined1 *local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70 [72];
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b46918;
  local_14 = ExceptionList;
  local_c8._4_4_ = (undefined1 **)0x483022;
  ExceptionList = &local_14;
  lVar10 = FUN_00b31c36();
  local_98._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  local_c8._0_4_ = *(undefined1 **)(param_3 + 0xd8);
  local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
  if (lVar10 < *(longlong *)(param_3 + 0xd8)) {
    uVar2 = *(uint *)(param_3 + 0x200);
    local_98._0_4_ = (undefined1 *)lVar10;
    local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
    if (lVar10 < *(longlong *)(param_3 + 0x200)) {
      local_c8._4_4_ = *(undefined1 ***)(param_3 + 0xdc);
      local_d0._4_4_ = (undefined1 *)(*(int *)(param_3 + 0x204) << 0xf | uVar2 >> 0x11);
      local_d0._0_4_ = uVar2 << 0xf;
      local_98 = lVar10;
      lVar10 = __alldiv();
      local_c8._4_4_ = (undefined1 **)0x483091;
      local_a0 = FUN_00b31c36();
      lVar10 = local_a0 - lVar10;
      local_98._0_4_ = (undefined1 *)lVar10;
      iVar9 = *(int *)(DAT_012586dc + 0x10);
      uVar2 = *(uint *)(iVar9 + 0x7c);
      local_d0._4_4_ =
           (undefined1 *)
           ((((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
      local_c8._4_4_ = (undefined1 **)0x0;
      local_c8._0_4_ = (undefined1 *)0x1f40000;
      local_d0._0_4_ = uVar2 << 0x1e;
      lVar11 = __alldiv();
      if (CONCAT44((int)((ulonglong)lVar10 >> 0x20),(undefined1 *)local_98) < local_a0 - lVar11) {
        uVar2 = *(uint *)(iVar9 + 0x7c);
        local_d0._4_4_ =
             (undefined1 *)
             ((((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
        local_c8._4_4_ = (undefined1 **)0x0;
        local_c8._0_4_ = (undefined1 *)0x1f40000;
        local_d0._0_4_ = uVar2 << 0x1e;
        uVar12 = __alldiv();
        uVar2 = *(uint *)(param_3 + 0x208);
        iVar7 = *(int *)(param_3 + 0x20c);
        local_88 = uVar2 - (uint)uVar12;
        uVar3 = *(uint *)(iVar9 + 0x78);
        local_d0._4_4_ =
             (undefined1 *)
             ((((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2);
        local_c8._4_4_ = (undefined1 **)0x0;
        local_c8._0_4_ = (undefined1 *)0x1f40000;
        local_d0._0_4_ = uVar3 << 0x1e;
        lVar11 = __alldiv();
        lVar10 = CONCAT44((iVar7 - (int)((ulonglong)uVar12 >> 0x20)) - (uint)(uVar2 < (uint)uVar12),
                          local_88);
        if (lVar10 < lVar11) {
          uVar2 = *(uint *)(iVar9 + 0x78);
          local_d0._4_4_ =
               (undefined1 *)
               ((((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
          local_c8._4_4_ = (undefined1 **)0x0;
          local_c8._0_4_ = (undefined1 *)0x1f40000;
          local_d0._0_4_ = uVar2 << 0x1e;
          lVar10 = __alldiv();
        }
        local_88 = (uint)lVar10;
        *(longlong *)(param_3 + 0x208) = lVar10;
      }
      else {
        uVar2 = *(uint *)(iVar9 + 0x7c);
        local_d0._4_4_ =
             (undefined1 *)
             ((((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
        local_c8._4_4_ = (undefined1 **)0x0;
        local_c8._0_4_ = (undefined1 *)0x1f40000;
        local_d0._0_4_ = uVar2 << 0x1e;
        uVar12 = __alldiv();
        iVar9 = (uint)uVar12 + *(uint *)(param_3 + 0x208);
        iVar7 = (int)((ulonglong)uVar12 >> 0x20) + *(int *)(param_3 + 0x20c) +
                (uint)CARRY4((uint)uVar12,*(uint *)(param_3 + 0x208));
        if (local_a0 < CONCAT44(iVar7,iVar9)) {
          local_c8._4_4_ = (undefined1 **)DAT_00f092fc;
          local_c8._0_4_ = (undefined1 *)0x4831da;
          piVar4 = (int *)FUN_00408d50();
          iVar9 = *piVar4;
          iVar7 = piVar4[1];
        }
        *(int *)(param_3 + 0x208) = iVar9;
        *(int *)(param_3 + 0x20c) = iVar7;
      }
    }
  }
  local_c8._0_4_ = *(undefined1 **)(param_3 + 0x208);
  local_a8 = (undefined1 *)&local_c8;
  local_c8._4_4_ = *(undefined1 ***)(param_3 + 0x20c);
  local_d0._4_4_ = &DAT_013f2558;
  local_d0._0_4_ = 0x48320f;
  FUN_0047de60();
  local_c8._4_4_ = (undefined1 **)&DAT_013f2558;
  local_c8._0_4_ = local_70;
  local_d0._4_4_ = (undefined1 *)0x48321e;
  FUN_0047db00();
  local_c8._4_4_ = (undefined1 **)&DAT_013f2558;
  local_c8._0_4_ = &DAT_013f24a8;
  local_c = 0;
  local_d0._4_4_ = (undefined1 *)0x483238;
  FUN_0047dbb0();
  local_c8._4_4_ = (undefined1 **)&DAT_013f24a8;
  local_c8._0_4_ = (undefined1 *)0x483247;
  FUN_0047e040();
  local_c8._4_4_ = (undefined1 **)&DAT_013f24a8;
  local_c8._0_4_ = (undefined1 *)0x483256;
  FUN_0047dca0();
  local_c8._4_4_ = (undefined1 **)&DAT_013f2558;
  local_c8._0_4_ = (undefined1 *)0x483261;
  FUN_0047e040();
  local_c8._0_4_ = &DAT_013f24a8;
  local_d0._4_4_ = (undefined1 *)0x483279;
  local_c8._4_4_ = (undefined1 **)(param_1 + 0x280);
  FUN_0047e3e0();
  local_c8._0_4_ = &DAT_013f2558;
  local_d0._4_4_ = (undefined1 *)0x483288;
  local_c8._4_4_ = (undefined1 **)(param_1 + 0x280);
  FUN_0047e3e0();
  local_98._4_4_ = *(int *)(param_2 + 0x7cc);
  uVar8 = *(undefined4 *)(param_2 + 0x7c8);
  local_c8._4_4_ = &local_80;
  local_c8._0_4_ = (undefined1 *)0x4832a5;
  puVar5 = (undefined4 *)FUN_005339d0();
  local_c8._4_4_ = (undefined1 **)puVar5[1];
  local_c8._0_4_ = (undefined1 *)*puVar5;
  local_d0._4_4_ = *(undefined1 **)(param_2 + 0x1444);
  local_d0._0_4_ = *(undefined4 *)(param_2 + 0x1440);
  lVar10 = __allmul();
  local_d0 = (lVar10 >> 0xf) + CONCAT44(local_98._4_4_,uVar8) + CONCAT44(DAT_00f0ae14,DAT_00f0ae10);
  local_c8 = local_a0;
  lVar10 = __allmul();
  local_88 = (uint)(lVar10 >> 0xf);
  local_c8._4_4_ = (undefined1 **)(param_1 + 0x280);
  local_c8._0_4_ = local_70;
  iVar9 = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
  local_d0._4_4_ = (undefined1 *)0x48330d;
  FUN_0047e3e0();
  local_d0._4_4_ =
       (undefined1 *)(*(int *)(param_3 + 0x154) << 0xf | *(uint *)(param_3 + 0x150) >> 0x11);
  local_d0._0_4_ = *(uint *)(param_3 + 0x150) << 0xf;
  local_c8._4_4_ = (undefined1 **)DAT_00f0b2d4;
  local_c8._0_4_ = (undefined1 *)DAT_00f0b2d0;
  lVar10 = __alldiv();
  uVar8 = (undefined4)((ulonglong)lVar10 >> 0x20);
  local_80 = (undefined1 *)lVar10;
  local_b0._0_4_ = local_80;
  if (param_4 != '\0') {
    local_c8._4_4_ = (undefined1 **)0x483350;
    local_b0 = FUN_00b31c36();
    local_c8._4_4_ = (undefined1 **)DAT_00f0ade4;
    local_d0._4_4_ =
         (undefined1 *)(*(int *)(param_3 + 0x15c) << 0xf | *(uint *)(param_3 + 0x158) >> 0x11);
    local_c8._0_4_ = (undefined1 *)DAT_00f0ade0;
    local_d0._0_4_ = *(uint *)(param_3 + 0x158) << 0xf;
    local_d0 = __alldiv();
    local_c8 = local_b0;
    local_78 = __allmul();
    local_78 = local_78 >> 0xf;
    local_b0._0_4_ = local_80;
    local_b0._4_4_ = uVar8;
    if (CONCAT44(uVar8,local_80) < local_78) {
      puVar6 = &local_b0;
    }
    else {
      puVar6 = &local_78;
    }
    local_a8 = *(undefined1 **)puVar6;
    local_a4 = *(undefined4 *)((int)puVar6 + 4);
    local_c8._4_4_ = (undefined1 **)0x4833d8;
    lVar10 = FUN_00b31c36();
    local_c8._0_4_ = local_80;
    local_c8._4_4_ = (undefined1 **)uVar8;
    local_d0 = lVar10;
    lVar10 = __allmul();
    lVar10 = lVar10 >> 0xf;
    local_7c = (undefined4)((ulonglong)lVar10 >> 0x20);
    local_b0._0_4_ = (undefined1 *)lVar10;
    if (lVar10 <= CONCAT44(local_a4,local_a8)) {
      local_b0._0_4_ = local_a8;
      lVar10 = CONCAT44(local_a4,(undefined1 *)lVar10);
    }
  }
  local_b0._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  local_80 = (undefined1 *)lVar10;
  *(undefined4 *)(param_3 + 0x158) = 0;
  *(undefined4 *)(param_3 + 0x15c) = 0;
  if ((local_b0._4_4_ <= local_98._4_4_) &&
     ((local_b0._4_4_ < local_98._4_4_ || ((undefined1 *)local_b0 < (undefined1 *)local_98)))) {
    local_d0._4_4_ = (undefined1 *)(local_b0._4_4_ << 0xf | (uint)(undefined1 *)local_b0 >> 0x11);
    local_c8._4_4_ = (undefined1 **)local_98._4_4_;
    local_c8._0_4_ = (undefined1 *)local_98;
    local_d0._0_4_ = (int)(undefined1 *)local_b0 << 0xf;
    local_c8 = __alldiv();
    local_a8 = (undefined1 *)&local_c8;
    local_d0._4_4_ = local_70;
    local_d0._0_4_ = 0x48347e;
    FUN_0047de60();
    lVar10 = CONCAT44(local_b0._4_4_,local_80);
  }
  local_b0._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  local_80 = (undefined1 *)lVar10;
  local_c8._4_4_ = (undefined1 **)local_70;
  local_c8._0_4_ = (undefined1 *)0x483491;
  FUN_0047dc20();
  local_a8 = (undefined1 *)(local_88 + (uint)local_90);
  local_a4 = iVar9 + local_90._4_4_ + (uint)CARRY4(local_88,(uint)local_90);
  if ((local_a8 == DAT_0125ba10) && (local_a4 == DAT_0125ba14)) {
    if ((*(char *)(param_3 + 0x180) == '\0') && (param_4 != '\0')) {
      *(int *)(param_3 + 0x184) = *(int *)(param_3 + 0x184) + 1;
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90);
      local_b0 = CONCAT44(local_b0._4_4_,(undefined1 *)local_b0);
      if ((*(int *)(param_3 + 0x20) < 2) ||
         (local_90 = CONCAT44(local_90._4_4_,(uint)local_90),
         local_b0 = CONCAT44(local_b0._4_4_,(undefined1 *)local_b0), *(int *)(param_3 + 0x184) < 0xb
         )) goto LAB_00483702;
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + -1;
    }
    *(undefined4 *)(param_3 + 0x184) = 0;
    local_90 = CONCAT44(local_90._4_4_,(uint)local_90);
    local_b0 = CONCAT44(local_b0._4_4_,(undefined1 *)local_b0);
  }
  else {
    local_c8._4_4_ = (undefined1 **)0x483505;
    local_c8 = FUN_00b31c36();
    local_90 = CONCAT44(local_90._4_4_,(uint)local_90);
    if ((local_b0._4_4_ <= local_a4) &&
       ((local_b0._4_4_ < local_a4 ||
        (local_90 = CONCAT44(local_90._4_4_,(uint)local_90), (undefined1 *)local_b0 < local_a8)))) {
      local_c8._4_4_ = (undefined1 **)local_a4;
      local_d0._4_4_ = (undefined1 *)(local_b0._4_4_ << 0xf | (uint)(undefined1 *)local_b0 >> 0x11);
      local_c8._0_4_ = local_a8;
      local_d0._0_4_ = (int)(undefined1 *)local_b0 << 0xf;
      local_c8 = __alldiv();
      local_b0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      uVar8 = (undefined4)local_c8;
      local_a8 = (undefined1 *)&local_c8;
      local_d0._4_4_ = &DAT_013f24a8;
      local_d0._0_4_ = 0x48355b;
      FUN_0047de60();
      local_c8._4_4_ = (undefined1 **)local_90._4_4_;
      local_c8._0_4_ = (undefined1 *)(uint)local_90;
      local_d0._4_4_ = (undefined1 *)local_b0._4_4_;
      local_d0._0_4_ = uVar8;
      local_90 = __allmul();
      local_90 = local_90 >> 0xf;
      local_a8 = (undefined1 *)&local_c8;
      local_d0._4_4_ = &DAT_013f2558;
      local_c8._4_4_ = (undefined1 **)local_b0._4_4_;
      local_d0._0_4_ = 0x48359b;
      local_c8._0_4_ = (undefined1 *)uVar8;
      FUN_0047de60();
      local_c8._0_4_ = (undefined1 *)local_88;
      local_d0._4_4_ = (undefined1 *)local_b0._4_4_;
      local_d0._0_4_ = uVar8;
      local_c8._4_4_ = (undefined1 **)iVar9;
      lVar10 = __allmul();
      local_88 = (uint)(lVar10 >> 0xf);
      iVar9 = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
      local_d0._4_4_ = (undefined1 *)local_b0._4_4_;
      local_d0._0_4_ = uVar8;
      local_c8 = local_a0;
      lVar10 = __allmul();
      local_c8 = CONCAT44(local_b0._4_4_,uVar8);
      local_a0 = lVar10 >> 0xf;
    }
    if (param_4 == '\0') {
      *(undefined4 *)(param_3 + 0x184) = 0;
    }
    else {
      local_a8 = (undefined1 *)&local_d0;
      local_d0 = local_90 + CONCAT44(iVar9,local_88);
      local_b0 = local_d0;
      FUN_004f4ac0();
      local_c8._4_4_ = (undefined1 **)(uint)(local_b0 != CONCAT44(DAT_0125ba14,DAT_0125ba10));
      local_c8._0_4_ = (undefined1 *)0x483655;
      FUN_004f50c0();
    }
    local_d0 = local_90 + CONCAT44(iVar9,local_88);
    local_c8._4_4_ = (undefined1 **)DAT_00f0ade4;
    local_c8._0_4_ = (undefined1 *)DAT_00f0ade0;
    lVar10 = __allmul();
    local_c8._4_4_ = (undefined1 **)&DAT_013f24a8;
    *(longlong *)(param_3 + 0x158) = lVar10 >> 0xf;
    local_c8._0_4_ = (undefined1 *)0x4836a2;
    FUN_0047dc20();
    local_c8._4_4_ = (undefined1 **)&DAT_013f2558;
    local_c8._0_4_ = (undefined1 *)0x4836af;
    FUN_0047dc20();
    local_c8._4_4_ = (undefined1 **)&DAT_013f24a8;
    local_c8._0_4_ = (undefined1 *)0x4836be;
    FUN_0047dca0();
    local_c8._4_4_ = (undefined1 **)&DAT_013f2558;
    local_c8._0_4_ = (undefined1 *)0x4836cd;
    FUN_0047dca0();
    puVar1 = (uint *)(*(int *)(param_1 + 0x7f4) + *(int *)(param_2 + 0x20) * 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_a0;
    puVar1[1] = puVar1[1] + local_a0._4_4_ + (uint)CARRY4(uVar2,(uint)local_a0);
    if (param_5 != '\0') {
      local_c8._4_4_ = (undefined1 **)&DAT_013f24a8;
      local_c8._0_4_ = (undefined1 *)0x483702;
      FUN_0047dca0();
    }
  }
LAB_00483702:
  if (local_28 != 0) {
    local_c8._4_4_ = (undefined1 **)local_28;
                    /* WARNING: Subroutine does not return */
    local_c8._0_4_ = &UNK_00483713;
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

