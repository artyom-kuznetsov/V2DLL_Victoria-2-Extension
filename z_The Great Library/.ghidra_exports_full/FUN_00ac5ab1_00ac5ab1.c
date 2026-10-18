// getArgumentTypes @ 00ac5ab1 body=[[00ac5ab1, 00ac5b90]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_00f20978 == 'X') {
    pcVar3 = "void";
  }
  else {
    if (*DAT_00f20978 != 'Z') {
      getArgumentList();
      if (((char)local_8 == '\0') && (cVar1 = *DAT_00f20978, cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 != 'Z') {
            *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
            *(undefined4 *)in_stack_00000004 = 0;
            in_stack_00000004[4] = (DName)0x2;
            return in_stack_00000004;
          }
          DAT_00f20978 = DAT_00f20978 + 1;
          puVar2 = (undefined4 *)DName::operator+((DName *)&local_c,local_14);
          *(undefined4 *)in_stack_00000004 = *puVar2;
          *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
          return in_stack_00000004;
        }
        DAT_00f20978 = DAT_00f20978 + 1;
      }
      *(undefined4 *)in_stack_00000004 = local_c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_8;
      return in_stack_00000004;
    }
    pcVar3 = "...";
    if ((~(DAT_00f20988 >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
  }
  DAT_00f20978 = DAT_00f20978 + 1;
  DName::DName(in_stack_00000004,pcVar3);
  return in_stack_00000004;
}

