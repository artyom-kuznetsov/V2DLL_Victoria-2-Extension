// FUN_00991660 @ 00991660 body=[[00991660, 0099173f] [00991743, 00991759] [0099175d, 00991773] [00991777, 0099178c]]


void FUN_00991660(void)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPCSTR pCVar4;
  LPCSTR in_ECX;
  WCHAR local_26c [260];
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  MultiByteToWideChar(0xfde9,0,in_ECX,-1,local_26c,0x104);
  BVar2 = CreateDirectoryW(local_26c,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 3) {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      pCVar4 = in_ECX;
      do {
        cVar1 = *pCVar4;
        pCVar4 = pCVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(in_ECX,(int)pCVar4 - (int)(in_ECX + 1));
      local_8 = 0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      FUN_00409350("Could not create or read directory: ",0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      pCVar4 = (LPCSTR)FUN_00988f20(local_48);
      if (0xf < *(uint *)(pCVar4 + 0x14)) {
        pCVar4 = *(LPCSTR *)pCVar4;
      }
      MessageBoxA((HWND)0x0,pCVar4,"Could not create or read directory",0);
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64);
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
                    /* WARNING: Subroutine does not return */
      _exit(0);
    }
  }
  ExceptionList = local_10;
  return;
}

