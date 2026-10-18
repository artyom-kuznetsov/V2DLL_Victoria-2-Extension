// FUN_00b29fa0 @ 00b29fa0 body=[[00b29fa0, 00b2a02c]]


void FUN_00b29fa0(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_9c.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_9c);
  if (BVar1 == 0) {
    uVar2 = FUN_00b29110();
    FUN_00b1f840(uVar2);
  }
  else {
    DAT_00f20be4 = (uint)(local_9c.dwPlatformId != 1);
    iVar3 = FUN_00b28f20();
    if (iVar3 != 0) {
      iVar3 = FUN_00b292b0();
      if (iVar3 != 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  FUN_00b1f840(0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

