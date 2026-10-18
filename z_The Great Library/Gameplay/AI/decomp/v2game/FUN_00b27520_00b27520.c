// FUN_00b27520 @ 00b27520 body=[[00b27520, 00b277a6]]


undefined4 FUN_00b27520(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  longlong lVar3;
  undefined8 uVar4;
  int local_18;
  undefined1 local_14 [4];
  ushort local_10 [2];
  undefined8 local_c;
  
  lVar3 = FUN_00b2a250();
  if (lVar3 == 1) {
    local_18 = PHYSFS_swapSLE32(local_18);
    if (local_18 != 0x2014b50) {
      FUN_00b1f840("Corrupted archive");
      return 0;
    }
    iVar2 = FUN_00b26620(unaff_ESI + 4);
    if ((((iVar2 != 0) && (iVar2 = FUN_00b26620((int)unaff_ESI + 0x12), iVar2 != 0)) &&
        (iVar2 = FUN_00b26620((int)&local_c + 4), iVar2 != 0)) &&
       ((iVar2 = FUN_00b26620(unaff_ESI + 5), iVar2 != 0 &&
        (iVar2 = FUN_00b265d0(&local_18), iVar2 != 0)))) {
      uVar4 = FUN_00b27480();
      *(undefined8 *)(unaff_ESI + 10) = uVar4;
      iVar2 = FUN_00b265d0(unaff_ESI + 6);
      if (((iVar2 != 0) &&
          ((iVar2 = FUN_00b265d0(unaff_ESI + 7), iVar2 != 0 &&
           (iVar2 = FUN_00b265d0(unaff_ESI + 8), iVar2 != 0)))) &&
         ((iVar2 = FUN_00b26620(local_10), iVar2 != 0 &&
          ((((iVar2 = FUN_00b26620(&local_18), iVar2 != 0 &&
             (iVar2 = FUN_00b26620(local_14), iVar2 != 0)) &&
            (iVar2 = FUN_00b26620((int)&local_c + 4), iVar2 != 0)) &&
           ((iVar2 = FUN_00b26620((int)&local_c + 4), iVar2 != 0 &&
            (iVar2 = FUN_00b265d0((int)&local_c + 4), iVar2 != 0)))))))) {
        piVar1 = unaff_ESI + 3;
        iVar2 = FUN_00b265d0(piVar1);
        if (iVar2 == 0) {
          FUN_00b1f840(0);
          return 0;
        }
        *piVar1 = *piVar1 + param_1;
        unaff_ESI[1] = 0;
        iVar2 = FUN_00b27420();
        unaff_ESI[2] = (uint)(iVar2 != 0);
        iVar2 = (*DAT_013f3aa8)(local_10[0] + 1,0);
        *unaff_ESI = iVar2;
        if (iVar2 != 0) {
          lVar3 = FUN_00b2a250();
          if (lVar3 == 1) {
            *(undefined1 *)((uint)local_10[0] + *unaff_ESI) = 0;
            FUN_00b26e90();
            local_c = FUN_00b2a340();
            if (local_c != -1) {
              iVar2 = FUN_00b2a2f0();
              if (iVar2 != 0) {
                return 1;
              }
            }
          }
          (*DAT_013f3ab0)(*unaff_ESI);
          return 0;
        }
        FUN_00b1f840("Out of memory");
        return 0;
      }
    }
  }
  else {
    FUN_00b1f840(0);
  }
  FUN_00b1f840(0);
  return 0;
}

