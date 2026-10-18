// getPtrRefType @ 00ac9119 body=[[00ac9119, 00ac9211]]


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char const *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char *param_3)

{
  char cVar1;
  DName *in_stack_00000010;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_00f20978;
  if (cVar1 == '\0') {
    DName::DName((DName *)&local_c,1);
    DName::operator+=((DName *)&local_c,(char *)in_stack_00000010);
    if (*(int *)param_2 != 0) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      if (*(int *)param_2 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
      DName::operator+=((DName *)&local_c,(DName *)param_3);
    }
    *(undefined4 *)param_1 = local_c;
    *(undefined4 *)(param_1 + 4) = local_8;
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType((DName *)&local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)&local_c);
  }
  else {
    DName::DName((DName *)&local_c,(char *)in_stack_00000010);
    if ((*(int *)param_2 != 0) &&
       ((*(int *)param_3 == 0 || ((*(uint *)(param_3 + 4) & 0x100) == 0)))) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      DName::operator+=((DName *)&local_c,(DName *)param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}

