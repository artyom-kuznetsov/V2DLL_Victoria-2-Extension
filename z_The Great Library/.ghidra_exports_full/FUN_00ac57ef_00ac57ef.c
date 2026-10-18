// operator+ @ 00ac57ef body=[[00ac57ef, 00ac5812]]


/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2010 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}

