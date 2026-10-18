// FUN_00b2f040 @ 00b2f040 body=[[00b2f040, 00b2f12a]]


void FUN_00b2f040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  char local_18 [4];
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00b30820(local_18,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    local_c = (*(code *)*param_7)((0x300 << (local_18[0] + local_14 & 0x1fU)) * 2 + 0xe6c);
    if (local_c == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = FUN_00b308b0(local_18,param_4,param_2,local_20,param_5,param_6,local_1c);
    (*(code *)param_7[1])(local_c);
    if (iVar1 == 1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar1 == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

