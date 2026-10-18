// __Strftime_l @ 00ab388c body=[[00ab388c, 00ab3a17]]


/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2010 Release */

int __Strftime_l(char *param_1,uint param_2,char *param_3,int param_4,tm *param_5,
                localeinfo_struct *param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  uint *unaff_ESI;
  char *pcVar4;
  __lc_time_data *unaff_EDI;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  tm *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  if (param_1 == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    if (param_5 == (tm *)0x0) {
      param_5 = (tm *)local_24.locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    local_10 = param_5;
    if (param_2 != 0) {
      do {
        cVar1 = *param_3;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == 0) goto LAB_00ab39f5;
          pcVar4 = param_3 + 1;
          cVar1 = *pcVar4;
          if (cVar1 == '#') {
            pcVar4 = param_3 + 2;
          }
          iVar3 = _expandtime(&local_24,(char)param_4,local_10,(char **)(uint)(cVar1 == '#'),
                              unaff_ESI,unaff_EDI,unaff_EBX);
          if (iVar3 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_00ab39cb;
          }
        }
        else {
          iVar3 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar4 = param_3;
          if ((iVar3 != 0) && (1 < local_8)) {
            pcVar4 = param_3 + 1;
            if (*pcVar4 == '\0') {
              local_c = 1;
              goto LAB_00ab39cb;
            }
            *param_1 = *param_3;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar4;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        param_3 = pcVar4 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return param_2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return param_2 - local_8;
      }
    }
LAB_00ab39cb:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      goto LAB_00ab3a05;
    }
  }
LAB_00ab39f5:
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00ab7c17();
LAB_00ab3a05:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}

