// FUN_00a8b190 @ 00a8b190 body=[[00a8b190, 00a8b1d7]]


undefined4 FUN_00a8b190(void)

{
  int iVar1;
  WSADATA local_198;
  
  iVar1 = WSAStartup(0x101,&local_198);
  if (iVar1 == 0) {
    if (((char)local_198.wVersion == '\x01') && ((char)(local_198.wVersion >> 8) == '\x01')) {
      timeBeginPeriod(1);
      return 0;
    }
    WSACleanup();
  }
  return 0xffffffff;
}

