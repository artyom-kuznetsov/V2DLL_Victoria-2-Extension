// getPrimaryDataType @ 00ac966f body=[[00ac966f, 00ac981f]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  int *in_stack_00000008;
  DName local_1c [8];
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar2 = DAT_00f20978;
  cVar1 = *DAT_00f20978;
  local_8 = local_8 & 0xffff0000;
  local_c = 0;
  if (cVar1 == '\0') {
LAB_00ac980c:
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (cVar1 != '$') {
    if (cVar1 != 'A') {
      if (cVar1 != 'B') {
        getBasicDataType(param_1);
        return param_1;
      }
      DName::operator=((DName *)&local_c,"volatile");
      if (*in_stack_00000008 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
    }
    goto LAB_00ac96d6;
  }
  if (DAT_00f20978[1] == '$') {
    DAT_00f20978 = DAT_00f20978 + 2;
    cVar1 = *DAT_00f20978;
    if (cVar1 < 'R') {
      if (cVar1 != 'Q') {
        if (cVar1 == '\0') goto LAB_00ac980c;
        if (cVar1 == 'A') {
          DAT_00f20978 = pcVar2 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_00f20978 = pcVar2 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          DAT_00f20978 = pcVar2 + 3;
          local_c = 0;
          getDataIndirectType(local_1c,(char *)in_stack_00000008,(DName *)&DAT_00ded94d,
                              (int)&local_c);
          getBasicDataType(param_1);
          return param_1;
        }
        goto LAB_00ac9719;
      }
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'S') {
          DAT_00f20978 = pcVar2 + 3;
        }
        else if (cVar1 == 'T') {
          DAT_00f20978 = pcVar2 + 3;
          DName::DName(param_1,"std::nullptr_t");
          return param_1;
        }
        goto LAB_00ac9719;
      }
      DName::operator=((DName *)&local_c,"volatile");
      if (*in_stack_00000008 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
    }
LAB_00ac96d6:
    local_14 = *in_stack_00000008;
    DAT_00f20978 = DAT_00f20978 + 1;
    local_10 = in_stack_00000008[1] | 0x100;
    getPtrRefType(param_1,(DName *)&local_c,(char *)&local_14);
  }
  else {
    if (DAT_00f20978[1] == '\0') goto LAB_00ac980c;
LAB_00ac9719:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}

