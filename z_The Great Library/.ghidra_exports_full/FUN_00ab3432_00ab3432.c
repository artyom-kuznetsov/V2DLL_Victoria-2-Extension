// _store_winword @ 00ab3432 body=[[00ab3432, 00ab388b]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _store_winword(struct localeinfo_struct *,int,struct tm const *,char * *,unsigned
   int *,struct __lc_time_data *)
   
   Library: Visual Studio 2010 Release */

int __cdecl
_store_winword(localeinfo_struct *param_1,int param_2,tm *param_3,char **param_4,uint *param_5,
              __lc_time_data *param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  __lc_time_data *unaff_ESI;
  uint *unaff_EDI;
  char *pcVar7;
  char *pcVar8;
  char *local_20;
  char **local_1c;
  short local_18;
  short local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    pcVar7 = param_6->ww_sdatefmt;
  }
  else if (param_2 == 1) {
    pcVar7 = param_6->ww_ldatefmt;
  }
  else {
    pcVar7 = param_6->ww_timefmt;
  }
  if (param_6->refcount != 1) {
    pcVar2 = GetDateFormatA_exref;
    if (param_2 == 2) {
      pcVar2 = GetTimeFormatA_exref;
    }
    local_18 = (short)param_3->tm_year + 0x76c;
    local_16 = (short)param_3->tm_mon + 1;
    local_12 = (undefined2)param_3->tm_mday;
    local_10 = (undefined2)param_3->tm_hour;
    local_e = (undefined2)param_3->tm_min;
    local_c = (undefined2)param_3->tm_sec;
    local_a = 0;
    iVar3 = (*pcVar2)(param_6->ww_caltype,0,&local_18,pcVar7,0,0);
    if (iVar3 != 0) {
      if ((int)(iVar3 + 8U) < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffc0;
        pcVar8 = &stack0xffffffc0;
        if (&stack0x00000000 != (undefined1 *)0x40) {
          unaff_EDI = (uint *)0xcccc;
LAB_00ab352c:
          pcVar8 = (char *)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(iVar3 + 8U);
        pcVar8 = (char *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_00ab352c;
        }
      }
      if (pcVar8 != (char *)0x0) {
        iVar3 = (*pcVar2)(param_6->ww_caltype,0,&local_18,pcVar7,pcVar8,iVar3);
        pcVar7 = pcVar8;
        while ((iVar3 = iVar3 + -1, 0 < iVar3 && (*param_5 != 0))) {
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          pcVar7 = pcVar7 + 1;
          *param_5 = *param_5 - 1;
        }
        __freea(pcVar8);
        goto LAB_00ab357d;
      }
    }
  }
LAB_00ab360e:
  do {
    cVar1 = *pcVar7;
    if ((cVar1 == '\0') || (*param_5 == 0)) break;
    local_1c = (char **)0x0;
    local_20 = pcVar7;
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      local_20 = local_20 + 1;
      uVar6 = uVar5 + 1;
    } while (*local_20 == cVar1);
    iVar3 = (int)cVar1;
    if (iVar3 < 0x65) {
      if (iVar3 == 100) {
        if (uVar5 == 0) {
          local_1c = (char **)0x1;
        }
        else {
joined_r0x00ab3703:
          if ((uVar5 != 1) && (uVar5 != 2)) {
joined_r0x00ab3709:
            if (uVar5 != 3) goto LAB_00ab35da;
          }
        }
      }
      else {
        if (iVar3 == 0x27) {
          pcVar7 = pcVar7 + uVar6;
          if ((uVar6 & 1) != 0) {
            cVar1 = *pcVar7;
            if (cVar1 == '\0') break;
            do {
              if (*param_5 == 0) break;
              if (cVar1 == '\'') {
                pcVar7 = pcVar7 + 1;
                break;
              }
              iVar3 = __isleadbyte_l((int)cVar1,param_1);
              if ((iVar3 != 0) && (1 < *param_5)) {
                if (pcVar7[1] == '\0') goto LAB_00ab357d;
                **param_4 = *pcVar7;
                *param_4 = *param_4 + 1;
                pcVar7 = pcVar7 + 1;
                *param_5 = *param_5 - 1;
              }
              **param_4 = *pcVar7;
              *param_4 = *param_4 + 1;
              pcVar7 = pcVar7 + 1;
              *param_5 = *param_5 - 1;
              cVar1 = *pcVar7;
            } while (cVar1 != '\0');
          }
          goto LAB_00ab360e;
        }
        if (iVar3 == 0x41) {
LAB_00ab365f:
          iVar3 = ___ascii_stricmp(pcVar7,"am/pm");
          if (iVar3 == 0) {
            local_20 = pcVar7 + 5;
          }
          else {
            iVar3 = ___ascii_stricmp(pcVar7,"a/p");
            if (iVar3 == 0) {
              local_20 = pcVar7 + 3;
            }
          }
        }
        else if (iVar3 == 0x48) {
          if (uVar5 != 0) goto joined_r0x00ab3851;
          local_1c = (char **)0x1;
        }
        else {
          if (iVar3 != 0x4d) {
            if (iVar3 != 0x61) goto LAB_00ab35da;
            goto LAB_00ab365f;
          }
          if (uVar5 != 0) goto joined_r0x00ab3703;
          local_1c = (char **)0x1;
        }
      }
    }
    else if (iVar3 == 0x68) {
      if (uVar5 == 0) {
        local_1c = (char **)0x1;
      }
      else {
joined_r0x00ab3851:
        if (uVar6 != 2) {
LAB_00ab35da:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          if ((iVar3 != 0) && (1 < *param_5)) {
            if (pcVar7[1] == '\0') break;
            **param_4 = *pcVar7;
            *param_4 = *param_4 + 1;
            pcVar7 = pcVar7 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          pcVar7 = pcVar7 + 1;
          goto LAB_00ab360e;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar5 != 0) goto joined_r0x00ab3851;
      local_1c = (char **)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar5 != 0) goto joined_r0x00ab3851;
      local_1c = (char **)0x1;
    }
    else {
      if (iVar3 == 0x74) {
        if (param_3->tm_hour < 0xc) {
          pcVar8 = param_6->ampm[0];
        }
        else {
          pcVar8 = param_6->ampm[1];
        }
        pcVar7 = local_20;
        if ((uVar6 == 1) && (*param_5 != 0)) {
          iVar3 = __isleadbyte_l((int)*pcVar8,param_1);
          if ((iVar3 != 0) && (1 < *param_5)) {
            if (pcVar8[1] == '\0') break;
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            pcVar8 = pcVar8 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        else {
          while ((*pcVar8 != '\0' && (*param_5 != 0))) {
            iVar3 = __isleadbyte_l((int)*pcVar8,param_1);
            if ((iVar3 != 0) && (1 < *param_5)) {
              if (pcVar8[1] == '\0') goto LAB_00ab357d;
              **param_4 = *pcVar8;
              *param_4 = *param_4 + 1;
              pcVar8 = pcVar8 + 1;
              *param_5 = *param_5 - 1;
            }
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            pcVar8 = pcVar8 + 1;
            *param_5 = *param_5 - 1;
          }
        }
        goto LAB_00ab360e;
      }
      if (iVar3 != 0x79) goto LAB_00ab35da;
      if (uVar5 != 1) goto joined_r0x00ab3709;
    }
    iVar3 = _expandtime(param_1,(char)param_3,(tm *)param_6,local_1c,unaff_EDI,unaff_ESI,unaff_EBX);
    pcVar7 = local_20;
  } while (iVar3 != 0);
LAB_00ab357d:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

