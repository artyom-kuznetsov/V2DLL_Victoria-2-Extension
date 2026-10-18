// FUN_0091fc40 @ 0091fc40 body=[[0091fc40, 0091fd8a] [0091fd8e, 0091fdaa] [0091fdae, 0091fdc9] [0091fdcd, 0091ff95] [0091ff99, 0091ffc8] [0091ffcc, 0091fff1] [0091fff5, 0092001a] [0092001e, 00920040] [00920044, 0092007d] [00920081, 0092009c] [009200a0, 009200bb] [009200bf, 00920195] [00920199, 009201c5] [009201c9, 009201ee] [009201f2, 00920330] [00920334, 00920360] [00920364, 00920389] [0092038d, 009203cd] [009203d1, 009203ec] [009203f0, 0092040b] [0092040f, 0092042d] [00920431, 00920483] [00920487, 009204dd] [009204e1, 00920504]]


undefined1 * FUN_0091fc40(int param_1,undefined1 *param_2,int *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  int iStack_15c;
  uint *local_158;
  int iStack_154;
  uint *local_150;
  uint *puStack_14c;
  uint *puStack_148;
  uint local_138;
  uint local_124;
  uint local_11c;
  uint local_108;
  uint local_100 [4];
  int local_f0;
  uint local_ec;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_74;
  undefined1 *local_70;
  uint local_6c [2];
  undefined1 local_64 [4];
  undefined4 *local_60;
  undefined4 *local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b84ed8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_dc = 1;
  iVar6 = param_3[1] - *param_3 >> 2;
  local_14 = 0;
  local_d4 = iVar6;
  if (0 < iVar6) {
    do {
      local_e4 = *(int *)(*param_3 + local_14 * 4);
      iVar1 = *(int *)(local_e4 + 0x30);
      iVar4 = *(int *)(local_e4 + 0x2c);
      if (iVar4 == iVar1) {
LAB_0091fcd8:
        local_18 = (uint *)(local_e4 + 0x2c);
      }
      else {
        do {
          if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xc)) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar1);
        local_18 = (uint *)(local_e4 + 0x3c);
        if (iVar4 == iVar1) goto LAB_0091fcd8;
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100[0] = local_100[0] & 0xffffff00;
      local_8._1_3_ = 0;
      for (local_7c = *local_18;
          (local_8._0_1_ = 1, *local_18 <= local_7c && (local_7c < local_18[1]));
          local_7c = local_7c + 8) {
        if (local_f0 == 0) {
          puStack_148 = (uint *)0x2;
          puStack_14c = (uint *)&DAT_00df8514;
          local_58 = 0xf;
          local_5c = (undefined4 *)0x0;
          local_6c[0] = local_6c[0] & 0xffffff00;
          local_150 = (uint *)0x91fd39;
          FUN_00409350();
          iVar6 = local_e4;
          puStack_148 = (uint *)(local_e4 + 0x10);
          local_8._0_1_ = 2;
          puStack_14c = (uint *)0x91fd54;
          FUN_00988fa0();
          puStack_148 = local_6c;
          local_8._0_1_ = 3;
          puStack_14c = (uint *)0x91fd69;
          local_150 = (uint *)FUN_00988f20();
          puStack_148 = (uint *)0xffffffff;
          puStack_14c = (uint *)0x0;
          local_8._0_1_ = 4;
          iStack_154 = 0x91fd7c;
          FUN_00448aa0();
          uVar2 = local_34[0];
          if (0xf < local_20) {
            puStack_148 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0091fd8b;
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          if (0xf < local_3c) {
            puStack_148 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0091fdab;
            FUN_00aae91b();
          }
          local_8._0_1_ = 1;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 1;
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (0xf < local_58) {
            puStack_148 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0091fdca;
            FUN_00aae91b();
          }
          local_58 = 0xf;
          local_5c = (undefined4 *)0x0;
          local_6c[0] = local_6c[0] & 0xffffff00;
          local_34[0]._1_3_ = SUB43(uVar2,1);
          if (param_4 == '\0') {
            puStack_148 = (uint *)0x1;
            puStack_14c = (uint *)&DAT_00ded950;
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = (uint)local_34[0]._1_3_ << 8;
            local_150 = (uint *)0x920232;
            local_8._0_1_ = uVar3;
            FUN_00409350();
            local_8._0_1_ = 0x14;
            puStack_148 = (uint *)0x11;
            puStack_14c = (uint *)0xe33d38;
            local_3c = 0xf;
            local_40 = 0;
            local_50[0] = local_50[0] & 0xffffff00;
            local_150 = (uint *)0x92024e;
            FUN_00409350();
            puStack_148 = local_50;
            puStack_14c = (uint *)local_64;
            local_8._0_1_ = 0x15;
            local_150 = (uint *)0x92025f;
            FUN_009a8ee0();
            local_8._0_1_ = 0x16;
            puVar5 = DAT_0125b5e0;
            if (DAT_0125b5e0 == (undefined4 *)0x0) {
              puStack_148 = (uint *)0x180;
              puStack_14c = (uint *)0x920278;
              puStack_148 = (uint *)FUN_00aae9af();
              local_8._0_1_ = 0x17;
              if (puStack_148 == (uint *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                puStack_14c = (uint *)0x92028c;
                local_70 = (undefined1 *)puStack_148;
                puVar5 = (undefined4 *)FUN_00475150();
              }
              local_8._0_1_ = 0x18;
              local_70 = (undefined1 *)0x0;
              if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
                puStack_148 = (uint *)0x1;
                puStack_14c = (uint *)0x9202af;
                (**(code **)*DAT_0125b5e0)();
              }
            }
            DAT_0125b5e0 = puVar5;
            local_8._0_1_ = 0x16;
            iStack_154 = (int)*(undefined8 *)(DAT_0125b5e0 + 0x1b);
            local_150 = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20);
            puStack_14c = (uint *)*(undefined8 *)(DAT_0125b5e0 + 0x1d);
            puStack_148 = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20);
            local_158 = (uint *)0x9202df;
            puStack_148 = (uint *)FUN_009a9880();
            local_8._0_1_ = 0x19;
            puStack_14c = (uint *)0x9202f4;
            FUN_00988fa0();
            puStack_148 = local_34;
            local_8._0_1_ = 0x1a;
            puStack_14c = (uint *)0x92030c;
            local_150 = (uint *)FUN_00988f20();
            puStack_148 = (uint *)0xffffffff;
            puStack_14c = (uint *)0x0;
            local_8._0_1_ = 0x1b;
            iStack_154 = 0x92031f;
            FUN_00448aa0();
            if (0xf < local_84) {
              puStack_148 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_00920331;
              FUN_00aae91b();
            }
            local_84 = 0xf;
            local_88 = 0;
            local_98 = local_98 & 0xffffff00;
            if (0xf < local_bc) {
              puStack_148 = (uint *)local_d0[0];
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_00920361;
              FUN_00aae91b();
            }
            local_bc = 0xf;
            local_c0 = 0;
            local_d0[0] = local_d0[0] & 0xffffff00;
            if (0xf < local_a0) {
              puStack_148 = (uint *)local_b4[0];
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_0092038a;
              FUN_00aae91b();
            }
            local_a0 = 0xf;
            local_a4 = 0;
            local_b4[0] = local_b4[0] & 0xffffff00;
            local_8._0_1_ = 0x1c;
            puStack_148 = (uint *)0x9203ab;
            FUN_009adb70();
            puVar5 = local_60;
            if (local_60 != (undefined4 *)0x0) {
              while( true ) {
                if (puVar5 == local_5c) {
                  puStack_148 = local_60;
                    /* WARNING: Subroutine does not return */
                  puStack_14c = (uint *)&UNK_009203ed;
                  FUN_00aae91b();
                }
                if (0xf < (uint)puVar5[5]) break;
                puVar5[5] = 0xf;
                puVar5[4] = 0;
                *(undefined1 *)puVar5 = 0;
                puVar5 = puVar5 + 8;
              }
              puStack_148 = (uint *)*puVar5;
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_009203ce;
              FUN_00aae91b();
            }
            local_60 = (undefined4 *)0x0;
            local_5c = (undefined4 *)0x0;
            local_58 = 0;
            if (0xf < local_3c) {
              puStack_148 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_0092040c;
              FUN_00aae91b();
            }
joined_r0x00920423:
            local_50[0] = local_50[0] & 0xffffff00;
            local_40 = 0;
            local_3c = 0xf;
            local_58 = 0;
            local_5c = (undefined4 *)0x0;
            local_60 = (undefined4 *)0x0;
            puStack_148 = (uint *)local_34[0];
          }
          else {
            iVar1 = *(int *)(param_1 + 0xc);
            if (((*(int *)(*(int *)(iVar6 + 0x2c) + 4) != iVar1) &&
                (*(int *)(*(int *)(iVar6 + 0x3c) + 4) != iVar1)) &&
               (iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x14) * 4),
               local_74 = *(undefined4 *)(iVar4 + 0xcf8), iVar1 != *(int *)(iVar4 + 0xcfc))) {
              puStack_148 = (uint *)0x1;
              puStack_14c = (uint *)&DAT_00dee2cc;
              local_20 = 0xf;
              local_24 = 0;
              local_34[0] = (uint)local_34[0]._1_3_ << 8;
              local_150 = (uint *)0x91fe44;
              FUN_00409350();
              local_8._0_1_ = 5;
              puStack_148 = (uint *)0x20;
              puStack_14c = (uint *)0xe33d14;
              local_3c = 0xf;
              local_40 = 0;
              local_50[0] = local_50[0] & 0xffffff00;
              local_150 = (uint *)0x91fe60;
              FUN_00409350();
              puStack_148 = local_34;
              puStack_14c = local_50;
              local_150 = (uint *)local_64;
              local_8._0_1_ = 6;
              iStack_154 = 0x91fe7b;
              local_e0 = FUN_009a8ee0();
              local_8._0_1_ = 7;
              puVar5 = DAT_0125b5e0;
              if (DAT_0125b5e0 == (undefined4 *)0x0) {
                puStack_14c = (uint *)0x180;
                local_150 = (uint *)0x91fe98;
                puStack_14c = (uint *)FUN_00aae9af();
                local_8._0_1_ = 8;
                if (puStack_14c == (uint *)0x0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  local_150 = (uint *)0x91feac;
                  local_70 = (undefined1 *)puStack_14c;
                  puVar5 = (undefined4 *)FUN_00475150();
                }
                local_8._0_1_ = 9;
                local_70 = (undefined1 *)0x0;
                if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
                  puStack_14c = (uint *)0x1;
                  local_150 = (uint *)0x91fecf;
                  (**(code **)*DAT_0125b5e0)();
                }
              }
              DAT_0125b5e0 = puVar5;
              local_8._0_1_ = 7;
              local_158 = (uint *)*(undefined8 *)(DAT_0125b5e0 + 0x1b);
              iStack_154 = (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20);
              local_150 = (uint *)*(undefined8 *)(DAT_0125b5e0 + 0x1d);
              puStack_14c = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20);
              iStack_15c = 0x91ff03;
              puStack_14c = (uint *)FUN_009a9880();
              local_70 = auStack_168;
              local_8._0_1_ = 10;
              iStack_154 = 0xf;
              local_158 = (uint *)0x0;
              auStack_168[0] = 0;
              FUN_00409350(&DAT_00dedc20,2);
              local_150 = (uint *)FUN_009c98f0(local_d0,0);
              local_8._0_1_ = 0xb;
              iStack_154 = 0x91ff53;
              FUN_00988fa0();
              local_8._0_1_ = 0xc;
              local_150 = (uint *)0x91ff61;
              FUN_00988f20();
              local_8._0_1_ = 0xd;
              puStack_14c = (uint *)0x91ff6e;
              local_150 = (uint *)FUN_00988f20();
              puStack_148 = (uint *)0xffffffff;
              puStack_14c = (uint *)0x0;
              local_8._0_1_ = 0xe;
              iStack_154 = 0x91ff81;
              FUN_00448aa0();
              if (0xf < local_124) {
                puStack_148 = (uint *)local_138;
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_0091ff96;
                FUN_00aae91b();
              }
              local_124 = 0xf;
              local_138 = local_138 & 0xffffff00;
              if (0xf < local_108) {
                puStack_148 = (uint *)local_11c;
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_0091ffc9;
                FUN_00aae91b();
              }
              local_108 = 0xf;
              local_11c = local_11c & 0xffffff00;
              if (0xf < local_a0) {
                puStack_148 = (uint *)local_b4[0];
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_0091fff2;
                FUN_00aae91b();
              }
              local_a0 = 0xf;
              local_a4 = 0;
              local_b4[0] = local_b4[0] & 0xffffff00;
              if (0xf < local_bc) {
                puStack_148 = (uint *)local_d0[0];
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_0092001b;
                FUN_00aae91b();
              }
              local_bc = 0xf;
              local_c0 = 0;
              local_d0[0] = local_d0[0] & 0xffffff00;
              if (0xf < local_84) {
                puStack_148 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_00920041;
                FUN_00aae91b();
              }
              local_84 = 0xf;
              local_88 = 0;
              local_98 = local_98 & 0xffffff00;
              local_8._0_1_ = 0xf;
              puStack_148 = (uint *)0x92005f;
              FUN_009adb70();
              puVar5 = local_60;
              if (local_60 != (undefined4 *)0x0) {
                while( true ) {
                  if (puVar5 == local_5c) {
                    puStack_148 = local_60;
                    /* WARNING: Subroutine does not return */
                    puStack_14c = (uint *)&UNK_0092009d;
                    FUN_00aae91b();
                  }
                  if (0xf < (uint)puVar5[5]) break;
                  puVar5[5] = 0xf;
                  puVar5[4] = 0;
                  *(undefined1 *)puVar5 = 0;
                  puVar5 = puVar5 + 8;
                }
                puStack_148 = (uint *)*puVar5;
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_0092007e;
                FUN_00aae91b();
              }
              local_60 = (undefined4 *)0x0;
              local_5c = (undefined4 *)0x0;
              local_58 = 0;
              if (0xf < local_3c) {
                puStack_148 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
                puStack_14c = (uint *)&UNK_009200bc;
                FUN_00aae91b();
              }
              goto joined_r0x00920423;
            }
            puStack_148 = (uint *)0x1;
            puStack_14c = (uint *)&DAT_00dee2cc;
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = (uint)local_34[0]._1_3_ << 8;
            local_150 = (uint *)0x9200fe;
            local_8._0_1_ = uVar3;
            FUN_00409350();
            local_8._0_1_ = 0x10;
            iVar1 = *(int *)(iVar6 + 0x30);
            iVar4 = *(int *)(iVar6 + 0x2c);
            bVar7 = iVar4 == iVar1;
            if (!bVar7) {
              do {
                if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xc)) break;
                iVar4 = iVar4 + 8;
              } while (iVar4 != iVar1);
              bVar7 = iVar4 == iVar1;
            }
            puStack_148 = (uint *)(param_1 + 8);
            local_d8 = CONCAT31(local_d8._1_3_,!bVar7);
            puStack_14c = (uint *)0x0;
            local_150 = (uint *)local_d8;
            iStack_154 = param_1 + 0x10;
            local_158 = local_b4;
            iStack_15c = iVar6;
            uStack_160 = 0x920144;
            puStack_148 = (uint *)FUN_00939930();
            local_8._0_1_ = 0x11;
            puStack_14c = (uint *)0x920159;
            FUN_00988fa0();
            puStack_148 = local_34;
            local_8._0_1_ = 0x12;
            puStack_14c = (uint *)0x920171;
            local_150 = (uint *)FUN_00988f20();
            puStack_148 = (uint *)0xffffffff;
            puStack_14c = (uint *)0x0;
            local_8._0_1_ = 0x13;
            iStack_154 = 0x920184;
            FUN_00448aa0();
            if (0xf < local_84) {
              puStack_148 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_00920196;
              FUN_00aae91b();
            }
            local_84 = 0xf;
            local_88 = 0;
            local_98 = local_98 & 0xffffff00;
            if (0xf < local_bc) {
              puStack_148 = (uint *)local_d0[0];
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_009201c6;
              FUN_00aae91b();
            }
            local_bc = 0xf;
            local_c0 = 0;
            local_d0[0] = local_d0[0] & 0xffffff00;
            if (0xf < local_a0) {
              puStack_148 = (uint *)local_b4[0];
                    /* WARNING: Subroutine does not return */
              puStack_14c = (uint *)&UNK_009201ef;
              FUN_00aae91b();
            }
            local_a0 = 0xf;
            local_a4 = 0;
            local_b4[0] = local_b4[0] & 0xffffff00;
            puStack_148 = (uint *)local_34[0];
          }
          local_34[0] = (uint)puStack_148;
          if (0xf < local_20) {
            local_8._0_1_ = 1;
                    /* WARNING: Subroutine does not return */
            puStack_14c = (uint *)&UNK_0092042e;
            FUN_00aae91b();
          }
        }
        local_8._0_1_ = 1;
        if (local_7c != *local_18) {
          puStack_148 = (uint *)0x2;
          puStack_14c = (uint *)&DAT_00df8148;
          local_150 = (uint *)0x92044d;
          FUN_00448740();
        }
        puStack_148 = (uint *)0x92045b;
        local_150 = (uint *)FUN_0055dd40();
        puStack_148 = (uint *)0xffffffff;
        puStack_14c = (uint *)0x0;
        local_8._0_1_ = 0x1d;
        iStack_154 = 0x92046e;
        FUN_00448aa0();
        local_8._0_1_ = 1;
        if (0xf < local_84) {
          puStack_148 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
          puStack_14c = (uint *)&UNK_00920484;
          FUN_00aae91b();
        }
        iVar6 = local_d4;
      }
      puStack_148 = (uint *)0xffffffff;
      puStack_14c = (uint *)0x0;
      local_150 = local_100;
      iStack_154 = 0x9204b0;
      FUN_00448aa0();
      if (local_14 != iVar6 + -1) {
        puStack_148 = (uint *)0x1;
        puStack_14c = (uint *)&DAT_00dee2cc;
        local_150 = (uint *)0x9204c6;
        FUN_00448740();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_ec) {
        puStack_148 = (uint *)local_100[0];
                    /* WARNING: Subroutine does not return */
        puStack_14c = (uint *)&UNK_009204de;
        FUN_00aae91b();
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar6);
  }
  ExceptionList = local_10;
  return param_2;
}

