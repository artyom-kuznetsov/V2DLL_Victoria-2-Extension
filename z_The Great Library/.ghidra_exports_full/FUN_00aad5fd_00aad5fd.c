// __Getcvt @ 00aad5fd body=[[00aad5fd, 00aad612]]


/* Library Function - Single Match
    __Getcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  _Cvtvec *p_Var1;
  int iVar2;
  
  iVar2 = ____lc_handle_func();
  p_Var1 = *(_Cvtvec **)(iVar2 + 8);
  ____lc_codepage_func();
  return p_Var1;
}

