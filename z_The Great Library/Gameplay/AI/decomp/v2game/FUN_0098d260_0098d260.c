// FUN_0098d260 @ 0098d260 body=[[0098d260, 0098d287] [0098d290, 0098d2d6]]


void FUN_0098d260(void)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_0131c8c0 - DAT_0131c8bc >> 4;
  if (0 < local_c) {
    local_8 = 0;
    iVar1 = DAT_0131c8bc;
    do {
      _Src = *(void **)(local_8 + 4 + iVar1);
      _Dst = *(void **)(local_8 + iVar1);
      if (_Dst != _Src) {
        FID_conflict__memcpy(_Dst,_Src,0);
        *(void **)(local_8 + 4 + iVar1) = _Dst;
        iVar1 = DAT_0131c8bc;
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

