// FUN_009b6df0 @ 009b6df0 body=[[009b6df0, 009b6e9e]]


uint FUN_009b6df0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_10;
  
  local_10 = (uint)(longlong)ROUND(*(float *)(in_ECX + 8) * 255.0);
  uVar3 = local_10 & 0xff;
  local_10 = (uint)(longlong)ROUND(*(float *)(in_ECX + 0x14) * 255.0);
  uVar1 = local_10 << 8;
  local_10 = (uint)(longlong)ROUND(*(float *)(in_ECX + 0xc) * 255.0);
  uVar2 = local_10 & 0xff;
  local_10 = (uint)(longlong)ROUND(*(float *)(in_ECX + 0x10) * 255.0);
  return local_10 & 0xff | ((uVar3 | uVar1) << 8 | uVar2) << 8;
}

