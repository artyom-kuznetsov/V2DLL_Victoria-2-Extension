// FUN_0095eb00 @ 0095eb00 body=[[0095eb00, 0095ebe4]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095eb00(void)

{
  uint uVar1;
  int unaff_ESI;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_013f1a90 & 1) == 0) {
    DAT_013f1a88 = *(undefined4 *)(*(int *)(DAT_00f20c08 + 0x50) + 0x100);
    DAT_013f1a8c = *(undefined4 *)(*(int *)(DAT_00f20c08 + 0x50) + 0x104);
    DAT_013f1a90 = DAT_013f1a90 | 1;
  }
  if ((DAT_013f1a90 & 2) == 0) {
    DAT_013f1a90 = DAT_013f1a90 | 2;
    _DAT_013f1a80 = FUN_00b31c36();
  }
  lVar2 = __alldiv(*(uint *)(unaff_ESI + 0x118) << 0xf,
                   *(int *)(unaff_ESI + 0x11c) << 0xf | *(uint *)(unaff_ESI + 0x118) >> 0x11,
                   DAT_013f1a88,DAT_013f1a8c);
  uVar1 = *(uint *)(unaff_ESI + 0x58);
  uVar3 = __allmul(_DAT_013f1a80 + lVar2,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  uVar3 = __alldiv((uint)uVar3 & 0xffff8000,(int)((ulonglong)uVar3 >> 0x20),0xc3500000,0);
  *(undefined8 *)(unaff_ESI + 0x1b0) = uVar3;
  lVar2 = __allmul(*(undefined4 *)(unaff_ESI + 0x50),*(undefined4 *)(unaff_ESI + 0x54),uVar3);
  *(longlong *)(unaff_ESI + 0x1b0) = lVar2 >> 0xf;
  return;
}

