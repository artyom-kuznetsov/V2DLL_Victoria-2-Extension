// ____lc_codepage_func @ 00ab5c62 body=[[00ab5c62, 00ab5c87]]


/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2010 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00ef2ec8) && ((p_Var1->_ownlocale & DAT_00ef2c80) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}

