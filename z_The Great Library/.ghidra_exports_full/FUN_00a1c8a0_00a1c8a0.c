// FUN_00a1c8a0 @ 00a1c8a0 body=[[00a1c8a0, 00a1c90b]]


_FILETIME FUN_00a1c8a0(void)

{
  uint in_EAX;
  uint in_ECX;
  SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  local_1c.wYear = ((ushort)in_ECX >> 9) + 0x7bc;
  local_1c.wMonth = (ushort)(in_ECX >> 5) & 0xf;
  local_1c.wDay = (ushort)in_ECX & 0x1f;
  local_1c.wHour = (ushort)in_EAX >> 0xb;
  local_1c.wMinute = (ushort)(in_EAX >> 5) & 0x3f;
  local_1c.wSecond = ((ushort)in_EAX & 0x1f) * 2;
  local_1c.wMilliseconds = 0;
  SystemTimeToFileTime(&local_1c,&local_c);
  return local_c;
}

