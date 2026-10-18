// __wcstombs_l_helper @ 00ab19f3 body=[[00ab19f3, 00ab1c59]]


/* Library Function - Single Match
    __wcstombs_l_helper
   
   Library: Visual Studio 2010 Release */

void __wcstombs_l_helper(LPSTR param_1,WCHAR *param_2,uint param_3,localeinfo_struct *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  LPCWSTR pWVar4;
  int iVar5;
  DWORD DVar6;
  WCHAR WVar7;
  int local_30;
  uint local_28;
  int local_24 [2];
  int local_1c;
  char local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_00ab1c4b;
  if (param_2 == (LPCWSTR)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab1c4b;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_24,param_4);
  if (param_1 == (LPSTR)0x0) {
    if (*(int *)(local_24[0] + 0x14) != 0) {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
joined_r0x00ab1c2b:
      if (iVar5 != 0) {
joined_r0x00ab1b22:
        if (local_14 == 0) goto LAB_00ab1a88;
      }
LAB_00ab1c31:
      piVar2 = __errno();
      *piVar2 = 0x2a;
      if (local_18 != '\0') {
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
      }
      goto LAB_00ab1c4b;
    }
    WVar7 = *param_2;
    while (WVar7 != L'\0') {
      if (0xff < (ushort)WVar7) goto LAB_00ab1c31;
      param_2 = param_2 + 1;
      WVar7 = *param_2;
    }
  }
  else {
    if (*(int *)(local_24[0] + 0x14) != 0) {
      if (*(int *)(local_24[0] + 0xac) == 1) {
        pWVar4 = param_2;
        uVar3 = param_3;
        if (param_3 != 0) {
          do {
            if (*pWVar4 == L'\0') break;
            pWVar4 = pWVar4 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          if ((uVar3 != 0) && (*pWVar4 == L'\0')) {
            param_3 = ((int)pWVar4 - (int)param_2 >> 1) + 1;
          }
        }
        iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,param_3,param_1,param_3,
                                    (LPCSTR)0x0,&local_14);
        goto joined_r0x00ab1c2b;
      }
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) goto joined_r0x00ab1b22;
      if ((local_14 == 0) && (DVar6 = GetLastError(), DVar6 == 0x7a)) {
        local_28 = 0;
        if (param_3 != 0) {
          do {
            uVar3 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,1,local_10,
                                        *(int *)(local_24[0] + 0xac),(LPCSTR)0x0,&local_14);
            if ((((uVar3 == 0) || (local_14 != 0)) || ((int)uVar3 < 0)) || (5 < uVar3))
            goto LAB_00ab1c31;
            if (param_3 < uVar3 + local_28) goto LAB_00ab1a88;
            local_30 = 0;
            if (0 < (int)uVar3) {
              do {
                cVar1 = local_10[local_30];
                param_1[local_28] = cVar1;
                if (cVar1 == '\0') goto LAB_00ab1a88;
                local_30 = local_30 + 1;
                local_28 = local_28 + 1;
              } while (local_30 < (int)uVar3);
            }
            param_2 = param_2 + 1;
          } while (local_28 < param_3);
        }
        if (local_18 != '\0') {
          *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        }
        goto LAB_00ab1c4b;
      }
      goto LAB_00ab1c31;
    }
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        if (0xff < (ushort)*param_2) goto LAB_00ab1c31;
        param_1[uVar3] = (CHAR)*param_2;
        WVar7 = *param_2;
        param_2 = param_2 + 1;
      } while ((WVar7 != L'\0') && (uVar3 = uVar3 + 1, uVar3 < param_3));
    }
  }
LAB_00ab1a88:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
LAB_00ab1c4b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

