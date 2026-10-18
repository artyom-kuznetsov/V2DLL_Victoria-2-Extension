// FUN_00838090 @ 00838090 body=[[00838090, 008384a8] [008384b2, 008384c8]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00838090(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined ***local_100;
  undefined ***local_fc;
  undefined ***local_f8;
  undefined ***local_f4;
  undefined **local_ec;
  undefined **local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined **local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined **local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb4f41;
  local_14 = ExceptionList;
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
  local_ec = (undefined **)0x0;
  local_e8 = (undefined **)0x0;
  local_e4 = 0;
  local_e0 = 0;
  local_c = 0;
  local_d8 = 0x18d;
  local_dc = CCountryValue::vftable;
  local_d4 = 0x2d2d2d;
  local_d0 = 0;
  local_cc = 0;
  local_114 = *(undefined4 *)(iVar7 + 0x1428);
  ExceptionList = &local_14;
  ppuVar2 = local_ec;
  if ((*(int *)(iVar7 + 0x142c) != 0) &&
     (local_114 = *(undefined4 *)(iVar7 + 0x1428), ExceptionList = &local_14,
     *(int *)(*(int *)(*(int *)(iVar7 + 0xbe8) + *(int *)(iVar7 + 0x142c) * 4) + 0x20) == 0)) {
    local_114 = *(undefined4 *)(iVar7 + 0x1428);
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x142c) * 4);
    iVar1 = *(int *)(iVar6 + 0x1a4);
    ExceptionList = &local_14;
    if ((*(int *)(iVar7 + 0x1a4) <= iVar1) &&
       ((*(int *)(iVar7 + 0x1a4) < iVar1 ||
        (ExceptionList = &local_14, *(uint *)(iVar7 + 0x1a0) <= *(uint *)(iVar6 + 0x1a0))))) {
      local_d4 = *(undefined4 *)(iVar7 + 0x1428);
      local_d0 = *(undefined4 *)(iVar7 + 0x142c);
      local_cc = 800;
      ExceptionList = &local_14;
      local_e8 = (undefined **)FUN_00aae9af(0x10);
      if (local_e8 == (undefined **)0x0) {
        local_e8 = (undefined **)0x0;
      }
      else {
        *local_e8 = (undefined *)&local_dc;
        local_e8[1] = (undefined *)0x0;
        local_e8[2] = (undefined *)0x0;
        *(undefined1 *)(local_e8 + 3) = 0;
      }
      iVar6 = local_e4 + 1;
      bVar8 = local_e4 != 0;
      ppuVar2 = local_e8;
      local_e4 = iVar6;
      if (bVar8) {
        _DAT_00000008 = local_e8;
        ppuVar2 = local_ec;
      }
    }
  }
  local_ec = ppuVar2;
  local_100 = &local_ec;
  local_fc = (undefined ***)(iVar7 + 0x3f8);
  local_f8 = (undefined ***)(iVar7 + 0x3a4);
  local_104 = 0;
  FUN_00833410(in_ECX,&local_114,&local_100,3,&local_104,param_1,param_2,1);
  if (local_110 == 0) goto LAB_00838491;
  local_b0 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_90 = *(undefined4 *)(in_ECX + 0x34);
  local_8c = *(undefined4 *)(in_ECX + 0x38);
  local_94 = 0x18d;
  local_88 = local_114;
  local_84 = local_110;
  local_78 = 0;
  local_74 = 0;
  local_98 = CIncreaseRelationAction::vftable;
  local_40 = *(undefined4 *)(in_ECX + 0x34);
  local_3c = *(undefined4 *)(in_ECX + 0x38);
  local_44 = 0x18d;
  local_38 = local_114;
  local_34 = local_110;
  local_28 = 0;
  local_24 = 0;
  local_48 = CAllianceAction::vftable;
  local_68 = *(undefined4 *)(in_ECX + 0x34);
  local_64 = *(undefined4 *)(in_ECX + 0x38);
  local_6c = 0x18d;
  local_60 = local_114;
  local_5c = local_110;
  local_50 = 0;
  local_4c = 0;
  local_70 = CGiveMilitaryAccessAction::vftable;
  local_c0 = *(undefined4 *)(in_ECX + 0x34);
  local_bc = *(undefined4 *)(in_ECX + 0x38);
  local_c4 = 0x18d;
  local_b8 = local_114;
  local_b4 = local_110;
  local_a8 = 0;
  local_a4 = 0;
  local_c8 = CWarSubsidiesAction::vftable;
  local_a0 = 0;
  local_ac = local_b0;
  local_80 = local_b0;
  local_7c = local_b0;
  local_58 = local_b0;
  local_54 = local_b0;
  local_30 = local_b0;
  local_2c = local_b0;
  puVar4 = (undefined8 *)FUN_0091d920();
  local_a0 = *puVar4;
  local_c = CONCAT31(local_c._1_3_,4);
  local_114 = 1;
  if ((*(char *)(iVar7 + 0x120) == '\0') || (cVar3 = FUN_0085cbd0(), cVar3 != '\0')) {
LAB_0083840a:
    local_108 = 0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0052b780(iVar7);
    uVar9 = FUN_00b31c36();
    lVar10 = __allmul(*puVar5,puVar5[1],uVar9);
    iVar7 = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
    local_108 = local_114;
    if ((iVar7 <= local_a0._4_4_) &&
       ((iVar7 < local_a0._4_4_ || ((uint)(lVar10 >> 0xf) < (uint)local_a0)))) goto LAB_0083840a;
  }
  local_100 = &local_98;
  local_fc = &local_48;
  local_f8 = &local_70;
  local_f4 = &local_c8;
  local_10c = 0;
  if (local_104 == 0) {
    local_114 = 2;
    local_110 = 3;
  }
  else {
    local_114 = 3;
    local_110 = 2;
    local_108 = 0;
  }
  FUN_00836080(in_ECX,&local_100,&local_114,4);
LAB_00838491:
  if (local_ec == (undefined **)0x0) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_ec);
}

