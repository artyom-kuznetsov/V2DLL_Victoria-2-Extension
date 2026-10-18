// getBasicDataType @ 00ac92ac body=[[00ac92ac, 00ac9649]]


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasicDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getBasicDataType(DName *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint uVar6;
  uint uVar7;
  int *in_stack_00000008;
  char *pcVar8;
  DName local_28 [8];
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_00f20978;
  bVar1 = *DAT_00f20978;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  DAT_00f20978 = DAT_00f20978 + 1;
  local_10 = 0;
  uVar7 = (uint)bVar1;
  local_c = local_c & 0xffff0000;
  uVar6 = 0xffffffff;
  local_5 = 0;
  if (uVar7 < 0x4f) {
    if (uVar7 != 0x4e) {
      switch(uVar7) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar8 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar8 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar8 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar8 = "long";
        break;
      default:
        goto switchD_00ac9302_caseD_4c;
      case 0x4d:
        pcVar8 = "float";
      }
      goto LAB_00ac94f6;
    }
LAB_00ac951c:
    DName::operator+=((DName *)&local_10,"double");
LAB_00ac9529:
    if (uVar6 != 0xffffffff) {
LAB_00ac9489:
      local_18 = *in_stack_00000008;
      local_10 = 0;
      local_c = local_c & 0xffff0000;
      local_14 = in_stack_00000008[1];
      if (uVar6 != 0xfffffffe) {
        if (*in_stack_00000008 == 0) {
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar6 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        getPtrRefType(param_1,(DName *)&local_10,(char *)&local_18);
        return param_1;
      }
      local_14 = local_14 | 0x800;
      getPtrRefType((DName *)&local_20,(DName *)&local_10,(char *)&local_18);
      if ((local_1c & 0x800) == 0) {
        DName::operator+=((DName *)&local_20,"[]");
      }
      *(int *)param_1 = local_20;
      local_c = local_1c;
      goto LAB_00ac95d6;
    }
  }
  else {
    if (uVar7 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_00ac951c;
    }
    if (0x4f < uVar7) {
      if (uVar7 < 0x54) {
        uVar6 = uVar7 & 3;
        goto LAB_00ac9529;
      }
      if (uVar7 == 0x58) {
        pcVar8 = "void";
        goto LAB_00ac94f6;
      }
      if (uVar7 != 0x5f) goto switchD_00ac9302_caseD_4c;
      local_5 = *DAT_00f20978;
      DAT_00f20978 = pbVar2 + 2;
      uVar6 = (uint)local_5;
      if (uVar6 < 0x4e) {
        if (uVar6 < 0x4c) {
          if (uVar6 < 0x48) {
            if (uVar6 < 0x46) {
              if (uVar6 == 0) {
                DAT_00f20978 = pbVar2 + 1;
                DName::operator=((DName *)&local_10,1);
                goto LAB_00ac9532;
              }
              if (uVar6 == 0x24) {
                getBasicDataType((DName *)&local_20);
                operator+((char *)param_1,(DName *)"__w64 ");
                return param_1;
              }
              if (1 < uVar6 - 0x44) goto LAB_00ac9471;
              pcVar8 = "__int8";
            }
            else {
              pcVar8 = "__int16";
            }
          }
          else if (uVar6 < 0x48) {
LAB_00ac9471:
            pcVar8 = "UNKNOWN";
          }
          else if (uVar6 < 0x4a) {
            pcVar8 = "__int32";
          }
          else {
            if (0x4b < uVar6) goto LAB_00ac9471;
            pcVar8 = "__int64";
          }
        }
        else {
          pcVar8 = "__int128";
        }
LAB_00ac94f6:
        DName::operator=((DName *)&local_10,pcVar8);
        goto LAB_00ac9532;
      }
      if (uVar6 == 0x4e) {
        pcVar8 = "bool";
        goto LAB_00ac94f6;
      }
      if (uVar6 != 0x4f) {
        if (uVar6 == 0x52) {
          pcVar8 = "<unknown>";
        }
        else {
          if (uVar6 != 0x57) {
            if (1 < uVar6 - 0x58) goto LAB_00ac9471;
            goto LAB_00ac9444;
          }
          pcVar8 = "wchar_t";
        }
        goto LAB_00ac94f6;
      }
      uVar6 = 0xfffffffe;
      goto LAB_00ac9489;
    }
switchD_00ac9302_caseD_4c:
LAB_00ac9444:
    DAT_00f20978 = DAT_00f20978 + -1;
    piVar3 = (int *)getECSUDataType();
    local_c = piVar3[1];
    local_10 = *piVar3;
    if (local_10 == 0) {
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 4) = local_c;
      return param_1;
    }
  }
LAB_00ac9532:
  if (uVar7 == 0x43) {
    pcVar8 = "signed ";
LAB_00ac9586:
    pDVar5 = (DName *)&local_20;
    pDVar4 = (DName *)DName::DName(local_28,pcVar8);
    DName::operator+(pDVar4,pDVar5);
    local_10 = local_20;
    local_c = local_1c;
  }
  else if (((((uVar7 == 0x45) || (uVar7 == 0x47)) || (uVar7 == 0x49)) || (uVar7 == 0x4b)) ||
          ((uVar7 == 0x5f &&
           (((local_5 == 0x45 || (local_5 == 0x47)) ||
            ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))))) {
    pcVar8 = "unsigned ";
    goto LAB_00ac9586;
  }
  if (*in_stack_00000008 != 0) {
    pDVar4 = (DName *)&local_20;
    pDVar5 = (DName *)DName::DName(local_28,' ');
    DName::operator+(pDVar5,pDVar4);
    DName::operator+=((DName *)&local_10,(DName *)&local_20);
  }
  *(int *)param_1 = local_10;
LAB_00ac95d6:
  *(uint *)(param_1 + 4) = local_c;
  return param_1;
}

