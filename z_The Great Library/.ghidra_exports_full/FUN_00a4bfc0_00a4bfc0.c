// FUN_00a4bfc0 @ 00a4bfc0 body=[[00a4bfc0, 00a4c0d8]]


void FUN_00a4bfc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_c;
  
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(in_ECX + 0x78);
  *(undefined8 *)(in_ECX + 0x9c) = *(undefined8 *)(in_ECX + 0x7c);
  *(undefined8 *)(in_ECX + 0xa4) = *(undefined8 *)(in_ECX + 0x84);
  *(undefined1 *)(in_ECX + 0xac) = *(undefined1 *)(in_ECX + 0x8c);
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x14) * 255.0);
  uVar3 = local_c << 8;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 8) * 255.0);
  uVar1 = local_c & 0xff;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0xc) * 255.0);
  uVar2 = local_c & 0xff;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x10) * 255.0);
  *(uint *)(in_ECX + 0x70) = ((uVar3 | uVar1) << 8 | uVar2) << 8 | local_c & 0xff;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(in_ECX + 0x7c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(in_ECX + 0x84) = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(in_ECX + 0x8c) = *(undefined1 *)(param_1 + 0x18);
  return;
}

