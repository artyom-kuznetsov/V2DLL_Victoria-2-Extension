// FUN_009dfa30 @ 009dfa30 body=[[009dfa30, 009dfc60]]


void FUN_009dfa30(void)

{
  HWND pHVar1;
  int in_ECX;
  int iVar2;
  int nWidth;
  uint *lpClassName;
  uint *puVar3;
  DWORD *dwStyle;
  LONG X;
  LONG Y;
  HMENU pHVar4;
  HINSTANCE pHVar5;
  LPVOID pvVar6;
  tagRECT local_58;
  tagRECT local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  HMODULE pHStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint *local_10;
  undefined4 uStack_c;
  
  local_38 = 0x30;
  uStack_34 = 0x48;
  local_30 = FUN_009e07f0;
  uStack_2c = 0;
  local_28 = 0;
  DAT_00f20c38 = in_ECX;
  pHStack_24 = GetModuleHandleA((LPCSTR)0x0);
  lpClassName = (uint *)(in_ECX + 0x8c);
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  local_10 = lpClassName;
  if (0xf < *(uint *)(in_ECX + 0xa0)) {
    local_10 = (uint *)*lpClassName;
  }
  *(ulonglong *)(in_ECX + 0xa8) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(in_ECX + 0xb0) = CONCAT44(uStack_2c,local_30);
  *(ulonglong *)(in_ECX + 0xb8) = CONCAT44(pHStack_24,local_28);
  *(undefined8 *)(in_ECX + 0xc0) = 0;
  *(undefined8 *)(in_ECX + 200) = 0;
  uStack_c = 0;
  *(ulonglong *)(in_ECX + 0xd0) = ZEXT48(local_10);
  RegisterClassExA((WNDCLASSEXA *)(in_ECX + 0xa8));
  iVar2 = *(int *)(in_ECX + 0xec);
  nWidth = *(int *)(iVar2 + 0x40);
  puVar3 = lpClassName;
  local_58.left = nWidth;
  if (*(char *)(iVar2 + 0x4c) == '\0') {
    local_58.top = *(int *)(iVar2 + 0x44);
    if (*(char *)(iVar2 + 0x4d) != '\0') {
      SetRect(&local_48,0,0,*(int *)(iVar2 + 0x40),local_58.top);
      local_58.left = (LONG)lpClassName;
      if (0xf < *(uint *)(in_ECX + 0xa0)) {
        local_58.left = *lpClassName;
        lpClassName = (uint *)*lpClassName;
      }
      pHVar5 = *(HINSTANCE *)(in_ECX + 0xbc);
      pvVar6 = (LPVOID)0x0;
      pHVar4 = (HMENU)0x0;
      pHVar1 = GetDesktopWindow();
      pHVar1 = CreateWindowExA(0,(LPCSTR)lpClassName,(LPCSTR)local_58.left,0x80000000,local_48.left,
                               local_48.top,local_48.right - local_48.left,
                               local_48.bottom - local_48.top,pHVar1,pHVar4,pHVar5,pvVar6);
      *(HWND *)(in_ECX + 0xd8) = pHVar1;
      ShowCursor(0);
      return;
    }
    SetRect(&local_58,0x1e,0x1e,*(int *)(iVar2 + 0x40) + 0x1e,local_58.top + 0x1e);
    AdjustWindowRect(&local_58,0xcf0000,0);
    if (0xf < *(uint *)(in_ECX + 0xa0)) {
      puVar3 = (uint *)*lpClassName;
      lpClassName = (uint *)*lpClassName;
    }
    pHVar5 = *(HINSTANCE *)(in_ECX + 0xbc);
    pvVar6 = (LPVOID)0x0;
    pHVar4 = (HMENU)0x0;
    pHVar1 = GetDesktopWindow();
    iVar2 = local_58.bottom - local_58.top;
    nWidth = local_58.right - local_58.left;
    dwStyle = &dwStyle_00cf0000;
    X = local_58.left;
    Y = local_58.top;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x44);
    if (0xf < *(uint *)(in_ECX + 0xa0)) {
      puVar3 = (uint *)*lpClassName;
      lpClassName = (uint *)*lpClassName;
    }
    pHVar5 = *(HINSTANCE *)(in_ECX + 0xbc);
    pvVar6 = (LPVOID)0x0;
    pHVar4 = (HMENU)0x0;
    pHVar1 = (HWND)0x0;
    Y = -0x80000000;
    X = -0x80000000;
    dwStyle = (DWORD *)0x90000008;
    local_58.top = iVar2;
  }
  pHVar1 = CreateWindowExA(0,(LPCSTR)lpClassName,(LPCSTR)puVar3,(DWORD)dwStyle,X,Y,nWidth,iVar2,
                           pHVar1,pHVar4,pHVar5,pvVar6);
  *(HWND *)(in_ECX + 0xd8) = pHVar1;
  ShowCursor(0);
  return;
}

