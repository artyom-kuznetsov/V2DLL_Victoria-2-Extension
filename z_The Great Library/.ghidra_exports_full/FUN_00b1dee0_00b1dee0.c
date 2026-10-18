// FUN_00b1dee0 @ 00b1dee0 body=[[00b1dee0, 00b1df99]]


void FUN_00b1dee0(void)

{
  uint uVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39ff8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  TerminateThread((HANDLE)in_ECX[0x74],0);
  CloseHandle((HANDLE)in_ECX[0x74]);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX,uVar1);
    *in_ECX = 0;
  }
  DestroyWindow((HWND)in_ECX[0x75]);
  UnregisterClassA("WinNetwork",(HINSTANCE)in_ECX[9]);
  WSACleanup();
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

