// FUN_00a24fa0 @ 00a24fa0 body=[[00a24fa0, 00a2509d]]


void FUN_00a24fa0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_c;
  
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined8 *)(in_ECX + 100) = *(undefined8 *)(in_ECX + 0x48);
  *(undefined8 *)(in_ECX + 0x6c) = *(undefined8 *)(in_ECX + 0x50);
  *(undefined1 *)(in_ECX + 0x74) = *(undefined1 *)(in_ECX + 0x58);
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x14) * 255.0);
  uVar3 = local_c << 8;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 8) * 255.0);
  uVar1 = local_c & 0xff;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0xc) * 255.0);
  uVar2 = local_c & 0xff;
  local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x10) * 255.0);
  *(uint *)(in_ECX + 0x38) = ((uVar3 | uVar1) << 8 | uVar2) << 8 | local_c & 0xff;
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(in_ECX + 0x48) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(in_ECX + 0x50) = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(in_ECX + 0x58) = *(undefined1 *)(param_1 + 0x18);
  return;
}

