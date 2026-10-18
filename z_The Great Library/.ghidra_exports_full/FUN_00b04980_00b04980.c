// FUN_00b04980 @ 00b04980 body=[[00b04980, 00b049c3]]


undefined4 FUN_00b04980(float param_1)

{
  int in_ECX;
  undefined4 local_8;
  
  local_8 = (uint)(longlong)ROUND(param_1 / *(float *)(in_ECX + 0x8c));
  if (local_8 < *(uint *)(in_ECX + 0x58)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x54) + local_8 * 4);
  }
  return 0;
}

