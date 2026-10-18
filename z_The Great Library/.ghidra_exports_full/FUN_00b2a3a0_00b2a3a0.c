// FUN_00b2a3a0 @ 00b2a3a0 body=[[00b2a3a0, 00b2a3e7]]


undefined8 FUN_00b2a3a0(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  DVar1 = GetFileSize((HANDLE)*param_1,(LPDWORD)&param_1);
  if (DVar1 == 0xffffffff) {
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      uVar3 = FUN_00b29110();
      FUN_00b1f840(uVar3);
      return 0xffffffffffffffff;
    }
  }
  return CONCAT44(param_1,DVar1);
}

