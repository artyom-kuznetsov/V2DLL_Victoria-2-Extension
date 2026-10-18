// FUN_00a7ae80 @ 00a7ae80 body=[[00a7ae80, 00a7aec2] [00a7aec6, 00a7aecc]]


void FUN_00a7ae80(byte param_1)

{
  DWORD DVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e439f8;
  if ((HANDLE)in_ECX[2] != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject((HANDLE)in_ECX[2],in_ECX[5]);
    if (DVar1 == 0x102) {
                    /* WARNING: Subroutine does not return */
      ExitThread(0);
    }
    CloseHandle((HANDLE)in_ECX[2]);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

