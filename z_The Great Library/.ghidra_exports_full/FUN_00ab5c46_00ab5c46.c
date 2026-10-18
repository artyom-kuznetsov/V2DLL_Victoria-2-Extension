// FUN_00ab5c46 @ 00ab5c46 body=[[00ab5c1d, 00ab5c61]]


wchar_t * FUN_00ab5c46(int *param_1)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  if (param_1 == (int *)0x0) {
    p_Var1 = __getptd();
    ptVar2 = p_Var1->ptlocinfo;
    if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00ef2ec8) && ((p_Var1->_ownlocale & DAT_00ef2c80) == 0))
    {
      ptVar2 = ___updatetlocinfo();
    }
    return ptVar2->locale_name[3];
  }
  return *(wchar_t **)(*param_1 + 0xac);
}

