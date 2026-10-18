// getScope @ 00ac83a5 body=[[00ac83a5, 00ac865b]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  DName *this;
  DName *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  DName *in_stack_00000004;
  char cVar6;
  DName *pDVar7;
  DName local_b4 [8];
  DName local_ac [16];
  DName local_9c [8];
  DName local_94 [8];
  DName local_8c [8];
  undefined1 local_84 [8];
  DName local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  DName local_5c [8];
  undefined1 local_54 [8];
  DName local_4c [8];
  DName local_44 [8];
  DName local_3c [8];
  DName local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
LAB_00ac85f3:
  do {
    while( true ) {
      if (((in_stack_00000004[4] != (DName)0x0) || (*DAT_00f20978 == '\0')) ||
         (*DAT_00f20978 == '@')) {
        if (*DAT_00f20978 == '\0') {
          if (*(int *)in_stack_00000004 == 0) {
            DName::operator=(in_stack_00000004,1);
          }
          else {
            pDVar7 = local_44;
            pDVar3 = local_4c;
            this = (DName *)DName::DName(local_3c,1);
            pDVar3 = (DName *)DName::operator+(this,(char *)pDVar3);
            puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
            *(undefined4 *)in_stack_00000004 = *puVar4;
            *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
          }
        }
        else if (*DAT_00f20978 != '@') {
          *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
          in_stack_00000004[4] = (DName)0x2;
          *(undefined4 *)in_stack_00000004 = 0;
        }
        return in_stack_00000004;
      }
      if ((DAT_00f20990 != '\0') && (DAT_00f20991 == '\0')) {
        return in_stack_00000004;
      }
      if (*(int *)in_stack_00000004 != 0) {
        pDVar7 = (DName *)&local_24;
        pDVar3 = (DName *)DName::DName(local_94,"::");
        DName::operator+(pDVar3,pDVar7);
        *(undefined4 *)in_stack_00000004 = local_24;
        *(undefined4 *)(in_stack_00000004 + 4) = local_20;
        if (bVar1) {
          pDVar7 = (DName *)&local_2c;
          pDVar3 = (DName *)DName::DName(local_9c,'[');
          DName::operator+(pDVar3,pDVar7);
          *(undefined4 *)in_stack_00000004 = local_2c;
          *(undefined4 *)(in_stack_00000004 + 4) = local_28;
          bVar1 = false;
        }
      }
      if (*DAT_00f20978 == '?') break;
      pDVar7 = local_4c;
      uVar2 = SUB41(local_44,0);
LAB_00ac85d6:
      pDVar3 = (DName *)getZName((bool)uVar2,true);
LAB_00ac85e4:
      puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
LAB_00ac85e9:
      *(undefined4 *)in_stack_00000004 = *puVar4;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
    }
    pcVar5 = DAT_00f20978 + 1;
    cVar6 = *pcVar5;
    if (cVar6 == '$') {
      pDVar7 = local_8c;
      uVar2 = SUB41(local_3c,0);
      goto LAB_00ac85d6;
    }
    if (cVar6 != '%') {
      if (cVar6 != '?') {
        if (cVar6 == 'A') goto LAB_00ac8571;
        if (cVar6 != 'I') {
          pDVar7 = local_ac;
          DAT_00f20978 = pcVar5;
          pDVar3 = (DName *)getLexicalFrame();
          goto LAB_00ac85e4;
        }
        pDVar7 = local_64;
        cVar6 = (char)local_54;
        DAT_00f20978 = DAT_00f20978 + 2;
        pDVar3 = (DName *)getZName(SUB41(local_74,0),true);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
        bVar1 = true;
        goto LAB_00ac85e9;
      }
      if ((DAT_00f20978[2] != '_') || (DAT_00f20978[3] != '?')) {
        DAT_00f20978 = pcVar5;
        getDecoratedName();
        pDVar7 = (DName *)&local_1c;
        pDVar3 = (DName *)DName::DName(local_5c,'`');
        DName::operator+(pDVar3,pDVar7);
        local_c = local_1c;
        local_8 = local_18;
        DName::operator+=((DName *)&local_c,'\'');
        pDVar7 = local_6c;
        pDVar3 = (DName *)&local_c;
        goto LAB_00ac85e4;
      }
      pDVar7 = local_b4;
      DAT_00f20978 = DAT_00f20978 + 2;
      pDVar3 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
      puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
      *(undefined4 *)in_stack_00000004 = *puVar4;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
      if (*DAT_00f20978 == '@') {
        DAT_00f20978 = DAT_00f20978 + 1;
      }
      goto LAB_00ac85f3;
    }
LAB_00ac8571:
    DAT_00f20978 = pcVar5;
    DName::DName(local_34,&DAT_00f20978,'@');
    pDVar7 = (DName *)&local_14;
    pDVar3 = (DName *)DName::DName(local_7c,"`anonymous namespace\'");
    DName::operator+(pDVar3,pDVar7);
    *(undefined4 *)in_stack_00000004 = local_14;
    *(undefined4 *)(in_stack_00000004 + 4) = local_10;
    if (*(int *)DAT_00f20970 != 9) {
      Replicator::operator+=(DAT_00f20970,local_34);
    }
  } while( true );
}

