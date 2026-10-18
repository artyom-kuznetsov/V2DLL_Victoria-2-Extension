// getPtrRefDataType @ 00ac656a body=[[00ac656a, 00ac6650]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  DName *this;
  int in_stack_0000000c;
  char *pcVar1;
  DName *pDVar2;
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_00f20978 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_00f20978 == 'X')) {
    DAT_00f20978 = DAT_00f20978 + 1;
    if (*(int *)param_2 != 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_00f20978 == 'Y') {
    DAT_00f20978 = DAT_00f20978 + 1;
    getArrayType(param_1);
    return param_1;
  }
  getBasicDataType((DName *)&local_c);
  if ((*(uint *)(param_2 + 4) & 0x4000) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) goto LAB_00ac6632;
    pcVar1 = "cli::pin_ptr<";
  }
  else {
    pcVar1 = "cli::array<";
  }
  pDVar2 = (DName *)&local_14;
  this = (DName *)DName::DName(local_1c,pcVar1);
  DName::operator+(this,pDVar2);
  local_8 = local_10;
  local_c = local_14;
LAB_00ac6632:
  *(undefined4 *)param_1 = local_c;
  *(undefined4 *)(param_1 + 4) = local_8;
  return param_1;
}

