// _localeconv @ 00aaefcd body=[[00aaefcd, 00aaeff2]]


/* Library Function - Single Match
    _localeconv
   
   Library: Visual Studio 2010 Release */

lconv * __cdecl _localeconv(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if ((p_Var1->ptlocinfo != (pthreadlocinfo)PTR_DAT_00ef2ec8) &&
     ((p_Var1->_ownlocale & DAT_00ef2c80) == 0)) {
    ___updatetlocinfo();
  }
  return (lconv *)PTR_PTR_00ef2308;
}

