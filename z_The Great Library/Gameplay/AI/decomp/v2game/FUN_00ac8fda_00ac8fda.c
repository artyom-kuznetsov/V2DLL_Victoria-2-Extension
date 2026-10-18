// operator_char* @ 00ac8fda body=[[00ac8fda, 00ac9118]]


/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2010 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  char cVar1;
  DName *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  DName *pDVar8;
  DName local_24 [16];
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_c = (undefined4 *)0x0;
  uVar3 = local_10 & 0xffff0000;
  puVar6 = (undefined4 *)0x0;
  if (DAT_00f2097c != (char *)0x0) {
    if (*DAT_00f2097c == '?') {
      if (DAT_00f2097c[1] == '@') {
        DAT_00f20978 = DAT_00f20978 + 2;
        getDecoratedName();
        pDVar8 = (DName *)&local_14;
        this_00 = (DName *)DName::DName(local_24,"CV: ");
        DName::operator+(this_00,pDVar8);
        uVar3 = local_10;
        puVar6 = local_14;
        goto LAB_00ac906f;
      }
      if (DAT_00f2097c[1] == '$') {
        puVar2 = (undefined4 *)getTemplateName(SUB41(local_24,0));
        puVar6 = (undefined4 *)*puVar2;
        uVar3 = puVar2[1];
        if ((char)uVar3 != '\x02') goto LAB_00ac906f;
        DAT_00f20978 = DAT_00f2097c;
      }
    }
    puVar2 = (undefined4 *)getDecoratedName();
    puVar6 = (undefined4 *)*puVar2;
    uVar3 = puVar2[1];
  }
LAB_00ac906f:
  if ((char)uVar3 == '\x03') {
    return (char *)0x0;
  }
  if (((char)uVar3 == '\x02') || (((DAT_00f20988 & 0x1000) == 0 && (*DAT_00f20978 != '\0')))) {
    DName::operator=((DName *)&local_c,DAT_00f2097c);
    puVar6 = local_c;
    uVar3 = local_8;
  }
  local_8 = uVar3;
  local_c = puVar6;
  if (DAT_00f20980 == (char *)0x0) {
    iVar4 = 0;
    if (local_c != (undefined4 *)0x0) {
      iVar4 = (**(code **)*local_c)();
    }
    DAT_00f20984 = iVar4 + 1;
    DAT_00f20980 = (char *)(*DAT_00f20958)(iVar4 + 8U & 0xfffffff8);
    if (DAT_00f20980 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_c,DAT_00f20980,DAT_00f20984);
  pcVar5 = DAT_00f20980;
  pcVar7 = DAT_00f20980;
  while (cVar1 = *pcVar5, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar7 = ' ';
      pcVar7 = pcVar7 + 1;
      do {
        pcVar5 = pcVar5 + 1;
      } while (*pcVar5 == ' ');
    }
    else {
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  *pcVar7 = '\0';
  return DAT_00f20980;
}

