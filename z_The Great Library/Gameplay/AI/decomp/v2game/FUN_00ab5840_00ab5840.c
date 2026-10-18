// ___doserrno @ 00ab5840 body=[[00ab5840, 00ab5852]]


/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2010 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_00ef274c;
  }
  return &p_Var1->_tdoserrno;
}

