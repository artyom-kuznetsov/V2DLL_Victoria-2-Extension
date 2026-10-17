// FUN_00484f90 @ 00484f90  (requested 00484F90, first bytes: 55 8B EC 83 EC 40 53 8B)


void FUN_00484f90(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_EDI;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint local_3c;
  int iStack_38;
  uint local_34;
  int iStack_30;
  uint local_2c;
  int iStack_28;
  uint local_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  undefined4 local_14;
  
  iVar2 = param_5;
  local_2c = 0;
  iStack_28 = 0;
  iVar8 = 1;
  iVar6 = *(int *)(param_4 + 0x4c) - *(int *)(param_4 + 0x48) >> 3;
  local_24 = 0;
  iStack_20 = 0;
  local_3c = 0;
  iStack_38 = 0;
  if (1 < iVar6) {
    if (1 < iVar6 + -1) {
      uVar9 = iVar6 - 3U >> 1;
      puVar4 = (uint *)(*(int *)(param_4 + 0x48) + 8);
      param_5 = uVar9 + 1;
      iVar8 = uVar9 + 2 + param_5;
      do {
        bVar10 = CARRY4(local_2c,*puVar4);
        local_2c = local_2c + *puVar4;
        iStack_28 = iStack_28 + puVar4[1] + (uint)bVar10;
        bVar10 = CARRY4(local_24,puVar4[2]);
        local_24 = local_24 + puVar4[2];
        iStack_20 = iStack_20 + puVar4[3] + (uint)bVar10;
        puVar4 = puVar4 + 4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    if (iVar8 < iVar6) {
      local_3c = *(uint *)(*(int *)(param_4 + 0x48) + iVar8 * 8);
      iStack_38 = *(int *)(*(int *)(param_4 + 0x48) + 4 + iVar8 * 8);
    }
    bVar10 = CARRY4(local_3c,local_2c + local_24);
    local_3c = local_3c + local_2c + local_24;
    iStack_38 = iStack_38 + iStack_28 + iStack_20 + (uint)CARRY4(local_2c,local_24) + (uint)bVar10;
  }
  lVar11 = __allmul(local_3c,iStack_38,*(undefined4 *)(unaff_EDI + iVar2 * 8),
                    *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8));
  lVar11 = lVar11 >> 0xf;
  if (lVar11 != CONCAT44(DAT_0125ba14,DAT_0125ba10)) {
    local_24 = 0;
    iStack_20 = 0;
    local_34 = 0;
    iStack_30 = 0;
    FUN_0047dbb0(&DAT_013f2558,param_4);
    FUN_0047de60(&DAT_013f2558,*(undefined4 *)(unaff_EDI + iVar2 * 8),
                 *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8));
    cVar3 = FUN_0047e040(&DAT_013f2558);
    param_1 = param_1 + 0x280;
    puVar4 = (uint *)FUN_0047e3e0(&DAT_013f2558,param_1);
    lVar12 = __alldiv(*puVar4 << 0xf,puVar4[1] << 0xf | *puVar4 >> 0x11,
                      *(undefined4 *)(unaff_EDI + iVar2 * 8),
                      *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8));
    uVar13 = CONCAT44(DAT_00f0ae14,DAT_00f0ae10);
    iVar6 = DAT_013f25a4 - DAT_013f25a0 >> 3;
    iVar8 = 1;
    local_1c = 0;
    iStack_18 = 0;
    if (1 < iVar6) {
      if (1 < iVar6 + -1) {
        do {
          uVar9 = *(uint *)(DAT_013f25a0 + iVar8 * 8);
          bVar10 = CARRY4(local_24,uVar9);
          local_24 = local_24 + uVar9;
          iStack_20 = iStack_20 + *(int *)(DAT_013f25a0 + 4 + iVar8 * 8) + (uint)bVar10;
          uVar9 = *(uint *)(DAT_013f25a0 + 8 + iVar8 * 8);
          bVar10 = CARRY4(local_34,uVar9);
          local_34 = local_34 + uVar9;
          iStack_30 = iStack_30 + *(int *)(DAT_013f25a0 + 0xc + iVar8 * 8) + (uint)bVar10;
          iVar8 = iVar8 + 2;
        } while (iVar8 < iVar6 + -1);
      }
      if (iVar8 < iVar6) {
        local_1c = *(uint *)(DAT_013f25a0 + iVar8 * 8);
        iStack_18 = *(int *)(DAT_013f25a0 + 4 + iVar8 * 8);
      }
      bVar10 = CARRY4(local_1c,local_24 + local_34);
      local_1c = local_1c + local_24 + local_34;
      iStack_18 = iStack_18 + iStack_20 + iStack_30 + (uint)CARRY4(local_24,local_34) + (uint)bVar10
      ;
    }
    if (cVar3 != '\0') {
      __alldiv(local_1c << 0xf,iStack_18 << 0xf | local_1c >> 0x11,lVar11);
      FUN_0047dbb0(&DAT_013f24a8,param_4);
      FUN_0047de60(&DAT_013f24a8,*(undefined4 *)(unaff_EDI + iVar2 * 8),
                   *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8));
      FUN_0047dca0(&DAT_013f2558);
      if (param_6 != '\0') {
        FUN_0047dbb0(&DAT_013f2558,&DAT_013f24a8);
      }
      cVar3 = FUN_0047e040(&DAT_013f24a8);
      FUN_0047e3e0(&DAT_013f24a8,param_1);
      uVar9 = *(uint *)(param_2 + 0x7c8);
      iVar8 = *(int *)(param_2 + 0x7cc);
      puVar4 = (uint *)FUN_0047e500();
      uVar1 = DAT_00f0ae10;
      uVar7 = *puVar4 + DAT_00f0ae10;
      uVar13 = __allmul(uVar7 + uVar9,
                        puVar4[1] + DAT_00f0ae14 + (uint)CARRY4(*puVar4,DAT_00f0ae10) + iVar8 +
                        (uint)CARRY4(uVar7,uVar9),local_14,iVar6);
      lVar14 = __alldiv((uint)uVar13 & 0xffff8000,(int)((ulonglong)uVar13 >> 0x20),
                        *(undefined4 *)(unaff_EDI + iVar2 * 8),
                        *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8));
      lVar12 = lVar12 + lVar14;
      FUN_0047dec0();
      uVar13 = CONCAT44(DAT_00f0ae14,uVar1);
      if ((cVar3 != '\0') &&
         (uVar13 = __alldiv((uVar9 + local_1c) * 0x8000,
                            (iVar8 + iStack_18 + (uint)CARRY4(uVar9,local_1c)) * 0x8000 |
                            uVar9 + local_1c >> 0x11,lVar11), param_6 != '\0')) {
        FUN_0047dca0(&DAT_013f24a8);
        FUN_0047dc20(&DAT_013f2558);
      }
    }
    iStack_30 = (int)((ulonglong)uVar13 >> 0x20);
    local_34 = (uint)uVar13;
    lVar11 = __allmul(DAT_00f0ade0,DAT_00f0ade4,lVar12);
    *(int *)(unaff_EDI + 0x18 + iVar2 * 8) = (int)(lVar11 >> 0xf);
    *(int *)(unaff_EDI + 0x1c + iVar2 * 8) = (int)((ulonglong)(lVar11 >> 0xf) >> 0x20);
    *(uint *)(unaff_EDI + 0x30 + iVar2 * 8) = local_34;
    *(int *)(unaff_EDI + 0x34 + iVar2 * 8) = iStack_30;
    puVar5 = (undefined4 *)FUN_0047e3e0(param_4,param_1);
    lVar11 = __allmul(*puVar5,puVar5[1],DAT_00f0ade0,DAT_00f0ade4);
    *(int *)(unaff_EDI + 0x60 + iVar2 * 8) = (int)(lVar11 >> 0xf);
    *(int *)(unaff_EDI + 100 + iVar2 * 8) = (int)((ulonglong)(lVar11 >> 0xf) >> 0x20);
  }
  return;
}

