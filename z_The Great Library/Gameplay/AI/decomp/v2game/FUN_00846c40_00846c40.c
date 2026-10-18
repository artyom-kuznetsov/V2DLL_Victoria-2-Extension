// FUN_00846c40 @ 00846c40  (requested 00846C40, first bytes: 55 8B EC 81 EC 10 01 00)


/* WARNING: Removing unreachable block (ram,0x0084758b) */
/* WARNING: Removing unreachable block (ram,0x00847073) */

int * FUN_00846c40(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
                  undefined4 *param_6,char param_7)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int extraout_ECX;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 local_110 [28];
  undefined1 local_f4 [80];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  uint *local_58;
  int *local_54;
  longlong local_50;
  int local_48;
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  longlong local_30;
  longlong local_28;
  char local_1a;
  char local_19;
  undefined4 local_18;
  int local_14;
  int local_10;
  char local_9;
  
  iVar5 = *(int *)(DAT_012587e4 + 4);
  iVar6 = *(int *)(iVar5 + param_4[1] * 4);
  local_44 = DAT_012588e8;
  local_54 = *(int **)(param_5 + 0x120);
  local_48 = *(int *)(iVar5 + *(int *)(param_2 + 0x20) * 4);
  bVar2 = 0 < (int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU);
  local_34 = 0;
  local_38 = 0;
  if (bVar2) {
    if (param_6[1] != 0) {
      local_34 = 50000;
      if (*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0x142c) != *(int *)(param_2 + 0x20)) {
        local_34 = 0;
      }
      local_38 = 20000;
      if (*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xbe8) +
                           *(int *)(param_2 + 0x20) * 4) + 0x20) == 0) {
        local_38 = 0;
      }
    }
    local_14 = 10000;
    if (*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe64) != *(int *)(param_2 + 0xe64)) {
      local_14 = 0;
    }
    local_40 = (int *)*param_4;
    local_68 = local_14;
    local_14 = 5000;
    if (*(int *)(*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe64) + 0x50) !=
        *(int *)(*(int *)(param_2 + 0xe64) + 0x50)) {
      local_14 = 0;
    }
    local_60 = local_14;
  }
  else {
    local_14 = 100000;
    if (*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe64) != *(int *)(param_2 + 0xe64)) {
      local_14 = 0;
    }
    local_40 = (int *)*param_4;
    local_68 = local_14;
    local_14 = 50000;
    if (*(int *)(*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe64) + 0x50) !=
        *(int *)(*(int *)(param_2 + 0xe64) + 0x50)) {
      local_14 = 0;
    }
    local_60 = local_14;
  }
  local_10 = 1000;
  if (local_54 == (int *)0x0) {
    *param_1 = 1000;
    return param_1;
  }
  do {
    iVar5 = DAT_012587e4;
    piVar7 = (int *)local_54[2];
    local_14 = *local_54;
    local_54 = piVar7;
    if (local_14 < 0x8a2) {
      if (local_14 == 0x8a1) {
switchD_00846ee0_caseD_942:
        local_5c = *param_4;
        iVar5 = *(int *)(DAT_012587e4 + 4);
        iVar6 = 0;
        if ((*(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe4c) < *(int *)(param_2 + 0xe4c)) &&
           (local_5c = *param_4, 0 < *(int *)(*(int *)(iVar5 + param_4[1] * 4) + 0xe4c))) {
          local_5c = *param_4;
          puVar1 = *(undefined4 **)(*(int *)(iVar5 + param_4[1] * 4) + 0xe44);
          while (puVar1 != (undefined4 *)0x0) {
            uVar11 = *puVar1;
            puVar1 = (undefined4 *)puVar1[2];
            piVar7 = (int *)FUN_00847b60(local_9c,param_2,param_3,uVar11,param_5);
            iVar6 = iVar6 + *piVar7;
          }
        }
        if (local_14 == 0x942) {
          FUN_00401000(0x43fa4001);
          iVar5 = FUN_00b31c00();
          iVar6 = __alldiv((longlong)iVar5 * (longlong)iVar6,1000,0);
        }
        local_10 = local_10 + iVar6;
      }
      else if (local_14 == 0x264) {
        local_10 = local_10 + 1000000;
      }
      else if ((local_14 == 0x6c2) && (*(char *)(param_2 + 0x67c) == '\0')) {
        local_18 = *param_4;
        iVar5 = FUN_005dba20();
        iVar6 = FUN_005dba20();
        if (iVar5 * 2 < iVar6) {
          local_18 = *param_4;
          piVar7 = (int *)FUN_005dc2a0(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4) + 0x7b4
                                       ,local_a0);
          uVar12 = __allmul(*piVar7,*piVar7 >> 0x1f,2000,0);
          iVar5 = __alldiv(uVar12,1000,0);
          piVar7 = (int *)FUN_005dc2a0(param_2 + 0x7b4,local_a4);
          if (iVar5 < *piVar7) {
            local_10 = local_10 + 50000;
          }
        }
      }
    }
    else {
      switch(local_14) {
      case 0x8a2:
        if ((param_6[1] != 0) && (*(char *)(local_48 + 0x31) != '\0')) {
          uVar12 = __alldiv(DAT_01317cb8 << 0x1e,
                            ((int)DAT_01317cb8 >> 0x1f) << 0x1e | DAT_01317cb8 >> 2,0x1f40000,0);
          local_70 = uVar12;
          puVar8 = (uint *)FUN_0047dec0();
          uVar9 = *puVar8;
          iVar5 = puVar8[1] + local_70._4_4_;
          local_80 = local_70;
          puVar8 = (uint *)FUN_0047dec0();
          local_58 = (uint *)(*puVar8 + (uint)local_80);
          local_14 = puVar8[1] + local_80._4_4_ + (uint)CARRY4(*puVar8,(uint)local_80);
          uVar12 = __allmul(uVar9 + (uint)uVar12,iVar5 + (uint)CARRY4(uVar9,(uint)uVar12),0x320000,0
                           );
          local_50 = __alldiv((uint)uVar12 & 0xffff8000,(int)((ulonglong)uVar12 >> 0x20),local_58,
                              local_14);
          if (local_50 < 0x640001) {
            if ((local_50 < 0x100000000) && (local_50 < 0)) {
              local_50 = 0;
            }
          }
          else {
            local_50 = 0x640000;
          }
          iVar5 = *(int *)(*(int *)(local_48 + 0xe64) + 0x50);
          local_88 = *(undefined4 *)(iVar5 + 0x1c);
          local_84 = *(int *)(iVar5 + 0x20);
          local_18 = *param_6;
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_6[1] * 4);
          local_58 = (uint *)(iVar5 + 0x9d8);
          local_1a = '\0';
          local_19 = '\0';
          piVar7 = *(int **)(iVar5 + 0x9d8);
          do {
            do {
              if ((piVar7 < (int *)*local_58) || ((int *)local_58[1] <= piVar7)) goto LAB_00847249;
              iVar5 = *(int *)(*(int *)(local_44 + 0xacc) + *piVar7 * 4);
              iVar6 = *(int *)(iVar5 + 0x14c);
              iVar10 = *(int *)(iVar5 + 0x148);
              local_40 = piVar7 + 1;
              if (iVar10 != iVar6) {
                do {
                  if (*(int *)(iVar10 + 4) == local_84) break;
                  iVar10 = iVar10 + 8;
                } while (iVar10 != iVar6);
                if (iVar10 != iVar6) {
                  local_1a = '\x01';
                  goto LAB_00847249;
                }
              }
              piVar7 = local_40;
            } while (((int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) <
                      0x744) || (*(char *)(*(int *)(iVar5 + 0x5c) + 0x1d) == '\0'));
            piVar7 = (int *)FUN_004fb6f0();
            iVar6 = *piVar7;
            local_14 = 0x4b;
            (**(code **)(**(int **)(iVar5 + 0x16c) + 0x2c))(local_f4);
            local_9 = FUN_0040b360();
            FUN_00408ad0();
            if (local_9 != '\0') {
              local_14 = 0;
            }
            (**(code **)(**(int **)(iVar5 + 0x16c) + 0x2c))(local_110);
            local_9 = FUN_0040b360();
            FUN_00408ad0();
            iVar5 = 0x32;
            if (local_9 == '\0') {
              iVar5 = local_14;
            }
            piVar7 = local_40;
          } while (iVar5 < iVar6 / 1000);
          local_19 = '\x01';
LAB_00847249:
          iVar5 = local_60 + local_68;
          uVar12 = __allmul((undefined4)local_50,(int)((ulonglong)local_50 >> 0x20),0x1f40000,0);
          local_10 = local_10 +
                     (-(uint)(local_1a != '\0') & 100) * 1000 +
                     iVar5 + ((uint)uVar12 >> 0x1e | (int)((ulonglong)uVar12 >> 0x20) << 2);
          FUN_008485f0(&local_64);
          if (local_64 < 1) {
            local_10 = 0;
          }
          else {
            piVar7 = *(int **)(DAT_012588e8 + 0xbe0);
            iVar5 = 0;
            while ((*(int **)(DAT_012588e8 + 0xbe0) <= piVar7 &&
                   (piVar7 < *(int **)(DAT_012588e8 + 0xbe4)))) {
              local_90 = *(undefined4 *)(*piVar7 + 0x1c);
              local_8c = *(int *)(*piVar7 + 0x20);
              piVar7 = piVar7 + 1;
              if ((local_8c != 0) && (local_8c != *(int *)(param_2 + 0x20))) {
                FUN_008485f0(&local_74);
                if (iVar5 < local_74) {
                  iVar5 = local_74;
                }
              }
            }
            if ((local_64 < iVar5) && (0 < iVar5)) {
              if (iVar5 == 0) {
                iVar5 = -1;
              }
              else if (local_64 + 0x189373U < 0x39580e) {
                iVar5 = (local_64 * 1000) / iVar5;
              }
              else {
                uVar12 = __allmul(local_64,local_64 >> 0x1f,1000,0);
                iVar5 = __alldiv(uVar12,iVar5,iVar5 >> 0x1f);
              }
              local_10 = __alldiv((longlong)iVar5 * (longlong)local_10,1000,0);
            }
          }
          if ((local_19 != '\0') &&
             (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_6[1] * 4),
             local_18 = *(undefined4 *)(iVar5 + 0x1428), *(int *)(iVar5 + 0x142c) == 0)) {
            local_10 = local_10 + 200000;
          }
        }
        break;
      case 0x8a4:
        local_18 = *param_4;
        cVar4 = FUN_00534a50();
        if (cVar4 == '\0') {
          local_18 = *param_4;
          iVar5 = *(int *)(iVar5 + 4);
          if (*(char *)(param_2 + 0x31) == *(char *)(*(int *)(iVar5 + param_4[1] * 4) + 0x31)) {
            local_18 = *param_4;
            local_9 = FUN_0053d640();
            cVar4 = FUN_0053d640();
            if ((cVar4 == local_9) &&
               (local_18 = *param_4,
               *(char *)(param_2 + 0x12d0) == *(char *)(*(int *)(iVar5 + param_4[1] * 4) + 0x12d0)))
            goto LAB_008474ed;
          }
        }
        else {
LAB_008474ed:
          local_30 = 0x320000;
          if ((*(int *)(param_2 + 0x1a0) != 0 || *(int *)(param_2 + 0x1a4) != 0) && (bVar2)) {
            local_18 = *param_4;
            iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4);
            uVar9 = *(uint *)(iVar5 + 0x1a0);
            uVar12 = __alldiv(uVar9 << 0xf,*(int *)(iVar5 + 0x1a4) << 0xf | uVar9 >> 0x11,
                              *(int *)(param_2 + 0x1a0),*(int *)(param_2 + 0x1a4));
            local_30 = __allmul(uVar12,0x320000,0);
            local_30 = local_30 >> 0xf;
            if (local_30 < 0) {
LAB_00847593:
              local_30 = 0;
            }
            else if ((local_30 < 0x100000000) && ((uint)local_30 < 0x640001)) {
              if (local_30 < 0x190000) goto LAB_00847593;
            }
            else {
              local_30 = 0x640000;
            }
          }
          lVar3 = local_30;
          if (param_3 == 0) {
            local_18 = *param_4;
            cVar4 = FUN_00534a50();
            if (cVar4 == '\0') {
              uVar11 = DAT_00f17898;
              if (param_7 == '\0') {
                uVar11 = 0x3dcccccd;
              }
              FUN_00408d50(uVar11);
              FUN_0043a620();
              lVar3 = local_30;
            }
          }
