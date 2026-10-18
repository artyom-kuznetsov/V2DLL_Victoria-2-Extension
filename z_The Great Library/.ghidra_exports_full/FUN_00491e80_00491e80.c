// FUN_00491e80 @ 00491e80 body=[[00491e80, 004922b0] [004922b4, 00492463] [00492467, 0049247a]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00491e80(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  uint **ppuVar10;
  int iVar11;
  int in_ECX;
  int *piVar12;
  undefined4 unaff_ESI;
  int ****ppppiStack_7c;
  int local_6c;
  uint ***local_5c;
  uint ***apppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint ***apppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fe25;
  local_14 = ExceptionList;
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
  if ((((*(char *)(in_ECX + 0x4c) != 'R') || (*(char *)(in_ECX + 0x4d) != 'E')) ||
      (*(char *)(in_ECX + 0x4e) != 'B')) &&
     ((int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU) < 1)) {
    return 1;
  }
  local_6c = *(int *)(in_ECX + 0x48);
  if (local_6c == 0) {
    local_6c = **(int **)(DAT_0125870c + 0x2238);
  }
  if (*(char *)(*(int *)(in_ECX + 0x88) + 0x39) == '\0') {
    if (*(char *)(*(int *)(in_ECX + 0x88) + 0x3a) == '\0') {
      ppppiStack_7c = (int ****)0x1a4;
      ExceptionList = &local_14;
      pppuVar8 = (uint ***)FUN_00aae9af();
      local_c = 4;
      if (pppuVar8 == (uint ***)0x0) {
        pppuVar8 = (uint ***)0x0;
      }
      else {
        ppppiStack_7c = (int ****)pppuVar8;
        FUN_005c5e00();
        *pppuVar8 = (uint **)CAir::vftable;
        pppuVar8[2] = (uint **)CAir::vftable;
      }
      ppppiStack_7c = (int ****)0x8c;
      local_c = 0xffffffff;
      pppuVar9 = (uint ***)FUN_00aae9af();
      local_c = 5;
      if (pppuVar9 == (uint ***)0x0) goto LAB_0049204b;
      ppppiStack_7c = (int ****)pppuVar9;
      FUN_005be1a0();
      *pppuVar9 = (uint **)CWing::vftable;
    }
    else {
      ppppiStack_7c = (int ****)0x1c0;
      ExceptionList = &local_14;
      iVar7 = FUN_00aae9af();
      local_c = 2;
      if (iVar7 == 0) {
        pppuVar8 = (uint ***)0x0;
      }
      else {
        ppppiStack_7c = (int ****)0x491fa5;
        pppuVar8 = (uint ***)FUN_005d75b0();
      }
      ppppiStack_7c = (int ****)0x8c;
      local_c = 0xffffffff;
      pppuVar9 = (uint ***)FUN_00aae9af();
      local_c = 3;
      if (pppuVar9 == (uint ***)0x0) {
LAB_0049204b:
        pppuVar9 = (uint ***)0x0;
      }
      else {
        ppppiStack_7c = (int ****)pppuVar9;
        FUN_005be1a0();
        *pppuVar9 = (uint **)CShip::vftable;
      }
    }
  }
  else {
    ppppiStack_7c = (int ****)0x1b8;
    ExceptionList = &local_14;
    iVar7 = FUN_00aae9af();
    local_c = 0;
    if (iVar7 == 0) {
      pppuVar8 = (uint ***)0x0;
    }
    else {
      ppppiStack_7c = (int ****)0x491f39;
      pppuVar8 = (uint ***)FUN_004460d0();
    }
    ppppiStack_7c = (int ****)0x8c;
    local_c = 0xffffffff;
    pppuVar9 = (uint ***)FUN_00aae9af();
    local_c = 1;
    if (pppuVar9 == (uint ***)0x0) goto LAB_0049204b;
    ppppiStack_7c = (int ****)pppuVar9;
    FUN_005be1a0();
    *pppuVar9 = (uint **)CRegiment::vftable;
  }
  local_c = 0xffffffff;
  ppppiStack_7c = (int ****)(in_ECX + 0x58);
  (*(code *)pppuVar8[2][6])();
  FUN_005c93b0(*(undefined4 *)(in_ECX + 0x4c));
  uVar2 = *(undefined4 *)(DAT_012588e8 + 0xb24);
  (*(code *)(*pppuVar8)[0x1b])();
  FUN_005cb2c0(unaff_ESI);
  (*(code *)(*pppuVar9)[6])(in_ECX + 0x60);
  uVar1 = *(undefined2 *)(in_ECX + 0x84);
  cVar6 = (*(code *)(*pppuVar9)[10])();
  if (cVar6 != '\0') {
    FUN_004f9be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + (int)pppuVar9[0x19] * 4),in_ECX + 0x68
                );
  }
  FUN_00408ed0(in_ECX + 0x68,0,0xffffffff);
  *(undefined2 *)(pppuVar9 + 0x22) = uVar1;
  pppuVar9[0x18] = *(uint ***)(in_ECX + 0x4c);
  pppuVar9[0x19] = *(uint ***)(in_ECX + 0x50);
  FUN_005c03c0(*(undefined4 *)(in_ECX + 0x88));
  if (*(char *)(*(int *)(in_ECX + 0x88) + 0x3a) == '\0') {
    piVar12 = (int *)(*(int *)(local_6c + 0xa60) + 0x388);
  }
  else {
    piVar12 = (int *)(*(int *)(local_6c + 0xa60) + 0x390);
  }
  ppuVar10 = (uint **)(*(int *)(*(int *)(local_6c + 0xbcc) + 0x48) + *piVar12);
  pppuVar9[0xd] = ppuVar10;
  if (100000 < (int)ppuVar10) {
    pppuVar9[0xd] = (uint **)0x186a0;
  }
  FUN_00401000(0x3f000000);
  ppuVar10 = (uint **)FUN_00b31c00();
  if ((int)ppuVar10 < 1) {
    ppuVar10 = (uint **)0x0;
  }
  pppuVar9[0x10] = ppuVar10;
  piVar12 = (int *)(*(code *)(*pppuVar9)[0xc])(&stack0xffffff90,0);
  if (*piVar12 < (int)pppuVar9[0xf]) {
    piVar12 = (int *)(*(code *)(*pppuVar9)[0xc])(&ppppiStack_7c,0);
    pppuVar9[0xf] = (uint **)*piVar12;
  }
  if (((int)pppuVar9[0xe][0x2d] < (int)pppuVar9[0x10]) && (DAT_00f09547 != '\0')) {
    pppuVar9[0x10] = (uint **)pppuVar9[0xe][0x2d];
  }
  iVar7 = in_ECX;
  if ((*(uint *)(in_ECX + 0x90) != 0) || (*(int *)(in_ECX + 0x94) != 0)) {
    if (*(uint *)(in_ECX + 0x90) < 0x1269) {
      if (DAT_01258a98 == 0) goto LAB_00492252;
      ppppiStack_7c = (int ****)FUN_009c1d40();
    }
    else {
      if (DAT_01258a94 == 0) goto LAB_00492252;
      ppppiStack_7c = (int ****)FUN_009c1d40();
    }
    if (ppppiStack_7c != (int ****)0x0) {
      FUN_0068f390();
      pppuVar9[0xc] = (uint **)ppppiStack_7c;
      iVar7 = 0;
    }
  }
