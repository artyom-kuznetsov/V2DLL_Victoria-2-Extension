// FUN_00b2a340 @ 00b2a340 body=[[00b2a340, 00b2a397]]


undefined8 FUN_00b2a340(undefined4 *param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  hFile = (HANDLE)*param_1;
  param_1 = (undefined4 *)0x0;
  DVar1 = SetFilePointer(hFile,0,(PLONG)&param_1,1);
  if (DVar1 == 0xffffffff) {
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      uVar3 = FUN_00b29110();
      FUN_00b1f840(uVar3);
      return 0;
    }
  }
  return CONCAT44(param_1,DVar1);
}