LAB_00847601:
          uVar12 = __allmul(lVar3,0x1f40000,0);
          local_10 = local_10 + ((uint)uVar12 >> 0x1e | (int)((ulonglong)uVar12 >> 0x20) << 2);
        }
        break;
      case 0x8a5:
        local_18 = *param_4;
        cVar4 = FUN_00534a50();
        if (cVar4 != '\0') {
LAB_0084769c:
          local_28 = 0x320000;
          if ((*(int *)(param_2 + 0x198) != 0 || *(int *)(param_2 + 0x19c) != 0) && (bVar2)) {
            local_18 = *param_4;
            iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4);
            uVar9 = *(uint *)(iVar5 + 0x198);
            uVar12 = __alldiv(uVar9 << 0xf,*(int *)(iVar5 + 0x19c) << 0xf | uVar9 >> 0x11,
                              *(int *)(param_2 + 0x198),*(int *)(param_2 + 0x19c));
            local_28 = __allmul(uVar12,0x320000,0);
            local_28 = local_28 >> 0xf;
            if (local_28 < 0) {
LAB_0084773e:
              local_28 = 0;
            }
            else if ((local_28 < 0x100000000) && ((uint)local_28 < 0x640001)) {
              if ((local_28 < 0x100000000) && (local_28 < 0)) goto LAB_0084773e;
            }
            else {
              local_28 = 0x640000;
            }
          }
          lVar3 = local_28;
          if (param_3 == 0) {
            local_18 = *param_4;
            cVar4 = FUN_00534a50();
            if (cVar4 == '\0') {
              uVar11 = DAT_00f17898;
              if (param_7 == '\0') {
                uVar11 = 0x3dcccccd;
              }
              FUN_00408d50(uVar11);
              FUN_0043a620();
              lVar3 = local_28;
            }
          }
          goto LAB_00847601;
        }
        local_18 = *param_4;
        iVar5 = *(int *)(iVar5 + 4);
        if (*(char *)(param_2 + 0x31) == *(char *)(*(int *)(iVar5 + param_4[1] * 4) + 0x31)) {
          local_18 = *param_4;
          local_9 = FUN_0053d640();
          cVar4 = FUN_0053d640();
          if ((cVar4 == local_9) &&
             (local_18 = *param_4,
             *(char *)(param_2 + 0x12d0) == *(char *)(*(int *)(iVar5 + param_4[1] * 4) + 0x12d0)))
          goto LAB_0084769c;
        }
        break;
      case 0x8a7:
        if (param_6[1] != 0) {
          local_10 = local_10 + local_38 + local_34 + local_68 + local_60;
          if (bVar2) {
            iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0xbe8) + param_4[1] * 4) + 0x3c) / 1000;
            if (iVar5 < 1) {
              local_10 = 0;
            }
            else {
              iVar5 = 0x78 - iVar5;
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              local_10 = local_10 + iVar5 * -1000;
            }
            local_18 = *param_4;
            if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4) + 0x31) == '\0') {
              local_18 = *param_4;
              if (*(int *)(param_2 + 0x1404) <
                  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4) + 0x1404)) {
                local_10 = 0;
              }
            }
            else {
              local_10 = 0;
            }
          }
          if ((*(char *)(param_2 + 0x12d0) == '\0') ||
             (local_18 = *param_4,
             *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4) + 0x12d0) == '\0')) {
            local_10 = 0;
          }
        }
        break;
      case 0x8a8:
        local_18 = *param_4;
        cVar4 = FUN_00534a50();
        if (cVar4 == '\0') {
          local_18 = *param_4;
          iVar6 = *(int *)(iVar5 + 4);
          if (*(char *)(param_2 + 0x31) == *(char *)(*(int *)(iVar6 + param_4[1] * 4) + 0x31)) {
            local_18 = *param_4;
            local_9 = FUN_0053d640();
            cVar4 = FUN_0053d640();
            if ((cVar4 == local_9) &&
               (local_18 = *param_4,
               *(char *)(extraout_ECX + 0x12d0) ==
               *(char *)(*(int *)(iVar6 + param_4[1] * 4) + 0x12d0))) goto LAB_00847906;
          }
        }
        else {
LAB_00847906:
          iVar6 = *(int *)(*(int *)(param_2 + 0xbcc) + 0x28c);
          iVar10 = 100000;
          if ((*(int *)(param_2 + 0xea0) + iVar6 != 0) && (bVar2)) {
            local_18 = *param_4;
            iVar6 = *(int *)(param_2 + 0xea0) + iVar6;
            iVar5 = *(int *)(*(int *)(iVar5 + 4) + param_4[1] * 4);
            iVar5 = *(int *)(*(int *)(iVar5 + 0xbcc) + 0x28c) + *(int *)(iVar5 + 0xea0);
            if (iVar6 == 0) {
              iVar6 = -1;
            }
            else if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
              uVar12 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
              local_14 = (int)((ulonglong)uVar12 >> 0x20);
              iVar6 = __alldiv(uVar12,iVar6,iVar6 >> 0x1f);
            }
            else {
              iVar6 = (iVar5 * 1000) / iVar6;
            }
            uVar12 = __allmul(iVar6,iVar6 >> 0x1f,100000,0);
            iVar10 = __alldiv(uVar12,1000,0);
            if (iVar10 < 0x30d41) {
              if (iVar10 < 50000) {
                iVar10 = 0;
              }
            }
            else {
              iVar10 = 200000;
            }
          }
          if (param_3 == 0) {
            local_18 = *param_4;
            cVar4 = FUN_00534a50();
            if (cVar4 == '\0') {
              if (param_7 == '\0') {
                uVar11 = 0x42c90000;
              }
              else {
                uVar11 = 0x43fa4001;
              }
              FUN_00401000(uVar11);
              iVar5 = FUN_00b31c00();
              iVar10 = __alldiv((longlong)iVar5 * (longlong)iVar10,1000,0);
            }
          }
          local_10 = local_10 + iVar10;
        }
        break;
      case 0x8aa:
        local_98 = 0;
        if (param_6[1] != 0) {
          local_18 = *param_4;
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4);
          piVar7 = *(int **)(iVar5 + 0x9d8);
          do {
            do {
              if ((piVar7 < *(int **)(iVar5 + 0x9d8)) || (*(int **)(iVar5 + 0x9dc) <= piVar7)) {
                local_98._0_4_ = 0;
                uVar9 = (uint)local_98;
                goto LAB_00847456;
              }
              iVar6 = *(int *)(*(int *)(local_44 + 0xacc) + *piVar7 * 4);
              iVar10 = *(int *)(iVar6 + 0x14c);
              iVar6 = *(int *)(iVar6 + 0x148);
              piVar7 = piVar7 + 1;
            } while (iVar6 == iVar10);
            do {
              if (*(int *)(iVar6 + 4) ==
                  *(int *)(*(int *)(*(int *)(local_48 + 0xe64) + 0x50) + 0x20)) break;
              iVar6 = iVar6 + 8;
            } while (iVar6 != iVar10);
          } while (iVar6 == iVar10);
          uVar9 = 0x320000;
LAB_00847456:
          local_10 = local_10 + (uVar9 >> 0xf) * 1000;
        }
        break;
      case 0x942:
        goto switchD_00846ee0_caseD_942;
      case 0x975:
      case 0x976:
        local_10 = local_10 + 100000;
      }
    }
    if (local_54 == (int *)0x0) {
      *param_1 = local_10;
      return param_1;
    }
  } while( true );
}

