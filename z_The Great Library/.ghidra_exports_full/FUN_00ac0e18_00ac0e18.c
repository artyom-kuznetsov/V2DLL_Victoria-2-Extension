// __sopen_s @ 00ac0e18 body=[[00ac0e18, 00ac0e37]]


/* Library Function - Single Match
    __sopen_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

