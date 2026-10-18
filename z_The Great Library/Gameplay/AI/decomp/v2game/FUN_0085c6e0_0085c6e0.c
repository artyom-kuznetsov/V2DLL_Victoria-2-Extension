// FUN_0085c6e0 @ 0085c6e0 body=[[0085c6e0, 0085cba3] [0085cba7, 0085cbb3] [0085cbb7, 0085cbcb]]


/* WARNING: Removing unreachable block (ram,0x0085c9a4) */
/* WARNING: Removing unreachable block (ram,0x0085c947) */
/* WARNING: Removing unreachable block (ram,0x0085cb9e) */
/* WARNING: Removing unreachable block (ram,0x0085cbae) */
/* WARNING: Removing unreachable block (ram,0x0085cb86) */

undefined8 FUN_0085c6e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_64;
  int local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  uint local_44;
  int iStack_40;
  undefined4 local_3c;
  int local_38;
  int local_30;
  int *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint *local_1c;
  uint *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b6a163;
  local_30 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if (*(char *)(local_30 + 0x67c) == '\0') {
    *param_2 = 0;
    return CONCAT44(param_2,param_2);
  }
  local_4c = 0;
  local_44 = 0;
  iStack_40 = 0;
  local_7c = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  local_8 = 1;
  piVar8 = *(int **)(DAT_012588e8 + 0xb3c);
  local_10 = ExceptionList;
  puVar13 = local_78;
  puVar11 = local_88;
  puVar4 = local_18;
  ExceptionList = &local_10;
joined_r0x0085c783:
  if (piVar8 == (int *)0x0) {
    iVar12 = local_44 + *(uint *)(local_30 + 0x1a0);
    uVar2 = (uint)CARRY4(local_44,*(uint *)(local_30 + 0x1a0));
    iVar7 = iStack_40 + *(int *)(local_30 + 0x1a4);
    iVar14 = iVar7 + uVar2;
    if ((iVar14 < 0) ||
       ((iVar14 == 0 || SCARRY4(iStack_40,*(int *)(local_30 + 0x1a4)) != SCARRY4(iVar7,uVar2) &&
        (iVar12 == 0)))) {
      lVar18 = CONCAT44(iVar12,1000);
    }
    else {
      local_4c._4_4_ = (int)((ulonglong)local_4c >> 0x20);
      uVar2 = local_4c._4_4_ << 0xf;
      uVar3 = (uint)local_4c >> 0x11;
      iVar7 = (uint)local_4c << 0xf;
      local_18 = puVar4;
      uVar17 = __alldiv(iVar7,uVar2 | uVar3,iVar12,iVar14);
      lVar18 = __allmul(uVar17,0x1f40000,0);
      lVar18 = lVar18 >> 0x1e;
    }
    *param_2 = (int)lVar18;
    ExceptionList = local_10;
    return CONCAT44((int)((ulonglong)lVar18 >> 0x20),param_2);
  }
  local_8c = (undefined4 *)0x0;
  local_2c = (int *)piVar8[2];
  iVar7 = *piVar8;
  iVar12 = *(int *)(iVar7 + 0x3c);
  iVar14 = *(int *)(iVar7 + 0x40);
  piVar8 = local_2c;
  if (iVar12 == iVar14) goto LAB_0085c80e;
  do {
    if (*(int *)(iVar12 + 4) == *(int *)(param_1 + 0xc)) break;
    iVar12 = iVar12 + 8;
  } while (iVar12 != iVar14);
  if (iVar12 == iVar14) goto LAB_0085c80e;
  local_18 = (uint *)(iVar7 + 0x2c);
  puVar5 = (uint *)(iVar7 + 0x3c);
  goto LAB_0085c83f;
LAB_0085c80e:
  iVar12 = *(int *)(iVar7 + 0x30);
  iVar14 = *(int *)(iVar7 + 0x2c);
  if (iVar14 == iVar12) goto joined_r0x0085c783;
  do {
    if (*(int *)(iVar14 + 4) == *(int *)(param_1 + 0xc)) break;
    iVar14 = iVar14 + 8;
  } while (iVar14 != iVar12);
  local_18 = (uint *)(iVar7 + 0x3c);
  puVar5 = (uint *)(iVar7 + 0x2c);
  if (iVar14 == iVar12) goto joined_r0x0085c783;
LAB_0085c83f:
  local_1c = puVar5;
  puVar4 = local_18;
  if (local_1c == (uint *)0x0) goto joined_r0x0085c783;
  puVar15 = (undefined4 *)(param_1 + 8);
  local_28 = FUN_00936fc0(iVar7,puVar15,*local_18,0);
  cVar6 = FUN_0093c1e0(puVar15);
  if (cVar6 == '\0') {
    local_24 = *puVar15;
    local_20 = *(undefined4 *)(param_1 + 0xc);
    piVar8 = (int *)FUN_0093d080(&local_20);
    local_11 = '\0';
    if ((int)(*(int *)(*piVar8 + 0x14) - *(int *)(*piVar8 + 0x10) & 0xffffffc0U) < 1)
    goto LAB_0085c8a4;
  }
  local_11 = '\x01';
