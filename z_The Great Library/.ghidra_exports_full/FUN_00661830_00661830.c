// FUN_00661830 @ 00661830 body=[[00661830, 00661b5a] [00661b5e, 00661c96] [00661c9a, 00661dd2] [00661dd6, 00661f0e] [00661f12, 0066200e]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00661830(undefined4 *param_1)

{
  void *_Dst;
  int *piVar1;
  void *pvVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14 [3];
  undefined4 local_8;
  
  iVar12 = (int)param_1;
  local_8 = 0xffffffff;
  local_14[2] = &LAB_00bba944;
  local_14[1] = ExceptionList;
  piVar15 = (int *)((int)param_1 + 0xd80);
  iVar13 = 0;
  ExceptionList = local_14 + 1;
  ppuVar3 = (undefined4 **)(local_14 + 1);
  if (0 < (int)(*(int *)((int)param_1 + 0xd84) - *(int *)((int)param_1 + 0xd80) & 0xfffffffcU)) {
    do {
      ExceptionList = ppuVar3;
      piVar1 = *(int **)(*piVar15 + iVar13 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar13 = iVar13 + 1;
      ppuVar3 = ExceptionList;
    } while (iVar13 < *(int *)(iVar12 + 0xd84) - *piVar15 >> 2);
  }
  pvVar2 = (void *)*piVar15;
  if (pvVar2 != *(void **)(iVar12 + 0xd84)) {
    FID_conflict__memcpy(pvVar2,*(void **)(iVar12 + 0xd84),0);
    *(void **)(iVar12 + 0xd84) = pvVar2;
  }
  iVar13 = (int)param_1;
  puVar14 = (uint *)((int)param_1 + 0xd90);
  iVar11 = 0;
  if (0 < (int)(*(int *)((int)param_1 + 0xd94) - *(int *)((int)param_1 + 0xd90) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*puVar14 + iVar11 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(*(int *)(iVar13 + 0xd94) - *puVar14) >> 2);
  }
  pvVar2 = (void *)*puVar14;
  if (pvVar2 != *(void **)(iVar13 + 0xd94)) {
    local_14[0] = (undefined1 *)0x0;
    FID_conflict__memcpy(pvVar2,*(void **)(iVar13 + 0xd94),0);
    *(int *)(iVar13 + 0xd94) = (int)pvVar2 + (int)local_14[0];
  }
  pvVar2 = *(void **)(iVar12 + 0xd84);
  uVar9 = (int)pvVar2 - *piVar15 >> 2;
  local_14[0] = (undefined1 *)0x0;
  if (uVar9 < 8) {
    FUN_0043cb20(piVar15,pvVar2,local_14);
  }
  else if ((8 < uVar9) && (_Dst = (void *)(*piVar15 + 0x20), _Dst != pvVar2)) {
    local_14[0] = (undefined1 *)0x0;
    FID_conflict__memcpy(_Dst,pvVar2,0);
    *(int *)(iVar12 + 0xd84) = (int)_Dst + (int)local_14[0];
  }
  local_14[0] = (undefined1 *)FUN_00aae9af(0x478);
  iVar12 = (int)param_1;
  local_8 = 0;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_006ee930(local_14[0],param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)*piVar15 = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x208);
  local_8 = 1;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_005fe880(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 8) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x2d8);
  local_8 = 2;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_006d2660(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 0xc) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x200);
  local_8 = 3;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_007bf7f0(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 0x10) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x144);
  local_8 = 4;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_007aa200(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 0x14) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x498);
  local_8 = 5;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0071c610(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 4) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x398);
  local_8 = 6;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0061b820(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 0x18) = uVar7;
  local_14[0] = (undefined1 *)FUN_00aae9af(0x294);
  local_8 = 7;
  if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_006a8d40(local_14[0],iVar12);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*piVar15 + 0x1c) = uVar7;
  puVar8 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_14[0] = (undefined1 *)puVar8;
    FUN_00409350("sidebar_provinces",0x11);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_007b0a40(puVar8,iVar12,local_30);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    *puVar8 = CSideMenuProvinces::vftable;
  }
  local_8 = 0xffffffff;
  ppuVar3 = *(undefined4 ***)(iVar13 + 0xd94);
  local_14[0] = (undefined1 *)puVar8;
  if ((local_14 < ppuVar3) && (ppuVar4 = (undefined4 **)*puVar14, ppuVar4 <= local_14)) {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)ppuVar3 - (int)ppuVar4 >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)*(undefined4 ***)(iVar13 + 0xd98) - (int)ppuVar4 >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) =
           *(undefined4 *)(*puVar14 + ((int)local_14 - (int)ppuVar4 >> 2) * 4);
    }
  }
  else {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)((int)ppuVar3 - *puVar14) >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)((int)*(undefined4 ***)(iVar13 + 0xd98) - *puVar14) >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) = puVar8;
    }
  }
  *(int *)(iVar13 + 0xd94) = *(int *)(iVar13 + 0xd94) + 4;
  puVar8 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 10;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_14[0] = (undefined1 *)puVar8;
    FUN_00409350("sidebar_army",0xc);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_007b0a40(puVar8,iVar12,local_30);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    *puVar8 = CSideMenuArmy::vftable;
  }
  local_8 = 0xffffffff;
  ppuVar3 = *(undefined4 ***)(iVar13 + 0xd94);
  local_14[0] = (undefined1 *)puVar8;
  if ((local_14 < ppuVar3) && (ppuVar4 = (undefined4 **)*puVar14, ppuVar4 <= local_14)) {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)ppuVar3 - (int)ppuVar4 >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)*(undefined4 ***)(iVar13 + 0xd98) - (int)ppuVar4 >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) =
           *(undefined4 *)(*puVar14 + ((int)local_14 - (int)ppuVar4 >> 2) * 4);
    }
  }
  else {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)((int)ppuVar3 - *puVar14) >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)((int)*(undefined4 ***)(iVar13 + 0xd98) - *puVar14) >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) = puVar8;
    }
  }
  *(int *)(iVar13 + 0xd94) = *(int *)(iVar13 + 0xd94) + 4;
  puVar8 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0xc;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_14[0] = (undefined1 *)puVar8;
    FUN_00409350("sidebar_naval",0xd);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_007b0a40(puVar8,iVar12,local_30);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    *puVar8 = CSideMenuNaval::vftable;
  }
  local_8 = 0xffffffff;
  ppuVar3 = *(undefined4 ***)(iVar13 + 0xd94);
  local_14[0] = (undefined1 *)puVar8;
  if ((local_14 < ppuVar3) && (ppuVar4 = (undefined4 **)*puVar14, ppuVar4 <= local_14)) {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)ppuVar3 - (int)ppuVar4 >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)*(undefined4 ***)(iVar13 + 0xd98) - (int)ppuVar4 >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) =
           *(undefined4 *)(*puVar14 + ((int)local_14 - (int)ppuVar4 >> 2) * 4);
    }
  }
  else {
    if (ppuVar3 == *(undefined4 ***)(iVar13 + 0xd98)) {
      uVar9 = (int)((int)ppuVar3 - *puVar14) >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)((int)*(undefined4 ***)(iVar13 + 0xd98) - *puVar14) >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
        iVar12 = (int)param_1;
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) = puVar8;
    }
  }
  *(int *)(iVar13 + 0xd94) = *(int *)(iVar13 + 0xd94) + 4;
  puVar8 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0xe;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    param_1 = puVar8;
    FUN_00409350("sidebar_combat",0xe);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_007b0a40(puVar8,iVar12,local_30);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    *puVar8 = CSideMenuCombat::vftable;
  }
  local_8 = 0xffffffff;
  puVar5 = *(undefined4 **)(iVar13 + 0xd94);
  param_1 = puVar8;
  if ((&param_1 < puVar5) && (puVar6 = (undefined4 *)*puVar14, puVar6 <= &param_1)) {
    if (puVar5 == *(undefined4 **)(iVar13 + 0xd98)) {
      uVar9 = (int)puVar5 - (int)puVar6 >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)*(undefined4 **)(iVar13 + 0xd98) - (int)puVar6 >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) =
           *(undefined4 *)(*puVar14 + ((int)&param_1 - (int)puVar6 >> 2) * 4);
    }
  }
  else {
    if (puVar5 == *(undefined4 **)(iVar13 + 0xd98)) {
      uVar9 = (int)((int)puVar5 - *puVar14) >> 2;
      if (0x3ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar9 = uVar9 + 1;
      uVar10 = (int)((int)*(undefined4 **)(iVar13 + 0xd98) - *puVar14) >> 2;
      if (uVar10 < uVar9) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_004bf300(uVar10);
      }
    }
    if (*(undefined4 **)(iVar13 + 0xd94) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar13 + 0xd94) = puVar8;
    }
  }
  *(int *)(iVar13 + 0xd94) = *(int *)(iVar13 + 0xd94) + 4;
  ExceptionList = local_14[1];
  return;
}

