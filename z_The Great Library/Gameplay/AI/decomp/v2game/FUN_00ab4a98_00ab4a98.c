// FUN_00ab4a98 @ 00ab4a98 body=[[00ab4a98, 00ab4b00]]


char * FUN_00ab4a98(int param_1)

{
  _ptiddata p_Var1;
  char *pcVar2;
  char *_Src;
  errno_t eVar3;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    pcVar2 = "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  else {
    if (p_Var1->_errmsg == (char *)0x0) {
      pcVar2 = __calloc_crt(0x86,1);
      p_Var1->_errmsg = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return "Visual C++ CRT: Not enough memory to complete call to strerror.";
      }
    }
    pcVar2 = p_Var1->_errmsg;
    _Src = __get_sys_err_msg(param_1);
    eVar3 = _strcpy_s(pcVar2,0x86,_Src);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return pcVar2;
}

