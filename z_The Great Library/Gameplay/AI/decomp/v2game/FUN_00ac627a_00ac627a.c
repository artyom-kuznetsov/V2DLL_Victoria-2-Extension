// getTemplateConstant @ 00ac627a body=[[00ac627a, 00ac6569]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  char *pcVar1;
  DName *pDVar2;
  long lVar3;
  DName *this;
  DName *in_stack_00000004;
  char cVar4;
  DName local_c4 [32];
  undefined1 local_a4 [16];
  DName local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  DName local_84 [4];
  char local_80;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_18 [8];
  DName local_10 [8];
  uint local_8;
  
  pcVar1 = DAT_00f20978;
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  cVar4 = *DAT_00f20978;
  DAT_00f20978 = DAT_00f20978 + 1;
  if (cVar4 < 'E') {
    if (cVar4 == 'D') {
LAB_00ac6429:
      getSignedDimension();
      if ((DAT_00f20988 & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar3 = _atol(local_18);
        pcVar1 = (char *)(*DAT_00f2098c)(lVar3);
        if (pcVar1 != (char *)0x0) {
LAB_00ac6385:
          DName::DName(in_stack_00000004,pcVar1);
          goto LAB_00ac6559;
        }
      }
      pDVar2 = (DName *)&local_8c;
      if (cVar4 == 'D') {
        pcVar1 = "`template-parameter";
      }
      else {
        pcVar1 = "`non-type-template-parameter";
      }
      this = (DName *)DName::DName(local_10,pcVar1);
      DName::operator+(this,pDVar2);
      DName::operator+((DName *)&local_8c,(char *)in_stack_00000004);
      goto LAB_00ac6559;
    }
    if (cVar4 == '\0') {
LAB_00ac63c3:
      DAT_00f20978 = pcVar1;
      DName::DName(in_stack_00000004,1);
      goto LAB_00ac6559;
    }
    if (cVar4 == '0') {
      getSignedDimension();
      goto LAB_00ac6559;
    }
    if (cVar4 == '1') {
      if (*DAT_00f20978 == '@') {
        DAT_00f20978 = pcVar1 + 2;
        pcVar1 = "NULL";
        goto LAB_00ac6385;
      }
      getDecoratedName();
      pDVar2 = (DName *)DName::DName(local_94,"&");
LAB_00ac6364:
      DName::operator+(pDVar2,in_stack_00000004);
      goto LAB_00ac6559;
    }
    if (cVar4 == '2') {
      getSignedDimension();
      getSignedDimension();
      pcVar1 = DAT_00f20978;
      if (('\x01' < local_80) || ('\x01' < (char)local_88)) goto LAB_00ac63c3;
      pcVar1 = DName::getString(local_84,&local_7b,100);
      if (pcVar1 != (char *)0x0) {
        local_7c = local_7b;
        if (local_7b == '-') {
          local_7b = local_7a;
          local_7a = '.';
        }
        else {
          local_7b = '.';
        }
        cVar4 = (char)local_a4;
        pDVar2 = (DName *)DName::DName(local_c4,&local_7c);
        pDVar2 = (DName *)DName::operator+(pDVar2,cVar4);
        goto LAB_00ac6364;
      }
    }
    goto LAB_00ac6310;
  }
  if (cVar4 == 'E') {
    getDecoratedName();
    goto LAB_00ac6559;
  }
  if ('E' < cVar4) {
    if (cVar4 < 'K') {
      DName::DName(local_84,'{');
      if (('G' < cVar4) && (cVar4 < 'K')) {
        pDVar2 = (DName *)getDecoratedName();
        DName::operator+=(local_84,pDVar2);
        DName::operator+=(local_84,',');
      }
      if (cVar4 == 'F') {
LAB_00ac650f:
        pDVar2 = (DName *)getSignedDimension();
        DName::operator+=(local_84,pDVar2);
        DName::operator+=(local_84,',');
LAB_00ac652f:
        pDVar2 = (DName *)getSignedDimension();
        DName::operator+=(local_84,pDVar2);
      }
      else {
        if (cVar4 == 'G') {
LAB_00ac64ef:
          pDVar2 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar2);
          DName::operator+=(local_84,',');
          goto LAB_00ac650f;
        }
        if (cVar4 == 'H') goto LAB_00ac652f;
        if (cVar4 == 'I') goto LAB_00ac650f;
        if (cVar4 == 'J') goto LAB_00ac64ef;
      }
      DName::operator+(local_84,(char)in_stack_00000004);
      goto LAB_00ac6559;
    }
    if (cVar4 == 'Q') goto LAB_00ac6429;
    if (cVar4 == 'R') {
      getZName(SUB41(&local_8c,0),false);
      getSignedDimension();
      *(undefined4 *)in_stack_00000004 = local_8c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_88;
      goto LAB_00ac6559;
    }
  }
LAB_00ac6310:
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  in_stack_00000004[4] = (DName)0x2;
LAB_00ac6559:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

