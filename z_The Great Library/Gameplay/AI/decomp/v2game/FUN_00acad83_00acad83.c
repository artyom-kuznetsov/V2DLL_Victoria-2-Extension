// __putwch_nolock @ 00acad83 body=[[00acad83, 00acadc4]]


/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2010 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_00ef3670 == (HANDLE)0xfffffffe) {
    ___initconout();
  }
  if (DAT_00ef3670 != (HANDLE)0xffffffff) {
    BVar1 = WriteConsoleW(DAT_00ef3670,&_WCh,1,&local_8,(LPVOID)0x0);
    if (BVar1 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}

