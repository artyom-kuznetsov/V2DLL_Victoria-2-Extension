// getEnumType @ 00ac59c5 body=[[00ac59c5, 00ac5a8f]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *this;
  DName *in_stack_00000004;
  DName *pDVar2;
  char *pcVar3;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  if (*DAT_00f20978 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  switch(*DAT_00f20978) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_00ac59f2_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
    return in_stack_00000004;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_00ac59f2_caseD_34:
  cVar1 = *DAT_00f20978;
  DAT_00f20978 = DAT_00f20978 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)&local_14;
    this = (DName *)DName::DName(local_1c,"unsigned ");
    DName::operator+(this,pDVar2);
    local_c = local_14;
    local_8 = local_10;
  }
  *(undefined4 *)in_stack_00000004 = local_c;
  *(uint *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

