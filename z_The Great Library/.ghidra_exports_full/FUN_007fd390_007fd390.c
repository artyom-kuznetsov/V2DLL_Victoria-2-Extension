// FUN_007fd390 @ 007fd390 body=[[007fd390, 007fd854]]


void FUN_007fd390(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_ec [32];
  uint local_cc;
  undefined **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined **local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  uint local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined **local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  int iStack_14;
  float local_c;
  
  local_74 = 0x18d;
  local_a8 = 0x18d;
  local_c4 = 0x18d;
  local_48 = 0;
  local_40 = DAT_012588e8;
  local_18 = 0x2d;
  uStack_17 = 0x2d;
  uStack_16 = 0x2d;
  uStack_15 = 0;
  local_4c = 0x2d2d2d;
  local_70 = DAT_00f17898;
  fStack_6c = DAT_00f17898;
  local_68 = DAT_00f17898;
  local_78 = CColor::vftable;
  uStack_64 = DAT_00f092fc;
  local_60 = 0;
  local_ac = CColor::vftable;
  local_a4 = 0;
  local_a0 = DAT_00f092fc;
  local_9c = 0;
  local_98 = DAT_00f092fc;
  local_94 = 0;
  local_c8 = CColor::vftable;
  local_c0 = DAT_00f092fc;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = DAT_00f092fc;
  local_b0 = 0;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
  if (*(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0') {
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 != 0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x128);
      local_48 = *(int *)(iVar2 + 300);
      if ((local_48 == 0) ||
         ((((char)uVar5 == 'R' && ((char)((uint)uVar5 >> 8) == 'E')) &&
          ((char)((uint)uVar5 >> 0x10) == 'B')))) {
        local_18 = 0x2d;
        uStack_17 = 0x2d;
        uStack_16 = 0x2d;
        uStack_15 = 0;
        local_4c = 0x2d2d2d;
        local_48 = 0;
      }
    }
  }
  local_5c = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_3c = 1;
  if (1 < local_5c) {
    do {
      local_44 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + local_3c * 4);
      local_30 = CONCAT44(fStack_6c,local_70);
      local_38 = CColor::vftable;
      iVar2 = local_44[3];
      local_1c = *(uint *)(iVar2 + 0x58);
      local_28 = CONCAT44(uStack_64,local_68);
      iVar6 = iVar2 + 0x128;
      local_34 = 0x18d;
      local_20 = 0;
      if ((local_48 != 0) && (local_48 != *(int *)(iVar2 + 300))) {
        local_30 = CONCAT44(fStack_6c * 0.75,0x3ec00000);
        local_28 = CONCAT44(uStack_64,local_68 * 0.75);
      }
      if (*(int *)(iVar2 + 300) != 0) {
        if (local_48 == 0) {
          uVar3 = FUN_00444ff0(iVar6);
          uVar4 = FUN_00444f80(iVar6);
          uVar7 = FUN_00b31c36();
          lVar8 = __allmul(uVar3 * 0x8000 + uVar4 * -0x8000,
                           ((((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) -
                           (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11)) -
                           (uint)(uVar3 * 0x8000 < uVar4 * 0x8000),uVar7);
          local_58 = lVar8 >> 0xf;
          if (-1 < local_58) {
            if ((0xffffffff < local_58) || ((int)local_58 != 0)) {
              local_c = (float)((float10)local_58 * (float10)3.0517578125e-05);
              goto LAB_007fd77c;
            }
            if ((0xffffffff < local_58) || (-1 < local_58)) goto LAB_007fd7ae;
          }
          local_c = -(float)((float10)local_58 * (float10)3.0517578125e-05);
LAB_007fd77c:
          iVar2 = FUN_009b7270(local_ec);
          local_30 = *(undefined8 *)(iVar2 + 8);
          local_20 = *(undefined1 *)(iVar2 + 0x18);
          local_34 = *(undefined4 *)(iVar2 + 4);
          local_28 = *(undefined8 *)(iVar2 + 0x10);
        }
        else if (local_48 == *(int *)(iVar2 + 300)) {
          uVar3 = FUN_00444ff0(iVar6);
          local_cc = ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11;
          uVar4 = FUN_00444f80(iVar6);
          local_8c = ((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11;
          local_c = (float)FUN_004451f0(local_1c);
          local_1c = FUN_00445180(local_1c);
          local_80 = 0;
          local_88 = 0;
          if (((int)local_cc < 0) || (((int)local_cc < 1 && (uVar3 << 0xf == 0)))) {
            lVar8 = 0;
          }
          else {
            lVar8 = __alldiv((int)local_c << 0x1e,
                             ((int)local_c >> 0x1f) << 0x1e | (uint)local_c >> 2,uVar3 << 0xf,
                             local_cc);
          }
          lVar9 = local_88;
          if ((-1 < (int)local_8c) && ((0 < (int)local_8c || (uVar4 << 0xf != 0)))) {
            lVar9 = __alldiv(local_1c << 0x1e,((int)local_1c >> 0x1f) << 0x1e | local_1c >> 2,
                             uVar4 << 0xf,local_8c);
          }
          lVar8 = lVar8 - lVar9;
          iStack_14 = (int)((ulonglong)lVar8 >> 0x20);
          local_18 = (undefined1)lVar8;
          uStack_17 = (undefined1)((ulonglong)lVar8 >> 8);
          uStack_16 = (undefined1)((ulonglong)lVar8 >> 0x10);
          uStack_15 = (undefined1)((ulonglong)lVar8 >> 0x18);
          if ((lVar8 < 0x100000000) && (lVar8 < 0)) {
            iVar2 = -(int)lVar8;
            iStack_14 = -(iStack_14 + (uint)((int)lVar8 != 0));
            local_18 = (undefined1)iVar2;
            uStack_17 = (undefined1)((uint)iVar2 >> 8);
            uStack_16 = (undefined1)((uint)iVar2 >> 0x10);
            uStack_15 = (undefined1)((uint)iVar2 >> 0x18);
          }
          if ((int)local_1c < (int)local_c) {
            local_c = (float)((float10)CONCAT44(iStack_14,
                                                CONCAT13(uStack_15,
                                                         CONCAT12(uStack_16,
                                                                  CONCAT11(uStack_17,local_18)))) *
                             (float10)3.0517578125e-05);
          }
          else {
            if ((int)local_1c <= (int)local_c) goto LAB_007fd7ae;
            local_c = (float)((float10)CONCAT44(iStack_14,
                                                CONCAT13(uStack_15,
                                                         CONCAT12(uStack_16,
                                                                  CONCAT11(uStack_17,local_18)))) *
                             (float10)3.0517578125e-05);
          }
          goto LAB_007fd77c;
        }
LAB_007fd7ae:
        if (((DAT_00f092fa != '\0') && (DAT_00f092fb != '\0')) &&
           (*(int *)(*(int *)(local_44[3] + 0x5c) + 0x360) < 1)) {
          local_30 = CONCAT44(local_30._4_4_ * 0.3,(float)local_30 * 0.3);
          local_28 = CONCAT44(local_28._4_4_,(float)local_28 * 0.3);
        }
      }
      iVar2 = local_3c;
      puVar1 = local_44;
      uVar5 = FUN_009b6df0();
      *puVar1 = uVar5;
      local_3c = iVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) + 4) = uVar5;
    } while (local_3c < local_5c);
  }
  return;
}

