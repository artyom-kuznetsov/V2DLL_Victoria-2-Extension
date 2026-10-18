// getTemplateArgumentList @ 00ac6651 body=[[00ac6651, 00ac685f]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  DName *pDVar3;
  undefined4 *puVar4;
  long lVar5;
  DName *pDVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  undefined1 local_78 [8];
  DName local_70 [8];
  DName local_68 [8];
  DName local_60 [8];
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  char *local_48;
  undefined4 local_44;
  uint local_40;
  DName local_3c [8];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  DAT_00f20991 = 1;
  local_24 = 1;
  DVar1 = in_stack_00000004[4];
  do {
    if (((DVar1 != (DName)0x0) || (*DAT_00f20978 == '\0')) || (*DAT_00f20978 == '@')) {
      DAT_00f20991 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    cVar2 = *DAT_00f20978;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_00f20978 = DAT_00f20978 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_00f20974,(int)local_78);
    }
    else {
      local_1c = local_1c & 0xffff0000;
      local_48 = DAT_00f20978;
      local_20 = 0;
      if (cVar2 == 'X') {
        DAT_00f20978 = DAT_00f20978 + 1;
        pcVar7 = "void";
LAB_00ac6704:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_00f20978[1] != '$')) {
          DAT_00f20978 = DAT_00f20978 + 1;
          puVar4 = (undefined4 *)getTemplateConstant();
        }
        else {
          if (cVar2 == '?') {
            getSignedDimension();
            if ((DAT_00f20988 & 0x4000) == 0) {
              pDVar3 = (DName *)&local_58;
              pDVar6 = (DName *)DName::DName(local_68,"`template-parameter");
              DName::operator+(pDVar6,pDVar3);
              local_34 = local_58;
              local_30 = local_54;
              DName::operator+=((DName *)&local_34,"\'");
              local_20 = local_34;
              local_1c = local_30;
            }
            else {
              DName::getString(local_3c,local_18,0x10);
              lVar5 = _atol(local_18);
              pcVar7 = (char *)(*DAT_00f2098c)(lVar5);
              if (pcVar7 != (char *)0x0) goto LAB_00ac6704;
              pDVar3 = (DName *)&local_50;
              pDVar6 = (DName *)DName::DName(local_60,"`template-parameter");
              DName::operator+(pDVar6,pDVar3);
              local_2c = local_50;
              local_28 = local_4c;
              DName::operator+=((DName *)&local_2c,"\'");
              local_20 = local_2c;
              local_1c = local_28;
            }
            goto LAB_00ac6814;
          }
          local_40 = local_40 & 0xffff0000;
          local_44 = 0;
          puVar4 = (undefined4 *)getPrimaryDataType(local_70);
        }
        local_20 = *puVar4;
        local_1c = puVar4[1];
      }
LAB_00ac6814:
      if ((1 < (int)DAT_00f20978 - (int)local_48) && (*(int *)DAT_00f20974 != 9)) {
        Replicator::operator+=(DAT_00f20974,(DName *)&local_20);
      }
      pDVar3 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar3);
    DVar1 = in_stack_00000004[4];
  } while( true );
}

