// FUN_00b1f840 @ 00b1f840 body=[[00b1f840, 00b1f8d4]]


void FUN_00b1f840(char *param_1)

{
  undefined4 *_Dst;
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (char *)0x0) {
    _Dst = (undefined4 *)FUN_00b1f7d0();
    if (_Dst == (undefined4 *)0x0) {
      _Dst = (undefined4 *)(*DAT_013f3aa8)(0x60,0);
      if (_Dst == (undefined4 *)0x0) {
        return;
      }
      _memset(_Dst,0,0x60);
      uVar2 = FUN_00b29590();
      *_Dst = (int)uVar2;
      iVar1 = DAT_00f20a9c;
      _Dst[1] = (int)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        FUN_00b2a660(iVar1);
        iVar1 = DAT_00f20a9c;
      }
      _Dst[0x17] = DAT_00f20a7c;
      DAT_00f20a7c = _Dst;
      if (iVar1 != 0) {
        FUN_00b2a680(iVar1);
      }
    }
    _Dst[2] = 1;
    _strncpy((char *)(_Dst + 3),param_1,0x50);
    *(undefined1 *)((int)_Dst + 0x5b) = 0;
  }
  return;
}

