// strtoxq @ 00abae4c body=[[00abae4c, 00abb0e8]]


/* WARNING: Removing unreachable block (ram,0x00abafce) */
/* WARNING: Removing unreachable block (ram,0x00abb064) */
/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2010 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint extraout_ECX;
  pthreadlocinfo ptVar8;
  byte *pbVar9;
  longlong lVar10;
  localeinfo_struct local_40;
  int local_38;
  char local_34;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong local_20;
  undefined8 local_18;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00ab7c17();
    if (local_34 != '\0') {
      *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  local_5 = *param_2;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  ptVar8 = local_40.locinfo;
  pbVar3 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar3 + 1;
    if ((int)ptVar8->locale_name[3] < 2) {
      uVar6 = *(ushort *)(ptVar8[1].lc_category[0].locale + (uint)local_5 * 2) & 8;
    }
    else {
      uVar6 = __isctype_l((uint)local_5,8,&local_40);
      ptVar8 = local_40.locinfo;
    }
    if (uVar6 == 0) break;
    local_5 = *pbVar9;
    pbVar3 = pbVar9;
  }
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00abaf0e:
    local_5 = *pbVar9;
    pbVar9 = pbVar3 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_00abaf0e;
  local_c = pbVar9;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_00abaf65;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00abaf65;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    local_5 = pbVar9[1];
    local_c = pbVar9 + 2;
  }
LAB_00abaf65:
  local_2c = param_4 >> 0x1f;
  local_20 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_2c);
  local_24 = 0;
  pcVar2 = ptVar8[1].lc_category[0].locale;
  local_28 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00abaffb:
        local_c = local_c + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            local_c = (byte *)param_2;
          }
          uVar4 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                ((uVar4 = local_18, (param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x8000000000000000 < local_18)) ||
                  (((param_5 & 2U) == 0 &&
                   ((0x7ffffffeffffffff < local_18 && (0x7fffffffffffffff < local_18)))))))))) {
          piVar5 = __errno();
          *piVar5 = 0x22;
          if ((param_5 & 1U) == 0) {
            if ((param_5 & 2U) == 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            else {
              uVar4 = 0x8000000000000000;
            }
          }
          else {
            uVar4 = 0xffffffffffffffff;
          }
        }
        local_18._4_4_ = (int)(uVar4 >> 0x20);
        local_18._0_4_ = (int)uVar4;
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)local_c;
        }
        if ((param_5 & 2U) != 0) {
          uVar4 = CONCAT44(-(local_18._4_4_ + (uint)((int)local_18 != 0)),-(int)local_18);
        }
        if (local_34 != '\0') {
          *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
        }
        return uVar4;
      }
      iVar7 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00abaffb;
    if ((local_18 < local_20) ||
       ((local_20 == local_18 && ((local_24 != 0 || (uVar6 <= local_28)))))) {
      lVar10 = __allmul(param_4,local_2c,local_18);
      local_18 = lVar10 + (ulonglong)uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_00abaffb;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
}

