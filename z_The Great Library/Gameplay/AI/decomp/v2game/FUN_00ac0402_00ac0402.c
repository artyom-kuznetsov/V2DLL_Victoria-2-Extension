// ___getgmtimebuf @ 00ac0402 body=[[00ac0402, 00ac0438]]


/* Library Function - Single Match
    ___getgmtimebuf
   
   Library: Visual Studio 2010 Release */

tm * __cdecl ___getgmtimebuf(void)

{
  _ptiddata p_Var1;
  int *piVar2;
  void *pvVar3;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
LAB_00ac0410:
    piVar2 = __errno();
    *piVar2 = 0xc;
    return (tm *)0x0;
  }
  if (p_Var1->_gmtimebuf == (void *)0x0) {
    pvVar3 = __malloc_crt(0x24);
    p_Var1->_gmtimebuf = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00ac0410;
  }
  return p_Var1->_gmtimebuf;
}

