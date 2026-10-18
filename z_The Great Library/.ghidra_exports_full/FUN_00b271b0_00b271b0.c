// FUN_00b271b0 @ 00b271b0 body=[[00b271b0, 00b27353]]


undefined4 FUN_00b271b0(void)

{
  int iVar1;
  int unaff_EDI;
  longlong lVar2;
  uint local_c;
  ushort local_8 [2];
  
  iVar1 = FUN_00b2a2f0();
  if (iVar1 != 0) {
    lVar2 = FUN_00b2a250();
    if (lVar2 != 1) {
      FUN_00b1f840(0);
      FUN_00b1f840(0);
      return 0;
    }
    local_c = PHYSFS_swapSLE32(local_c);
    if (local_c != 0x4034b50) {
LAB_00b27223:
      FUN_00b1f840("Corrupted archive");
      return 0;
    }
    iVar1 = FUN_00b26620(local_8);
    if (iVar1 != 0) {
      if (local_8[0] != *(ushort *)(unaff_EDI + 0x12)) goto LAB_00b27223;
      iVar1 = FUN_00b26620(local_8);
      if ((iVar1 != 0) && (iVar1 = FUN_00b26620(local_8), iVar1 != 0)) {
        if (local_8[0] != *(ushort *)(unaff_EDI + 0x14)) goto LAB_00b27223;
        iVar1 = FUN_00b265d0(&local_c);
        if ((iVar1 != 0) && (iVar1 = FUN_00b265d0(&local_c), iVar1 != 0)) {
          if ((local_c != 0) && (local_c != *(uint *)(unaff_EDI + 0x18))) goto LAB_00b27223;
          iVar1 = FUN_00b265d0(&local_c);
          if (iVar1 != 0) {
            if ((local_c != 0) && (local_c != *(uint *)(unaff_EDI + 0x1c))) goto LAB_00b27223;
            iVar1 = FUN_00b265d0(&local_c);
            if (iVar1 != 0) {
              if ((local_c != 0) && (local_c != *(uint *)(unaff_EDI + 0x20))) goto LAB_00b27223;
              iVar1 = FUN_00b26620(&local_c);
              if ((iVar1 != 0) && (iVar1 = FUN_00b26620(local_8), iVar1 != 0)) {
                *(int *)(unaff_EDI + 0xc) =
                     *(int *)(unaff_EDI + 0xc) + local_8[0] + 0x1e + (local_c & 0xffff);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_00b1f840(0);
  return 0;
}

