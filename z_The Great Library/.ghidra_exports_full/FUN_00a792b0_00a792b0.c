// FUN_00a792b0 @ 00a792b0 body=[[00a792b0, 00a7933a] [00a7933e, 00a79345]]


void FUN_00a792b0(LPSTR param_1)

{
  LPPROCESS_INFORMATION lpProcessInformation;
  va_list *nSize;
  DWORD dwMessageId;
  LPSTR lpCommandLine;
  undefined4 *unaff_ESI;
  uint in_stack_00000018;
  DWORD dwLanguageId;
  CHAR *lpBuffer;
  va_list *Arguments;
  _STARTUPINFOA local_4c;
  CHAR local_8 [4];
  
  *unaff_ESI = &PTR_FUN_00e43780;
  _memset(&local_4c,0,0x44);
  lpProcessInformation = (LPPROCESS_INFORMATION)(unaff_ESI + 1);
  lpProcessInformation->hProcess = (HANDLE)0x0;
  lpProcessInformation->hThread = (HANDLE)0x0;
  local_4c.cb = 0x44;
  *(undefined8 *)(unaff_ESI + 3) = 0;
  lpCommandLine = param_1;
  if (in_stack_00000018 < 0x10) {
    lpCommandLine = (LPSTR)&param_1;
  }
  nSize = (va_list *)
          CreateProcessA((LPCSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_4c,
                         lpProcessInformation);
  if (nSize == (va_list *)0x0) {
    lpBuffer = local_8;
    dwLanguageId = 0x400;
    Arguments = nSize;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,(DWORD)nSize,Arguments);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}

