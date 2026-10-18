// FUN_00a1ffe0 @ 00a1ffe0 body=[[00a1ffe0, 00a20088]]


void FUN_00a1ffe0(float *param_1)

{
  ushort uVar1;
  int *in_ECX;
  undefined4 local_8;
  
  local_8 = in_ECX;
  (**(code **)(*in_ECX + 0xd8))(&local_8);
  if (((short)local_8 == 0) && (local_8._2_2_ == 0)) {
    local_8 = *(int **)((int)in_ECX + 0x126);
  }
  uVar1 = *(ushort *)((int)in_ECX + 0x106);
  *param_1 = (float)*(ushort *)(in_ECX + 0x41) * 0.5 + (float)in_ECX[0x31];
  param_1[1] = (((float)in_ECX[0x32] - (float)uVar1 * 0.5) +
               (float)(int)(short)((uint)local_8 >> 0x10)) * -1.0;
  return;
}

