// _memcpy_s @ 00aafcdb body=[[00aafcdb, 00aafd4f]]


/* Library Function - Single Match
    _memcpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
LAB_00aafce8:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_00aafcf2:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00aafce8;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_00aafcf2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    FUN_00ab7c17();
  }
  return eVar1;
}

