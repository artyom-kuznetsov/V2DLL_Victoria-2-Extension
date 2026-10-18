// getVCallThunkType @ 00ac554c body=[[00ac554c, 00ac5596]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_00f20978 == '\0') {
    DName::DName(in_stack_00000004,1);
  }
  else {
    if (*DAT_00f20978 != 'A') {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      *(undefined4 *)in_stack_00000004 = 0;
      in_stack_00000004[4] = (DName)0x2;
      return in_stack_00000004;
    }
    DAT_00f20978 = DAT_00f20978 + 1;
    DName::DName(in_stack_00000004,"{flat}");
  }
  return in_stack_00000004;
}

