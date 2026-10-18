// FUN_00963e50 @ 00963e50 body=[[00963e50, 00963f9b]]


uint FUN_00963e50(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint unaff_ESI;
  int unaff_EDI;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_10 [12];
  
  (**(code **)(*(int *)(DAT_00f20c04 + 0x1c) + 0x18))(local_10);
  lVar6 = __alldiv(unaff_ESI << 0x1e,((int)unaff_ESI >> 0x1f) << 0x1e | unaff_ESI >> 2,0x1f40000,0);
  if (((int)((ulonglong)lVar6 >> 0x20) < 1) && (lVar6 < 0)) {
    return 0;
  }
  if (*(int *)(unaff_EDI + 0x58) < 100) {
    iVar1 = *(int *)(unaff_EDI + 100);
    if (*(int *)(iVar1 + 0x1a8) == *(int *)(unaff_EDI + 0x58)) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x164) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(iVar1 + 0x15c);
    }
    piVar2 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar1 + 300) * 0x10) +
                      *(int *)(iVar5 + 0x6c) * 4);
    cVar4 = (**(code **)(*piVar2 + 0x34))();
    if ((cVar4 == '\0') ||
       (*(int *)(piVar2[0x1f] + *(int *)(*(int *)(unaff_EDI + 0x68) + 0x28) * 4) < 1)) {
      return *(uint *)(unaff_EDI + 0x58);
    }
  }
  uVar3 = *(uint *)(*(int *)(*(int *)(unaff_EDI + 100) + 0x9c) + 0x2e8);
  lVar7 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  if (lVar7 != 0) {
    lVar6 = __allmul(lVar7 + 0x8000,lVar6);
    lVar6 = lVar6 >> 0xf;
  }
  uVar3 = *(uint *)(unaff_EDI + 0x58);
  lVar6 = __allmul(uVar3 << 0xf,((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11,lVar6);
  uVar8 = __allmul(lVar6 >> 0xf,*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x28),
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x2c));
  return (uint)uVar8 >> 0x1e | (int)((ulonglong)uVar8 >> 0x20) << 2;
}

