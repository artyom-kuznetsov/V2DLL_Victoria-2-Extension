// getSignedDimension @ 00ac6228 body=[[00ac6228, 00ac6279]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_00f20978 == '\0') {
    DName::DName(in_stack_00000004,1);
  }
  else if (*DAT_00f20978 == '?') {
    DAT_00f20978 = DAT_00f20978 + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}

