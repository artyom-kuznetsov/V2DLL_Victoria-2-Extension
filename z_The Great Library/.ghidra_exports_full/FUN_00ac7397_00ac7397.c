// getSymbolName @ 00ac7397 body=[[00ac7397, 00ac73e0]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_00f20978 == '?') {
    if (DAT_00f20978[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_00f20978 = DAT_00f20978 + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1,true);
  }
  return in_stack_00000004;
}

