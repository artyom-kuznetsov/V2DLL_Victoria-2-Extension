// _memmove_s @ 00aaede2 body=[[00aaede2, 00aaee34]]


/* Library Function - Single Match
    _memmove_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00aaee30:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00aaee30;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    FUN_00ab7c17();
  }
  return eVar2;
}

