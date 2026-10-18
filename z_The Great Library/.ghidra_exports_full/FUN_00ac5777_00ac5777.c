// getVdispMapType @ 00ac5777 body=[[00ac5777, 00ac57ca]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  *(undefined4 *)(param_1 + 4) = in_stack_00000008[1];
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_00f20978 == '@') {
    DAT_00f20978 = DAT_00f20978 + 1;
  }
  return param_1;
}

