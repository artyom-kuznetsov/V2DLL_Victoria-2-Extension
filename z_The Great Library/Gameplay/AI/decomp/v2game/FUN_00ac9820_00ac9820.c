// getDataType @ 00ac9820 body=[[00ac9820, 00ac98ee]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  DName *this;
  int *piVar2;
  DName *in_stack_00000008;
  DName *pDVar3;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  DName::DName((DName *)&local_c,in_stack_00000008);
  cVar1 = *DAT_00f20978;
  pDVar3 = param_1;
  if (cVar1 == '\0') {
    this = (DName *)DName::DName((DName *)&local_14,1);
  }
  else {
    if (cVar1 == '?') {
      DAT_00f20978 = DAT_00f20978 + 1;
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      piVar2 = (int *)getDataIndirectType(local_1c,(char *)&local_c,(DName *)&DAT_00ded94d,
                                          (int)&local_14);
      local_c = *piVar2;
      local_8 = piVar2[1];
      getPrimaryDataType(param_1);
      return param_1;
    }
    if (cVar1 != 'X') {
      getPrimaryDataType(param_1);
      return param_1;
    }
    DAT_00f20978 = DAT_00f20978 + 1;
    if (local_c == 0) {
      DName::DName(param_1,"void");
      return param_1;
    }
    this = (DName *)DName::DName((DName *)&local_14,"void ");
  }
  DName::operator+(this,pDVar3);
  return param_1;
}

