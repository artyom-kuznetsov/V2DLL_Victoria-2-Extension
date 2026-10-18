// getReturnType @ 00ac50c0 body=[[00ac50c0, 00ac50f0]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_00f20978 == '@') {
    DAT_00f20978 = DAT_00f20978 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}

