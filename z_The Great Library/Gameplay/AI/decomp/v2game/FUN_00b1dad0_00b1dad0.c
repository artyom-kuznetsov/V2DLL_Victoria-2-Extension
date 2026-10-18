// FUN_00b1dad0 @ 00b1dad0 body=[[00b1dad0, 00b1db63]]


void FUN_00b1dad0(void)

{
  int iVar1;
  int in_ECX;
  tagMSG local_1c;
  
  local_1c.hwnd = (HWND)0x0;
  local_1c.message = 0;
  local_1c.wParam = 0;
  local_1c.lParam = 0;
  local_1c.time = 0;
  local_1c.pt.x = 0;
  local_1c.pt.y = 0;
  iVar1 = PeekMessageA(&local_1c,*(HWND *)(in_ECX + 0x1d4),0,0,0);
  while (iVar1 != 0) {
    GetMessageA(&local_1c,*(HWND *)(in_ECX + 0x1d4),0,0);
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,*(HWND *)(in_ECX + 0x1d4),0,0,0);
  }
  return;
}

