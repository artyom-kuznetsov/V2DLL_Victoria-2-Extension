// FUN_00528c60 @ 00528c60 body=[[00528c60, 00528ce7] [00528ceb, 00528d98] [00528d9c, 00528db6] [00528dba, 00528e41] [00528e45, 00528e66] [00528e70, 00528f0b] [00528f0f, 005290ae] [005290b2, 005290d0] [005290d4, 00529177] [0052917b, 00529201] [00529205, 005292c2] [005292c6, 00529374] [00529378, 00529397] [0052939b, 005293ee] [005293f2, 0052942f] [00529438, 005294a8] [005294ac, 0052952e] [00529532, 00529558] [00529561, 005296b8] [005296bc, 0052982e] [00529832, 005298c5] [005298c9, 00529967] [0052996b, 00529989] [0052998d, 005299e5] [005299e9, 00529a7c] [00529a80, 00529af8] [00529afc, 00529b1b] [00529b1f, 00529b71] [00529b75, 00529beb] [00529bef, 00529c53] [00529c57, 00529c75] [00529c79, 00529ccb] [00529ccf, 00529d08] [00529d0c, 00529e5c] [00529e60, 00529e8a] [00529e8e, 00529eb3] [00529eb7, 00529edc] [00529ee0, 00529f17] [00529f1b, 00529f36] [00529f3a, 00529f53] [00529f57, 00529f73] [00529f77, 00529f91] [00529f95, 00529fd6] [00529fda, 0052a01b] [0052a01f, 0052a063] [0052a067, 0052a07c]]


/* WARNING: Removing unreachable block (ram,0x00528fa9) */

