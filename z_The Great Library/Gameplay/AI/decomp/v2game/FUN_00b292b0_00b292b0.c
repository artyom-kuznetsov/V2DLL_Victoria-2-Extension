// FUN_00b292b0 @ 00b292b0 body=[[00b292b0, 00b293c4]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b292b0(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  int local_10;
  HANDLE local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (DAT_00f20be0 == 0) {
    if (DAT_00f20bdc != (code *)0x0) {
      local_c = (HANDLE)0x0;
      ProcessHandle = GetCurrentProcess();
      BVar1 = OpenProcessToken(ProcessHandle,8,&local_c);
      if (BVar1 != 0) {
        local_10 = 0;
        local_14 = 0;
        (*DAT_00f20bdc)(local_c,&local_14,&local_10);
        if ((uint)(local_10 * 2) < 0x80) {
          puVar2 = &stack0xffffffe8;
        }
        else {
          puVar2 = (undefined1 *)0x0;
        }
        iVar3 = FUN_00b20970(puVar2,local_10 * 2,0);
        if (iVar3 != 0) {
          iVar4 = (*DAT_00f20bdc)(local_c,iVar3,&local_10);
          if (iVar4 != 0) {
            DAT_00f20be0 = FUN_00b28840(iVar3);
          }
          FUN_00b209b0(iVar3);
        }
      }
      CloseHandle(local_c);
      if (DAT_00f20be0 != 0) goto LAB_00b293ae;
    }
    DAT_00f20be0 = FUN_00b291c0();
    if (DAT_00f20be0 == 0) {
      FUN_00b1f840(0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_00b293ae:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

