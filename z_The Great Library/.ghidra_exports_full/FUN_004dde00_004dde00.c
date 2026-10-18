// FUN_004dde00 @ 004dde00 body=[[004dde00, 004dde98] [004ddea0, 004de08c] [004de090, 004de343]]


/* WARNING: Removing unreachable block (ram,0x004de00f) */
/* WARNING: Removing unreachable block (ram,0x004ddecb) */
/* WARNING: Removing unreachable block (ram,0x004ddf7d) */
/* WARNING: Removing unreachable block (ram,0x004ddefa) */

longlong *
FUN_004dde00(int param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint local_88 [4];
  undefined4 local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_c;
  
  iVar5 = param_3;
  local_30 = 0x8000;
  local_38 = 0x8000;
  local_40 = 0x8000;
  local_2c = 0;
  local_34 = 0;
  local_3c = 0;
  local_c = -1;
  lVar14 = __allmul(*param_4,param_4[1],param_4[4],param_4[5]);
  lVar15 = __allmul(lVar14 >> 0xf,param_6,param_7);
  lVar14 = CONCAT44(local_70._4_4_,(uint)local_70);
  local_48 = (int)(lVar15 >> 0xf);
  local_24 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  uVar11 = (undefined4)((ulonglong)(lVar15 >> 0xf) >> 0x20);
  param_3 = 0;
  if (0 < local_24) {
    local_14 = *(int *)(param_1 + 0x6c);
    local_1c = *(int *)(param_1 + 0xd8);
    do {
      uVar10 = (uint)*(byte *)(param_1 + 0x2c + param_3);
      local_70 = lVar14;
      lVar15 = __allmul(*(undefined4 *)(local_14 + uVar10 * 8),
                        *(undefined4 *)(local_14 + 4 + uVar10 * 8),local_48,uVar11);
      lVar15 = lVar15 >> 0xf;
      local_78 = (undefined4)lVar15;
      lVar16 = local_58;
      lVar14 = local_70;
      if (0 < lVar15) {
        uVar6 = (uint)*(byte *)(param_3 + 8 + iVar5);
        uVar10 = *(uint *)(*(int *)(iVar5 + 0x48) + uVar6 * 8);
        lVar16 = __alldiv(uVar10 << 0xf,
                          *(int *)(*(int *)(iVar5 + 0x48) + 4 + uVar6 * 8) << 0xf | uVar10 >> 0x11,
                          lVar15);
        if (CONCAT44(local_2c,local_30) < lVar16) {
          local_50._0_4_ = local_30;
          local_50._4_4_ = local_2c;
          puVar7 = &local_50;
          lVar16 = local_58;
        }
        else {
          local_58 = lVar16;
          puVar7 = &local_58;
        }
        local_30 = *(undefined4 *)puVar7;
        local_2c = *(undefined4 *)((int)puVar7 + 4);
        lVar14 = local_70;
      }
      uVar10 = (uint)*(byte *)(param_1 + 0x98 + param_3);
      iVar9 = *(int *)(local_1c + uVar10 * 8);
      iVar12 = *(int *)(local_1c + 4 + uVar10 * 8);
      local_58 = lVar16;
      if ((-1 < iVar12) && ((0 < iVar12 || (iVar9 != 0)))) {
        local_70 = lVar14;
        lVar14 = __allmul(iVar9,iVar12,local_48,uVar11);
        lVar14 = __allmul(lVar14 >> 0xf,param_8,param_9);
        lVar14 = lVar14 >> 0xf;
        local_88[2] = (int)lVar14;
        if (lVar14 < 1) {
          local_88[0] = 0;
          local_88[1] = 0;
          puVar8 = local_88;
        }
        else {
          uVar6 = (uint)*(byte *)(param_3 + 8 + iVar5);
          uVar10 = *(uint *)(*(int *)(iVar5 + 0x48) + uVar6 * 8);
          uVar17 = __alldiv(uVar10 << 0xf,
                            *(int *)(*(int *)(iVar5 + 0x48) + 4 + uVar6 * 8) << 0xf | uVar10 >> 0x11
                            ,lVar14);
          local_60 = uVar17;
          puVar8 = (uint *)&local_60;
        }
        uVar10 = *puVar8;
        uVar6 = puVar8[1];
        if (((int)uVar6 <= (int)local_3c) && (((int)uVar6 < (int)local_3c || (uVar10 < local_40))))
        {
          local_40 = uVar10;
          local_3c = uVar6;
          local_c = param_3;
        }
        lVar14 = __allmul(DAT_0125cff0,DAT_0125cff4,uVar10,uVar6);
        lVar14 = (lVar14 >> 0xf) + CONCAT44(DAT_0125cf34,DAT_0125cf30);
        if (CONCAT44(local_34,local_38) < lVar14) {
          local_68 = local_38;
          local_64 = local_34;
          puVar8 = &local_68;
          lVar14 = local_70;
        }
        else {
          local_70 = lVar14;
          puVar8 = (uint *)&local_70;
        }
        local_38 = *puVar8;
        local_34 = puVar8[1];
      }
      param_3 = param_3 + 1;
    } while (param_3 < local_24);
  }
  local_70 = lVar14;
  local_50 = __allmul(local_48,uVar11,local_30,local_2c);
  local_50 = local_50 >> 0xf;
  param_5[1] = (int)((ulonglong)local_50 >> 0x20);
  iVar9 = DAT_012587f0;
  *param_5 = (int)local_50;
  iVar12 = 0;
  iVar9 = *(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2;
  lVar14 = local_70;
  if (0 < iVar9) {
    do {
      local_70._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      uVar10 = (uint)*(byte *)(param_1 + 0x2c + iVar12);
      local_48 = *(int *)(*(int *)(param_1 + 0x6c) + uVar10 * 8);
      local_44 = *(int *)(*(int *)(param_1 + 0x6c) + 4 + uVar10 * 8);
      if (local_48 != 0 || local_44 != 0) {
        uVar10 = (uint)*(byte *)(iVar12 + 8 + iVar5);
        iVar3 = *(int *)(iVar5 + 0x48);
        local_28 = *(uint *)(iVar3 + uVar10 * 8);
        local_24 = *(int *)(iVar3 + 4 + uVar10 * 8);
        local_70 = lVar14;
        lVar14 = __allmul(local_48,local_44,local_50);
        uVar10 = (uint)(lVar14 >> 0xf);
        bVar13 = local_28 < uVar10;
        local_28 = local_28 - uVar10;
        bVar2 = *(byte *)(iVar12 + 8 + iVar5);
        local_24 = (local_24 - (int)((ulonglong)(lVar14 >> 0xf) >> 0x20)) - (uint)bVar13;
        if (bVar2 == 0) {
          *(char *)(iVar12 + 8 + iVar5) =
               (char)(*(int *)(iVar5 + 0x4c) - *(int *)(iVar5 + 0x48) >> 3);
          FUN_00423920();
        }
        else {
          *(uint *)(iVar3 + (uint)bVar2 * 8) = local_28;
          *(int *)(iVar3 + 4 + (uint)bVar2 * 8) = local_24;
        }
      }
      uVar10 = (uint)*(byte *)(param_1 + 0x98 + iVar12);
      local_70._0_4_ = *(uint *)(*(int *)(param_1 + 0xd8) + uVar10 * 8);
      iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + 4 + uVar10 * 8);
      if ((-1 < iVar3) && ((0 < iVar3 || ((uint)local_70 != 0)))) {
        uVar6 = (uint)*(byte *)(iVar12 + 8 + iVar5);
        uVar10 = *(uint *)(*(int *)(iVar5 + 0x48) + uVar6 * 8);
        piVar1 = (int *)(iVar5 + 0x48);
        if (iVar12 == local_c) {
          local_1c = *(int *)(*piVar1 + 4 + uVar6 * 8);
          local_20 = uVar10;
          lVar14 = __allmul((uint)local_70,iVar3,param_6,param_7);
          lVar14 = __allmul(lVar14 >> 0xf,param_8,param_9);
          uVar10 = (uint)(lVar14 >> 0xf);
          bVar13 = local_20 < uVar10;
          local_20 = local_20 - uVar10;
          bVar2 = *(byte *)(iVar12 + 8 + iVar5);
          local_1c = (local_1c - (int)((ulonglong)(lVar14 >> 0xf) >> 0x20)) - (uint)bVar13;
          if (bVar2 == 0) {
            *(char *)(iVar12 + 8 + iVar5) = (char)(*(int *)(iVar5 + 0x4c) - *piVar1 >> 3);
LAB_004de24d:
            FUN_00423920();
          }
          else {
            iVar3 = *piVar1;
            *(uint *)(iVar3 + (uint)bVar2 * 8) = local_20;
            *(int *)(iVar3 + 4 + (uint)bVar2 * 8) = local_1c;
          }
        }
        else {
          local_14 = *(int *)(*piVar1 + 4 + uVar6 * 8);
          local_18 = uVar10;
          lVar14 = __allmul((uint)local_70,iVar3,param_6,param_7);
          lVar14 = __allmul(lVar14 >> 0xf,param_8,param_9);
          lVar14 = __allmul(lVar14 >> 0xf,local_40,local_3c);
          uVar10 = (uint)(lVar14 >> 0xf);
          bVar13 = local_18 < uVar10;
          local_18 = local_18 - uVar10;
          bVar2 = *(byte *)(iVar12 + 8 + iVar5);
          local_14 = (local_14 - (int)((ulonglong)(lVar14 >> 0xf) >> 0x20)) - (uint)bVar13;
          if (bVar2 == 0) {
            *(char *)(iVar12 + 8 + iVar5) = (char)(*(int *)(iVar5 + 0x4c) - *piVar1 >> 3);
            goto LAB_004de24d;
          }
          iVar3 = *piVar1;
          *(uint *)(iVar3 + (uint)bVar2 * 8) = local_18;
          *(int *)(iVar3 + 4 + (uint)bVar2 * 8) = local_14;
        }
        bVar2 = *(byte *)(iVar12 + 8 + iVar5);
        iVar3 = *piVar1;
        iVar4 = *(int *)(iVar3 + 4 + (uint)bVar2 * 8);
        if ((iVar4 < 1) && (iVar4 < 0)) {
          local_88[0] = 0;
          local_88[1] = 0;
          if (bVar2 == 0) {
            *(char *)(iVar12 + 8 + iVar5) = (char)(*(int *)(iVar5 + 0x4c) - iVar3 >> 3);
            FUN_00423920();
          }
          else {
            *(undefined4 *)(iVar3 + (uint)bVar2 * 8) = 0;
            *(undefined4 *)(iVar3 + 4 + (uint)bVar2 * 8) = 0;
          }
        }
      }
      iVar12 = iVar12 + 1;
      lVar14 = local_70;
    } while (iVar12 < iVar9);
  }
  lVar14 = __allmul(param_4[2],param_4[3],param_4[4],param_4[5]);
  lVar14 = __allmul(lVar14 >> 0xf,local_30,local_2c);
  lVar14 = __allmul(lVar14 >> 0xf,param_6,param_7);
  lVar14 = __allmul(lVar14 >> 0xf,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  lVar14 = __allmul(local_38,local_34,lVar14 >> 0xf);
  *param_2 = lVar14 >> 0xf;
  return param_2;
}

