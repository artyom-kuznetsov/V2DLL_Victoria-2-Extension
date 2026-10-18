// getOperatorName @ 00ac6860 body=[[00ac6860, 00ac6e35]]


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  DName *pDVar8;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar9;
  undefined1 local_94 [32];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [24];
  DName local_34 [8];
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  cVar2 = *DAT_00f20978;
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  bVar1 = false;
  pcVar3 = DAT_00f20978 + 1;
  local_c = 0;
  local_14 = (int *)0x0;
  if ('A' < cVar2) {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_00ac6e06;
    }
    if (cVar2 < 'C') goto LAB_00ac6cfa;
    if (cVar2 < '[') goto LAB_00ac6e06;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_00f20978 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_00ac6de3:
          pcVar9 = *(char **)("__stdcall" + DAT_00f20978[1] * 4 + 8);
          DAT_00f20978 = pcVar3;
LAB_00ac6a85:
          DName::DName(_param_1,pcVar9);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar9 = DAT_00f20978 + 1;
            DAT_00f20978 = pcVar3;
            DName::DName((DName *)&local_24,*(char **)("__based(" + *pcVar9 * 4 + 4));
            local_8 = local_20 | 0x8000;
LAB_00ac6abb:
            *(int *)_param_1 = local_24;
            goto LAB_00ac6909;
          }
          if (cVar2 == '\0') {
LAB_00ac6a04:
            pcVar3 = pcVar3 + -1;
LAB_00ac6a0a:
            DAT_00f20978 = pcVar3;
            DName::DName(_param_1,1);
            return _param_1;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar9 = *(char **)("__based(" + DAT_00f20978[1] * 4 + 4);
              DAT_00f20978 = pcVar3;
              goto LAB_00ac68c9;
            }
            if (cVar2 < '9') {
              pcVar9 = *(char **)("__based(" + DAT_00f20978[1] * 4 + 4);
              DAT_00f20978 = pcVar3;
              goto LAB_00ac6a85;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_00f20978 + 3;
          if (cVar2 == '\0') goto LAB_00ac6a04;
          if (cVar2 == '0') {
            pcVar9 = "`anonymous namespace\'";
            DAT_00f20978 = pcVar3;
LAB_00ac6aef:
            getStringEncoding((char *)&local_24,(int)pcVar9);
            local_8 = local_20 | 0x1000;
            goto LAB_00ac6abb;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_00ac6de3;
          if (cVar2 == 'C') {
            pcVar9 = "`string\'";
            DAT_00f20978 = pcVar3;
            goto LAB_00ac6aef;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_00ac6de3;
        if (cVar2 == 'P') {
          pcVar9 = DAT_00f20978 + 1;
          DAT_00f20978 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__stdcall" + *pcVar9 * 4 + 8));
          piVar5 = (int *)getOperatorName(SUB41(local_74,0),(bool *)0x0);
          local_14 = (int *)*piVar5;
          local_10 = piVar5[1];
          if ((local_14 == (int *)0x0) || (pcVar3 = DAT_00f20978, (local_10 & 0x400) == 0)) {
LAB_00ac6d0f:
            pDVar8 = (DName *)&local_c;
LAB_00ac6d12:
            DName::operator+(pDVar8,_param_1);
            return _param_1;
          }
        }
        else {
          iVar7 = local_c;
          if (cVar2 == 'Q') goto LAB_00ac6901;
          if (cVar2 == 'R') {
            pcVar9 = DAT_00f20978 + 1;
            DAT_00f20978 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__stdcall" + *pcVar9 * 4 + 8));
            if (*DAT_00f20978 == '\0') {
              DName::operator+((DName *)&local_c,(DNameStatus)_param_1);
              return _param_1;
            }
            uVar6 = (int)*DAT_00f20978 - 0x30;
            pcVar3 = DAT_00f20978;
            if ((-1 < (int)uVar6) && (uVar6 < 5)) {
              DName::operator=((DName *)&local_14,(&PTR_s_Type_Descriptor__00ddbe90)[uVar6]);
              pcVar3 = DAT_00f20978;
              iVar7 = (int)*DAT_00f20978;
              DAT_00f20978 = DAT_00f20978 + 1;
              if (iVar7 == 0x30) {
                getDataType((DName *)&local_2c);
                local_1c = local_2c;
                local_18 = local_28;
                DName::operator+=((DName *)&local_1c,' ');
                local_24 = local_1c;
                local_20 = local_18;
                DName::operator+=((DName *)&local_24,(DName *)&local_c);
                pDVar8 = (DName *)&local_24;
                goto LAB_00ac6d12;
              }
              if (iVar7 == 0x31) {
                local_1c = local_c;
                local_18 = local_8;
                DName::operator+=((DName *)&local_1c,(DName *)&local_14);
                cVar2 = (char)local_4c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_5c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_6c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_54;
                pDVar8 = (DName *)getDimension(SUB41(local_64,0));
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                DName::operator+((DName *)&local_1c,param_1);
                return _param_1;
              }
              if (2 < iVar7 - 0x32U) goto LAB_00ac6a0a;
              goto LAB_00ac6d0f;
            }
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar9 = *(char **)("__stdcall" + DAT_00f20978[1] * 4 + 8);
          DAT_00f20978 = pcVar3;
LAB_00ac68c9:
          DName::operator=((DName *)&local_c,pcVar9);
          goto LAB_00ac68d1;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_00ac6de3;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_00f20978 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar9 = DAT_00f20978 + 2;
                  DAT_00f20978 = pcVar3;
                  DName::DName((DName *)&local_1c,(&PTR_DAT_00ddbd60)[*pcVar9]);
                  if (*DAT_00f20978 == '?') {
                    pDVar8 = (DName *)getDecoratedName();
                    DName::operator+=((DName *)&local_1c,pDVar8);
                    if (*DAT_00f20978 == '@') {
                      DAT_00f20978 = DAT_00f20978 + 1;
                    }
                  }
                  else {
                    pDVar8 = (DName *)getSymbolName();
                    DName::operator+=((DName *)&local_1c,pDVar8);
                  }
                  DName::operator+=((DName *)&local_1c,"\'\'");
                  *(int *)_param_1 = local_1c;
                  local_8 = local_18;
                  goto LAB_00ac6909;
                }
                if ('J' < cVar2) goto LAB_00ac6cfa;
              }
              pcVar9 = (&PTR_DAT_00ddbd60)[DAT_00f20978[2]];
              DAT_00f20978 = pcVar3;
              goto LAB_00ac6a85;
            }
          }
        }
      }
    }
    goto LAB_00ac6cfa;
  }
  if (cVar2 == 'A') {
LAB_00ac6e06:
    cVar2 = *DAT_00f20978;
    DAT_00f20978 = pcVar3;
    DName::operator=((DName *)&local_c,*(char **)(&DAT_00ddbc6c + cVar2 * 4));
    if (bVar1) {
      iVar7 = local_c;
      pcVar3 = DAT_00f20978;
      if (local_c != 0) {
        local_8 = local_8 | 0x200;
      }
    }
    else {
LAB_00ac68d1:
      iVar7 = 0;
      pcVar3 = DAT_00f20978;
      if (local_c != 0) {
        pDVar8 = (DName *)&local_2c;
        pDVar4 = (DName *)DName::DName(local_34,"operator");
        DName::operator+(pDVar4,pDVar8);
        local_8 = local_28;
        iVar7 = local_2c;
        pcVar3 = DAT_00f20978;
      }
    }
LAB_00ac6901:
    DAT_00f20978 = pcVar3;
    *(int *)_param_1 = iVar7;
LAB_00ac6909:
    *(uint *)(_param_1 + 4) = local_8;
  }
  else {
    if (cVar2 == '\0') goto LAB_00ac6a04;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_14 = (int *)0x0;
        if ((char)param_2 == '\0') {
LAB_00ac6997:
          DAT_00f20978 = pcVar3;
          piVar5 = (int *)getZName(SUB41(local_94,0),false);
          local_c = *piVar5;
          local_8 = piVar5[1];
          DAT_00f20978 = pcVar3;
          if ((local_c != 0) && (pcVar3[-1] == '1')) {
            pDVar8 = (DName *)&local_24;
            pDVar4 = (DName *)DName::DName((DName *)&local_2c,'~');
            DName::operator+(pDVar4,pDVar8);
            local_c = local_24;
            local_8 = local_20;
          }
          iVar7 = local_c;
          pcVar3 = DAT_00f20978;
          if (local_14 != (int *)0x0) {
            DName::operator+=((DName *)&local_c,(DName *)&local_14);
            iVar7 = local_c;
            pcVar3 = DAT_00f20978;
          }
          goto LAB_00ac6901;
        }
        DAT_00f20978 = pcVar3;
        getTemplateArgumentList();
        pDVar8 = (DName *)&local_2c;
        pDVar4 = (DName *)DName::DName((DName *)&local_24,'<');
        DName::operator+(pDVar4,pDVar8);
        DName::operator+=((DName *)&local_14,(DName *)&local_2c);
        if ((local_14 != (int *)0x0) && (cVar2 = (**(code **)(*local_14 + 4))(), cVar2 == '>')) {
          DName::operator+=((DName *)&local_14,' ');
        }
        DName::operator+=((DName *)&local_14,'>');
        if (in_stack_0000000c != (undefined1 *)0x0) {
          *in_stack_0000000c = 1;
        }
        if (*DAT_00f20978 != '\0') {
          pcVar3 = DAT_00f20978 + 1;
          goto LAB_00ac6997;
        }
        *(int **)_param_1 = local_14;
        local_8 = local_10;
        goto LAB_00ac6909;
      }
      if (cVar2 < ':') {
        pcVar9 = *(char **)(&DAT_00ddbc88 + *DAT_00f20978 * 4);
        DAT_00f20978 = pcVar3;
        goto LAB_00ac68c9;
      }
    }
LAB_00ac6cfa:
    DAT_00f20978 = pcVar3;
    *(uint *)(_param_1 + 4) = *(uint *)(_param_1 + 4) & 0xffff00ff;
    _param_1[4] = (DName)0x2;
    *(undefined4 *)_param_1 = 0;
  }
  return _param_1;
}

