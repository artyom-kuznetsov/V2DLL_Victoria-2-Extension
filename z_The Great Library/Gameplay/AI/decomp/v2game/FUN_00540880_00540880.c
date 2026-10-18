// FUN_00540880 @ 00540880 body=[[00540880, 00540a6b]]


/* WARNING: Removing unreachable block (ram,0x00540a07) */

void FUN_00540880(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint local_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  int iStack_10;
  
  iVar7 = 0;
  if (*(int *)(unaff_ESI + 0x142c) == 0) {
    *(undefined4 *)(unaff_ESI + 0x138) = 0;
    *(undefined4 *)(unaff_ESI + 0x13c) = 0;
  }
  else {
    if (*(char *)(unaff_ESI + 0x12d0) == '\0') {
      uVar3 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x44);
      uVar9 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
      *(undefined8 *)(unaff_ESI + 0x138) = uVar9;
      return;
    }
    iVar2 = FUN_005379e0();
    if (iVar2 == 1) {
      uVar3 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x3c);
    }
    else {
      uVar3 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x40);
    }
    uVar9 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
    *(undefined8 *)(unaff_ESI + 0x138) = uVar9;
    puVar4 = *(uint **)(unaff_ESI + 0x1580);
    local_14 = 0;
    iStack_10 = 0;
    iVar2 = iStack_10;
    iVar5 = *(int *)(unaff_ESI + 0x1584) - (int)puVar4 >> 3;
    local_1c = 0;
    iStack_18 = 0;
    iStack_10 = 0;
    if (1 < iVar5) {
      iVar6 = (iVar5 - 2U >> 1) + 1;
      iVar7 = iVar6 * 2;
      do {
        bVar8 = CARRY4(local_14,*puVar4);
        local_14 = local_14 + *puVar4;
        iStack_10 = iStack_10 + puVar4[1] + (uint)bVar8;
        bVar8 = CARRY4(local_1c,puVar4[2]);
        local_1c = local_1c + puVar4[2];
        iStack_18 = iStack_18 + puVar4[3] + (uint)bVar8;
        puVar4 = puVar4 + 4;
        iVar6 = iVar6 + -1;
        iVar2 = iStack_10;
      } while (iVar6 != 0);
    }
    if (iVar7 < iVar5) {
      local_24 = *(uint *)(*(int *)(unaff_ESI + 0x1580) + iVar7 * 8);
      iStack_20 = *(int *)(*(int *)(unaff_ESI + 0x1580) + 4 + iVar7 * 8);
    }
    else {
      iStack_20 = 0;
      local_24 = 0;
    }
    iVar2 = iVar2 + iStack_18 + (uint)CARRY4(local_14,local_1c);
    iVar6 = local_24 + local_14 + local_1c;
    uVar3 = (uint)CARRY4(local_24,local_14 + local_1c);
    iVar7 = iStack_20 + iVar2;
    iVar5 = iVar7 + uVar3;
    uVar9 = 0;
    if ((-1 < iVar5) &&
       ((iVar5 != 0 && SCARRY4(iStack_20,iVar2) == SCARRY4(iVar7,uVar3) || (uVar9 = 0, iVar6 != 0)))
       ) {
      uVar3 = *(uint *)(*(int *)(unaff_ESI + 0x1580) + *(int *)(unaff_ESI + 0x142c) * 8);
      uVar9 = __alldiv(uVar3 << 0xf,
                       *(int *)(*(int *)(unaff_ESI + 0x1580) + 4 + *(int *)(unaff_ESI + 0x142c) * 8)
                       << 0xf | uVar3 >> 0x11,iVar6,iVar5);
    }
    uVar3 = *(uint *)(unaff_ESI + 0x138);
    lVar1 = *(longlong *)(unaff_ESI + 0x138);
    lVar10 = __allmul(0x8000 - uVar3,-(uint)(0x8000 < uVar3) - *(int *)(unaff_ESI + 0x13c),uVar9);
    lVar1 = (lVar10 >> 0xf) + lVar1;
    *(longlong *)(unaff_ESI + 0x138) = lVar1;
    if (0x8000 < lVar1) {
      *(undefined4 *)(unaff_ESI + 0x138) = 0x8000;
      *(undefined4 *)(unaff_ESI + 0x13c) = 0;
      return;
    }
  }
  return;
}

