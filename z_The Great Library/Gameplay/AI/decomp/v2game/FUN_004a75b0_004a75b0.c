// FUN_004a75b0 @ 004a75b0  (requested 004A75B0, first bytes: 55 8B EC 83 E4 F8 83 EC)


undefined4 FUN_004a75b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_ESI;
  undefined8 uVar8;
  int local_14;
  
  iVar1 = *(int *)(unaff_ESI + 0x20);
  iVar3 = *(int *)(unaff_ESI + 0x128) * 1000;
  local_14 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x18) + 300) + 0x128) * iVar1 * 1000;
  if (local_14 == 0) {
    local_14 = -1;
  }
  else if (iVar3 + 0x189373U < 0x39580e) {
    local_14 = (*(int *)(unaff_ESI + 0x128) * 1000000) / local_14;
  }
  else {
    uVar8 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
    local_14 = __alldiv(uVar8,local_14,local_14 >> 0x1f);
  }
  uVar5 = *(uint *)(unaff_ESI + 0x1d8) - *(uint *)(unaff_ESI + 0x168);
  uVar6 = uVar5 - *(uint *)(unaff_ESI + 0x158);
  uVar7 = uVar6 + *(uint *)(unaff_ESI + 0x170);
  uVar2 = *(uint *)(unaff_ESI + 0x160);
  iVar3 = ((((*(int *)(unaff_ESI + 0x1dc) - *(int *)(unaff_ESI + 0x16c)) -
            (uint)(*(uint *)(unaff_ESI + 0x1d8) < *(uint *)(unaff_ESI + 0x168))) -
           *(int *)(unaff_ESI + 0x15c)) - (uint)(uVar5 < *(uint *)(unaff_ESI + 0x158))) +
          *(int *)(unaff_ESI + 0x174) + (uint)CARRY4(uVar6,*(uint *)(unaff_ESI + 0x170)) +
          *(int *)(unaff_ESI + 0x164) + (uint)CARRY4(uVar7,*(uint *)(unaff_ESI + 0x160));
  if ((((*(int *)(unaff_ESI + 0x17c) == 0) && (0 < iVar1)) && (*(int *)(unaff_ESI + 0x184) < 0xb))
     && (*(char *)(unaff_ESI + 0x188) == '\0')) {
    FUN_00401000(0x44612000);
    iVar4 = FUN_00b31c00();
    if (((iVar4 <= local_14) && (iVar1 != *(int *)(*(int *)(unaff_ESI + 0x18) + 0xc4))) &&
       ((DAT_013f368c <= iVar3 && ((DAT_013f368c < iVar3 || (DAT_013f3688 < uVar7 + uVar2)))))) {
      return 1;
    }
  }
  return 0;
}

