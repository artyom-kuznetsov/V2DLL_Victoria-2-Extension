// FUN_00b2a0a0 @ 00b2a0a0 body=[[00b2a0a0, 00b2a1ad]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b2a0a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  HANDLE hObject;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  uVar3 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar1 = ((int)pcVar4 - (int)(param_1 + 1)) * 2 + 2;
    if (uVar1 < 0x80) {
      puVar5 = &stack0xffffffec;
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    iVar6 = FUN_00b20970(puVar5,uVar1,0);
    if (iVar6 != 0) {
      PHYSFS_utf8ToUcs2(param_1,iVar6,uVar1,0);
      hObject = (HANDLE)(*DAT_00f20bd8)(iVar6,param_2,3,0,param_3,0x80,0);
      FUN_00b209b0(iVar6);
      if (hObject == (HANDLE)0xffffffff) {
        uVar7 = FUN_00b29110();
        FUN_00b1f840(uVar7);
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      puVar8 = (undefined4 *)(*DAT_013f3aa8)(8,0);
      if (puVar8 != (undefined4 *)0x0) {
        puVar8[1] = param_4;
        *puVar8 = hObject;
        __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return;
      }
      CloseHandle(hObject);
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

