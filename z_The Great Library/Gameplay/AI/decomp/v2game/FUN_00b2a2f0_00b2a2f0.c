// FUN_00b2a2f0 @ 00b2a2f0 body=[[00b2a2f0, 00b2a33c]]


undefined4 FUN_00b2a2f0(undefined4 *param_1,LONG param_2,int param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  undefined4 uVar2;
  
  hFile = (HANDLE)*param_1;
  param_1 = (undefined4 *)param_3;
  DVar1 = SetFilePointer(hFile,param_2,(PLONG)(-(uint)(param_3 != 0) & (uint)&param_1),0);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      uVar2 = FUN_00b29110();
      FUN_00b1f840(uVar2);
      return 0;
    }
  }
  return 1;
}

