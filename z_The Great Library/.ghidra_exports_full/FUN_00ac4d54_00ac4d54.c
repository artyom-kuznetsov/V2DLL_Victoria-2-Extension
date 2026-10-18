// getDataIndirectType @ 00ac4d54 body=[[00ac4d54, 00ac4d8c]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  char local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  local_c = 0;
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  getDataIndirectType(in_stack_00000004,local_14,(DName *)&DAT_00ded94d,(int)&local_c);
  return in_stack_00000004;
}

