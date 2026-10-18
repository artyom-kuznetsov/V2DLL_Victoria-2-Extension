// FUN_00508590 @ 00508590  (requested 00508590, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_00508590(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uStack_68;
  int iStack_60;
  int local_5c;
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_28 [5];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba758e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(char *)(param_1 + 0x15bc) != '\0') {
    ExceptionList = &pvStack_14;
    *(undefined1 *)(param_1 + 0x15bc) = 0;
    FUN_005448b0(param_1);
  }
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 4))();
  }
  local_5c = DAT_012588e8;
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(DAT_012588e8 + 0xb60);
  FUN_0051fd10(param_1);
  uVar14 = *(uint *)(param_1 + 0x1418);
  while ((piVar1 = DAT_012587e4, *(uint *)(param_1 + 0x1418) <= uVar14 &&
         (uVar14 < *(uint *)(param_1 + 0x141c)))) {
    piVar1 = (int *)(uVar14 + 4);
    iVar11 = *(int *)(DAT_012587e4[1] + *piVar1 * 4);
    uStack_40 = *(undefined4 *)(iVar11 + 0x1428);
    uVar14 = uVar14 + 8;
    if (*(int *)(iVar11 + 0x142c) != *(int *)(param_1 + 0x20)) {
      for (iVar11 = *(int *)(param_1 + 0x1418);
          (iVar11 != *(int *)(param_1 + 0x141c) && (*(int *)(iVar11 + 4) != *piVar1));
          iVar11 = iVar11 + 8) {
      }
      uStack_48 = CONCAT44(param_1 + 0x1418,iVar11);
      FUN_0042ba80();
    }
  }
  uStack_50._0_4_ = (int *)((uint)(int *)uStack_50 & 0xffffff00);
  FUN_0054bc10(*(int *)(param_1 + 0x1418),*(int *)(param_1 + 0x141c),
               *(int *)(param_1 + 0x141c) - *(int *)(param_1 + 0x1418) >> 3,(int *)uStack_50);
  uStack_40 = *(undefined4 *)(param_1 + 0x1428);
  if ((*(int *)(param_1 + 0x142c) != 0) &&
     (uStack_40 = *(undefined4 *)(param_1 + 0x1428),
     iVar11 = *(int *)(piVar1[1] + *(int *)(param_1 + 0x142c) * 4),
     (int)(*(int *)(iVar11 + 0x9dc) - *(int *)(iVar11 + 0x9d8) & 0xfffffffcU) < 1)) {
    *(undefined4 *)(param_1 + 0x142c) = 0;
    uStack_48 = CONCAT44(uStack_48._4_4_,0x2d2d2d);
    *(undefined4 *)(param_1 + 0x1428) = 0x2d2d2d;
    iVar11 = *(int *)(*(int *)(*(int *)piVar1[1] + 0xbe8) + *(int *)(param_1 + 0x20) * 4);
    if (*(int *)(iVar11 + 0x40) != 2) {
      *(undefined4 *)(iVar11 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    }
    *(undefined4 *)(iVar11 + 0x40) = 2;
    uStack_40 = *(undefined4 *)(param_1 + 0x1428);
    FUN_0092f570(0);
  }
  FUN_00540880();
  if ((*(char *)(param_1 + 0x31) == '\0') &&
     (0 < (int)(*(int *)(param_1 + 0x141c) - *(int *)(param_1 + 0x1418) & 0xfffffff8U))) {
    FUN_005340a0();
  }
  if (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU)) {
    pvVar5 = *(void **)(param_1 + 0x890);
    if (pvVar5 != *(void **)(param_1 + 0x894)) {
      uStack_50._0_4_ = (int *)0x0;
      FID_conflict__memcpy(pvVar5,*(void **)(param_1 + 0x894),0);
      *(int *)(param_1 + 0x894) = (int)(int *)uStack_50 + (int)pvVar5;
    }
    pvVar5 = *(void **)(param_1 + 0x8a0);
    if (pvVar5 != *(void **)(param_1 + 0x8a4)) {
      uStack_50._0_4_ = (int *)0x0;
      FID_conflict__memcpy(pvVar5,*(void **)(param_1 + 0x8a4),0);
      *(int *)(param_1 + 0x8a4) = (int)(int *)uStack_50 + (int)pvVar5;
    }
    uStack_50._0_4_ = (int *)DAT_01258a48;
    piStack_58 = (int *)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2);
    iStack_60 = 1;
    if (1 < (int)piStack_58) {
      do {
        iVar11 = *(int *)(*(int *)((int)(int *)uStack_50 + 0x18) + iStack_60 * 4);
        iVar12 = *(int *)(*(int *)(iVar11 + 0x54) + 0x5c);
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar11);
        if (iVar12 == 1) {
          puVar6 = *(ulonglong **)(param_1 + 0x894);
          if (&uStack_68 < puVar6) {
            puVar7 = *(ulonglong **)(param_1 + 0x890);
            if (puVar7 <= &uStack_68) {
              if (puVar6 == *(ulonglong **)(param_1 + 0x898)) {
                FUN_00a513f0();
              }
              if (*(undefined4 **)(param_1 + 0x894) != (undefined4 *)0x0) {
                **(undefined4 **)(param_1 + 0x894) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x890) + ((int)&uStack_68 - (int)puVar7 >> 2) * 4);
              }
              *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + 4;
              goto LAB_005089a2;
            }
          }
          if (puVar6 == *(ulonglong **)(param_1 + 0x898)) {
            FUN_00a513f0();
          }
          if (*(int **)(param_1 + 0x894) != (int *)0x0) {
            **(int **)(param_1 + 0x894) = iVar11;
          }
          *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + 4;
        }
        else if (*(char *)(param_1 + 0x12d0) == '\0') {
          if ((iVar12 == 4) || (iVar12 == 5)) goto LAB_0050899d;
        }
        else if ((iVar12 == 2) || (iVar12 == 3)) {
LAB_0050899d:
          FUN_0068f390();
        }
