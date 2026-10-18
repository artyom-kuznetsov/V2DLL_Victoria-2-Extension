// FUN_0081fb00 @ 0081fb00  (requested 0081FB00, first bytes: 55 8B EC 6A FF 68 BE 8D)


/* WARNING: Removing unreachable block (ram,0x0081ff29) */
/* WARNING: Removing unreachable block (ram,0x0081fe1a) */
/* WARNING: Removing unreachable block (ram,0x00820110) */
/* WARNING: Removing unreachable block (ram,0x0081ff5e) */

void FUN_0081fb00(int param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 local_170 [8];
  int local_168;
  int local_158;
  int local_148;
  int local_138;
  undefined1 local_100 [72];
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int *local_a4;
  int local_9c [7];
  longlong local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58dbe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_(local_170,0x10,7,FUN_0084a380,FUN_00849e90);
  local_8 = 0;
  local_60 = *(undefined4 *)(param_1 + 0x30);
  local_20 = *(int *)(DAT_012587e4 + 4);
  iVar12 = *(int *)(local_20 + *(int *)(param_1 + 0x34) * 4);
  local_54 = iVar12;
  uVar15 = FUN_00b31c36();
  local_5c = (undefined4)((ulonglong)uVar15 >> 0x20);
  FUN_0047e3e0(iVar12 + 0xec4,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
  local_50 = __allmul((int)uVar15,local_5c,(undefined4)local_48,local_48._4_4_);
  local_50 = local_50 >> 0xf;
  uVar7 = *(uint *)(*(int *)(DAT_012586dc + 0x20) + 0xb8);
  uVar10 = (undefined4)((ulonglong)local_50 >> 0x20);
  local_48 = local_50;
  uVar15 = __alldiv(uVar7 << 0x1e,
                    (((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11) << 0xf | (uVar7 & 0x1ffff) >> 2,
                    0x1f40000,0);
  local_70 = __allmul(uVar15,*(undefined4 *)(iVar12 + 0x1560),*(undefined4 *)(iVar12 + 0x1564));
  local_70 = local_70 >> 0xf;
  local_9c[0] = FUN_005dc0a0(0);
  local_9c[1] = FUN_005dc0a0(1);
  local_9c[2] = FUN_005dc0a0(2);
  local_9c[3] = FUN_005dc0a0(3);
  local_60 = *(undefined4 *)(param_1 + 0x30);
  uVar7 = *(uint *)(*(int *)(*(int *)(local_20 + *(int *)(param_1 + 0x34) * 4) + 0xa60) + 0x48);
  local_80 = __alldiv(uVar7 << 0x1e,
                      (((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11) << 0xf | (uVar7 & 0x1ffff) >> 2,
                      0x1f40000,0);
  local_24 = 0;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_a4 = *(int **)(iVar12 + 0x9d8);
  piVar8 = local_3c;
  lVar16 = local_70;
  while ((local_3c = piVar8, local_70._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20),
         uVar5 = local_70._4_4_, local_70 = lVar16, *(int **)(iVar12 + 0x9d8) <= local_a4 &&
         (local_a4 < *(int **)(iVar12 + 0x9dc)))) {
    local_20 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *local_a4 * 4);
    local_2c = *(int *)(local_20 + 0x4c);
    local_24 = local_24 + *(int *)(local_20 + 0x50);
    local_1c = *(int **)(local_20 + 0xd8);
    local_a4 = local_a4 + 1;
    piVar3 = local_38;
    while (local_38 = piVar3, local_1c != (int *)0x0) {
      piVar8 = (int *)*local_1c;
      local_1c = (int *)local_1c[2];
      local_28 = piVar8;
      cVar6 = (**(code **)(*piVar8 + 0x34))();
      piVar3 = local_38;
      if ((cVar6 != '\0') && (iVar11 = piVar8[0x22], *(char *)(iVar11 + 0x39) != '\0')) {
        local_9c[*(int *)(iVar11 + 0x34)] = local_9c[*(int *)(iVar11 + 0x34)] + 1;
        FUN_0047db00(local_100,iVar11 + 0x120);
        local_78 = 0x10000 - *(uint *)(iVar12 + 0xe70);
        local_74 = -(uint)(0x10000 < *(uint *)(iVar12 + 0xe70)) - *(int *)(iVar12 + 0xe74);
        iVar12 = local_b4 - local_b8 >> 3;
        if (1 < iVar12) {
          iVar11 = 1;
          do {
            plVar1 = (longlong *)(local_b8 + iVar11 * 8);
            lVar16 = __allmul(local_78,local_74,*(undefined4 *)(local_b8 + iVar11 * 8),
                              *(undefined4 *)(local_b8 + 4 + iVar11 * 8));
            iVar11 = iVar11 + 1;
            *plVar1 = lVar16 >> 0xf;
          } while (iVar11 < iVar12);
        }
        iVar11 = local_b4;
        iVar12 = local_b8;
        uVar7 = *(uint *)(local_28[0x22] + 0xc4);
        lVar16 = __alldiv(uVar7 << 0x1e,((int)uVar7 >> 0x1f) << 0x1e | uVar7 >> 2,0x1f40000,0);
        local_68 = lVar16 + local_80;
        uVar4 = (ulonglong)local_68 >> 0x20;
        lVar17 = FUN_00b31c36();
        lVar16 = CONCAT44((int)uVar4,(undefined4)local_68);
        if (lVar16 < lVar17) {
          local_68 = lVar17;
        }
        local_28 = (int *)(iVar11 - iVar12 >> 3);
        iVar11 = 1;
        if (1 < (int)local_28) {
          do {
            iVar13 = iVar11 * 8;
            lVar16 = __allmul(*(undefined4 *)(iVar12 + iVar11 * 8),
                              *(undefined4 *)(iVar12 + 4 + iVar11 * 8),local_68);
            iVar11 = iVar11 + 1;
            *(longlong *)(iVar12 + iVar13) = lVar16 >> 0xf;
            iVar12 = local_b8;
          } while (iVar11 < (int)local_28);
        }
        FUN_0047e3e0(local_100,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
        lVar16 = local_50 + CONCAT44(local_5c,local_60);
        local_50 = local_50 + CONCAT44(local_5c,local_60);
        if (iVar12 != 0) {
          local_50 = lVar16;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar12);
        }
        local_b8 = 0;
        local_b4 = 0;
        local_b0 = 0;
        uVar10 = local_48._4_4_;
        iVar12 = local_54;
        piVar3 = local_38;
      }
    }
    piVar8 = local_3c;
    lVar16 = local_70;
    if (local_2c < *(int *)(local_20 + 0x50)) {
      local_38 = (int *)FUN_00aae9af(0x10);
      if (local_38 == (int *)0x0) {
        local_38 = (int *)0x0;
      }
      else {
        *local_38 = local_20;
        local_38[1] = (int)piVar3;
        local_38[2] = 0;
        *(undefined1 *)(local_38 + 3) = 0;
      }
      iVar11 = local_34 + 1;
      bVar14 = local_34 != 0;
      piVar8 = local_38;
      local_34 = iVar11;
      lVar16 = local_70;
      if (bVar14) {
        piVar3[2] = (int)local_38;
        piVar8 = local_3c;
      }
    }
  }
  if (lVar16 < local_50) {
    if (*(char *)(iVar12 + 0x67c) == '\0') {
      uVar15 = FUN_00b31c36();
      lVar17 = __allmul(uVar15,(undefined4)local_70,uVar5);
      lVar16 = local_70;
      if (lVar17 >> 0xf < CONCAT44(uVar10,(undefined4)local_48)) {
        FUN_0081e040(0);
        lVar16 = local_70;
      }
    }
  }
  else if (local_9c[3] + local_9c[2] + local_9c[1] + local_9c[0] < local_24) {
    iVar12 = FUN_005c1a10();
    local_20 = 0;
    local_28 = (int *)(*(int *)(iVar12 + 0x10) - *(int *)(iVar12 + 0xc) >> 2);
    iVar12 = DAT_012587f0;
    if (0 < (int)local_28) {
      do {
        piVar8 = *(int **)(*(int *)(*(int *)(local_54 + 0xbcc) + 0x310) + local_20 * 4);
        local_1c = piVar8;
        if (((*(char *)((int)piVar8 + 0x39) != '\0') && (2 < piVar8[9])) &&
           (*(char *)(piVar8[9] + *(int *)(*(int *)(local_54 + 0xbcc) + 0x2dc)) != '\0')) {
          if ((*(char *)(local_54 + 0x31) == '\0') &&
             (local_60 = *(undefined4 *)(local_54 + 0x1428),
             *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(local_54 + 0x142c) * 4) + 0x31
                      ) == '\0')) {
            cVar6 = FUN_0040b360();
            if (cVar6 != '\0') goto LAB_00820155;
            iVar11 = *(int *)(DAT_012588e8 + 0xbcc);
            local_15 = '\x01';
            local_24 = 0;
            if (0 < (int)(*(int *)(iVar12 + 0x10) - *(int *)(iVar12 + 0xc) & 0xfffffffcU)) {
              local_2c = piVar8[0x44];
              do {
                uVar7 = (uint)*(byte *)((int)piVar8 + local_24 + 0xd0);
                iVar12 = *(int *)(local_2c + 4 + uVar7 * 8);
                if ((-1 < iVar12) && ((0 < iVar12 || (*(int *)(local_2c + uVar7 * 8) != 0)))) {
                  iVar12 = *(int *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) + local_24 * 4) + 8);
                  puVar2 = (undefined4 *)
                           (*(int *)(iVar11 + 0x50) + (uint)*(byte *)(iVar12 + 0x10 + iVar11) * 8);
                  local_48._0_4_ = *puVar2;
                  local_48._4_4_ = puVar2[1];
                  uVar9 = (uint)*(byte *)(iVar12 + 0x1d8 + iVar11);
                  uVar7 = *(uint *)(*(int *)(iVar11 + 0x218) + uVar9 * 8);
                  iVar12 = *(int *)(*(int *)(iVar11 + 0x218) + 4 + uVar9 * 8);
                  uVar15 = FUN_00b31c36();
                  lVar16 = __alldiv(uVar7 << 0xf,iVar12 << 0xf | uVar7 >> 0x11,uVar15);
                  if (local_48 < lVar16) {
                    local_15 = '\0';
                  }
                }
                local_24 = local_24 + 1;
                piVar8 = local_1c;
              } while (local_24 < *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2)
              ;
              iVar12 = DAT_012587f0;
              if (local_15 == '\0') goto LAB_00820171;
            }
            puVar18 = local_170 + piVar8[0xd] * 0x10;
          }
          else {
LAB_00820155:
            puVar18 = local_170 + piVar8[0xd] * 0x10;
          }
          FUN_00821570(puVar18,&local_1c);
          iVar12 = DAT_012587f0;
        }
LAB_00820171:
        local_20 = local_20 + 1;
      } while (local_20 < (int)local_28);
    }
    iVar13 = local_9c[0] * 1000;
    iVar12 = *(int *)(DAT_012586dc + 0x20);
    iVar11 = __alldiv((longlong)iVar13 * (longlong)*(int *)(iVar12 + 0xa8),1000,0);
    if ((local_9c[1] * 1000 < iVar11) && (local_158 != 0)) {
      iVar12 = FUN_0081edb0();
      piVar8 = local_3c;
      if (iVar12 != 0) {
        for (; (piVar8 != (int *)0x0 && (*piVar8 != iVar12)); piVar8 = (int *)piVar8[2]) {
        }
LAB_0082030b:
        FUN_005f2ae0(piVar8);
      }
    }
    else {
      iVar11 = __alldiv((longlong)iVar13 * (longlong)*(int *)(iVar12 + 0xb0),1000,0);
      if ((local_9c[2] * 1000 < iVar11) && (local_148 != 0)) {
        iVar12 = FUN_0081edb0();
        piVar8 = local_3c;
        if (iVar12 != 0) {
          for (; (piVar8 != (int *)0x0 && (*piVar8 != iVar12)); piVar8 = (int *)piVar8[2]) {
          }
          goto LAB_0082030b;
        }
      }
      else {
        iVar12 = __alldiv((longlong)iVar13 * (longlong)*(int *)(iVar12 + 0xac),1000,0);
        if ((local_9c[3] * 1000 < iVar12) && (local_138 != 0)) {
          iVar12 = FUN_0081edb0();
          piVar8 = local_3c;
          if (iVar12 != 0) {
            for (; (piVar8 != (int *)0x0 && (*piVar8 != iVar12)); piVar8 = (int *)piVar8[2]) {
            }
            goto LAB_0082030b;
          }
        }
        else if (local_168 != 0) {
          iVar12 = FUN_0081edb0();
          piVar8 = local_3c;
          if (iVar12 != 0) {
            for (; (piVar8 != (int *)0x0 && (*piVar8 != iVar12)); piVar8 = (int *)piVar8[2]) {
            }
            goto LAB_0082030b;
          }
        }
      }
    }
    if (local_3c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c);
    }
    goto LAB_00820342;
  }
  local_70 = lVar16;
  FUN_009a63f0();
LAB_00820342:
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_170,0x10,7,FUN_00849e90);
  ExceptionList = local_10;
  return;
}

