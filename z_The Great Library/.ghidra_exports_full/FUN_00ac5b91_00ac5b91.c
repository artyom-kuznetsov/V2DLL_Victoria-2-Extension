// getThrowTypes @ 00ac5b91 body=[[00ac5b91, 00ac5c1a]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2010 Release */

undefined4 * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *pDVar2;
  undefined4 *in_stack_00000004;
  undefined4 *puVar3;
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [4];
  uint local_8;
  
  puVar3 = in_stack_00000004;
  if (*DAT_00f20978 == '\0') {
    pDVar2 = local_1c;
    pDVar1 = (DName *)DName::DName(local_14," throw(");
    pDVar2 = (DName *)DName::operator+(pDVar1,(DNameStatus)pDVar2);
  }
  else {
    if (*DAT_00f20978 == 'Z') {
      DAT_00f20978 = DAT_00f20978 + 1;
      *in_stack_00000004 = 0;
      in_stack_00000004[1] = local_8 & 0xffff0000;
      return in_stack_00000004;
    }
    getArgumentTypes();
    pDVar2 = local_c;
    pDVar1 = (DName *)DName::DName(local_1c," throw(");
    DName::operator+(pDVar1,pDVar2);
    pDVar2 = local_c;
  }
  DName::operator+(pDVar2,(char)puVar3);
  return in_stack_00000004;
}