LAB_0085c8a4:
  local_54 = 0;
  local_5c = 0;
  puVar15 = (undefined4 *)*local_18;
  local_78 = puVar13;
LAB_0085c8c1:
  do {
    if ((puVar15 < (undefined4 *)*local_18) || ((undefined4 *)local_18[1] <= puVar15)) break;
    local_3c = *puVar15;
    puVar10 = puVar15 + 2;
    local_38 = puVar15[1];
    puVar9 = local_7c;
    puVar15 = puVar10;
    if (puVar13 != (undefined4 *)0x0) {
      do {
        if (puVar9[1] == local_38) {
          if (puVar9 != puVar13) goto LAB_0085c8c1;
          break;
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar13);
    }
    if (&local_3c < puVar13) {
      iVar7 = (int)&local_3c >> 3;
      if (puVar13 == (undefined4 *)0x0) {
        FUN_004237e0(1);
        puVar13 = local_78;
      }
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = *(undefined4 *)(iVar7 * 8);
        iVar7 = *(int *)(iVar7 * 8 + 4);
LAB_0085c9cd:
        puVar13[1] = iVar7;
      }
    }
    else {
      if (puVar13 == (undefined4 *)0x0) {
        FUN_004237e0(1);
        puVar13 = local_78;
      }
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = local_3c;
        iVar7 = local_38;
        goto LAB_0085c9cd;
      }
    }
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_38 * 4);
    uVar2 = *(uint *)(iVar7 + 0x1a0);
    puVar13 = puVar13 + 2;
    local_54 = CONCAT44(local_54._4_4_ + *(int *)(iVar7 + 0x1a4) +
                        (uint)CARRY4((uint)local_54,uVar2),(uint)local_54 + uVar2);
    local_78 = puVar13;
  } while( true );
  puVar13 = (undefined4 *)*local_1c;
  local_88 = puVar11;
LAB_0085ca0f:
  do {
    if ((puVar13 < (undefined4 *)*local_1c) || ((undefined4 *)local_1c[1] <= puVar13)) break;
    iVar7 = puVar13[1];
    uVar1 = *puVar13;
    puVar13 = puVar13 + 2;
    local_64 = uVar1;
    local_60 = iVar7;
    if (iVar7 != *(int *)(param_1 + 0xc)) {
      puVar15 = local_8c;
      if (puVar11 != (undefined4 *)0x0) {
        do {
          if (puVar15[1] == iVar7) {
            if (puVar15 != puVar11) goto LAB_0085ca0f;
            break;
          }
          puVar15 = puVar15 + 2;
        } while (puVar15 != puVar11);
      }
      if (&local_64 < puVar11) {
        iVar12 = (int)&local_64 >> 3;
        if (puVar11 == (undefined4 *)0x0) {
          FUN_00810820();
          puVar11 = local_88;
        }
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *(undefined4 *)(iVar12 * 8);
          puVar11[1] = *(undefined4 *)(iVar12 * 8 + 4);
        }
      }
      else {
        if (puVar11 == (undefined4 *)0x0) {
          FUN_00810820();
          puVar11 = local_88;
        }
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uVar1;
          puVar11[1] = iVar7;
        }
      }
      iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar7 * 4);
      uVar2 = *(uint *)(iVar7 + 0x1a0);
      puVar11 = puVar11 + 2;
      local_5c = CONCAT44(local_5c._4_4_ + *(int *)(iVar7 + 0x1a4) +
                          (uint)CARRY4((uint)local_5c,uVar2),(uint)local_5c + uVar2);
      local_88 = puVar11;
    }
  } while( true );
  uVar17 = __alldiv(local_28 << 0x1e,((int)local_28 >> 0x1f) << 0x1e | local_28 >> 2,0x320000,0);
  lVar18 = __allmul(0x8000 - (uint)uVar17,
                    -(uint)(0x8000 < (uint)uVar17) - (int)((ulonglong)uVar17 >> 0x20),(uint)local_54
                    ,local_54._4_4_);
  lVar18 = lVar18 >> 0xf;
  if (local_11 == '\0') {
    uVar17 = __alldiv(DAT_01318de0 << 0x1e,((int)DAT_01318de0 >> 0x1f) << 0x1e | DAT_01318de0 >> 2,
                      0x1f40000,0);
    lVar18 = __allmul(uVar17,lVar18);
    lVar18 = lVar18 >> 0xf;
  }
  local_4c = lVar18 + local_4c;
  bVar16 = CARRY4(local_44,(uint)local_5c);
  local_44 = local_44 + (uint)local_5c;
  iStack_40 = iStack_40 + local_5c._4_4_ + (uint)bVar16;
  piVar8 = local_2c;
  puVar13 = local_78;
  puVar11 = local_88;
  puVar4 = local_18;
  goto joined_r0x0085c783;
}

