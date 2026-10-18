// FUN_00b29480 @ 00b29480 body=[[00b29480, 00b29538]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b29480(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  int *piStack_18;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  piStack_18 = &local_c;
  uStack_1c = 0;
  local_c = 0;
  iVar1 = (*DAT_00f20ab4)();
  if (iVar1 == 0) {
    if ((uint)(local_c * 2) < 0x80) {
      puVar2 = &uStack_1c;
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    iVar1 = FUN_00b20970(puVar2,local_c * 2,0);
    if (iVar1 == 0) {
      FUN_00b1f840("Out of memory");
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = (*DAT_00f20ab4)(iVar1,&local_c);
    if (iVar3 == 0) {
      uVar4 = FUN_00b29110();
      FUN_00b1f840(uVar4);
    }
    else {
      FUN_00b28840(iVar1);
    }
    FUN_00b209b0(iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