LAB_005089a2:
        iStack_60 = iStack_60 + 1;
      } while (iStack_60 < (int)piStack_58);
    }
  }
  if ((0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU)) ||
     (((*(char *)(param_1 + 0x1c) == 'R' && (*(char *)(param_1 + 0x1d) == 'E')) &&
      (*(char *)(param_1 + 0x1e) == 'B')))) {
    FUN_00515490(param_1);
    FUN_0050e540(param_1);
    FUN_0050ea30(param_1);
  }
  if (*(int *)(DAT_012588e8 + 0xb0c) <
      *(int *)(param_1 + 0xe9c) + (*(int *)(*(int *)(DAT_012586dc + 0x10) + 8) / 1000) * 0x2238) {
    iVar11 = 0;
    if (DAT_0125a69c == 0) {
      iVar12 = FUN_00aae9af(0xc4);
      uStack_c = 0;
      if (iVar12 != 0) {
        uStack_48._0_4_ = iVar12;
        iVar11 = FUN_008b0060();
      }
      iVar12 = DAT_0125a69c;
      uStack_c = 1;
      uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
      if ((iVar11 != DAT_0125a69c) && (DAT_0125a69c != 0)) {
        FUN_005c1a70(DAT_0125a69c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar12);
      }
      uStack_c = 0xffffffff;
      DAT_0125a69c = iVar11;
    }
    piVar1 = *(int **)(param_1 + 0x4d8);
    do {
      if (piVar1 == (int *)0x0) {
        piVar1 = *(int **)(param_1 + 0x4e8);
        goto joined_r0x00508abb;
      }
      iVar11 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(iVar11 + 8) != *(int *)(DAT_0125a69c + 0xbc));
  }
  goto LAB_00508ad3;
LAB_00509002:
  uStack_68 = CONCAT44(uStack_68._4_4_,(int)(int *)uStack_68 + 1);
  iStack_60 = iStack_60 + 1;
  *(undefined1 *)(iVar12 + 0x45) = 0;
  uStack_50 = lVar17;
  if (iVar11 <= iStack_60) goto LAB_00509038;
  goto LAB_00508fe0;
  while (iVar11 = *piVar1, piVar1 = (int *)piVar1[2], iVar11 != *(int *)(DAT_0125a69c + 0xbc)) {
joined_r0x00508abb:
    if (piVar1 == (int *)0x0) {
      FUN_00511340(param_1,1);
      break;
    }
  }
