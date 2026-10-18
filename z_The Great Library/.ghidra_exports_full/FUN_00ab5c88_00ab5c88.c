// ____lc_handle_func @ 00ab5c88 body=[[00ab5c88, 00ab5cad]]


/* Library Function - Single Match
    ____lc_handle_func
   
   Library: Visual Studio 2010 Release */

uint * ____lc_handle_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00ef2ec8) && ((p_Var1->_ownlocale & DAT_00ef2c80) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return &ptVar2->lc_time_cp;
}

