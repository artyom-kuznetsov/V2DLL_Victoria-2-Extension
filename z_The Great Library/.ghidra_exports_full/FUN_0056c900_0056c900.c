// FUN_0056c900 @ 0056c900 body=[[0056c900, 0056cd57] [0056cd60, 0056d00c] [0056d010, 0056d08f] [0056d093, 0056d3fb] [0056d3ff, 0056d441]]


void FUN_0056c900(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar11 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cc69;
  local_10 = ExceptionList;
  iVar14 = (int)param_3 >> 0x1f;
  ExceptionList = &local_10;
  uVar16 = __allmul(*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x1c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x3c),*(int *)(param_2 + 0x3c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x40),*(int *)(param_2 + 0x40) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x44),*(int *)(param_2 + 0x44) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x48),*(int *)(param_2 + 0x48) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x4c),*(int *)(param_2 + 0x4c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x50),*(int *)(param_2 + 0x50) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x54),*(int *)(param_2 + 0x54) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x58),*(int *)(param_2 + 0x58) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x5c),*(int *)(param_2 + 0x5c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x60),*(int *)(param_2 + 0x60) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 100),*(int *)(param_2 + 100) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x68),*(int *)(param_2 + 0x68) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x6c),*(int *)(param_2 + 0x6c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x70),*(int *)(param_2 + 0x70) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x74),*(int *)(param_2 + 0x74) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x7c),*(int *)(param_2 + 0x7c) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + iVar5;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_2 + 0x78);
  iVar5 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) & 0xfffffffcU)) {
    do {
      piVar9 = (int *)(*(int *)(param_1 + 8) + iVar5 * 4);
      *piVar9 = *piVar9 + *(int *)(*(int *)(param_2 + 8) + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
  }
  uVar16 = __alldiv(param_3 << 0x1e,
                    (iVar14 << 0xf | param_3 >> 0x11) << 0xf | (param_3 & 0x1ffff) >> 2,0x1f40000,0)
  ;
  lVar17 = __allmul(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),uVar16);
  uVar6 = (uint)(lVar17 >> 0xf);
  puVar1 = (uint *)(param_1 + 0x80);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  *(int *)(param_1 + 0x84) =
       *(int *)(param_1 + 0x84) + (int)((ulonglong)(lVar17 >> 0xf) >> 0x20) +
       (uint)CARRY4(uVar8,uVar6);
  iVar5 = 0;
  if (0 < (int)(*(int *)(param_2 + 0x8c) - *(int *)(param_2 + 0x88) & 0xfffffffcU)) {
    do {
      iVar7 = __alldiv((longlong)*(int *)(*(int *)(param_2 + 0x88) + iVar5 * 4) *
                       (longlong)(int)param_3,1000,0);
      piVar9 = (int *)(*(int *)(param_1 + 0x88) + iVar5 * 4);
      *piVar9 = *piVar9 + iVar7;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x8c) - *(int *)(param_2 + 0x88) >> 2);
  }
  local_48[3] = iVar14;
  uVar16 = __allmul(*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x20) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x24),*(int *)(param_2 + 0x24) >> 0x1f,param_3,local_48[3]);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x28) >> 0x1f,param_3,local_48[3]);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x2c),*(int *)(param_2 + 0x2c) >> 0x1f,param_3,local_48[3]);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x30) >> 0x1f,param_3,local_48[3]);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar5;
  if (*(char *)(param_2 + 0x2a4) != '\0') {
    *(undefined1 *)(param_1 + 0x2a4) = 1;
  }
  if (*(char *)(param_2 + 0x2a5) != '\0') {
    *(undefined1 *)(param_1 + 0x2a5) = 1;
  }
  uVar16 = __alldiv(*(uint *)(param_2 + 0xd8) << 0xf,
                    *(int *)(param_2 + 0xdc) << 0xf | *(uint *)(param_2 + 0xd8) >> 0x11,0x320000,0);
  puVar1 = (uint *)(param_1 + 0xd8);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + (uint)uVar16;
  iVar5 = DAT_012587f0;
  *(int *)(param_1 + 0xdc) =
       *(int *)(param_1 + 0xdc) + (int)((ulonglong)uVar16 >> 0x20) +
       (uint)CARRY4(uVar8,(uint)uVar16);
  iVar7 = param_2 - param_1;
  local_1c = 0;
  local_20 = (uint *)(param_1 + 0xe0);
  do {
    param_1 = 0;
    do {
      uVar6 = *(uint *)(iVar7 + (int)local_20);
      uVar8 = *local_20;
      *local_20 = *local_20 + uVar6;
      local_20[1] = local_20[1] + *(int *)(iVar7 + 4 + (int)local_20) + (uint)CARRY4(uVar8,uVar6);
      iVar15 = 0;
      iVar12 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
      if (0 < iVar12) {
        local_24 = (param_1 + 0x17 + local_1c) * 0x10;
        do {
          piVar9 = (int *)(*(int *)(local_24 + iVar11) + iVar15 * 4);
          *piVar9 = *piVar9 + *(int *)(*(int *)(local_24 + param_2) + iVar15 * 4);
          iVar15 = iVar15 + 1;
          iVar5 = DAT_012587f0;
        } while (iVar15 < iVar12);
      }
      param_1 = param_1 + 1;
      local_20 = local_20 + 2;
    } while (param_1 < 4);
    local_1c = local_1c + 4;
  } while (local_1c < 0x10);
  local_1c = *(int *)(DAT_012588e8 + 0xbcc);
  bVar4 = false;
  if ((int)(*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) & 0xfffffffcU) <
      (int)(*(int *)(param_2 + 0x9c) - *(int *)(param_2 + 0x98) & 0xfffffffcU)) {
    local_28 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc);
  }
  else {
    local_28 = *(int *)(param_2 + 0x9c) - *(int *)(param_2 + 0x98);
  }
  local_28 = local_28 >> 2;
  local_18 = 0;
  if (0 < local_28) {
    do {
      iVar7 = local_1c;
      iVar5 = *(int *)(*(int *)(param_2 + 0x98) + local_18 * 4);
      if (iVar5 != 0) {
        local_38 = *(int *)(*(int *)(iVar11 + 0x98) + local_18 * 4);
        *(int *)(*(int *)(iVar11 + 0x98) + local_18 * 4) = iVar5;
        if (*(int *)(*(int *)(iVar11 + 0x98) + local_18 * 4) == 1) {
          iVar5 = *(int *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) + local_18 * 4) + 8);
          local_48[1] = DAT_00f0ae14;
          bVar2 = *(byte *)(local_1c + 0x3a4 + iVar5);
          local_48[0] = DAT_00f0ae10;
          if (bVar2 == 0) {
            puVar1 = (uint *)(local_1c + 0x3e4);
            *(char *)(local_1c + 0x3a4 + iVar5) =
                 (char)(*(int *)(local_1c + 1000) - *(int *)(local_1c + 0x3e4) >> 3);
            piVar9 = *(int **)(local_1c + 1000);
            if ((local_48 < piVar9) && (piVar3 = (int *)*puVar1, piVar3 <= local_48)) {
              local_24 = (int)local_48 - (int)piVar3 >> 3;
              if (piVar9 == *(int **)(local_1c + 0x3ec)) {
                uVar8 = (int)piVar9 - (int)piVar3 >> 3;
                if (0x1ffffffe < uVar8) {
LAB_0056d3c7:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar8 = uVar8 + 1;
                uVar6 = (int)*(int **)(local_1c + 0x3ec) - (int)piVar3 >> 3;
                if (uVar6 < uVar8) {
                  if (0x1fffffff - (uVar6 >> 1) < uVar6) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = uVar6 + (uVar6 >> 1);
                  }
                  if (uVar6 < uVar8) {
                    uVar6 = uVar8;
                  }
                  FUN_004237e0(uVar6);
                }
              }
              piVar3 = (int *)(*puVar1 + local_24 * 8);
              piVar9 = *(int **)(iVar7 + 1000);
              if (piVar9 != (int *)0x0) {
                *piVar9 = *piVar3;
                iVar5 = piVar3[1];
LAB_0056cfaf:
                piVar9[1] = iVar5;
              }
            }
            else {
              if (piVar9 == *(int **)(local_1c + 0x3ec)) {
                uVar8 = (int)((int)piVar9 - *puVar1) >> 3;
                if (0x1ffffffe < uVar8) goto LAB_0056d3c7;
                uVar8 = uVar8 + 1;
                uVar6 = (int)((int)*(int **)(local_1c + 0x3ec) - *puVar1) >> 3;
                if (uVar6 < uVar8) {
                  if (0x1fffffff - (uVar6 >> 1) < uVar6) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = uVar6 + (uVar6 >> 1);
                  }
                  if (uVar6 < uVar8) {
                    uVar6 = uVar8;
                  }
                  FUN_004237e0(uVar6);
                }
              }
              piVar9 = *(int **)(iVar7 + 1000);
              if (piVar9 != (int *)0x0) {
                *piVar9 = local_48[0];
                iVar5 = local_48[1];
                goto LAB_0056cfaf;
              }
            }
            *(int *)(iVar7 + 1000) = *(int *)(iVar7 + 1000) + 8;
          }
          else {
            piVar9 = (int *)(*(int *)(local_1c + 0x3e4) + (uint)bVar2 * 8);
            *piVar9 = DAT_00f0ae10;
            piVar9[1] = DAT_00f0ae14;
          }
          local_20 = (uint *)0x0;
          if (DAT_0131bb34 == 0) {
            local_34 = FUN_00aae9af(0x188);
            local_8 = 0;
            if (local_34 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_0041a160();
            }
            iVar7 = DAT_0131bb34;
            local_8 = 1;
            local_34 = 0;
            if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
              FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(iVar7);
            }
            local_8 = 0xffffffff;
            DAT_0131bb34 = iVar5;
          }
          local_34 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
          if (0 < local_34) {
            do {
              if (DAT_0131bb34 == 0) {
                local_30 = FUN_00aae9af(0x188);
                local_8 = 2;
                if (local_30 == 0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = FUN_0041a160();
                }
                iVar7 = DAT_0131bb34;
                local_8 = 3;
                local_30 = 0;
                if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
                  FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(iVar7);
                }
                local_8 = 0xffffffff;
                DAT_0131bb34 = iVar5;
              }
              iVar5 = *(int *)(*(int *)(DAT_0131bb34 + 0xc) + (int)local_20 * 4);
              FID_conflict__memcpy((void *)(iVar5 + 0x118),(void *)(iVar5 + 0x220),DAT_012587f4);
              local_2c = (int *)(iVar5 + 0x158);
              local_24 = *(int *)(iVar5 + 0x264) - *(int *)(iVar5 + 0x260) >> 3;
              FUN_0043a880();
              iVar7 = 1;
              if (1 < local_24) {
                do {
                  puVar10 = (undefined4 *)(*(int *)(iVar5 + 0x260) + iVar7 * 8);
                  puVar13 = (undefined4 *)(*local_2c + iVar7 * 8);
                  *puVar13 = *puVar10;
                  iVar7 = iVar7 + 1;
                  puVar13[1] = puVar10[1];
                } while (iVar7 < local_24);
              }
              FUN_0047dd30(local_1c + 0x39c);
              FID_conflict__memcpy((void *)(iVar5 + 0x170),(void *)(iVar5 + 0x278),DAT_012587f4);
              local_2c = (int *)(iVar5 + 0x1b0);
              local_24 = *(int *)(iVar5 + 700) - *(int *)(iVar5 + 0x2b8) >> 3;
              FUN_0043a880();
              iVar7 = 1;
              if (1 < local_24) {
                do {
                  puVar10 = (undefined4 *)(*(int *)(iVar5 + 0x2b8) + iVar7 * 8);
                  puVar13 = (undefined4 *)(*local_2c + iVar7 * 8);
                  *puVar13 = *puVar10;
                  iVar7 = iVar7 + 1;
                  puVar13[1] = puVar10[1];
                } while (iVar7 < local_24);
              }
              FUN_0047dd30(local_1c + 0x39c);
              local_30 = iVar5 + 0x1c0;
              FID_conflict__memcpy((void *)(iVar5 + 0x1c8),(void *)(iVar5 + 0x2d0),DAT_012587f4);
              local_2c = (int *)(iVar5 + 0x208);
              local_24 = *(int *)(iVar5 + 0x314) - *(int *)(iVar5 + 0x310) >> 3;
              FUN_0043a880();
              iVar7 = 1;
              if (1 < local_24) {
                do {
                  puVar10 = (undefined4 *)(*(int *)(iVar5 + 0x310) + iVar7 * 8);
                  puVar13 = (undefined4 *)(*local_2c + iVar7 * 8);
                  *puVar13 = *puVar10;
                  iVar7 = iVar7 + 1;
                  puVar13[1] = puVar10[1];
                } while (iVar7 < local_24);
              }
              FUN_0047dd30(local_1c + 0x39c);
              local_20 = (uint *)((int)local_20 + 1);
            } while ((int)local_20 < local_34);
          }
        }
        if (local_38 != *(int *)(*(int *)(iVar11 + 0x98) + local_18 * 4)) {
          bVar4 = true;
        }
      }
      local_18 = local_18 + 1;
      iVar5 = DAT_012587f0;
    } while (local_18 < local_28);
  }
  iVar7 = 0;
  iVar5 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
  if (0 < iVar5) {
    do {
      piVar9 = (int *)(*(int *)(iVar11 + 0x160) + iVar7 * 4);
      *piVar9 = *piVar9 + *(int *)(*(int *)(param_2 + 0x160) + iVar7 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  *(int *)(iVar11 + 0x270) = *(int *)(iVar11 + 0x270) + *(int *)(param_2 + 0x270);
  *(int *)(iVar11 + 0x274) = *(int *)(iVar11 + 0x274) + *(int *)(param_2 + 0x274);
  *(int *)(iVar11 + 0x278) = *(int *)(iVar11 + 0x278) + *(int *)(param_2 + 0x278);
  *(int *)(iVar11 + 0x27c) = *(int *)(iVar11 + 0x27c) + *(int *)(param_2 + 0x27c);
  *(int *)(iVar11 + 0x280) = *(int *)(iVar11 + 0x280) + *(int *)(param_2 + 0x280);
  *(int *)(iVar11 + 0x284) = *(int *)(iVar11 + 0x284) + *(int *)(param_2 + 0x284);
  *(int *)(iVar11 + 0x288) = *(int *)(iVar11 + 0x288) + *(int *)(param_2 + 0x288);
  *(int *)(iVar11 + 0x28c) = *(int *)(iVar11 + 0x28c) + *(int *)(param_2 + 0x28c);
  *(int *)(iVar11 + 0x290) = *(int *)(iVar11 + 0x290) + *(int *)(param_2 + 0x290);
  *(int *)(iVar11 + 0x298) = *(int *)(iVar11 + 0x298) + *(int *)(param_2 + 0x298);
  local_48[3] = iVar14;
  uVar16 = __allmul(*(int *)(param_2 + 0x38),*(int *)(param_2 + 0x38) >> 0x1f,param_3,iVar14);
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(iVar11 + 0x38) = *(int *)(iVar11 + 0x38) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x29c),*(int *)(param_2 + 0x29c) >> 0x1f,param_3,local_48[3])
  ;
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(iVar11 + 0x29c) = *(int *)(iVar11 + 0x29c) + iVar5;
  uVar16 = __allmul(*(int *)(param_2 + 0x2a0),*(int *)(param_2 + 0x2a0) >> 0x1f,param_3,local_48[3])
  ;
  iVar5 = __alldiv(uVar16,1000,0);
  *(int *)(iVar11 + 0x2a0) = *(int *)(iVar11 + 0x2a0) + iVar5;
  if (bVar4) {
    if (DAT_0131bb34 == 0) {
      iVar11 = FUN_00aae9af(0x188);
      local_8 = 4;
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_0041a160();
      }
      iVar5 = DAT_0131bb34;
      local_8 = 5;
      if ((iVar11 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar5);
      }
      local_8 = 0xffffffff;
      DAT_0131bb34 = iVar11;
    }
    FUN_0096f2e0(DAT_0131bb34);
    if (*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(1);
    }
  }
  ExceptionList = local_10;
  return;
}

