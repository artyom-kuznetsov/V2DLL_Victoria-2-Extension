// FUN_00b242c0 @ 00b242c0 body=[[00b242c0, 00b2446b]]


void FUN_00b242c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  longlong lVar2;
  uint local_1c;
  char local_18;
  char local_17;
  char local_16;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_00b2a1b0(param_1);
  *unaff_ESI = iVar1;
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  lVar2 = FUN_00b2a250(iVar1,&local_18,3,1);
  if (lVar2 == 1) {
    if (((local_18 == 'D') && (local_17 == 'H')) && (local_16 == 'F')) {
      lVar2 = FUN_00b2a250(*unaff_ESI,&local_18,0xd,1);
      while (lVar2 == 1) {
        lVar2 = FUN_00b2a250(*unaff_ESI,&local_1c,4,1);
        if (lVar2 != 1) goto LAB_00b24440;
        local_1c = PHYSFS_swapSLE32(local_1c);
        *unaff_EDI = *unaff_EDI + 1;
        lVar2 = FUN_00b2a340(*unaff_ESI);
        if ((lVar2 == -1) ||
           (iVar1 = FUN_00b2a2f0(*unaff_ESI,lVar2 + (ulonglong)local_1c), iVar1 == 0))
        goto LAB_00b24440;
        lVar2 = FUN_00b2a250(*unaff_ESI,&local_18,0xd,1);
      }
      iVar1 = FUN_00b2a2f0(*unaff_ESI,3,0);
      if (iVar1 != 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      FUN_00b1f840("Archive type unsupported");
    }
  }
LAB_00b24440:
  if (*unaff_ESI != 0) {
    FUN_00b2a4f0(*unaff_ESI);
  }
  *unaff_EDI = -1;
  *unaff_ESI = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

