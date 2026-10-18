// FUN_00991790 @ 00991790 body=[[00991790, 0099183e]]


undefined4 FUN_00991790(LPCSTR param_1,undefined4 param_2)

{
  int iVar1;
  BOOL BVar2;
  WCHAR aWStack_42c [4];
  undefined1 *puStack_424;
  undefined1 local_418 [500];
  WCHAR aWStack_224 [272];
  
  puStack_424 = local_418;
  aWStack_42c[2] = L'\0';
  aWStack_42c[3] = L'\0';
  aWStack_42c[0] = L'\0';
  aWStack_42c[1] = L'\0';
  iVar1 = SHGetFolderPathW(0,5);
  if (iVar1 < 0) {
    return 0;
  }
  PathAppendW(aWStack_42c,L"Paradox Interactive\\");
  MultiByteToWideChar(0xfde9,0,param_1,-1,aWStack_224,0x104);
  PathAppendW(aWStack_42c,aWStack_224);
  BVar2 = PathFileExistsW(aWStack_42c);
  if ((BVar2 == 0) &&
     (iVar1 = SHCreateDirectoryExW((HWND)0x0,aWStack_42c,(SECURITY_ATTRIBUTES *)0x0), iVar1 != 0)) {
    return 0;
  }
  PHYSFS_utf8FromUcs2(aWStack_42c,param_2,0x208,0);
  return 1;
}

