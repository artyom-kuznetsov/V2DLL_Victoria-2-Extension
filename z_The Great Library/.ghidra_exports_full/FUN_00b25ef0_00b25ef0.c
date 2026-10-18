// FUN_00b25ef0 @ 00b25ef0 body=[[00b25ef0, 00b260d0]]


undefined4 * FUN_00b25ef0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Dst;
  void *pvVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_00b25e30(param_1,0);
  if (iVar2 == 0) {
    FUN_00b1f840("Archive type unsupported");
    return (undefined4 *)0x0;
  }
  _Dst = (undefined4 *)(*DAT_013f3aa8)(0x68,0);
  if (_Dst == (undefined4 *)0x0) {
    FUN_00b1f840("Out of memory");
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x68);
  _Dst[0x16] = FUN_00b259b0;
  _Dst[0x17] = FUN_00b259e0;
  _Dst[0x12] = FUN_00b25970;
  _Dst[0x13] = FUN_00b25990;
  _Dst[0x14] = FUN_00b25970;
  _Dst[0x15] = FUN_00b25990;
  iVar2 = FUN_00b2a1b0(param_1);
  _Dst[0x18] = iVar2;
  if (iVar2 == 0) {
    FUN_00b2a4f0(0);
    FUN_00b25ba0();
    return (undefined4 *)0x0;
  }
  FUN_00b2d810();
  FUN_00b2b2f0(_Dst + 2);
  puVar1 = _Dst + 2;
  FUN_00b2d7a0(_Dst + 0x16,puVar1,_Dst + 0x12,_Dst + 0x14);
  iVar2 = FUN_00b25bc0();
  if (iVar2 != 0) {
    FUN_00b2b320(puVar1,FUN_00b25990);
    FUN_00b2a4f0(_Dst[0x18]);
    FUN_00b25ba0();
    return (undefined4 *)0x0;
  }
  iVar2 = _Dst[8];
  pvVar3 = (void *)(*DAT_013f3aa8)(iVar2 * 0x18,0);
  *_Dst = pvVar3;
  if (pvVar3 == (void *)0x0) {
    FUN_00b2b320(puVar1,FUN_00b25990);
    uVar4 = _Dst[0x18];
  }
  else {
    _memset(pvVar3,0,iVar2 * 0x18);
    iVar2 = _Dst[6];
    pvVar3 = (void *)(*DAT_013f3aa8)(iVar2 << 4,0);
    _Dst[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      _memset(pvVar3,0,iVar2 << 4);
      iVar2 = FUN_00b25b20();
      if (iVar2 == 0) {
        FUN_00b2b320(puVar1,FUN_00b25990);
        FUN_00b2a4f0(_Dst[0x18]);
        FUN_00b25ba0();
        FUN_00b1f840("unknown error");
        return (undefined4 *)0x0;
      }
      return _Dst;
    }
    FUN_00b2b320(puVar1,FUN_00b25990);
    uVar4 = _Dst[0x18];
  }
  FUN_00b2a4f0(uVar4);
  FUN_00b25ba0();
  FUN_00b1f840("Out of memory");
  return (undefined4 *)0x0;
}

