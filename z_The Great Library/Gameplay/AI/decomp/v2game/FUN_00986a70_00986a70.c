// FUN_00986a70 @ 00986a70 body=[[00986a70, 00986a97] [00986aa0, 00986ae6]]


void FUN_00986a70(void)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_0131c530 - DAT_0131c52c >> 4;
  if (0 < local_c) {
    local_8 = 0;
    iVar1 = DAT_0131c52c;
    do {
      _Src = *(void **)(local_8 + 4 + iVar1);
      _Dst = *(void **)(local_8 + iVar1);
      if (_Dst != _Src) {
        FID_conflict__memcpy(_Dst,_Src,0);
        *(void **)(local_8 + 4 + iVar1) = _Dst;
        iVar1 = DAT_0131c52c;
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

