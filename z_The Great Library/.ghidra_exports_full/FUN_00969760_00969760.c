// FUN_00969760 @ 00969760 body=[[00969760, 00969bc9]]


void FUN_00969760(int param_1,int param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_2c;
  uint local_28;
  
  uVar3 = *(uint *)(unaff_EDI + 0x58);
  local_28 = uVar3;
  if (*(char *)(*(int *)(unaff_EDI + 0x68) + 0x40) != '\0') {
    local_28 = *(uint *)(unaff_EDI + 0x60);
  }
  uVar9 = ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11;
  iVar6 = uVar3 << 0xf;
  uVar10 = __alldiv(uVar3 << 0x1e,uVar9 << 0xf | (uVar3 & 0x1ffff) >> 2,0x320000,0);
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x44) + *(int *)(*(int *)(unaff_EDI + 0x70) + 8) * 4);
  *piVar1 = *piVar1 + uVar3;
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x48) + *(int *)(*(int *)(unaff_EDI + 0x6c) + 8) * 4);
  *piVar1 = *piVar1 + uVar3;
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x4c) +
                  *(int *)(*(int *)(*(int *)(unaff_EDI + 0x6c) + 0x50) + 0x5c) * 4);
  *piVar1 = *piVar1 + uVar3;
  local_2c = 0;
  if (DAT_01258a14 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(unaff_EDI + 0x7c) + local_2c * 8);
      iVar5 = *(int *)(*(int *)(unaff_EDI + 0x7c) + 4 + local_2c * 8);
      if (iVar4 != 0 || iVar5 != 0) {
        piVar1 = (int *)(*(int *)(unaff_ESI + 0x2c + param_2 * 4) + local_2c * 4);
        uVar11 = __allmul(iVar4,iVar5,uVar10);
        *piVar1 = *piVar1 + ((uint)uVar11 >> 0x1e | (int)((ulonglong)uVar11 >> 0x20) << 2);
      }
      local_2c = local_2c + 1;
    } while (local_2c < DAT_01258a14);
  }
  if ((*(int *)(unaff_EDI + 0x274) == 0) ||
     (iVar4 = *(int *)(*(int *)(unaff_EDI + 0x274) + 0xc), iVar4 == 0)) {
    local_2c = 0;
    if (DAT_01258a18 != 0) {
      do {
        iVar4 = *(int *)(*(int *)(unaff_EDI + 0xa4) + local_2c * 8);
        iVar5 = *(int *)(*(int *)(unaff_EDI + 0xa4) + 4 + local_2c * 8);
        if (iVar4 != 0 || iVar5 != 0) {
          piVar1 = (int *)(*(int *)(unaff_ESI + 0x38 + param_2 * 4) + local_2c * 4);
          uVar11 = __allmul(iVar4,iVar5,uVar10);
          *piVar1 = *piVar1 + ((uint)uVar11 >> 0x1e | (int)((ulonglong)uVar11 >> 0x20) << 2);
        }
        local_2c = local_2c + 1;
      } while (local_2c < DAT_01258a18);
    }
  }
  else {
    piVar1 = (int *)(*(int *)(unaff_ESI + 0x38 + param_2 * 4) + *(int *)(iVar4 + 0x50) * 4);
    *piVar1 = *piVar1 + uVar3;
  }
  lVar12 = __allmul(*(undefined4 *)(unaff_EDI + 0x118),*(undefined4 *)(unaff_EDI + 0x11c),iVar6,
                    uVar9);
  uVar8 = (uint)(lVar12 >> 0x1e);
  puVar2 = (uint *)(unaff_ESI + 0x68 + param_2 * 8);
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  piVar1 = (int *)(unaff_ESI + 0x6c + param_2 * 8);
  *piVar1 = *piVar1 + (int)((ulonglong)(lVar12 >> 0x1e) >> 0x20) + (uint)CARRY4(uVar7,uVar8);
  lVar12 = __allmul(*(undefined4 *)(unaff_EDI + 0x120),*(undefined4 *)(unaff_EDI + 0x124),iVar6,
                    uVar9);
  uVar8 = (uint)(lVar12 >> 0x1e);
  puVar2 = (uint *)(unaff_ESI + 0x80 + param_2 * 8);
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  piVar1 = (int *)(unaff_ESI + 0x84 + param_2 * 8);
  *piVar1 = *piVar1 + (int)((ulonglong)(lVar12 >> 0x1e) >> 0x20) + (uint)CARRY4(uVar7,uVar8);
  *(int *)(unaff_ESI + 0x98) = *(int *)(unaff_ESI + 0x98) + *(int *)(unaff_EDI + 0x158);
  *(int *)(unaff_ESI + 0x9c) = *(int *)(unaff_ESI + 0x9c) + *(int *)(unaff_EDI + 0x15c);
  *(int *)(unaff_ESI + 0xa0) = *(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_EDI + 0x160);
  *(int *)(unaff_ESI + 0xa4) = *(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_EDI + 0x164);
  *(int *)(unaff_ESI + 0xa8) = *(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_EDI + 0x168);
  *(int *)(unaff_ESI + 0xac) = *(int *)(unaff_ESI + 0xac) + *(int *)(unaff_EDI + 0x16c);
  *(int *)(unaff_ESI + 0xb0) = *(int *)(unaff_ESI + 0xb0) + *(int *)(unaff_EDI + 0x170);
  *(int *)(unaff_ESI + 0xb4) = *(int *)(unaff_ESI + 0xb4) + *(int *)(unaff_EDI + 0x174);
  *(int *)(unaff_ESI + 0xb8) = *(int *)(unaff_ESI + 0xb8) + *(int *)(unaff_EDI + 0x178);
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x50) + param_1 * 4);
  *piVar1 = *piVar1 + uVar3;
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x58) + param_1 * 4);
  *piVar1 = *piVar1 + local_28;
  if (param_3 == '\0') {
    piVar1 = (int *)(*(int *)(unaff_ESI + 0x54) + param_1 * 4);
    *piVar1 = *piVar1 + uVar3;
    puVar2 = (uint *)(*(int *)(unaff_ESI + 0xcc) + param_1 * 8);
    lVar12 = __allmul(*(undefined4 *)(unaff_EDI + 0x128),*(undefined4 *)(unaff_EDI + 300),iVar6,
                      uVar9);
    uVar8 = (uint)(lVar12 >> 0xf);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 + uVar8;
    puVar2[1] = puVar2[1] + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) + (uint)CARRY4(uVar7,uVar8);
  }
  piVar1 = (int *)(*(int *)(unaff_ESI + 0xe8) + param_1 * 4);
  *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0x164);
  iVar4 = *(int *)(unaff_EDI + 0x134);
  if ((iVar4 < 0) || ((iVar4 < 1 && (*(uint *)(unaff_EDI + 0x130) < 0x8000)))) {
    uVar10 = __allmul(*(uint *)(unaff_EDI + 0x130),iVar4,iVar6,uVar9);
    uVar7 = (uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2;
    if (uVar7 == 0) {
      piVar1 = *(int **)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10);
      *piVar1 = *piVar1 + uVar3;
    }
    else {
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10) + 0xc);
      *piVar1 = *piVar1 + uVar7;
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10) + 4);
      *piVar1 = *piVar1 + uVar3;
    }
  }
  else {
    iVar4 = *(int *)(unaff_EDI + 0x13c);
    if ((iVar4 < 0) || ((iVar4 < 1 && (*(uint *)(unaff_EDI + 0x138) < 0x8000)))) {
      uVar10 = __allmul(*(uint *)(unaff_EDI + 0x138),iVar4,iVar6,uVar9);
      uVar7 = (uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2;
      param_1 = param_1 * 0x10;
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1) + 0x10);
      *piVar1 = *piVar1 + uVar7;
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1) + 8);
      *piVar1 = *piVar1 + (uVar3 - uVar7);
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1) + 0xc);
      *piVar1 = *piVar1 + (uVar3 - uVar7);
    }
    else {
      iVar4 = *(int *)(unaff_EDI + 0x144);
      if ((iVar4 < 0) || ((iVar4 < 1 && (*(uint *)(unaff_EDI + 0x140) < 0x8000)))) {
        uVar10 = __allmul(*(uint *)(unaff_EDI + 0x140),iVar4,iVar6,uVar9);
        uVar7 = (uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2;
        piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10) + 0x14);
        *piVar1 = *piVar1 + uVar7;
        piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10) + 0x10);
        *piVar1 = *piVar1 + (uVar3 - uVar7);
      }
      else {
        piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 0xbc) + param_1 * 0x10) + 0x14);
        *piVar1 = *piVar1 + uVar3;
      }
    }
  }
  iVar4 = *(int *)(unaff_EDI + 0x134);
  uVar3 = *(uint *)(unaff_EDI + 0x130);
  if ((iVar4 <= DAT_0131ba4c) &&
     (((iVar4 < DAT_0131ba4c || (uVar3 <= DAT_0131ba48)) && (*(char *)(unaff_EDI + 0x1d0) != '\0')))
     ) {
    uVar10 = __allmul(0x8000 - uVar3,-(uint)(0x8000 < uVar3) - iVar4,iVar6,uVar9);
    piVar1 = (int *)(unaff_ESI + 0xdc + param_2 * 4);
    *piVar1 = *piVar1 + ((uint)uVar10 >> 0x1e | (int)((ulonglong)uVar10 >> 0x20) << 2);
  }
  return;
}

