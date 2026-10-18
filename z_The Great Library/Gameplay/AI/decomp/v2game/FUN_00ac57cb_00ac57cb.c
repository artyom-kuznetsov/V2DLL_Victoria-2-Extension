// operator+ @ 00ac57cb body=[[00ac57cb, 00ac57ee]]


/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}

