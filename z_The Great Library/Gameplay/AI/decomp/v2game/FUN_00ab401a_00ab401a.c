// FID_conflict:__access @ 00ab401a body=[[00ab401a, 00ab4031]]


/* Library Function - Multiple Matches With Different Base Names
    __access
    __waccess
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___access(wchar_t *_Filename,int _AccessMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___waccess_s(_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}