LAB_00508ad3:
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  uVar14 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x14);
  uStack_48._0_4_ = 0;
  uStack_48._4_4_ = 0;
  uStack_50 = __alldiv(uVar14 << 0x1e,
                       (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf |
                       (uVar14 & 0x1ffff) >> 2,0x1f40000,0);
  lVar17 = CONCAT44(uStack_48._4_4_,(uint)uStack_48);
  piStack_58 = *(int **)(param_1 + 0x9d8);
  while( true ) {
    iVar11 = (int)((ulonglong)lVar17 >> 0x20);
    uVar14 = (uint)lVar17;
    if ((piStack_58 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piStack_58))
    break;
    iVar11 = *piStack_58 * 0xb0 + *DAT_01258728;
    if (*(char *)(*(int *)(iVar11 + 0xc) + 0x3c) != '\0') {
      iStack_60 = *(int *)(iVar11 + 8);
      if ((((DAT_01258734 == 0) || (iStack_60 == DAT_01258734 + 0x10)) || (iStack_60 == 0)) ||
         ((*(int *)(iVar11 + 0xc) == DAT_012587f0 + 0x48 || (*(int *)(iVar11 + 0xc) == 0)))) {
        uStack_68 = 0;
        lVar15 = 0;
      }
      else {
        uStack_48._0_4_ = *(uint *)(iVar11 + 0x88);
        uStack_48._4_4_ = *(int *)(iVar11 + 0x8c);
        lVar15 = __allmul(*(undefined4 *)(iVar11 + 0x40),*(undefined4 *)(iVar11 + 0x44),
                          *(undefined4 *)(iVar11 + 0x38),*(undefined4 *)(iVar11 + 0x3c));
        lVar15 = __allmul(lVar15 >> 0xf,*(undefined4 *)(iStack_60 + 0x88),
                          *(undefined4 *)(iStack_60 + 0x8c));
        lVar15 = __allmul(lVar15 >> 0xf,(uint)uStack_48,uStack_48._4_4_);
        lVar15 = lVar15 >> 0xf;
      }
      lVar15 = __allmul(lVar15,uStack_50);
      lVar17 = (lVar15 >> 0xf) + lVar17;
    }
    piStack_58 = piStack_58 + 1;
  }
  puVar2 = (uint *)(param_1 + 0xe78);
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + uVar14;
  *(int *)(param_1 + 0xe7c) = *(int *)(param_1 + 0xe7c) + iVar11 + (uint)CARRY4(uVar13,uVar14);
  iVar12 = *(int *)(param_1 + (DAT_01258738 + 0xd) * 0x10);
  puVar2 = (uint *)(iVar12 + 0x28);
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + uVar14;
  piVar1 = (int *)(iVar12 + 0x2c);
  *piVar1 = *piVar1 + iVar11 + (uint)CARRY4(uVar13,uVar14);
  FUN_00439630(**(undefined4 **)(param_1 + 0xa0),&uStack_48);
  puVar2 = (uint *)(param_1 + 0xe78);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (uint)uStack_48;
  *(int *)(param_1 + 0xe7c) =
       *(int *)(param_1 + 0xe7c) + uStack_48._4_4_ + (uint)CARRY4(uVar14,(uint)uStack_48);
  puVar2 = *(uint **)(param_1 + (DAT_01258738 + 0xd) * 0x10);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (uint)uStack_48;
  puVar2[1] = puVar2[1] + uStack_48._4_4_ + (uint)CARRY4(uVar14,(uint)uStack_48);
  FUN_00439630(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),&uStack_50);
  lVar17 = uStack_50;
  puVar2 = (uint *)(param_1 + 0xe78);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (int)(int *)uStack_50;
  *(int *)(param_1 + 0xe7c) =
       *(int *)(param_1 + 0xe7c) + uStack_50._4_4_ + (uint)CARRY4(uVar14,(uint)(int *)uStack_50);
  iVar11 = *(int *)(param_1 + (DAT_01258738 + 0xd) * 0x10);
  puVar2 = (uint *)(iVar11 + 8);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (int)(int *)uStack_50;
  piVar1 = (int *)(iVar11 + 0xc);
  *piVar1 = *piVar1 + uStack_50._4_4_ + (uint)CARRY4(uVar14,(uint)(int *)uStack_50);
  FUN_00439630(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),&uStack_50);
  puVar2 = (uint *)(param_1 + 0xe78);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (int)(int *)uStack_50;
  *(int *)(param_1 + 0xe7c) =
       *(int *)(param_1 + 0xe7c) + uStack_50._4_4_ + (uint)CARRY4(uVar14,(uint)(int *)uStack_50);
  iVar11 = *(int *)(param_1 + (DAT_01258738 + 0xd) * 0x10);
  puVar2 = (uint *)(iVar11 + 0x10);
  uVar14 = *puVar2;
  *puVar2 = *puVar2 + (int)(int *)uStack_50;
  piVar1 = (int *)(iVar11 + 0x14);
  *piVar1 = *piVar1 + uStack_50._4_4_ + (uint)CARRY4(uVar14,(uint)(int *)uStack_50);
  FUN_00523c30(param_1);
  lVar17 = uStack_50 +
           lVar17 + CONCAT44(uStack_48._4_4_,(uint)uStack_48) +
           *(longlong *)(*(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10) + 0x18);
  if ((lVar17 < 0x100000000) && (lVar17 < 0)) {
    lVar17 = 0;
  }
  piStack_58 = (int *)*DAT_012587e4;
  iStack_60 = 0;
  if (0 < (int)piStack_58) {
    uStack_50._0_4_ = DAT_012587e4 + 1;
    do {
      iVar11 = *(int *)(*(int *)uStack_50 + iStack_60 * 4);
      iVar12 = *(int *)(iVar11 + 0x20);
      uVar8 = *(undefined4 *)(iVar11 + 0x1c);
      if ((iVar12 != 0) &&
         (((((char)uVar8 != 'R' || ((char)((uint)uVar8 >> 8) != 'E')) ||
           ((char)((uint)uVar8 >> 0x10) != 'B')) && (iVar12 != *(int *)(param_1 + 0x20))))) {
        iVar12 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar12 * 4);
        iVar9 = *(int *)(iVar12 + 0x2c);
        uStack_48 = lVar17;
        if ((iVar9 == 0) ||
           (uStack_38 = *(undefined4 *)(iVar9 + 8), *(int *)(iVar9 + 0xc) != *(int *)(iVar12 + 0xc))
           ) {
          iVar11 = *(int *)(iVar12 + 0x30);
          if ((iVar11 != 0) &&
             (uStack_38 = *(undefined4 *)(iVar11 + 8),
             *(int *)(iVar11 + 0xc) == *(int *)(iVar12 + 0xc))) {
            uVar8 = *(undefined4 *)(iVar11 + 0x28);
            uStack_3c = *(undefined4 *)(iVar11 + 0x2c);
            FUN_00525770(10,uVar8,uStack_3c);
            FUN_005238d0(0,uVar8,uStack_3c);
            lVar17 = uStack_48;
          }
        }
        else {
          uVar14 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x38c);
          uVar16 = __alldiv(uVar14 << 0x1e,
                            (((int)uVar14 >> 0x1f) << 0xf | uVar14 >> 0x11) << 0xf |
                            (uVar14 & 0x1ffff) >> 2,0x1f40000,0);
          uStack_38 = *(undefined4 *)(iVar11 + 0x1c);
          iVar11 = *(int *)(DAT_012587e4[1] + *(int *)(iVar11 + 0x20) * 4);
          lVar17 = __allmul(uVar16,uStack_48);
          lVar17 = lVar17 >> 0xf;
          uVar13 = (uint)lVar17;
          iVar12 = (int)((ulonglong)lVar17 >> 0x20);
          puVar2 = (uint *)(iVar11 + 0xe78);
          uVar14 = *puVar2;
          *puVar2 = *puVar2 + uVar13;
          uStack_68 = CONCAT44(uStack_68._4_4_,uVar13);
          *(int *)(iVar11 + 0xe7c) = *(int *)(iVar11 + 0xe7c) + iVar12 + (uint)CARRY4(uVar14,uVar13)
          ;
          iVar11 = *(int *)(iVar11 + (DAT_01258738 + 0xd) * 0x10);
          puVar2 = (uint *)(iVar11 + 0x38);
          uVar14 = *puVar2;
          *puVar2 = *puVar2 + uVar13;
          piVar1 = (int *)(iVar11 + 0x3c);
          *piVar1 = *piVar1 + iVar12 + (uint)CARRY4(uVar14,uVar13);
          FUN_00525770(10,lVar17);
          lVar17 = uStack_48 - CONCAT44(iVar12,(int *)uStack_68);
        }
      }
      iStack_60 = iStack_60 + 1;
    } while (iStack_60 < (int)piStack_58);
  }
  uStack_48._4_4_ = (uint)((ulonglong)lVar17 >> 0x20);
  if (DAT_0131bb34 == 0) {
    uStack_48 = lVar17;
    iVar11 = FUN_00aae9af(0x188);
    uStack_c = 2;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      uStack_48._0_4_ = iVar11;
      iVar11 = FUN_0041a160();
    }
    iVar12 = DAT_0131bb34;
    uStack_c = 3;
    uStack_48._0_4_ = 0;
    if ((iVar11 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar12);
    }
    uStack_c = 0xffffffff;
    DAT_0131bb34 = iVar11;
  }
  uStack_48 = CONCAT44(uStack_48._4_4_,DAT_012587f0);
  FUN_0050b9b0(param_1,*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2,
               DAT_0131bb34,local_5c);
  iVar11 = *(int *)(param_1 + 0x15e0) - *(int *)(param_1 + 0x15dc) >> 2;
  if (0 < iVar11) {
    uStack_68 = uStack_68 & 0xffffffff00000000;
    iStack_60 = 0;
    lVar17 = uStack_50;
    if (0 < iVar11) {
LAB_00508fe0:
      iVar12 = *(int *)(*(int *)(param_1 + 0x15dc) + iStack_60 * 4);
      cVar10 = FUN_004467f0();
      lVar17 = uStack_50;
      if (cVar10 == '\0') goto LAB_00509002;
      FUN_00446a30(iVar12);
      lVar17 = uStack_50;
      if (*(char *)(iVar12 + 0x44) != '\0') goto LAB_00509002;
      *(undefined1 *)(iVar12 + 0x45) = 1;
      iVar12 = iStack_60;
      while (iVar12 = iVar12 + 1, iVar12 < iVar11) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x15dc) + iVar12 * 4) + 0x45) = 0;
      }
    }
