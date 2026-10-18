// ___pctype_func @ 00ab6cd6 body=[[00ab6cd6, 00ab6cfe]]


/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2010 Release */

ushort * __cdecl ___pctype_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00ef2ec8) && ((p_Var1->_ownlocale & DAT_00ef2c80) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (ushort *)ptVar2[1].lc_category[0].locale;
}

