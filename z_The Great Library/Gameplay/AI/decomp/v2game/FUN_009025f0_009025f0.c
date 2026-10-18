// FUN_009025f0 @ 009025f0 body=[[009025f0, 009026be]]


uint FUN_009025f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_10;
  
  uVar1 = FUN_00902590();
  if ((((char)uVar1 == '\0') ||
      (((uVar1 = *(uint *)(in_ECX + 0x28), (int)uVar1 < 1 &&
        (uVar1 = *(uint *)(param_1 + 0x10), (int)uVar1 < 1)) &&
       (uVar1 = *(uint *)(param_1 + 0x34), (int)uVar1 < 1)))) ||
     (iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + uVar1 * 4), iVar2 == 0)) {
    return uVar1 & 0xffffff00;
  }
  local_10 = 0.0;
  FUN_00408ed0(in_ECX + 0x2c,0,0xffffffff);
  iVar2 = FUN_004bd2d0(iVar2);
  if (iVar2 != 0) {
    local_10 = (float)((float10)*(longlong *)(iVar2 + 8) * (float10)3.0517578125e-05);
  }
  if (local_10 <= (float)((float10)*(longlong *)(in_ECX + 0x20) * (float10)3.0517578125e-05)) {
    return 1;
  }
  return 0;
}

