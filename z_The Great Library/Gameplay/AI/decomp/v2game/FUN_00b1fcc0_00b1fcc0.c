// FUN_00b1fcc0 @ 00b1fcc0 body=[[00b1fcc0, 00b1fccc] [00b1fcd0, 00b1fd94]]


undefined4 FUN_00b1fcc0(void)

{
  int in_EAX;
  undefined4 *_Dst;
  int iVar1;
  undefined4 *in_ECX;
  undefined8 uVar2;
  
  if (in_ECX != (undefined4 *)0x0) {
    for (; in_EAX != 0; in_EAX = *(int *)(in_EAX + 0x20)) {
      if (*(undefined4 **)(in_EAX + 8) == in_ECX) {
        _Dst = (undefined4 *)FUN_00b1f7d0();
        if (_Dst == (undefined4 *)0x0) {
          _Dst = (undefined4 *)(*DAT_013f3aa8)(0x60,0);
          if (_Dst == (undefined4 *)0x0) {
            return 0;
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
        _strncpy((char *)(_Dst + 3),"Files still open",0x50);
        *(undefined1 *)((int)_Dst + 0x5b) = 0;
        return 0;
      }
    }
    (**(code **)(in_ECX[3] + 0x34))(*in_ECX);
    (*DAT_013f3ab0)(in_ECX[1]);
    (*DAT_013f3ab0)(in_ECX[2]);
    (*DAT_013f3ab0)();
  }
  return 1;
}

