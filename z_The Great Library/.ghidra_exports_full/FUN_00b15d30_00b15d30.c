// FUN_00b15d30 @ 00b15d30 body=[[00b15d30, 00b15d9b]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00b15d30(char *param_1)

{
  char local_1004 [4096];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_1004;
  if ((*(byte *)(*(int *)(DAT_00f209e4 + 4) + 0x10) & 2) != 0) {
    _vsprintf(local_1004,param_1,&stack0x00000008);
    FUN_00b15bc0(local_1004,2);
  }
  __security_check_cookie(local_4 ^ (uint)local_1004);
  return;
}