undefined1 * FUN_00528c60(int param_1,undefined1 *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_190;
  undefined4 local_17c;
  uint local_168;
  undefined4 local_160;
  uint local_14c;
  undefined4 local_144;
  uint local_130;
  undefined1 local_128 [4];
  int local_124;
  undefined1 local_114 [4];
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_fc [4];
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b746c6;
  local_10 = ExceptionList;
  local_8 = 0;
  local_100 = 0;
  local_190 = 0x1400dfebe4;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_190 = CONCAT44(local_cc,local_128);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_b8) {
    local_190 = CONCAT44(local_cc[0],&UNK_00528ce8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = 0x300df7e90;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_190;
  local_8._0_1_ = 4;
  FUN_0052b1c0(param_1,&local_190,param_3,param_4);
  uVar4 = FUN_00988b20();
  local_8._0_1_ = 5;
  local_190 = 0x4000528d49;
  param_4 = FUN_00aae9af();
  local_8._0_1_ = 6;
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    local_190 = CONCAT44(uVar4,local_128);
    param_4 = FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_190 = CONCAT44(&param_4,local_30);
  FUN_009e6810();
  if (0xf < local_38) {
    local_190 = CONCAT44(local_4c[0],&UNK_00528d99);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_190 = CONCAT44(local_30[0],&UNK_00528db7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_100 = 1;
  local_190 = CONCAT44(0x528df4,(undefined4)local_190);
  iVar5 = FUN_00475500();
  local_190 = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  local_190 = 0xffffffff00000000;
  local_8._0_1_ = 7;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (0xf < local_84) {
    local_190 = CONCAT44(local_98[0],&UNK_00528e42);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_4 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x1238) - *(int *)(param_1 + 0x1234) & 0xfffffffcU)) {
    do {
      if (param_4 == 1) {
        if (*(int *)(*(int *)(param_1 + 0x1234) + 4) == 0) {
          lVar8 = -0x8000;
        }
        else {
          local_190 = *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x1234) + 4) + 0x30);
          uVar7 = __allmul(*(undefined4 *)(*param_3 + 8),*(undefined4 *)(*param_3 + 0xc));
          local_190 = CONCAT44(DAT_00f0b344,DAT_00f0b340);
          lVar8 = __alldiv((uint)uVar7 & 0xffff8000,(int)((ulonglong)uVar7 >> 0x20));
        }
        local_190 = 0x1c00dfebfc;
        local_68 = 0xf;
        local_6c = 0;
        local_7c[0] = local_7c[0] & 0xffffff00;
        FUN_00409350();
        local_190 = CONCAT44(local_7c,local_60);
        local_8._0_1_ = 8;
        FUN_009a8ee0();
        local_8._0_1_ = 10;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 10;
        if (0xf < local_68) {
          local_190 = CONCAT44(local_7c[0],&UNK_00528f0c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_68 = 0xf;
        local_6c = 0;
        local_7c[0] = local_7c[0] & 0xffffff00;
        if (lVar8 < 0x100000000) {
          if ((lVar8 < 0) || ((uint)lVar8 < 0x50000)) {
            local_190 = 0x300df7e90;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (uint)local_30[0]._1_3_ << 8;
            FUN_00409350();
            local_14 = (undefined1 *)&local_190;
            local_8._0_1_ = 0xb;
            local_190 = lVar8;
            uVar4 = FUN_00988bb0(local_4c,3);
            local_8._0_1_ = 0xc;
            local_190 = 0x4000528f73;
            local_14 = (undefined1 *)FUN_00aae9af();
            local_8._0_1_ = 0xd;
            if (local_14 == (undefined1 *)0x0) {
              local_14 = (undefined1 *)0x0;
              local_8._0_1_ = 0xc;
            }
            else {
              local_190 = CONCAT44(uVar4,local_60);
              local_14 = (undefined1 *)FUN_009a9ce0();
              local_8._0_1_ = 0xc;
            }
          }
          else {
            if (0x31ffff < lVar8) goto LAB_00529020;
            local_190 = 0x300df7e90;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (uint)local_30[0]._1_3_ << 8;
            local_8._0_1_ = uVar3;
            FUN_00409350();
            local_14 = (undefined1 *)&local_190;
            local_8._0_1_ = 0xe;
            local_190 = lVar8;
            uVar4 = FUN_00988bb0(local_4c,2);
            local_8._0_1_ = 0xf;
            local_190 = 0x4000528ff6;
            local_14 = (undefined1 *)FUN_00aae9af();
            local_8._0_1_ = 0x10;
            if (local_14 == (undefined1 *)0x0) {
              local_14 = (undefined1 *)0x0;
              local_8._0_1_ = 0xf;
            }
            else {
              local_190 = CONCAT44(uVar4,local_60);
              local_14 = (undefined1 *)FUN_009a9ce0();
              local_8._0_1_ = 0xf;
            }
          }
        }
        else {
LAB_00529020:
          local_190 = 0x300df7e90;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = (uint)local_30[0]._1_3_ << 8;
          local_8._0_1_ = uVar3;
          FUN_00409350();
          local_14 = (undefined1 *)&local_190;
          local_8._0_1_ = 0x11;
          local_190 = lVar8;
          uVar4 = FUN_00988bb0(local_4c,1);
          local_8._0_1_ = 0x12;
          local_190 = 0x4000529065;
          local_14 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x13;
          if (local_14 == (undefined1 *)0x0) {
            local_14 = (undefined1 *)0x0;
          }
          else {
            local_190 = CONCAT44(uVar4,local_60);
            local_14 = (undefined1 *)FUN_009a9ce0();
          }
          local_8._0_1_ = 0x12;
        }
        local_190 = CONCAT44(&local_14,local_30);
        FUN_009e6810();
        if (0xf < local_38) {
          local_190 = CONCAT44(local_4c[0],&UNK_005290af);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 10;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_1c) {
          local_190 = CONCAT44(local_30[0],&UNK_005290d1);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar6 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          local_190 = 0x180005290e7;
          local_14 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x14;
          if (local_14 == (undefined1 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            local_190 = CONCAT44(local_14,0x5290fb);
            puVar6 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0x15;
          local_14 = (undefined1 *)0x0;
          if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            local_190 = 0x10052911e;
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar6;
        local_8._0_1_ = 10;
        local_190 = *(longlong *)(DAT_0125b5e0 + 0x1d);
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
        local_8._0_1_ = 0x16;
        local_190 = 0xffffffff00000000;
        FUN_00448aa0();
        local_8._0_1_ = 10;
        if (0xf < local_84) {
          local_190 = CONCAT44(local_98[0],&UNK_00529178);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_190 = 0x100dee2cc;
        FUN_00448740();
        local_8._0_1_ = 0x17;
LAB_00529408:
        local_190 = CONCAT44(0x529410,(undefined4)local_190);
        FUN_009adb70();
        local_8._0_1_ = 3;
        if (local_5c != 0) {
          local_190 = CONCAT44(0x529427,(undefined4)local_190);
          FUN_009e6a80();
          local_190 = CONCAT44(local_5c,&UNK_00529430);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        if (param_4 == 0) {
          local_14 = (undefined1 *)&local_190;
          local_190 = *(undefined8 *)*param_3;
          FUN_0051b610();
          local_190 = 0x1f00dfec1c;
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          FUN_00409350();
          local_190 = CONCAT44(local_7c,local_60);
          local_8._0_1_ = 0x18;
          FUN_009a8ee0();
          local_8._0_1_ = 0x1a;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 0x1a;
          if (0xf < local_68) {
            local_190 = CONCAT44(local_7c[0],&UNK_00529202);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          if (local_ac < 1) {
            if ((-1 < local_ac) && (0x4ffff < local_b0)) {
              if ((0 < local_ac) || ((-1 < local_ac && (0x31ffff < local_b0)))) goto LAB_0052931e;
              local_190 = 0x300df7e90;
              local_1c = 0xf;
              local_20 = 0;
              local_30[0] = (uint)local_30[0]._1_3_ << 8;
              local_8._0_1_ = uVar3;
              FUN_00409350();
              local_14 = (undefined1 *)&local_190;
              local_8._0_1_ = 0x1e;
              uVar4 = FUN_00988bb0(local_4c,2);
              local_8._0_1_ = 0x1f;
              goto LAB_0052935a;
            }
            local_190 = 0x300df7e90;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (uint)local_30[0]._1_3_ << 8;
            FUN_00409350();
            local_14 = (undefined1 *)&local_190;
            local_8._0_1_ = 0x1b;
            uVar4 = FUN_00988bb0(local_4c,3);
            local_8._0_1_ = 0x1c;
            local_190 = 0x4000529279;
            local_14 = (undefined1 *)FUN_00aae9af();
            local_8._0_1_ = 0x1d;
            if (local_14 == (undefined1 *)0x0) {
              local_14 = (undefined1 *)0x0;
            }
            else {
              local_190 = CONCAT44(uVar4,local_60);
              local_14 = (undefined1 *)FUN_009a9ce0();
            }
            local_8._0_1_ = 0x1c;
            local_190 = CONCAT44(&local_14,local_30);
            FUN_009e6810();
            if (0xf < local_38) {
              local_190 = CONCAT44(local_4c[0],&UNK_005292c3);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          else {
LAB_0052931e:
            local_190 = 0x300df7e90;
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (uint)local_30[0]._1_3_ << 8;
            local_8._0_1_ = uVar3;
            FUN_00409350();
            local_14 = (undefined1 *)&local_190;
            local_8._0_1_ = 0x20;
            uVar4 = FUN_00988bb0(local_4c,1);
            local_8._0_1_ = 0x21;
LAB_0052935a:
            local_190 = CONCAT44(uVar4,0x529366);
            FUN_009a9980();
            if (0xf < local_38) {
              local_190 = CONCAT44(local_4c[0],&UNK_00529375);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          local_8._0_1_ = 0x1a;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_190 = CONCAT44(local_30[0],&UNK_00529398);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_190 = CONCAT44(0x5293a0,(undefined4)local_190);
          iVar5 = FUN_00475500();
          local_190 = *(undefined8 *)(iVar5 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_8._0_1_ = 0x22;
          local_190 = 0xffffffff00000000;
          FUN_00448aa0();
          local_8._0_1_ = 0x1a;
          if (0xf < local_84) {
            local_190 = CONCAT44(local_98[0],&UNK_005293ef);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_190 = 0x100dee2cc;
          FUN_00448740();
          local_8._0_1_ = 0x23;
          goto LAB_00529408;
        }
        if (param_4 == 2) {
          local_14 = (undefined1 *)&local_190;
          local_190 = *(undefined8 *)(*param_3 + 0x10);
          FUN_0051b610();
          local_190 = 0x1d00dfec3c;
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          FUN_00409350();
          local_190 = CONCAT44(local_7c,local_60);
          local_8._0_1_ = 0x24;
          FUN_009a8ee0();
          local_8._0_1_ = 0x26;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 0x26;
          if (0xf < local_68) {
            local_190 = CONCAT44(local_7c[0],&UNK_005294a9);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          if (local_a4 < 1) {
            if ((-1 < local_a4) && (0x4ffff < local_a8)) {
              if ((0 < local_a4) || ((-1 < local_a4 && (0x31ffff < local_a8)))) goto LAB_005295b0;
              local_190 = CONCAT44(0x52957f,(undefined4)local_190);
              local_8._0_1_ = uVar3;
              FUN_009885d0();
              local_8._0_1_ = 0x29;
              local_14 = (undefined1 *)&local_190;
              uVar4 = FUN_00988bb0(local_e8,2);
              local_8._0_1_ = 0x2a;
              goto LAB_005295ef;
            }
            local_190 = CONCAT44(0x5294eb,(undefined4)local_190);
            FUN_009885d0();
            local_8._0_1_ = 0x27;
            local_14 = (undefined1 *)&local_190;
            uVar4 = FUN_00988bb0(local_4c,3);
            local_8._0_1_ = 0x28;
            local_190 = CONCAT44(uVar4,0x529520);
            FUN_009a9980();
            if (0xf < local_38) {
              local_190 = CONCAT44(local_4c[0],&UNK_0052952f);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8._0_1_ = 0x26;
            local_38 = 0xf;
            local_3c = 0;
            local_4c[0] = local_4c[0] & 0xffffff00;
            if (0xf < local_84) {
              local_190 = CONCAT44(local_98[0],&UNK_00529559);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          else {
LAB_005295b0:
            local_190 = CONCAT44(0x5295c0,(undefined4)local_190);
            local_8._0_1_ = uVar3;
            FUN_009885d0();
            local_8._0_1_ = 0x2b;
            local_14 = (undefined1 *)&local_190;
            uVar4 = FUN_00988bb0(local_e8,1);
            local_8._0_1_ = 0x2c;
LAB_005295ef:
            local_190 = CONCAT44(uVar4,0x5295fe);
            FUN_009a9980();
            local_190 = CONCAT44(0x529609,(undefined4)local_190);
            FUN_00408ad0();
            local_8._0_1_ = 0x26;
            local_190 = CONCAT44(0x529614,(undefined4)local_190);
            FUN_00408ad0();
          }
          local_190 = CONCAT44(0x529619,(undefined4)local_190);
          iVar5 = FUN_00475500();
          local_190 = *(undefined8 *)(iVar5 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_190 = 0xffffffff00000000;
          local_8._0_1_ = 0x2d;
          FUN_00448aa0();
          local_8._0_1_ = 0x26;
LAB_0052981d:
          if (0xf < local_84) {
            local_190 = CONCAT44(local_98[0],&UNK_0052982f);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_190 = 0x100dee2cc;
          FUN_00448740();
          local_8._0_1_ = 3;
          local_190 = CONCAT44(local_60,0x52984e);
          FUN_009a9740();
        }
        else if (param_4 == 3) {
          local_14 = (undefined1 *)&local_190;
          local_190 = *(undefined8 *)(*param_3 + 0x18);
          FUN_0051b610();
          local_190 = CONCAT44(0x529696,(undefined4)local_190);
          FUN_009885d0();
          local_190 = CONCAT44(local_30,local_60);
          local_8._0_1_ = 0x2e;
          FUN_009a8ee0();
          local_8._0_1_ = 0x30;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 0x30;
          if (0xf < local_1c) {
            local_190 = CONCAT44(local_30[0],&UNK_005296b9);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (local_9c < 1) {
            if ((local_9c < 0) || (local_a0 < 0x50000)) {
              local_190 = CONCAT44(0x5296f7,(undefined4)local_190);
              FUN_009885d0();
              local_8._0_1_ = 0x31;
              local_14 = (undefined1 *)&local_190;
              uVar4 = FUN_00988bb0(local_e8,3);
              local_8._0_1_ = 0x32;
            }
            else {
              if ((0 < local_9c) || ((-1 < local_9c && (0x31ffff < local_a0)))) goto LAB_0052977a;
              local_190 = CONCAT44(0x529749,(undefined4)local_190);
              local_8._0_1_ = uVar3;
              FUN_009885d0();
              local_8._0_1_ = 0x33;
              local_14 = (undefined1 *)&local_190;
              uVar4 = FUN_00988bb0(local_e8,2);
              local_8._0_1_ = 0x34;
            }
          }
          else {
LAB_0052977a:
            local_190 = CONCAT44(0x52978a,(undefined4)local_190);
            local_8._0_1_ = uVar3;
            FUN_009885d0();
            local_8._0_1_ = 0x35;
            local_14 = (undefined1 *)&local_190;
            uVar4 = FUN_00988bb0(local_e8,1);
            local_8._0_1_ = 0x36;
          }
          local_190 = CONCAT44(uVar4,0x5297c8);
          FUN_009a9980();
          local_190 = CONCAT44(0x5297d3,(undefined4)local_190);
          FUN_00408ad0();
          local_8._0_1_ = 0x30;
          local_190 = CONCAT44(0x5297de,(undefined4)local_190);
          FUN_00408ad0();
          local_190 = CONCAT44(0x5297e3,(undefined4)local_190);
          iVar5 = FUN_00475500();
          local_190 = *(undefined8 *)(iVar5 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
          local_190 = 0xffffffff00000000;
          local_8._0_1_ = 0x37;
          FUN_00448aa0();
          local_8._0_1_ = 0x30;
          goto LAB_0052981d;
        }
      }
      param_4 = param_4 + 1;
      uVar3 = (undefined1)local_8;
    } while (param_4 < *(int *)(param_1 + 0x1238) - *(int *)(param_1 + 0x1234) >> 2);
  }
  local_8._0_1_ = uVar3;
  uVar7 = *(undefined8 *)(*(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10) + 0x28);
  local_190 = 0xf00dfec7c;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_00409350();
  local_190 = CONCAT44(local_7c,local_fc);
  local_8._0_1_ = 0x38;
  FUN_009a8ee0();
  local_8._0_1_ = 0x3a;
  if (0xf < local_68) {
    local_190 = CONCAT44(local_7c[0],&UNK_005298c6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = 0x300df7e90;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  param_3 = (int *)&local_190;
  local_8._0_1_ = 0x3b;
  local_190 = uVar7;
  uVar4 = FUN_00988bb0(local_4c,1);
  local_8._0_1_ = 0x3c;
  local_190 = 0x4000529918;
  param_3 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x3d;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    local_190 = CONCAT44(uVar4,local_fc);
    param_3 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x3c;
  local_190 = CONCAT44(&param_3,local_30);
  FUN_009e6810();
  if (0xf < local_38) {
    local_190 = CONCAT44(local_4c[0],&UNK_00529968);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x3a;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_190 = CONCAT44(local_30[0],&UNK_0052998a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = CONCAT44(0x529992,(undefined4)local_190);
  iVar5 = FUN_00475500();
  local_190 = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  local_8._0_1_ = 0x3e;
  local_190 = 0xffffffff00000000;
  FUN_00448aa0();
  local_8._0_1_ = 0x3a;
  if (0xf < local_84) {
    local_190 = CONCAT44(local_98[0],&UNK_005299e6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = 0x100dee2cc;
  FUN_00448740();
  local_190 = CONCAT44(*(int *)(DAT_012588e8 + 0xbcc) + 0x280,
                       *(int *)(param_1 + 0x20) * 0x58 +
                       *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x5a4));
  FUN_0047e3e0();
  local_190 = 0xe00dfec8c;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  FUN_00409350();
  local_190 = CONCAT44(local_cc,local_114);
  local_8._0_1_ = 0x3f;
  FUN_009a8ee0();
  local_8._0_1_ = 0x41;
  if (0xf < local_b8) {
    local_190 = CONCAT44(local_cc[0],&UNK_00529a7d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = 0x300df7e90;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x42;
  param_3 = (int *)&local_190;
  uVar4 = FUN_00988bb0(local_4c,1);
  local_8._0_1_ = 0x43;
  local_190 = CONCAT44(uVar4,0x529aea);
  FUN_009a9980();
  if (0xf < local_38) {
    local_190 = CONCAT44(local_4c[0],&UNK_00529af9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x41;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_190 = CONCAT44(local_30[0],&UNK_00529b1c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = CONCAT44(0x529b24,(undefined4)local_190);
  iVar5 = FUN_00475500();
  local_190 = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  local_190 = 0xffffffff00000000;
  local_8._0_1_ = 0x44;
  FUN_00448aa0();
  local_8._0_1_ = 0x41;
  if (0xf < local_84) {
    local_190 = CONCAT44(local_98[0],&UNK_00529b72);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_190 = 0x100dee2cc;
  FUN_00448740();
  iVar5 = *(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10);
  iVar2 = *(int *)(iVar5 + 0x54);
  piVar1 = (int *)(iVar5 + 0x50);
  uVar7 = *(undefined8 *)piVar1;
  if ((-1 < iVar2) && ((0 < iVar2 || (*piVar1 != 0)))) {
    local_190 = 0x1500dfec9c;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_190 = CONCAT44(local_7c,local_60);
    local_8._0_1_ = 0x45;
    FUN_009a8ee0();
    local_8._0_1_ = 0x47;
    if (0xf < local_68) {
      local_190 = CONCAT44(local_7c[0],&UNK_00529bec);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_190 = 0x300df7e90;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    param_3 = (int *)&local_190;
    local_8._0_1_ = 0x48;
    local_190 = uVar7;
    uVar4 = FUN_00988bb0(local_4c,1);
    local_8._0_1_ = 0x49;
    local_190 = CONCAT44(uVar4,0x529c41);
    FUN_009a9980();
    if (0xf < local_38) {
      local_190 = CONCAT44(local_4c[0],&UNK_00529c54);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x47;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_1c) {
      local_190 = CONCAT44(local_30[0],&UNK_00529c76);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_190 = CONCAT44(0x529c7e,(undefined4)local_190);
    iVar5 = FUN_00475500();
    local_190 = *(undefined8 *)(iVar5 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
    local_8._0_1_ = 0x4a;
    local_190 = 0xffffffff00000000;
    FUN_00448aa0();
    local_8._0_1_ = 0x47;
    if (0xf < local_84) {
      local_190 = CONCAT44(local_98[0],&UNK_00529ccc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_190 = 0x100dee2cc;
    FUN_00448740();
    local_8._0_1_ = 0x4b;
    local_190 = CONCAT44(0x529ced,(undefined4)local_190);
    FUN_009adb70();
    local_8._0_1_ = 0x41;
    if (local_5c != 0) {
      local_190 = CONCAT44(0x529d00,(undefined4)local_190);
      FUN_009e6a80();
      local_190 = CONCAT44(local_5c,&UNK_00529d09);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar5 = *(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10);
  iVar2 = *(int *)(iVar5 + 0x3c);
  piVar1 = (int *)(iVar5 + 0x38);
  uVar7 = *(undefined8 *)piVar1;
  if ((-1 < iVar2) && ((0 < iVar2 || (*piVar1 != 0)))) {
    local_190 = 0x1b00dfecb4;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x4c;
    local_190 = 0x300dfecd0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x4d;
    local_190 = uVar7;
    uVar4 = FUN_00988bb0(local_98,1);
    local_8._0_1_ = 0x4e;
    local_190 = 0x400dfc940;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_190 = CONCAT44(local_4c,local_60);
    local_8._0_1_ = 0x4f;
    FUN_009a8ee0();
    local_8._0_1_ = 0x50;
    local_190 = CONCAT44(0x529dcf,(undefined4)local_190);
    iVar5 = FUN_00475500();
    local_190 = *(undefined8 *)(iVar5 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
    local_8._0_1_ = 0x51;
    local_190 = CONCAT44(local_7c,0x529e0a);
    FUN_00988f20();
    local_8._0_1_ = 0x52;
    local_190 = CONCAT44(uVar4,0x529e1c);
    FUN_00988f20();
    local_8._0_1_ = 0x53;
    local_190 = CONCAT44(local_30,0x529e31);
    FUN_00988f20();
    local_8._0_1_ = 0x54;
    local_190 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_130) {
      local_190 = CONCAT44(local_144,&UNK_00529e5d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_168) {
      local_190 = CONCAT44(local_17c,&UNK_00529e8b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_14c) {
      local_190 = CONCAT44(local_160,&UNK_00529eb4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_d4) {
      local_190 = CONCAT44(local_e8[0],&UNK_00529edd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    local_8._0_1_ = 0x55;
    local_190 = CONCAT44(0x529f00,(undefined4)local_190);
    FUN_009adb70();
    if (local_5c != 0) {
      local_190 = CONCAT44(0x529f0f,(undefined4)local_190);
      FUN_009e6a80();
      local_190 = CONCAT44(local_5c,&UNK_00529f18);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    if (0xf < local_68) {
      local_190 = CONCAT44(local_7c[0],&UNK_00529f37);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_84) {
      local_190 = CONCAT44(local_98[0],&UNK_00529f54);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_1c) {
      local_190 = CONCAT44(local_30[0],&UNK_00529f74);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x41;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
      local_190 = CONCAT44(local_4c[0],&UNK_00529f92);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_190 = 0x100dee2cc;
    FUN_00448740();
  }
  local_8._0_1_ = 0x56;
  local_190 = CONCAT44(0x529fb6,(undefined4)local_190);
  FUN_009adb70();
  if (local_110 != 0) {
    local_190 = CONCAT44(0x529fcb,(undefined4)local_190);
    FUN_009e6a80();
    local_190 = CONCAT44(local_110,&UNK_00529fd7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x57);
  local_190 = CONCAT44(0x529ffb,(undefined4)local_190);
  FUN_009adb70();
  if (local_f8 != 0) {
    local_190 = CONCAT44(0x52a010,(undefined4)local_190);
    FUN_009e6a80();
    local_190 = CONCAT44(local_f8,&UNK_0052a01c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_8 = 0x58;
  local_190 = CONCAT44(0x52a043,(undefined4)local_190);
  FUN_009adb70();
  if (local_124 != 0) {
    local_190 = CONCAT44(0x52a058,(undefined4)local_190);
    FUN_009e6a80();
    local_190 = CONCAT44(local_124,&UNK_0052a064);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

