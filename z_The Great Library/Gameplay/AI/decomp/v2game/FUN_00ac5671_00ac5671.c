// getArgumentList @ 00ac5671 body=[[00ac5671, 00ac5776]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  DName DVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  undefined1 local_20 [8];
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  local_8 = 1;
  *(undefined4 *)in_stack_00000004 = 0;
  DVar1 = in_stack_00000004[4];
  while( true ) {
    if (DVar1 != (DName)0x0) {
      return in_stack_00000004;
    }
    if (*DAT_00f20978 == '@') {
      return in_stack_00000004;
    }
    if (*DAT_00f20978 == 'Z') {
      return in_stack_00000004;
    }
    if (local_8 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_8 = 0;
    }
    pcVar2 = DAT_00f20978;
    if (*DAT_00f20978 == '\0') break;
    if ((int)*DAT_00f20978 - 0x30U < 10) {
      DAT_00f20978 = DAT_00f20978 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_00f2096c,(int)local_20);
      DName::operator+=(in_stack_00000004,pDVar3);
    }
    else {
      local_c = local_c & 0xffff0000;
      local_10 = 0;
      getPrimaryDataType(local_18);
      if ((1 < (int)DAT_00f20978 - (int)pcVar2) && (*(int *)DAT_00f2096c != 9)) {
        Replicator::operator+=(DAT_00f2096c,local_18);
      }
      DName::operator+=(in_stack_00000004,local_18);
      if (DAT_00f20978 == pcVar2) {
        *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
        in_stack_00000004[4] = (DName)0x2;
        *(undefined4 *)in_stack_00000004 = 0;
      }
    }
    DVar1 = in_stack_00000004[4];
  }
  DName::operator+=(in_stack_00000004,1);
  return in_stack_00000004;
}