LAB_00509038:
    uStack_50._4_4_ = (int)((ulonglong)lVar17 >> 0x20);
    if ((int *)uStack_68 == (int *)iVar11) {
      piVar1 = (int *)(param_1 + 0x15dc);
      if (piVar1 != aiStack_28) {
        if (*piVar1 != 0) {
          uStack_50 = lVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*piVar1);
        }
        *piVar1 = 0;
        *(undefined4 *)(param_1 + 0x15e0) = 0;
        *(undefined4 *)(param_1 + 0x15e4) = 0;
      }
      if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
        *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x20) = 1;
      }
    }
  }
  if (iVar4 == iVar3) {
    iVar3 = *(int *)(param_1 + 0xe44);
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar3);
    while (iVar3 != 0) {
      piStack_58 = (int *)*(int *)uStack_68;
      uStack_50._0_4_ = (int *)0x0;
      if (0 < (*(int *)(param_1 + 0x1518) - *(int *)(param_1 + 0x1514)) / 0x18) {
        iStack_60 = 0;
        do {
          local_5c = *(undefined4 *)(*(int *)((uint)uStack_48 + 0xc) + (int)(int *)uStack_50 * 4);
          iVar4 = (int)(int *)uStack_50;
          for (iVar3 = *(int *)((int)piStack_58 + 0x60); uStack_50._0_4_ = (int *)iVar4, iVar3 != 0;
              iVar3 = *(int *)(iVar3 + 0x224)) {
            FUN_004f53e0(local_5c);
            iVar4 = (int)(int *)uStack_50;
          }
          FUN_004d2ff0(local_5c);
          iStack_60 = iStack_60 + 0x18;
          uStack_50._0_4_ = (int *)(iVar4 + 1);
        } while ((int)(int *)uStack_50 <
                 (*(int *)(param_1 + 0x1518) - *(int *)(param_1 + 0x1514)) / 0x18);
      }
      iVar3 = *(int *)((int)(int *)uStack_68 + 8);
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar3);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

