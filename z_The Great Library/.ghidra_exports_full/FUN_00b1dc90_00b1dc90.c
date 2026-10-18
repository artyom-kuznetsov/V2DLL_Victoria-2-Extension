// lpStartAddress_00b1dc90 @ 00b1dc90 body=[[00b1dc90, 00b1dce8] [00b1dcf0, 00b1dd38]]


/* lpStartAddress parameter of CreateThread
    */

void lpStartAddress_00b1dc90(int param_1)

{
  int iVar1;
  tagMSG local_1c;
  
  do {
    do {
    } while (param_1 == 0);
    local_1c.hwnd = (HWND)0x0;
    local_1c.message = 0;
    local_1c.wParam = 0;
    local_1c.lParam = 0;
    local_1c.time = 0;
    local_1c.pt.x = 0;
    local_1c.pt.y = 0;
    iVar1 = PeekMessageA(&local_1c,*(HWND *)(param_1 + 0x1d4),0,0,0);
    while (iVar1 != 0) {
      GetMessageA(&local_1c,*(HWND *)(param_1 + 0x1d4),0,0);
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      iVar1 = PeekMessageA(&local_1c,*(HWND *)(param_1 + 0x1d4),0,0,0);
    }
    Sleep(0x28);
  } while( true );
}

