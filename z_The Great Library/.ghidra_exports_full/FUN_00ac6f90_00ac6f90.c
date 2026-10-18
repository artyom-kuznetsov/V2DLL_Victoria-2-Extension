// getZName @ 00ac6f90 body=[[00ac6f90, 00ac71a5]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool,bool)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getZName(bool param_1,bool param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  long lVar3;
  DName *this;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  DName *pDVar7;
  DName local_38 [4];
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if ((int)*DAT_00f20978 - 0x30U < 10) {
    DAT_00f20978 = DAT_00f20978 + 1;
    Replicator::operator[](DAT_00f20970,(int)_param_1);
    goto LAB_00ac7198;
  }
  local_20 = 0;
  local_1c = local_1c & 0xffff0000;
  if (*DAT_00f20978 == '?') {
    puVar1 = (undefined4 *)getTemplateName(SUB41(&local_30,0));
    local_20 = *puVar1;
    local_1c = puVar1[1];
    pcVar4 = DAT_00f20978 + 1;
    if (*DAT_00f20978 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_00f20978 != '\0') + 1);
      pcVar4 = DAT_00f20978;
    }
  }
  else {
    pcVar2 = "template-parameter-";
    pcVar6 = "template-parameter-";
    local_24 = 0x12;
    pcVar4 = DAT_00f20978;
    do {
      if ((*pcVar4 == '\0') || (*pcVar4 != *pcVar6)) break;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    if (*pcVar4 == *pcVar6) {
      DAT_00f20978 = DAT_00f20978 + 0x13;
    }
    else {
      pcVar2 = "generic-type-";
      pcVar6 = "generic-type-";
      iVar5 = 0xc;
      pcVar4 = DAT_00f20978;
      do {
        if ((*pcVar4 == '\0') || (*pcVar4 != *pcVar6)) break;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*pcVar4 != *pcVar6) {
        if ((in_stack_0000000c == '\0') || (*DAT_00f20978 != '@')) {
          puVar1 = (undefined4 *)DName::DName(local_38,&DAT_00f20978,'@');
          local_20 = *puVar1;
          local_1c = puVar1[1];
          pcVar4 = DAT_00f20978;
        }
        else {
          local_1c = local_34 & 0xffff0000;
          DAT_00f20978 = DAT_00f20978 + 1;
          local_20 = 0;
          pcVar4 = DAT_00f20978;
        }
        goto LAB_00ac716f;
      }
      DAT_00f20978 = DAT_00f20978 + 0xd;
    }
    getSignedDimension();
    if ((DAT_00f20988 & 0x4000) != 0) {
      DName::getString((DName *)&local_28,local_18,0x10);
      lVar3 = _atol(local_18);
      pcVar4 = (char *)(*DAT_00f2098c)(lVar3);
      if (pcVar4 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar4);
        pcVar4 = DAT_00f20978;
        goto LAB_00ac716f;
      }
    }
    DName::operator=((DName *)&local_20,"`");
    pDVar7 = (DName *)&local_30;
    this = (DName *)DName::DName(local_38,pcVar2);
    DName::operator+(this,pDVar7);
    local_28 = local_30;
    local_24 = local_2c;
    DName::operator+=((DName *)&local_28,"\'");
    DName::operator+=((DName *)&local_20,(DName *)&local_28);
    pcVar4 = DAT_00f20978;
  }
LAB_00ac716f:
  DAT_00f20978 = pcVar4;
  if ((param_2) && (*(int *)DAT_00f20970 != 9)) {
    Replicator::operator+=(DAT_00f20970,(DName *)&local_20);
  }
  *_param_1 = local_20;
  _param_1[1] = local_1c;
LAB_00ac7198:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

