// FUN_00542d20 @ 00542d20 body=[[00542d20, 00542fb5] [00542fb9, 00542fe3] [00542fe7, 0054300c] [00543010, 0054304d] [00543051, 0054306c] [00543075, 0054308b] [0054308f, 005430b2] [005430b6, 005430d2] [005430d6, 0054326b] [0054326f, 00543290] [00543294, 005432b9] [005432bd, 005432e2] [005432e6, 0054331b] [0054331f, 0054333b] [0054333f, 00543363] [00543367, 00543383] [00543387, 0054340e] [00543412, 00543432] [00543436, 0054344d] [00543451, 00543465]]


undefined1 * FUN_00542d20(int param_1,undefined1 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uStack_16c;
  undefined1 local_154 [8];
  undefined4 local_14c;
  undefined4 local_148;
  uint local_108;
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  float local_98;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00ba1bc7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  iVar10 = 1;
  local_8 = 0;
  local_94 = 1;
  local_1c = 0;
  uStack_16c = 0x100542d75;
  FUN_008a8650();
  iVar3 = DAT_01258a3c;
  local_14c = *(undefined4 *)(param_1 + 0x1c);
  local_148 = *(undefined4 *)(param_1 + 0x20);
  if (4 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
    do {
      plVar1 = (longlong *)(*(int *)(param_1 + 0x8c0) + iVar10 * 8);
      local_74 = (undefined4)*plVar1;
      uStack_70 = *(undefined4 *)((int)plVar1 + 4);
      uStack_16c = CONCAT44(local_154,&local_14);
      local_98 = (float)((float10)*plVar1 * (float10)3.0517578125e-05);
      piVar4 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc) + iVar10 * 4) + 0x110) +
                                  0x18))();
      local_18 = *piVar4;
      uStack_16c = CONCAT44((local_98 + 0.0005) * 1000.0,0x542e23);
      FUN_00401000();
      uStack_16c = CONCAT44(0x542e2b,(undefined4)uStack_16c);
      iVar5 = FUN_00b31c00();
      uStack_16c = 1000;
      iVar5 = __alldiv((longlong)iVar5 * (longlong)local_18);
      local_1c = local_1c + iVar5;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2);
  }
  uStack_16c = 1000;
  uVar6 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xb4) * (longlong)local_1c);
  uStack_16c = 0x200df9638;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  uStack_16c = 0x1a00dff9c0;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&uStack_16c;
  local_8._0_1_ = 2;
  uStack_16c = (ulonglong)uVar6;
  uVar7 = FUN_009c8ea0();
  uStack_16c = CONCAT44(local_90,local_4c);
  local_8._0_1_ = 3;
  local_18 = FUN_009a8ee0();
  local_8._0_1_ = 4;
  puVar8 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    uStack_16c = 0x18000542efe;
    local_14 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_14 == (undefined1 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uStack_16c = CONCAT44(local_14,0x542f12);
      puVar8 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 6;
    local_14 = (undefined1 *)0x0;
    if ((puVar8 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      uStack_16c = 0x100542f35;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar8;
  local_8._0_1_ = 4;
  uStack_16c = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
  local_8._0_1_ = 7;
  uStack_16c = CONCAT44(local_38,0x542f7b);
  FUN_00988f20();
  local_8._0_1_ = 8;
  uStack_16c = CONCAT44(uVar7,0x542f8d);
  FUN_00988f20();
  uStack_16c = 0xffffffff00000000;
  local_8._0_1_ = 9;
  FUN_00408ed0();
  if (0xf < local_f4) {
    uStack_16c = CONCAT44(local_108,&UNK_00542fb6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xf;
  local_f8 = 0;
  local_108 = local_108 & 0xffffff00;
  if (0xf < local_bc) {
    uStack_16c = CONCAT44(local_d0,&UNK_00542fe4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  if (0xf < local_a0) {
    uStack_16c = CONCAT44(local_b4,&UNK_0054300d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = local_b4 & 0xffffff00;
  local_8._0_1_ = 10;
  uStack_16c = CONCAT44(0x54302e,(undefined4)uStack_16c);
  FUN_009adb70();
  puVar8 = local_48;
  if (local_48 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar8 == local_44) {
        uStack_16c = CONCAT44(local_48,&UNK_0054306d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar8[5]) break;
      puVar8[5] = 0xf;
      puVar8[4] = 0;
      *(undefined1 *)puVar8 = 0;
      puVar8 = puVar8 + 8;
    }
    uStack_16c = CONCAT44(*puVar8,&UNK_0054304e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = (undefined4 *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = 0;
  if (0xf < local_54) {
    uStack_16c = CONCAT44(local_68[0],&UNK_0054308c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_7c) {
    uStack_16c = CONCAT44(local_90[0],&UNK_005430b3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_7c = 0xf;
  local_80 = 0;
  uVar6 = local_90[0] >> 8;
  local_90[0] = uVar6 << 8;
  if (0xf < local_24) {
    uStack_16c = CONCAT44(local_38[0],&UNK_005430d3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = *(undefined4 *)(param_1 + 0x1428);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (*(int *)(param_1 + 0x142c) != 0) {
    uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x142c) * 4)
                              + 0xa60) + 0x3d8);
    uStack_16c = 0x200df9638;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = uVar6 << 8;
    FUN_00409350();
    local_8 = 0xb;
    uStack_16c = 0x1700df95b0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350();
    local_14 = (undefined1 *)&uStack_16c;
    local_8._0_1_ = 0xc;
    uStack_16c = (ulonglong)uVar2;
    uVar7 = FUN_009c8ea0();
    uStack_16c = CONCAT44(local_38,local_4c);
    local_8._0_1_ = 0xd;
    local_18 = FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    puVar8 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      uStack_16c = 0x180005431a2;
      local_14 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0xf;
      if (local_14 == (undefined1 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uStack_16c = CONCAT44(local_14,0x5431b6);
        puVar8 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x10;
      local_14 = (undefined1 *)0x0;
      if ((puVar8 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        uStack_16c = 0x1005431d9;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar8;
    local_8._0_1_ = 0xe;
    uStack_16c = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
    uVar9 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
    local_8._0_1_ = 0x11;
    uStack_16c = CONCAT44(uVar9,0x54321f);
    FUN_00988fa0();
    local_8._0_1_ = 0x12;
    uStack_16c = CONCAT44(local_90,0x54323a);
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    uStack_16c = CONCAT44(uVar7,0x543249);
    FUN_00988f20();
    uStack_16c = 0xffffffff00000000;
    local_8._0_1_ = 0x14;
    FUN_00448aa0();
    if (0xf < local_54) {
      uStack_16c = CONCAT44(local_68[0],&UNK_0054326c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_a0) {
      uStack_16c = CONCAT44(local_b4,&UNK_00543291);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_bc) {
      uStack_16c = CONCAT44(local_d0,&UNK_005432ba);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_f4) {
      uStack_16c = CONCAT44(local_108,&UNK_005432e3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108 = local_108 & 0xffffff00;
    local_8._0_1_ = 0x15;
    uStack_16c = CONCAT44(0x543304,(undefined4)uStack_16c);
    FUN_009adb70();
    if (local_48 != (undefined4 *)0x0) {
      uStack_16c = CONCAT44(0x543313,(undefined4)uStack_16c);
      FUN_009e6a80();
      uStack_16c = CONCAT44(local_48,&UNK_0054331c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = (undefined4 *)0x0;
    local_44 = (undefined4 *)0x0;
    local_40 = 0;
    if (0xf < local_d8) {
      uStack_16c = CONCAT44(local_ec,&UNK_0054333c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_24) {
      uStack_16c = CONCAT44(local_38[0],&UNK_00543364);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_7c) {
      uStack_16c = CONCAT44(local_90[0],&UNK_00543384);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_40 = 0;
  local_44 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  uStack_16c = 0xded94d;
  local_24 = 0xf;
  local_28 = 0;
  FUN_00409350();
  local_8 = 0x16;
  uStack_16c = CONCAT44(local_38,1000);
  uVar7 = (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))(local_68,0x7d);
  local_8._0_1_ = 0x17;
  uVar7 = FUN_00988fa0(uVar7);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FUN_00448aa0(uVar7,0,0xffffffff);
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ec);
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  if (local_54 < 0x10) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (local_24 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_68[0]);
}

