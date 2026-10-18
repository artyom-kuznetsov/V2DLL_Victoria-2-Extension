// FUN_00b2a690 @ 00b2a690 body=[[00b2a690, 00b2a81e]]


void FUN_00b2a690(void)

{
  FILETIME FVar1;
  BOOL BVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int *piVar5;
  FILETIME *in_ECX;
  longlong lVar6;
  __time64_t _Var7;
  FILETIME local_100;
  _TIME_ZONE_INFORMATION local_f8;
  _SYSTEMTIME local_4c;
  tm local_3c;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  BVar2 = FileTimeToSystemTime(in_ECX,&local_4c);
  if (BVar2 == 0) {
    uVar3 = FUN_00b29110();
    FUN_00b1f840(uVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
    return;
  }
  DVar4 = GetTimeZoneInformation(&local_f8);
  if (DVar4 == 0xffffffff) {
    uVar3 = FUN_00b29110();
    FUN_00b1f840(uVar3);
  }
  else {
    BVar2 = SystemTimeToTzSpecificLocalTime(&local_f8,&local_4c,&local_18);
    if (BVar2 == 0) {
      FVar1 = *in_ECX;
      if (DVar4 == 1) {
        local_f8.Bias = local_f8.Bias + local_f8.StandardBias;
      }
      else if (DVar4 == 2) {
        local_f8.Bias = local_f8.Bias + local_f8.DaylightBias;
      }
      lVar6 = __allmul(local_f8.Bias,local_f8.Bias >> 0x1f,0xdc3cba00,0xffffffff);
      local_100 = (FILETIME)(lVar6 + (longlong)FVar1);
      BVar2 = FileTimeToSystemTime(&local_100,&local_18);
      if (BVar2 == 0) {
        uVar3 = FUN_00b29110();
        FUN_00b1f840(uVar3);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
        return;
      }
    }
    local_3c.tm_sec = (int)local_18.wSecond;
    local_3c.tm_min = (int)local_18.wMinute;
    local_3c.tm_hour = (int)local_18.wHour;
    local_3c.tm_mday = (int)local_18.wDay;
    local_3c.tm_mon = local_18.wMonth - 1;
    local_3c.tm_year = local_18.wYear - 0x76c;
    local_3c.tm_wday = -1;
    local_3c.tm_yday = -1;
    local_3c.tm_isdst = -1;
    _Var7 = __mktime64(&local_3c);
    uVar3 = (undefined4)((ulonglong)_Var7 >> 0x20);
    if (_Var7 != -1) goto LAB_00b2a80e;
    piVar5 = __errno();
    uVar3 = FUN_00ab4a98(*piVar5);
    FUN_00b1f840(uVar3);
  }
  uVar3 = 0xffffffff;
LAB_00b2a80e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}

