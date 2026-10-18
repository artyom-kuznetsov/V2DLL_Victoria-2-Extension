// FUN_00b25e30 @ 00b25e30 body=[[00b25e30, 00b25eeb]]


void FUN_00b25e30(undefined4 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_00b2a1b0(param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_00b2a250(iVar1,local_10,6,1);
    if (lVar2 != 1) {
      FUN_00b2a4f0(iVar1);
      FUN_00b1f840(0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00b2a4f0(iVar1);
    FUN_00b2b720(local_10);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00b1f840(0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

