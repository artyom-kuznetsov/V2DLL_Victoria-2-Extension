// FUN_00b14950 @ 00b14950 body=[[00b14950, 00b1498c] [00b14990, 00b14b3a]]


void FUN_00b14950(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  undefined1 **in_ECX;
  undefined1 *_Dst;
  undefined1 *_Size_00;
  size_t local_28;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39c04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*in_ECX != (undefined1 *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar2 - (int)(param_2 + 1);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(param_1 + 1);
    if (iVar3 != 0) {
      if ((param_1 == (char *)0x0) ||
         (iVar4 = FUN_00aafe90(*in_ECX,param_1,DAT_00ef259c ^ (uint)&stack0xffffffc8), iVar4 == 0))
      {
        local_28 = 0xffffffff;
      }
      else {
        local_28 = iVar4 - (int)*in_ECX;
      }
      _Dst = (undefined1 *)0x0;
      local_18 = (undefined1 *)0x0;
      local_14 = (undefined1 *)0x0;
      local_10 = (undefined1 *)0x0;
      local_4 = 0;
      while (local_28 != 0xffffffff) {
        _Size_00 = in_ECX[1] + (_Size - iVar3);
        local_14 = _Size_00;
        if ((local_10 < _Size_00) || (_Dst == (undefined1 *)0x0)) {
          local_10 = _Size_00;
          if (_Dst == (undefined1 *)0x0) {
            _Dst = (undefined1 *)(*(code *)PTR_FUN_00f01b08)(_Size_00 + 1,2,4,1,0,0xffffffff);
          }
          else {
            _Dst = (undefined1 *)(*(code *)PTR_FUN_00f01b0c)(_Dst);
          }
          local_18 = _Dst;
          if (_Dst != (undefined1 *)0x0) goto LAB_00b14a4c;
        }
        else {
LAB_00b14a4c:
          _Dst[(int)_Size_00] = 0;
        }
        FID_conflict__memcpy(_Dst,*in_ECX,local_28);
        FID_conflict__memcpy(_Dst + local_28,param_2,_Size);
        FID_conflict__memcpy
                  (_Dst + local_28 + _Size,*in_ECX + iVar3 + local_28,
                   (size_t)(in_ECX[1] + (-iVar3 - local_28)));
        if (&local_18 != in_ECX) {
          puStack_1c = _Dst;
          if (_Dst == (undefined1 *)0x0) {
            puStack_1c = &DAT_00ded94d;
          }
          if (*in_ECX != (undefined1 *)0x0) {
            in_ECX[1] = (undefined1 *)0x0;
            **in_ECX = 0;
          }
          FUN_00b13660(_Size_00,0);
          if (*in_ECX != (undefined1 *)0x0) {
            FID_conflict__memcpy(*in_ECX,puStack_1c,(size_t)_Size_00);
          }
        }
        iVar4 = FUN_00aafe90(*in_ECX + _Size + local_28,param_1);
        if (iVar4 == 0) break;
        local_28 = iVar4 - (int)*in_ECX;
      }
      local_4 = 0xffffffff;
      if (_Dst != (undefined1 *)0x0) {
        (*(code *)PTR__free_00f01b10)(_Dst);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

