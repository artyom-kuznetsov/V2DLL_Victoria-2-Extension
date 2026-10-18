// _expandtime @ 00ab307a body=[[00ab307a, 00ab3431]]


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl _expandtime(struct localeinfo_struct *,char,struct tm const *,char * *,unsigned int
   *,struct __lc_time_data *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
_expandtime(localeinfo_struct *param_1,char param_2,tm *param_3,char **param_4,uint *param_5,
           __lc_time_data *param_6,uint param_7)

{
  int iVar1;
  char in_AL;
  int *piVar2;
  uint *in_ECX;
  char **in_EDX;
  uint *unaff_EBX;
  char **unaff_ESI;
  char *unaff_EDI;
  bool bVar3;
  bool bVar4;
  undefined3 in_stack_00000009;
  int iVar5;
  
  if ('Y' < in_AL) {
    if (in_AL < 'n') {
      if (in_AL == 'm') {
        if ((-1 < _param_2->tm_mon) && (_param_2->tm_mon < 0xc)) goto LAB_00ab32bc;
        goto LAB_00ab3337;
      }
      if (in_AL != 'Z') {
        if (in_AL == 'a') {
          iVar5 = _param_2->tm_wday;
          goto joined_r0x00ab3330;
        }
        if (in_AL == 'b') {
          iVar5 = _param_2->tm_mon;
          goto joined_r0x00ab3318;
        }
        if (in_AL == 'c') {
          iVar5 = _store_winword(param_1,(uint)(param_4 != (char **)0x0),_param_2,in_EDX,in_ECX,
                                 (__lc_time_data *)param_3);
          if (iVar5 == 0) {
            return 0;
          }
          if (*in_ECX == 0) {
            return 0;
          }
          **in_EDX = ' ';
          *in_EDX = *in_EDX + 1;
          *in_ECX = *in_ECX - 1;
          goto LAB_00ab32f2;
        }
        if (in_AL == 'd') {
          if ((0 < _param_2->tm_mday) && (_param_2->tm_mday < 0x20)) goto LAB_00ab32bc;
          goto LAB_00ab3337;
        }
        if (in_AL != 'j') {
          return 0;
        }
        iVar5 = _param_2->tm_yday;
        goto joined_r0x00ab3283;
      }
    }
    else {
      if (in_AL == 'p') {
        if ((_param_2->tm_hour < 0) || (0x17 < _param_2->tm_hour)) goto LAB_00ab3337;
        goto LAB_00ab3423;
      }
      if (in_AL == 'w') {
        if ((-1 < _param_2->tm_wday) && (_param_2->tm_wday < 7)) goto LAB_00ab32bc;
        goto LAB_00ab3337;
      }
      if (in_AL == 'x') {
        if (param_4 == (char **)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
        }
        goto LAB_00ab32fa;
      }
      if (in_AL == 'y') {
        if (-1 < _param_2->tm_year) goto LAB_00ab32bc;
        goto LAB_00ab3337;
      }
      if (in_AL != 'z') {
        return 0;
      }
    }
    ___tzset();
    FUN_00ac0295();
LAB_00ab3423:
    _store_str(unaff_EDI,unaff_ESI,unaff_EBX);
    return 1;
  }
  if (in_AL == 'Y') {
    if ((_param_2->tm_year < -0x76c) || (0x1fa3 < _param_2->tm_year)) goto LAB_00ab3337;
    goto LAB_00ab32bc;
  }
  if (in_AL < 'J') {
    if (in_AL == 'I') {
      if ((-1 < _param_2->tm_hour) && (_param_2->tm_hour < 0x18)) goto LAB_00ab32bc;
      goto LAB_00ab3337;
    }
    if (in_AL == '\x04') {
      return 1;
    }
    if (in_AL == '\r') {
      return 1;
    }
    if (in_AL == '%') {
      **in_EDX = '%';
      *in_EDX = *in_EDX + 1;
      *in_ECX = *in_ECX - 1;
      return 1;
    }
    if (in_AL == 'A') {
      iVar5 = _param_2->tm_wday;
joined_r0x00ab3330:
      if ((-1 < iVar5) && (iVar5 < 7)) goto LAB_00ab3423;
      goto LAB_00ab3337;
    }
    if (in_AL == 'B') {
      iVar5 = _param_2->tm_mon;
joined_r0x00ab3318:
      if ((-1 < iVar5) && (iVar5 < 0xc)) goto LAB_00ab3423;
      goto LAB_00ab3337;
    }
    if (in_AL != 'H') {
      return 0;
    }
    iVar1 = _param_2->tm_hour;
    if (iVar1 < 0) goto LAB_00ab3337;
    bVar4 = SBORROW4(iVar1,0x17);
    iVar5 = iVar1 + -0x17;
    bVar3 = iVar1 == 0x17;
  }
  else {
    if (in_AL != 'M') {
      if (in_AL == 'S') {
        if ((-1 < _param_2->tm_sec) && (_param_2->tm_sec < 0x3c)) goto LAB_00ab32bc;
        goto LAB_00ab3337;
      }
      if (in_AL == 'U') {
        iVar5 = _param_2->tm_wday;
      }
      else {
        if (in_AL != 'W') {
          if (in_AL != 'X') {
            return 0;
          }
LAB_00ab32f2:
          iVar5 = 2;
LAB_00ab32fa:
          iVar5 = _store_winword(param_1,iVar5,_param_2,in_EDX,in_ECX,(__lc_time_data *)param_3);
          if (iVar5 == 0) {
            return 0;
          }
          return 1;
        }
        iVar5 = _param_2->tm_wday;
      }
      if ((iVar5 < 0) || (6 < iVar5)) goto LAB_00ab3337;
      iVar5 = _param_2->tm_yday;
joined_r0x00ab3283:
      if ((-1 < iVar5) && (iVar5 < 0x16e)) goto LAB_00ab32bc;
      goto LAB_00ab3337;
    }
    iVar5 = _param_2->tm_min;
    if (iVar5 < 0) goto LAB_00ab3337;
    bVar4 = SBORROW4(iVar5,0x3b);
    iVar5 = iVar5 + -0x3b;
    bVar3 = iVar5 == 0;
  }
  if (bVar3 || bVar4 != iVar5 < 0) {
LAB_00ab32bc:
    _store_num((int)param_4,(int)unaff_EDI,unaff_ESI,unaff_EBX,(uint)in_ECX);
    return 1;
  }
LAB_00ab3337:
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00ab7c17();
  return 0;
}

