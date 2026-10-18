// FUN_00b184a0 @ 00b184a0 body=[[00b184a0, 00b185bf]]


void FUN_00b184a0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  undefined1 local_84 [64];
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_84;
  FID_conflict__memcpy(local_84,param_1,0x40);
  FUN_00b18680();
  FID_conflict__memcpy(local_44,local_84,0x40);
  FUN_00b182e0(local_44);
  fVar1 = *(float *)(in_ECX + 0x20) - 1.0;
  fVar3 = *(float *)(in_ECX + 0x24) - 1.0;
  fVar2 = *(float *)(in_ECX + 0x28) - 1.0;
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= 1e-05) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x20) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x24) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x28) = 0x3f800000;
    __security_check_cookie(local_4 ^ (uint)local_84);
    return;
  }
  fVar1 = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x24);
  fVar1 = fVar1 * fVar1;
  if ((fVar1 < 1e-05 != (fVar1 == 1e-05)) &&
     (fVar1 = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x28), fVar1 = fVar1 * fVar1,
     fVar1 < 1e-05 != (fVar1 == 1e-05))) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
    __security_check_cookie(local_4 ^ (uint)local_84);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_84);
  return;
}

