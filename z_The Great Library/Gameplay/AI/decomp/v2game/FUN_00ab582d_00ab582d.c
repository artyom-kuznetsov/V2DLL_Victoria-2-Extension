// __errno @ 00ab582d body=[[00ab582d, 00ab583f]]


/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2010 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_00ef2748;
  }
  return &p_Var1->_terrno;
}

