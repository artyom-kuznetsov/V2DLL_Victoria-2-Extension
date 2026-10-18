// getBasedType @ 00ac73e1 body=[[00ac73e1, 00ac747c]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  undefined4 *in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar2 = UScore(0);
  DName::DName((DName *)&local_c,pcVar2);
  if (*DAT_00f20978 == '\0') {
    DName::operator+=((DName *)&local_c,1);
  }
  else {
    cVar1 = *DAT_00f20978;
    DAT_00f20978 = DAT_00f20978 + 1;
    if (cVar1 == '0') {
      DName::operator+=((DName *)&local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=((DName *)&local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      in_stack_00000004[1] = in_stack_00000004[1] & 0xffff00ff;
      *in_stack_00000004 = 0;
      *(undefined1 *)(in_stack_00000004 + 1) = 2;
      return;
    }
  }
  DName::operator+=((DName *)&local_c,") ");
  *in_stack_00000004 = local_c;
  in_stack_00000004[1] = local_8;
  return;
}

