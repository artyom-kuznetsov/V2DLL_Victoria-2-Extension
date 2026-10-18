// FUN_00b29ee0 @ 00b29ee0 body=[[00b29ee0, 00b29f9d]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b29ee0(char *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar3 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
    iVar8 = 0;
  }
  else {
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
    iVar8 = FUN_00b20970(puVar5,uVar1,0);
    if (iVar8 != 0) {
      PHYSFS_utf8ToUcs2(param_1,iVar8,uVar1,0);
    }
  }
  iVar6 = (*DAT_00f20abc)(iVar8,0);
  FUN_00b209b0(iVar8);
  if (iVar6 != 0) {
    __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar7 = FUN_00b29110();
  FUN_00b1f840(uVar7);
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

