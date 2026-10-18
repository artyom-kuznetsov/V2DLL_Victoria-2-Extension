// FUN_00b1dd40 @ 00b1dd40 body=[[00b1dd40, 00b1de79]]


undefined4 FUN_00b1dd40(void)

{
  int iVar1;
  HMODULE hInstance;
  HWND hWnd;
  HANDLE pvVar2;
  LPVOID in_ECX;
  WNDCLASSEXA *pWVar3;
  UINT *pUVar4;
  LPVOID lpParam;
  DWORD local_34;
  WNDCLASSEXA local_30;
  
  if (*(int *)((int)in_ECX + 0x1d0) != 0) {
    return 1;
  }
  iVar1 = WSAStartup(0x101,(LPWSADATA)((int)in_ECX + 0x40));
  if (iVar1 == -1) {
    FUN_00b15d30("MCore::Network - *** Failed to init WinSock! ****");
    return 0;
  }
  local_30.cbSize = 0x30;
  local_30.style = 0x40;
  local_30.lpfnWndProc = (WNDPROC)&LAB_00b1db70;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_30.hIcon = (HICON)0x0;
  local_30.hCursor = (HCURSOR)0x0;
  local_30.hbrBackground = (HBRUSH)0x6;
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpszClassName = "WinNetwork";
  local_30.hIconSm = (HICON)0x0;
  pWVar3 = &local_30;
  pUVar4 = (UINT *)((int)in_ECX + 0x10);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pUVar4 = pWVar3->cbSize;
    pWVar3 = (WNDCLASSEXA *)&pWVar3->style;
    pUVar4 = pUVar4 + 1;
  }
  RegisterClassExA(&local_30);
  lpParam = (LPVOID)0x0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  hWnd = CreateWindowExA(0,"WinNetwork","WinNetwork",0xa0000000,-0x80000000,-0x80000000,0,0,
                         (HWND)0x0,(HMENU)0x0,hInstance,lpParam);
  if (hWnd == (HWND)0x0) {
    UnregisterClassA("WinNetwork",local_30.hInstance);
    FUN_00b15d30("MCore::Network - *** Failed to create message window! ***");
    return 0;
  }
  ShowWindow(hWnd,0);
  UpdateWindow(hWnd);
  *(HWND *)((int)in_ECX + 0x1d4) = hWnd;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress_00b1dc90,in_ECX,0,&local_34);
  *(HANDLE *)((int)in_ECX + 0x1d0) = pvVar2;
  return 1;
}

