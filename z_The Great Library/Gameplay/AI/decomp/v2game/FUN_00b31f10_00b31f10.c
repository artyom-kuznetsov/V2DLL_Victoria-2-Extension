// _bsearch @ 00b31f10 body=[[00b31f10, 00b31fc3]]


/* Library Function - Single Match
    _bsearch
   
   Library: Visual Studio 2010 Release */

void * __cdecl
_bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
  }
  else if (_Base <= pvVar6) {
    do {
      uVar5 = _NumOfElements >> 1;
      if (uVar5 == 0) {
        if (_NumOfElements == 0) {
          return (void *)0x0;
        }
        iVar4 = (*_PtFuncCompare)(_Key,_Base);
        return (void *)(~-(uint)(iVar4 != 0) & (uint)_Base);
      }
      uVar2 = uVar5;
      if ((_NumOfElements & 1) == 0) {
        uVar2 = uVar5 - 1;
      }
      pvVar3 = (void *)(uVar2 * _SizeOfElements + (int)_Base);
      iVar4 = (*_PtFuncCompare)(_Key,pvVar3);
      if (iVar4 == 0) {
        return pvVar3;
      }
      if (iVar4 < 0) {
        pvVar6 = (void *)((int)pvVar3 - _SizeOfElements);
        if ((_NumOfElements & 1) == 0) {
          uVar5 = uVar5 - 1;
        }
      }
      else {
        _Base = (void *)((int)pvVar3 + _SizeOfElements);
      }
      _NumOfElements = uVar5;
    } while (_Base <= pvVar6);
  }
  return (void *)0x0;
}

