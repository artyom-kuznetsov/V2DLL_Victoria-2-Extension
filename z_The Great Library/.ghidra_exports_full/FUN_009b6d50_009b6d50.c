// FUN_009b6d50 @ 009b6d50 body=[[009b6d50, 009b6dee]]


int FUN_009b6d50(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  undefined4 local_10;
  
  local_10 = (int)(longlong)ROUND(*(float *)(in_EDX + 0xc) * 255.0);
  iVar2 = local_10 * 0x100;
  local_10 = (int)(longlong)ROUND(*(float *)(in_EDX + 0x10) * 255.0);
  iVar2 = iVar2 + local_10;
  local_10 = (int)(longlong)ROUND(*(float *)(in_EDX + 8) * 255.0);
  iVar1 = local_10 * 0x10000;
  local_10 = (int)(longlong)ROUND(*(float *)(in_EDX + 0x14) * 255.0);
  return local_10 * 0x1000000 + iVar2 + iVar1;
}

