// FUN_004467f0 @ 004467f0 body=[[004467f0, 0044689c]]


uint FUN_004467f0(void)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x40) != 0) {
    in_EAX = FUN_00447410();
    if ((char)in_EAX != '\0') {
      iVar2 = DAT_01258a94;
      if (*(uint *)(unaff_EDI + 0x18) < 0x1269) {
        iVar2 = DAT_01258a98;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_009c1d40();
      }
      iVar1 = DAT_012588e8;
      in_EAX = *(uint *)(iVar2 + 100);
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(unaff_EDI + 0xc) * 4) + 0x134)
          == *(int *)(in_EAX + 300)) {
        iVar2 = FUN_00967f10();
        return CONCAT31((int3)((uint)*(int *)(iVar2 + 100) >> 8),
                        *(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + *(int *)(unaff_EDI + 8) * 4) +
                                0x134) == *(int *)(*(int *)(iVar2 + 100) + 300));
      }
    }
  }
  return in_EAX & 0xffffff00;
}

