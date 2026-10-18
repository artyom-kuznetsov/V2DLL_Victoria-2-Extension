// FUN_00963fa0 @ 00963fa0 body=[[00963fa0, 00964148]]


longlong FUN_00963fa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint unaff_ESI;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_c [8];
  
  (**(code **)(*(int *)(DAT_00f20c04 + 0x13c) + 0x18))(local_c);
  lVar7 = __alldiv(unaff_ESI << 0x1e,((int)unaff_ESI >> 0x1f) << 0x1e | unaff_ESI >> 2,0x1f40000,0);
  iVar1 = *(int *)(param_1 + 100);
  uVar6 = *(uint *)(iVar1 + 0x9c);
  uVar2 = *(uint *)(uVar6 + 0x2e8);
  if (0 < (int)uVar2) {
    lVar8 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
    lVar7 = __allmul(lVar8 + 0x8000,lVar7);
    uVar6 = (uint)(lVar7 >> 0x2f);
    lVar7 = lVar7 >> 0xf;
  }
  if ((lVar7 < 0x100000000) && (lVar7 < 0)) {
LAB_0096403a:
    return (ulonglong)uVar6 << 0x20;
  }
  if (*(int *)(param_1 + 0x58) < 100) {
    if (*(int *)(iVar1 + 0x1a8) == *(int *)(param_1 + 0x58)) goto LAB_0096403a;
    iVar1 = *(int *)(param_1 + 100);
    if (*(int *)(iVar1 + 0x164) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(iVar1 + 0x15c);
    }
    piVar3 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar1 + 300) * 0x10) +
                      *(int *)(iVar5 + 0x6c) * 4);
    cVar4 = (**(code **)(*piVar3 + 0x34))();
    if ((cVar4 == '\0') ||
       (*(int *)(piVar3[0x1f] + *(int *)(*(int *)(param_1 + 0x68) + 0x28) * 4) < 1)) {
      return CONCAT44(param_1,*(undefined4 *)(param_1 + 0x58));
    }
  }
  uVar6 = *(uint *)(*(int *)(*(int *)(param_1 + 100) + 0x9c) + 0x2e8);
  lVar8 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
  if (lVar8 != 0) {
    lVar7 = __allmul(lVar8 + 0x8000,lVar7);
    lVar7 = lVar7 >> 0xf;
  }
  uVar6 = *(uint *)(param_1 + 0x58);
  lVar7 = __allmul(uVar6 << 0xf,((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11,lVar7);
  lVar7 = __allmul(lVar7 >> 0xf,*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x28),
                   *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x2c));
  return lVar7 >> 0x1e;
}

