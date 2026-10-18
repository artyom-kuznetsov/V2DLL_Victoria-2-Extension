// FUN_00483aa0 @ 00483aa0 body=[[00483aa0, 00484054]]


/* WARNING: Removing unreachable block (ram,0x00483c7d) */
/* WARNING: Removing unreachable block (ram,0x00483bf9) */
/* WARNING: Removing unreachable block (ram,0x00483b60) */
/* WARNING: Removing unreachable block (ram,0x00483bb4) */
/* WARNING: Removing unreachable block (ram,0x00483e9a) */

void FUN_00483aa0(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 local_58;
  uint local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_14;
  undefined8 local_10;
  
  local_58._4_4_ = (undefined *)(param_1 + 0x280);
  local_58._0_4_ = &DAT_013f2558;
  local_14 = (int)local_58._4_4_;
  puVar3 = (undefined4 *)FUN_0047e3e0();
  local_58._4_4_ = (undefined *)DAT_00f0ade4;
  local_58._0_4_ = (undefined *)DAT_00f0ade0;
  lVar8 = __allmul(*puVar3,puVar3[1]);
  lVar8 = lVar8 >> 0xf;
  uVar7 = (uint)lVar8;
  iVar6 = (int)((ulonglong)lVar8 >> 0x20);
  local_10._0_4_ = uVar7;
  *(longlong *)(*(int *)(param_3 + 0x1d4) + 0xf0) = lVar8;
  if (param_4 == '\0') {
    lVar9 = *(longlong *)(param_3 + 0x188);
    local_20._4_4_ = *(undefined4 *)(param_3 + 0x18c);
    local_20._0_4_ = *(uint *)(param_3 + 0x188);
  }
  else {
    local_30._0_4_ = *(uint *)(*(int *)(param_3 + 0x1d4) + 0xb8);
    local_30._4_4_ = *(undefined4 *)(*(int *)(param_3 + 0x1d4) + 0xbc);
    local_58._4_4_ = (undefined *)0x483b2c;
    local_58 = FUN_00b31c36();
    lVar9 = __allmul((uint)local_30,local_30._4_4_);
    local_20._0_4_ = *(uint *)(param_3 + 0x188);
    local_30 = lVar9 >> 0xf;
    local_20._4_4_ = *(undefined4 *)(param_3 + 0x18c);
    if (*(longlong *)(param_3 + 0x188) < lVar9 >> 0xf) {
      puVar4 = (uint *)&local_20;
    }
    else {
      puVar4 = (uint *)&local_30;
    }
    local_28._0_4_ = *puVar4;
    local_28._4_4_ = puVar4[1];
    local_30._4_4_ = *(undefined4 *)(param_3 + 0x18c);
    local_58._4_4_ = (undefined *)0x483b91;
    local_30._0_4_ = (uint)local_20;
    local_58 = FUN_00b31c36();
    local_30 = __allmul((uint)local_30,local_30._4_4_);
    local_30 = local_30 >> 0xf;
    if (CONCAT44(local_28._4_4_,(uint)local_28) < local_30) {
      local_20 = local_30;
      lVar9 = local_30;
    }
    else {
      local_20._0_4_ = (uint)local_28;
      local_20._4_4_ = local_28._4_4_;
      lVar9 = CONCAT44(local_28._4_4_,(uint)local_28);
    }
  }
  local_20 = lVar9;
  if (lVar9 < lVar8) {
    if ((DAT_0125ba14 <= *(int *)(param_3 + 0x254)) &&
       ((DAT_0125ba14 < *(int *)(param_3 + 0x254) || (DAT_0125ba10 < *(uint *)(param_3 + 0x250)))))
    {
      local_58 = lVar8 - lVar9;
      FUN_004d1cd0(&local_30);
      local_58 = local_30;
      FUN_0095a6a0();
      lVar9 = local_30 + local_20;
      local_20 = lVar9;
      uVar7 = (uint)local_10;
    }
    local_20._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
    local_20._0_4_ = (uint)lVar9;
    if (lVar9 < CONCAT44(iVar6,uVar7)) {
      local_34 = *(int *)(param_3 + 0x184);
      local_28._4_4_ = (iVar6 - local_20._4_4_) - (uint)(uVar7 < (uint)local_20);
      local_28._0_4_ = uVar7 - (uint)local_20;
      local_38 = *(uint *)(param_3 + 0x180);
      if (((int)local_28._4_4_ < local_34) ||
         (((int)local_28._4_4_ <= local_34 && (uVar7 - (uint)local_20 <= *(uint *)(param_3 + 0x180))
          ))) {
        puVar4 = (uint *)&local_28;
      }
      else {
        puVar4 = &local_38;
      }
      local_30._0_4_ = *puVar4;
      local_30._4_4_ = puVar4[1];
      local_58._0_4_ = (undefined *)-(uint)local_30;
      local_58._4_4_ = (undefined *)-(local_30._4_4_ + ((uint)local_30 != 0));
      local_20 = lVar9;
      FUN_0095a5f0();
      local_58._0_4_ = (undefined *)(uint)local_30;
      local_58._4_4_ = (undefined *)local_30._4_4_;
      FUN_0095a6a0();
      lVar9 = local_20 + local_30;
      uVar7 = (uint)local_10;
    }
    local_10._4_4_ = &local_58;
    local_20 = lVar9;
    uVar10 = __alldiv(lVar9 << 0xf,uVar7,iVar6);
    puVar11 = &DAT_013f2558;
    iVar6 = param_1 + 0x1d0;
    *local_10._4_4_ = uVar10;
    FUN_0047e220(iVar6,puVar11);
  }
  else {
    local_58._4_4_ = &DAT_013f2558;
    local_58._0_4_ = (undefined *)0x483d62;
    FUN_0047dc20();
  }
  local_58._4_4_ = &DAT_013f2558;
  local_58._0_4_ = &DAT_013f24a8;
  FUN_0047dbb0();
  local_58._4_4_ = &DAT_013f24a8;
  local_58._0_4_ = (undefined *)0x483d80;
  FUN_0047e040();
  local_58._4_4_ = &DAT_013f24a8;
  local_58._0_4_ = (undefined *)0x483d8f;
  FUN_0047dca0();
  local_58._4_4_ = &DAT_013f2558;
  local_58._0_4_ = (undefined *)0x483d9a;
  FUN_0047e040();
  iVar6 = local_14;
  local_58._4_4_ = (undefined *)local_14;
  local_58._0_4_ = &DAT_013f24a8;
  puVar3 = (undefined4 *)FUN_0047e3e0();
  local_58._4_4_ = (undefined *)DAT_00f0ade4;
  local_58._0_4_ = (undefined *)DAT_00f0ade0;
  local_28 = __allmul(*puVar3,puVar3[1]);
  local_28 = local_28 >> 0xf;
  local_58._4_4_ = (undefined *)iVar6;
  local_58._0_4_ = &DAT_013f2558;
  FUN_0047e3e0();
  local_34 = *(int *)(param_2 + 0x7cc);
  uVar7 = *(uint *)(param_2 + 0x7c8);
  local_58._4_4_ = (undefined *)0x483dfa;
  puVar4 = (uint *)FUN_0047e500();
  uVar5 = *puVar4 + uVar7;
  local_58 = local_30;
  lVar8 = __allmul(uVar5 + DAT_00f0ae10,
                   puVar4[1] + local_34 + (uint)CARRY4(*puVar4,uVar7) + DAT_00f0ae14 +
                   (uint)CARRY4(uVar5,DAT_00f0ae10));
  local_58._4_4_ = (undefined *)DAT_00f0ade4;
  local_58._0_4_ = (undefined *)DAT_00f0ade0;
  lVar8 = __allmul(lVar8 >> 0xf);
  iVar6 = *(int *)(param_3 + 0x1d4);
  lVar8 = lVar8 >> 0xf;
  local_38 = (uint)lVar8;
  *(undefined4 *)(iVar6 + 0xb8) = 0;
  *(undefined4 *)(iVar6 + 0xbc) = 0;
  local_58 = lVar8 + local_28;
  if (local_58 != CONCAT44(DAT_0125ba14,DAT_0125ba10)) {
    local_10._0_4_ = 0x8000;
    local_10._4_4_ = (undefined8 *)0x0;
    local_10 = 0x8000;
    if (local_20 < local_58) {
      local_14 = (int)((ulonglong)(local_20 << 0xf) >> 0x20);
      local_10 = __alldiv(local_20 << 0xf);
      local_58 = local_10;
      FUN_0047de60(&DAT_013f24a8);
      local_58 = local_28;
      lVar9 = __allmul(local_10);
      local_28 = lVar9 >> 0xf;
      local_58 = local_10;
      FUN_0047de60(&DAT_013f2558);
      uVar2 = (uint)local_10;
      local_58 = lVar8;
      lVar8 = __allmul(local_10);
      local_38 = (uint)(lVar8 >> 0xf);
      local_58 = local_30;
      lVar9 = __allmul(uVar2,local_10._4_4_);
      lVar8 = CONCAT44((int)((ulonglong)(lVar8 >> 0xf) >> 0x20),local_38);
      local_30 = lVar9 >> 0xf;
    }
    local_38 = (uint)lVar8;
    if (param_4 != '\0') {
      iVar6 = (int)(lVar8 + local_28);
      local_58._0_4_ = (undefined *)-iVar6;
      local_58._4_4_ =
           (undefined *)-((int)((ulonglong)(lVar8 + local_28) >> 0x20) + (uint)(iVar6 != 0));
      FUN_0095a6a0();
    }
    iVar6 = *(int *)(param_3 + 0x1d4);
    lVar8 = local_28 + CONCAT44((int)((ulonglong)lVar8 >> 0x20),local_38);
    uVar5 = (uint)lVar8;
    puVar4 = (uint *)(iVar6 + 0xb8);
    uVar7 = *puVar4;
    *puVar4 = *puVar4 + uVar5;
    local_58._4_4_ = &DAT_013f24a8;
    piVar1 = (int *)(iVar6 + 0xbc);
    *piVar1 = *piVar1 + (int)((ulonglong)lVar8 >> 0x20) + (uint)CARRY4(uVar7,uVar5);
    *(undefined8 *)(*(int *)(param_3 + 0x1d4) + 200) = local_10;
    local_58._0_4_ = (undefined *)0x483fcf;
    FUN_0047dc20();
    local_58._4_4_ = &DAT_013f2558;
    local_58._0_4_ = (undefined *)0x483fdf;
    FUN_0047dc20();
    local_58._4_4_ = &DAT_013f24a8;
    local_58._0_4_ = (undefined *)0x483fee;
    FUN_0047dca0();
    local_58._4_4_ = &DAT_013f2558;
    local_58._0_4_ = (undefined *)0x483ffd;
    FUN_0047dca0();
    puVar4 = (uint *)(*(int *)(param_1 + 0x7f4) + *(int *)(param_2 + 0x20) * 8);
    local_58._4_4_ = (undefined *)DAT_00f0ade4;
    local_58._0_4_ = (undefined *)DAT_00f0ade0;
    uVar10 = __alldiv(local_30 << 0xf);
    uVar7 = *puVar4;
    *puVar4 = *puVar4 + (uint)uVar10;
    puVar4[1] = puVar4[1] + (int)((ulonglong)uVar10 >> 0x20) + (uint)CARRY4(uVar7,(uint)uVar10);
    if (param_5 != '\0') {
      local_58._4_4_ = &DAT_013f24a8;
      local_58._0_4_ = (undefined *)0x48404c;
      FUN_0047dca0();
    }
  }
  return;
}

