// FUN_00b27940 @ 00b27940 body=[[00b27940, 00b27ad2]]


undefined4 FUN_00b27940(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int local_18;
  int local_14;
  int local_c;
  ushort local_8 [2];
  
  lVar4 = FUN_00b26a80();
  uVar1 = (uint)lVar4;
  if (lVar4 != -1) {
    iVar2 = FUN_00b2a2f0();
    if (iVar2 != 0) {
      iVar2 = FUN_00b265d0(&local_c);
      if (iVar2 != 0) {
        if (local_c != 0x6054b50) {
          FUN_00b1f840("Not an archive");
          return 0;
        }
        iVar2 = FUN_00b26620(local_8);
        if (iVar2 != 0) {
          if (local_8[0] != 0) {
LAB_00b279c9:
            FUN_00b1f840("Archive type unsupported");
            return 0;
          }
          iVar2 = FUN_00b26620(local_8);
          if (iVar2 != 0) {
            if (local_8[0] != 0) goto LAB_00b279c9;
            iVar2 = FUN_00b26620(local_8);
            if (iVar2 != 0) {
              iVar2 = FUN_00b26620((ushort *)(param_1 + 4));
              if (iVar2 != 0) {
                if (local_8[0] != *(ushort *)(param_1 + 4)) goto LAB_00b279c9;
                iVar2 = FUN_00b265d0(&local_c);
                if (iVar2 != 0) {
                  iVar2 = FUN_00b265d0(param_3);
                  if (iVar2 != 0) {
                    if ((0xffffffff < lVar4) ||
                       ((-1 < lVar4 && ((uint)(local_c + *param_3) <= uVar1)))) {
                      local_c = (uVar1 - *param_3) - local_c;
                      *param_2 = local_c;
                      *param_3 = *param_3 + local_c;
                      iVar2 = FUN_00b26620(local_8);
                      if (iVar2 == 0) goto LAB_00b2795f;
                      uVar3 = local_8[0] + uVar1;
                      if ((uVar3 + 0x16 == local_18) &&
                         ((int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4((uint)local_8[0],uVar1) +
                          (uint)(0xffffffe9 < uVar3) == local_14)) {
                        return 1;
                      }
                    }
                    goto LAB_00b279c9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00b2795f:
  FUN_00b1f840(0);
  return 0;
}

