// FUN_00b28120 @ 00b28120 body=[[00b28120, 00b28256]]


int * FUN_00b28120(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  
  iVar1 = FUN_00b26dc0(param_2,0);
  *param_3 = (uint)(iVar1 != 0);
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return (int *)0x0;
  }
  iVar2 = FUN_00b280b0(param_1);
  if (iVar2 == 0) {
    FUN_00b1f840();
    return (int *)0x0;
  }
  _Dst = (int *)(*DAT_013f3aa8)(0x4c,0);
  if (_Dst == (int *)0x0) {
    FUN_00b2a4f0(iVar2);
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  _memset(_Dst,0,0x4c);
  _Dst[1] = iVar2;
  iVar2 = *(int *)(iVar1 + 4);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar2 = iVar1;
  }
  *_Dst = iVar2;
  _memset(_Dst + 5,0,0x38);
  _Dst[0xd] = (int)FUN_00b264a0;
  _Dst[0xe] = (int)FUN_00b264c0;
  _Dst[0xf] = (int)&DAT_013f3aa0;
  if (*(short *)(*_Dst + 0x14) != 0) {
    FUN_00b2d970(_Dst + 5,0xfffffff1,"1.2.3",0x38);
    iVar1 = FUN_00b26510();
    if (iVar1 != 0) {
      FUN_00b26a20(_Dst);
      return (int *)0x0;
    }
    iVar1 = (*DAT_013f3aa8)(0x4000,0);
    _Dst[4] = iVar1;
    if (iVar1 == 0) {
      FUN_00b26a20(_Dst);
      FUN_00b1f840("Out of memory");
      return (int *)0x0;
    }
  }
  return _Dst;
}

