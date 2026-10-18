// FUN_00a1b940 @ 00a1b940 body=[[00a1b940, 00a1b9d5]]


undefined1 * FUN_00a1b940(undefined4 *param_1)

{
  LPCSTR in_EAX;
  HANDLE hFile;
  DWORD DVar1;
  undefined1 *puVar2;
  
  *param_1 = 0;
  hFile = CreateFileA(in_EAX,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    *param_1 = 0x200;
    return (undefined1 *)0x0;
  }
  DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
  puVar2 = (undefined1 *)FUN_00aae9af(0x20);
  puVar2[1] = DVar1 != 0xffffffff;
  *puVar2 = 1;
  puVar2[0x10] = 1;
  *(HANDLE *)(puVar2 + 4) = hFile;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  if (DVar1 != 0xffffffff) {
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    *(DWORD *)(puVar2 + 0xc) = DVar1;
  }
  *param_1 = 0;
  return puVar2;
}

