// __lock @ 00abb56f body=[[00abb56f, 00abb5a1]]


/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&lpCriticalSection_00ef2f28)[_File * 2] == (LPCRITICAL_SECTION)0x0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((&lpCriticalSection_00ef2f28)[_File * 2]);
  return;
}

