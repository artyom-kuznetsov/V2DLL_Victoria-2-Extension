// FUN_004c19a0 @ 004c19a0 body=[[004c19a0, 004c1ab3]]


void FUN_004c19a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_8;
  
  if (*(int *)(*(int *)(unaff_EDI + 0x1c) + 300) != 0) {
    uVar1 = *(uint *)(*(int *)(*(int *)(unaff_EDI + 0x1c) + 0x5c) + 0x2c);
    FUN_005766c0();
    lVar5 = __alldiv(local_8 << 0x1e,((int)local_8 >> 0x1f) << 0x1e | local_8 >> 2,0x1f40000,0);
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0x1c) + 0x9c);
    if (*(char *)(*(int *)(unaff_EDI + 8) + 0x13d) == '\0') {
      iVar2 = *(int *)(iVar4 + 0x280);
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x278);
    }
    uVar3 = *(int *)(iVar4 + *(int *)(*(int *)(unaff_EDI + 8) + 0x130) * 8) + iVar2;
    lVar6 = __alldiv(uVar3 * 0x40000000,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
    lVar5 = __allmul(lVar5 + lVar6 + 0x8000,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11
                    );
    *(longlong *)(unaff_EDI + 0x88) = lVar5 >> 0xf;
    uVar7 = FUN_00b31c36();
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((*(int *)(unaff_EDI + 0x8c) <= iVar4) &&
       ((*(int *)(unaff_EDI + 0x8c) < iVar4 || (*(uint *)(unaff_EDI + 0x88) < (uint)uVar7)))) {
      *(undefined8 *)(unaff_EDI + 0x88) = uVar7;
    }
  }
  return;
}

