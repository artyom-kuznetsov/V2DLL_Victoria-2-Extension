// getLexicalFrame @ 00ac5fd9 body=[[00ac5fd9, 00ac6015]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  DName *pDVar1;
  DName local_1c [8];
  undefined1 local_14 [8];
  DName local_c [8];
  
  getDimension(SUB41(local_14,0));
  pDVar1 = local_c;
  this = (DName *)DName::DName(local_1c,'`');
  DName::operator+(this,pDVar1);
  DName::operator+(local_c,(char)in_stack_00000004);
  return in_stack_00000004;
}

