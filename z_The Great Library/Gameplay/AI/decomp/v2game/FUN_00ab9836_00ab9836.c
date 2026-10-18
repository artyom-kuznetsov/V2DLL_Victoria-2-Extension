// __getptd_noexit @ 00ab9836 body=[[00ab9836, 00ab98ae]]


/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2010 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  dwErrCode = GetLastError();
  pcVar1 = (code *)___set_flsgetvalue(DAT_00ef2ed4);
  _Ptd = (_ptiddata)(*pcVar1)();
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_00ef2ed4;
      p_Var5 = _Ptd;
      pcVar1 = DecodePointer(Ptr_00f202e0);
      iVar2 = (*pcVar1)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}

