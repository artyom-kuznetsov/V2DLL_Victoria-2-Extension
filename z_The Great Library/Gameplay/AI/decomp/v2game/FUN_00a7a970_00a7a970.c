// FUN_00a7a970 @ 00a7a970 body=[[00a7a970, 00a7a9d7]]


void FUN_00a7a970(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  tagRECT local_1c;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  GetWindowRect(*(HWND *)(in_ECX + 0xcc),&local_1c);
  if (*(char *)(in_ECX + 0xd0) == '\0') {
    iVar1 = GetSystemMetrics(8);
    iVar2 = GetSystemMetrics(4);
    local_1c.left = local_1c.left + 4;
    local_1c.top = iVar2 + local_1c.top + iVar1;
  }
  *param_1 = local_c.x - local_1c.left;
  param_1[1] = local_c.y - local_1c.top;
  return;
}

