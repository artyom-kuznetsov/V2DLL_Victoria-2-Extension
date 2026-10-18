// __cftof2_l @ 00abe82e body=[[00abe82e, 00abe930]]


/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2010 Release */

undefined4 __cftof2_l(int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  size_t sVar4;
  undefined4 uVar5;
  char *in_ECX;
  char *_Str;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((in_ECX == (char *)0x0) || (param_1 == 0)) {
    piVar3 = __errno();
    uVar5 = 0x16;
    *piVar3 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      iVar2 = *in_EAX;
      (in_ECX + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[0] = '0';
      (in_ECX + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
    }
    if (*in_EAX == 0x2d) {
      *in_ECX = '-';
      in_ECX = in_ECX + 1;
    }
    if (in_EAX[1] < 1) {
      _Str = in_ECX + 1;
      sVar4 = _strlen(in_ECX);
      FID_conflict__memcpy(_Str,in_ECX,sVar4 + 1);
      *in_ECX = '0';
    }
    else {
      _Str = in_ECX + in_EAX[1];
    }
    if (0 < (int)param_2) {
      sVar4 = _strlen(_Str);
      FID_conflict__memcpy(_Str + 1,_Str,sVar4 + 1);
      *_Str = *(char *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar4 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar4 <= (int)param_2)) {
          param_2 = sVar4;
        }
        __shift();
        _memset(_Str + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  return uVar5;
}

