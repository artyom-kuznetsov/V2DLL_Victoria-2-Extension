// __onexit @ 00aae8c8 body=[[00aae8c8, 00aae8fd]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2010 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00ab1f81();
  p_Var1 = (_onexit_t)__onexit_nolock(_Func);
  FUN_00aae8fe();
  return p_Var1;
}

