// FUN_00b27480 @ 00b27480 body=[[00b27480, 00b27516]]


void FUN_00b27480(void)

{
  uint in_ECX;
  __time64_t _Var1;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_2c.tm_year = (in_ECX >> 0x19) + 0x50;
  local_2c.tm_mday = in_ECX >> 0x10 & 0x1f;
  local_2c.tm_mon = (in_ECX >> 0x15 & 0xf) - 1;
  local_2c.tm_hour = (in_ECX & 0xffff) >> 0xb;
  local_2c.tm_min = (in_ECX & 0xffff) >> 5 & 0x3f;
  local_2c.tm_sec = (in_ECX & 0x1f) * 2;
  local_2c.tm_isdst = -1;
  _Var1 = __mktime64(&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,(int)((ulonglong)_Var1 >> 0x20));
  return;
}