LAB_00492252:
  FUN_005cb1d0(pppuVar9);
  pppuVar9 = *(uint ****)(iVar7 + 0x4c);
  uVar3 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x50) * 4);
  (*(code *)(*pppuVar8)[0xf])(uVar2);
  ppppiStack_7c = (int ****)FUN_004f9d10(uVar3,apppuStack_50);
  local_c = 10;
  FUN_005cdc70();
  local_c = 0xffffffff;
  if (0xf < uStack_3c) {
    ppppiStack_7c = (int ****)apppuStack_50[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppiStack_7c = (int ****)pppuVar8;
  FUN_005c68c0();
  ppppiStack_7c = (int ****)0x4922c5;
  FUN_00513c80();
  *(undefined1 *)(pppuVar8 + 0x2f) = 1;
  ppppiStack_7c = (int ****)pppuVar8;
  FUN_005cae80();
  ppppiStack_7c = (int ****)pppuVar9;
  FUN_005cb2c0();
  iVar7 = *(int *)(in_ECX + 0x98);
  if ((-1 < iVar7) &&
     (iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4),
     iVar4 = *(int *)(iVar11 + 0x1570), iVar7 < *(int *)(iVar11 + 0x1574) - iVar4 >> 2)) {
    iVar7 = *(int *)(iVar4 + iVar7 * 4);
    ppppiStack_7c = (int ****)0x90;
    iVar11 = FUN_00aae9af();
    local_c = 0xb;
    if (iVar11 == 0) {
      local_5c = (uint ***)0x0;
    }
    else {
      ppppiStack_7c = (int ****)0x0;
      local_5c = (uint ***)FUN_005de7d0(iVar11,pppuVar8,*(undefined4 *)(iVar7 + 8),1,1);
    }
    local_c = 0xffffffff;
    ppppiStack_7c = (int ****)0x49237b;
    iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    ppppiStack_7c = (int ****)local_5c;
    (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))();
    ppppiStack_7c = *(int *****)(in_ECX + 0x5c);
    FUN_00471580();
  }
  if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(in_ECX + 0x50)) {
    ppppiStack_7c = (int ****)0x4923c2;
    cVar6 = (*(code *)(*pppuVar8)[0xf])();
    if (cVar6 == '\0') {
      ppppiStack_7c = (int ****)0xd;
      uStack_20 = 0xf;
      uStack_24 = 0;
      apppuStack_34[0] = (uint ***)((uint)apppuStack_34[0] & 0xffffff00);
      FUN_00409350();
      local_c = 0xd;
      ppppiStack_7c = (int ****)0x492445;
      piVar12 = (int *)FUN_009c7290();
      ppppiStack_7c = (int ****)apppuStack_34;
      (**(code **)(*piVar12 + 0x60))();
      ppppiStack_7c = (int ****)apppuStack_34[0];
      uVar5 = uStack_20;
    }
    else {
      ppppiStack_7c = (int ****)0xe;
      uStack_3c = 0xf;
      uStack_40 = 0;
      apppuStack_50[0] = (uint ***)((uint)apppuStack_50[0] & 0xffffff00);
      FUN_00409350();
      local_c = 0xc;
      ppppiStack_7c = (int ****)0x4923f8;
      piVar12 = (int *)FUN_009c7290();
      ppppiStack_7c = (int ****)apppuStack_50;
      (**(code **)(*piVar12 + 0x60))();
      ppppiStack_7c = (int ****)apppuStack_50[0];
      uVar5 = uStack_3c;
    }
    if (0xf < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return 1;
}

