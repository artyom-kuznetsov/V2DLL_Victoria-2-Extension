// FUN_00a613a0 @ 00a613a0 body=[[00a613a0, 00a61402]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a613a0(undefined4 param_1)

{
  DWORD DVar1;
  int *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0x13;
  local_c = param_1;
  (**(code **)(*in_ECX + 0x14))(&local_10,8,0xffffffff,1);
  DVar1 = timeGetTime();
  DAT_012586d0 = DVar1 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  FUN_009b0f50(in_ECX[7],param_1);
  return;
}

