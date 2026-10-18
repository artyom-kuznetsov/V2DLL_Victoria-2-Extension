// FUN_00b23dc0 @ 00b23dc0 body=[[00b23dc0, 00b23e79]]


undefined4 FUN_00b23dc0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  longlong lVar3;
  
  *unaff_ESI = 0;
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    return 0;
  }
  iVar1 = FUN_00b2a1b0(param_1);
  *unaff_ESI = iVar1;
  if (iVar1 != 0) {
    lVar3 = FUN_00b2a250(iVar1,&param_2,4,1);
    if (lVar3 == 1) {
      if (param_2 == 0x4c564d44) {
        lVar3 = FUN_00b2a250(*unaff_ESI);
        if (lVar3 == 1) {
          uVar2 = PHYSFS_swapSLE32(*unaff_EDI);
          *unaff_EDI = uVar2;
          return 1;
        }
      }
      else {
        FUN_00b1f840("Archive type unsupported");
      }
    }
    if (*unaff_ESI != 0) {
      FUN_00b2a4f0(*unaff_ESI);
    }
    *unaff_EDI = 0xffffffff;
    *unaff_ESI = 0;
    return 0;
  }
  FUN_00b1f840(0);
  return 0;
}

