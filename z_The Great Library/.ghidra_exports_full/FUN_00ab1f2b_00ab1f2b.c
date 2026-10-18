// FID_conflict:__iswspace_l @ 00ab1f2b body=[[00ab1f2b, 00ab1f3d]]


/* Library Function - Multiple Matches With Different Base Names
    __iswspace_l
    _iswspace
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswspace_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}

