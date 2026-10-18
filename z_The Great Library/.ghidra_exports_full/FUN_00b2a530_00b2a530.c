// FUN_00b2a530 @ 00b2a530 body=[[00b2a530, 00b2a54c] [00b2a550, 00b2a60f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b2a530(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ((int)pcVar3 - (int)(param_1 + 1)) * 2 + 2;
    if (uVar6 < 0x80) {
      puVar4 = &stack0xffffffec;
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    iVar5 = FUN_00b20970(puVar4,uVar6,0);
    if (iVar5 != 0) {
      PHYSFS_utf8ToUcs2(param_1,iVar5,uVar6,0);
      uVar6 = (*DAT_00f20bc4)(iVar5);
      if ((uVar6 & 0x10) == 0) {
        iVar7 = (*DAT_00f20aa8)(iVar5);
      }
      else {
        iVar7 = (*DAT_00f20aac)();
      }
      if (iVar7 == 0) {
        uVar8 = FUN_00b29110();
        FUN_00b1f840(uVar8);
      }
      FUN_00b209b0(iVar5);
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

