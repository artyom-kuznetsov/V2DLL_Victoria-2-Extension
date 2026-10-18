// FUN_009ebd70 @ 009ebd70 body=[[009ebd70, 009ebf07]]


void FUN_009ebd70(float *param_1)

{
  int in_ECX;
  undefined1 local_1c [12];
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *(float *)(in_ECX + 0x128) - *(float *)(in_ECX + 0x11c);
  local_c = *(float *)(in_ECX + 300) - *(float *)(in_ECX + 0x120);
  local_8 = *(float *)(in_ECX + 0x130) - *(float *)(in_ECX + 0x124);
  D3DXVec3Normalize(local_1c,&local_10);
  *(undefined8 *)(in_ECX + 0xf8) = *(undefined8 *)(in_ECX + 0x11c);
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(in_ECX + 0x128);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0x130);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0x124);
  *(float *)(in_ECX + 0x100) = *(float *)(in_ECX + 0x100) + param_1[2];
  *(float *)(in_ECX + 0x10c) = param_1[2] + *(float *)(in_ECX + 0x10c);
  *(float *)(in_ECX + 0xf8) = *param_1 + *(float *)(in_ECX + 0xf8);
  *(float *)(in_ECX + 0x104) = *param_1 + *(float *)(in_ECX + 0x104);
  *(float *)(in_ECX + 0xfc) = *(float *)(in_ECX + 0xfc) + param_1[1];
  *(float *)(in_ECX + 0x108) = param_1[1] + *(float *)(in_ECX + 0x108);
  FUN_009ebf10(in_ECX);
  return;
}

