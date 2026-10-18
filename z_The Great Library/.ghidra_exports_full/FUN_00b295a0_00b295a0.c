// FUN_00b295a0 @ 00b295a0 body=[[00b295a0, 00b295bc] [00b295c0, 00b2966d]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b295a0(char *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
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
      iVar7 = (*DAT_00f20bc4)(iVar6);
      if (iVar7 == -1) {
        uVar8 = FUN_00b29110();
        FUN_00b1f840(uVar8);
      }
      FUN_00b209b0(iVar6);
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

