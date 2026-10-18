// FUN_00b25370 @ 00b25370 body=[[00b25370, 00b2547c]]


void FUN_00b25370(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  longlong lVar4;
  int local_14 [4];
  
  local_14[3] = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  *unaff_ESI = 0;
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_00b2a1b0(param_1);
  *unaff_ESI = iVar1;
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
    return;
  }
  lVar4 = FUN_00b2a250(iVar1,local_14,0xc,1);
  if (lVar4 == 1) {
    uVar2 = 0xc;
    iVar1 = 0;
    do {
      if (*(int *)((int)local_14 + iVar1) != *(int *)("KenSilverman" + iVar1)) {
        FUN_00b1f840("Archive type unsupported");
        goto LAB_00b25423;
      }
      uVar2 = uVar2 - 4;
      iVar1 = iVar1 + 4;
    } while (3 < uVar2);
    lVar4 = FUN_00b2a250(*unaff_ESI);
    if (lVar4 == 1) {
      uVar3 = PHYSFS_swapSLE32(*unaff_EDI);
      *unaff_EDI = uVar3;
      __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_00b25423:
  if (*unaff_ESI != 0) {
    FUN_00b2a4f0(*unaff_ESI);
  }
  *unaff_EDI = 0xffffffff;
  *unaff_ESI = 0;
  __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return;
}

