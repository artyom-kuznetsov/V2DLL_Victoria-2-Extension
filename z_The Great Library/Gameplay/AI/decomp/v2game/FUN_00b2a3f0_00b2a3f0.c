// FUN_00b2a3f0 @ 00b2a3f0 body=[[00b2a3f0, 00b2a4a8]]


undefined4 FUN_00b2a3f0(undefined4 *param_1)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  
  puVar1 = param_1;
  hFile = (HANDLE)*param_1;
  param_1 = (undefined4 *)0x0;
  DVar2 = SetFilePointer(hFile,0,(PLONG)&param_1,1);
  if ((DVar2 == 0xffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
    uVar4 = FUN_00b29110();
    FUN_00b1f840(uVar4);
    return 0;
  }
  DVar3 = (DWORD)param_1;
  if (DVar2 != 0 || param_1 != (undefined4 *)0x0) {
    DVar5 = GetFileSize((HANDLE)*puVar1,(LPDWORD)&param_1);
    if ((DVar5 == 0xffffffff) && (DVar6 = GetLastError(), DVar6 != 0)) {
      uVar4 = FUN_00b29110();
      FUN_00b1f840(uVar4);
      DVar5 = 0xffffffff;
      param_1 = (undefined4 *)0xffffffff;
    }
    if ((DVar2 == DVar5) && ((undefined4 *)DVar3 == param_1)) {
      return 1;
    }
  }
  return 0;
}

