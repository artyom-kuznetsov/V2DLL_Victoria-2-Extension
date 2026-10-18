// getDataIndirectType @ 00ac8a3b body=[[00ac8a3b, 00ac8fd9]]


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const &,char
   const *,class DName const &,int)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char *param_2,DName *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint uVar6;
  char *pcVar7;
  int in_stack_00000014;
  Tokens TVar8;
  DName local_58 [8];
  DName local_50 [8];
  DName local_48 [8];
  char *local_40;
  uint local_3c;
  char *local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  char *local_28;
  uint local_24;
  char *local_20;
  uint local_1c;
  char *local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_5;
  
  local_3c = local_3c & 0xffff0000;
  pcVar7 = (char *)0x0;
  local_5 = '\0';
  if (*DAT_00f20978 == '\0') {
    if (in_stack_00000014 == 0) {
      if (*(int *)param_2 == 0) {
        if (*(int *)param_4 == 0) goto LAB_00ac8fc8;
      }
      else if (((*(uint *)(param_2 + 4) & 0x100) == 0) && (*(int *)param_4 != 0)) {
        pDVar5 = (DName *)&local_40;
        pDVar4 = (DName *)DName::DName(local_58,1);
        DName::operator+(pDVar4,pDVar5);
        local_30 = local_40;
        local_2c = local_3c;
        DName::operator+=((DName *)&local_30,' ');
        DName::operator+((DName *)&local_30,param_1);
        return param_1;
      }
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
LAB_00ac8fc8:
    DName::DName(param_1,1);
    return param_1;
  }
  if ((*DAT_00f20978 != '$') ||
     (getExtendedDataIndirectType(&local_30,(bool *)&param_3,(int)&local_5), local_30 == (char *)0x0
     )) {
    local_14 = local_14 & 0xffff0000;
    local_20 = (char *)0x0;
    uVar6 = (int)*DAT_00f20978 - (((*DAT_00f20978 < 'A') - 1 & 0x2b) + 0x16);
    local_1c = local_1c & 0xffff0000;
    local_18 = (char *)0x0;
    do {
      pDVar5 = param_3;
      if (uVar6 == 4) {
        if (((~(DAT_00f20988 >> 1) & 1) != 0) && ((~(DAT_00f20988 >> 0x11) & 1) != 0)) {
          if (local_18 == (char *)0x0) {
            TVar8 = 8;
LAB_00ac8bd4:
            pcVar3 = UScore(TVar8);
            DName::operator=((DName *)&local_18,pcVar3);
          }
          else {
            local_c = local_14;
            local_10 = local_18;
            DName::operator+=((DName *)&local_10,' ');
            UScore(8);
            pDVar5 = local_58;
            pDVar4 = (DName *)&local_10;
LAB_00ac8bbf:
            piVar2 = (int *)DName::operator+(pDVar4,(char *)pDVar5);
            local_18 = (char *)*piVar2;
            local_14 = piVar2[1];
          }
        }
      }
      else if (uVar6 == 5) {
        if ((~(DAT_00f20988 >> 1) & 1) != 0) {
          if (pcVar7 == (char *)0x0) {
            pcVar7 = UScore(10);
            DName::operator=((DName *)&local_20,pcVar7);
            pcVar7 = local_20;
          }
          else {
            local_24 = local_1c;
            local_28 = pcVar7;
            DName::operator+=((DName *)&local_28,' ');
            UScore(10);
            piVar2 = (int *)DName::operator+((DName *)&local_28,(char *)local_50);
            local_20 = (char *)*piVar2;
            local_1c = piVar2[1];
            pcVar7 = local_20;
          }
        }
      }
      else {
        if (uVar6 != 8) {
          if (*DAT_00f20978 != '\0') {
            DAT_00f20978 = DAT_00f20978 + 1;
          }
          if (0x1f < uVar6) goto LAB_00ac8d0b;
          DName::DName((DName *)&local_10,(char *)param_3);
          local_28 = (char *)0x0;
          local_24 = local_3c;
          DName::operator+=((DName *)&local_28,(DName *)&local_10);
          local_10 = local_28;
          local_c = local_24;
          if (local_18 != (char *)0x0) {
            DName::operator+=((DName *)&local_28,' ');
            local_30 = local_28;
            local_2c = local_24;
            DName::operator+=((DName *)&local_30,(DName *)&local_18);
            local_10 = local_30;
            local_c = local_2c;
          }
          if (pcVar7 != (char *)0x0) {
            local_2c = local_1c;
            local_30 = pcVar7;
            DName::operator+=((DName *)&local_30,' ');
            local_28 = local_30;
            local_24 = local_2c;
            DName::operator+=((DName *)&local_28,(DName *)&local_10);
            local_10 = local_28;
            local_c = local_24;
          }
          if ((uVar6 & 0x10) != 0) {
            if (in_stack_00000014 != 0) goto LAB_00ac8d0b;
            if (*pDVar5 == (DName)0x0) {
              if (*DAT_00f20978 != '\0') {
                pDVar5 = (DName *)getScope();
                DName::operator|=((DName *)&local_10,pDVar5);
                goto LAB_00ac8dbb;
              }
            }
            else {
              pDVar5 = (DName *)&local_40;
              pDVar4 = (DName *)DName::DName(local_58,"::");
              DName::operator+(pDVar4,pDVar5);
              local_10 = local_40;
              local_c = local_3c;
              if (*DAT_00f20978 == '\0') {
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,1);
                DName::operator+(pDVar4,pDVar5);
                local_10 = local_40;
                local_c = local_3c;
              }
              else {
                pDVar5 = local_58;
                pDVar4 = (DName *)getScope();
                piVar2 = (int *)DName::operator+(pDVar4,pDVar5);
                local_10 = (char *)*piVar2;
                local_c = piVar2[1];
              }
LAB_00ac8dbb:
              cVar1 = *DAT_00f20978;
              if (cVar1 != '\0') {
                DAT_00f20978 = DAT_00f20978 + 1;
                if (cVar1 != '@') goto LAB_00ac8d0b;
                goto LAB_00ac8de0;
              }
            }
            DName::operator+=((DName *)&local_10,1);
          }
LAB_00ac8de0:
          if ((~(DAT_00f20988 >> 1) & 1) == 0) {
            if (((byte)uVar6 & 0xc) == 0xc) {
              pDVar5 = (DName *)getBasedType();
              DName::operator|=((DName *)&local_10,pDVar5);
            }
          }
          else if (((byte)uVar6 & 0xc) == 0xc) {
            if (in_stack_00000014 != 0) {
LAB_00ac8d0b:
              *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
              *(undefined4 *)param_1 = 0;
              param_1[4] = (DName)0x2;
              return param_1;
            }
            pDVar5 = local_58;
            pDVar4 = (DName *)getBasedType();
            piVar2 = (int *)DName::operator+(pDVar4,pDVar5);
            local_10 = (char *)*piVar2;
            local_c = piVar2[1];
          }
          if ((uVar6 & 2) != 0) {
            pDVar5 = (DName *)&local_40;
            pDVar4 = (DName *)DName::DName(local_58,"volatile ");
            DName::operator+(pDVar4,pDVar5);
            local_10 = local_40;
            local_c = local_3c;
          }
          if ((uVar6 & 1) != 0) {
            pDVar5 = (DName *)&local_40;
            pDVar4 = (DName *)DName::DName(local_58,"const ");
            DName::operator+(pDVar4,pDVar5);
            local_10 = local_40;
            local_c = local_3c;
          }
          if (in_stack_00000014 == 0) {
            if (*(int *)param_2 == 0) {
              if (*(int *)param_4 != 0) {
LAB_00ac8f19:
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,' ');
                DName::operator+(pDVar4,pDVar5);
                pDVar5 = (DName *)&local_40;
                goto LAB_00ac8f31;
              }
            }
            else {
              uVar6 = *(uint *)(param_2 + 4);
              if (((uVar6 & 0x100) == 0) && (*(int *)param_4 != 0)) {
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,' ');
                DName::operator+(pDVar4,pDVar5);
                local_30 = local_40;
                local_2c = local_3c;
                DName::operator+=((DName *)&local_30,' ');
                pDVar5 = (DName *)DName::operator+((DName *)&local_30,local_50);
LAB_00ac8f31:
                DName::operator+=((DName *)&local_10,pDVar5);
              }
              else {
                if ((uVar6 & 0x800) == 0) goto LAB_00ac8f19;
                local_10 = *(char **)param_2;
                local_c = uVar6;
              }
            }
          }
          local_2c = local_c | 0x100;
          if (local_5 != '\0') {
            local_2c = local_c | 0x2100;
          }
          *(char **)param_1 = local_10;
          goto LAB_00ac8a8d;
        }
        if ((~(DAT_00f20988 >> 1) & 1) != 0) {
          if (local_18 == (char *)0x0) {
            TVar8 = 9;
            goto LAB_00ac8bd4;
          }
          local_2c = local_14;
          local_30 = local_18;
          DName::operator+=((DName *)&local_30,' ');
          UScore(9);
          pDVar5 = local_48;
          pDVar4 = (DName *)&local_30;
          goto LAB_00ac8bbf;
        }
      }
      DAT_00f20978 = DAT_00f20978 + 1;
      if ((*DAT_00f20978 == '$') &&
         (getExtendedDataIndirectType(&local_38,(bool *)&param_3,(int)&local_5),
         local_38 != (char *)0x0)) goto LAB_00ac8c36;
      uVar6 = (int)*DAT_00f20978 - (((*DAT_00f20978 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  *(char **)param_1 = local_30;
  goto LAB_00ac8a8d;
LAB_00ac8c36:
  *(char **)param_1 = local_38;
  local_2c = local_34;
LAB_00ac8a8d:
  *(uint *)(param_1 + 4) = local_2c;
  return param_1;
}

