// FUN_00b29b80 @ 00b29b80 body=[[00b29b80, 00b29c31]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b29b80(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  uStack_14 = 0;
  uStack_18 = 0;
  iVar3 = (*DAT_00f20bcc)();
  uVar1 = iVar3 * 2 + 4;
  if (uVar1 < 0x80) {
    puVar4 = &uStack_18;
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  iVar5 = FUN_00b20970(puVar4,uVar1,0);
  if (iVar5 == 0) {
    FUN_00b1f840("Out of memory");
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_00f20bcc)(iVar3,iVar5);
  if (*(short *)(iVar5 + -4 + iVar3 * 2) == 0x5c) {
    *(undefined2 *)(iVar5 + -2 + iVar3 * 2) = 0;
  }
  else {
    *(undefined4 *)(iVar5 + -2 + iVar3 * 2) = 0x5c;
  }
  FUN_00b28840(iVar5);
  FUN_00b209b0(iVar5);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

