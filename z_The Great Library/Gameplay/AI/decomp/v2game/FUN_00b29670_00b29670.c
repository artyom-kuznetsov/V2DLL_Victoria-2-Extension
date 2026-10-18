// FUN_00b29670 @ 00b29670 body=[[00b29670, 00b2968c] [00b29690, 00b29729]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b29670(char *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  
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
      (*DAT_00f20bc4)(iVar6);
      FUN_00b209b0(iVar6);
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

