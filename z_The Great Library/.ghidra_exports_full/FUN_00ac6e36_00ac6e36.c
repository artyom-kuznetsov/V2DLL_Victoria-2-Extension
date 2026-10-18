// getTemplateName @ 00ac6e36 body=[[00ac6e36, 00ac6f8c]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  DName *this;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName *pDVar6;
  undefined4 local_ac [11];
  undefined4 local_80 [11];
  undefined4 local_54 [11];
  DName local_28 [16];
  DName local_18 [8];
  int *local_10;
  int local_c;
  char local_5;
  
  uVar3 = DAT_00f20974;
  uVar2 = DAT_00f20970;
  uVar1 = DAT_00f2096c;
  if ((*DAT_00f20978 == '?') && (DAT_00f20978[1] == '$')) {
    local_54[0] = 0xffffffff;
    local_80[0] = 0xffffffff;
    local_ac[0] = 0xffffffff;
    DAT_00f2096c = local_54;
    DAT_00f20970 = local_80;
    DAT_00f20974 = local_ac;
    local_5 = '\0';
    if (DAT_00f20978[2] == '?') {
      DAT_00f20978 = DAT_00f20978 + 3;
      piVar5 = (int *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      DAT_00f20978 = DAT_00f20978 + 2;
      piVar5 = (int *)getZName(SUB41(local_18,0),true);
    }
    local_10 = (int *)*piVar5;
    local_c = piVar5[1];
    if (local_10 == (int *)0x0) {
      DAT_00f20990 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar6 = local_18;
      this = (DName *)DName::DName(local_28,'<');
      DName::operator+(this,pDVar6);
      DName::operator+=((DName *)&local_10,local_18);
      if (local_10 != (int *)0x0) {
        cVar4 = (**(code **)(*local_10 + 4))();
        if (cVar4 == '>') {
          DName::operator+=((DName *)&local_10,' ');
        }
      }
      DName::operator+=((DName *)&local_10,'>');
      if ((in_stack_00000008 != '\0') && (*DAT_00f20978 != '\0')) {
        DAT_00f20978 = DAT_00f20978 + 1;
      }
    }
    DAT_00f2096c = (undefined4 *)uVar1;
    DAT_00f20970 = (undefined4 *)uVar2;
    *_param_1 = (int)local_10;
    DAT_00f20974 = (undefined4 *)uVar3;
    _param_1[1] = local_c;
    return;
  }
  _param_1[1] = _param_1[1] & 0xffff00ff;
  *_param_1 = 0;
  *(undefined1 *)(_param_1 + 1) = 2;
  return;
}

