// _perror @ 00ab420e body=[[00ab420e, 00ab4291]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _perror
   
   Library: Visual Studio 2010 Release */

void __cdecl _perror(char *_ErrMsg)

{
  size_t sVar1;
  int *piVar2;
  char *_Str;
  
  ___lock_fhandle(2);
  if ((_ErrMsg != (char *)0x0) && (*_ErrMsg != '\0')) {
    sVar1 = _strlen(_ErrMsg);
    __write_nolock(2,_ErrMsg,sVar1);
    __write_nolock(2,&DAT_00df9638,2);
  }
  piVar2 = __errno();
  _Str = __get_sys_err_msg(*piVar2);
  sVar1 = _strlen(_Str);
  __write_nolock(2,_Str,sVar1);
  __write_nolock(2,&DAT_00dee2cc,1);
  FUN_00ab4292();
  return;
}

