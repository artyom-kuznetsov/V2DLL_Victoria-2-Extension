// FID_conflict:__atoflt_l @ 00acc055 body=[[00acc055, 00acc0fc]]


/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_00acc0ae:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00acc0ee;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00acc0e0:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00acc0ee;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00acc0e0;
    goto LAB_00acc0ae;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_00acc0ee:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

