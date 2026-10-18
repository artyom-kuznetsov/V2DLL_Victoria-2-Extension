// FUN_00b2a1f0 @ 00b2a1f0 body=[[00b2a1f0, 00b2a24f]]


undefined4 * FUN_00b2a1f0(undefined4 param_1)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00b2a0a0(param_1,0x40000000,4,0);
  if (puVar1 != (undefined4 *)0x0) {
    hFile = (HANDLE)*puVar1;
    DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2);
    if (DVar2 == 0xffffffff) {
      uVar3 = FUN_00b29110();
      CloseHandle(hFile);
      (*DAT_013f3ab0)(puVar1);
      FUN_00b1f840(uVar3);
      return (undefined4 *)0x0;
    }
  }
  return puVar1;
}

