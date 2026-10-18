// __getcwd @ 00acc66c body=[[00acc66c, 00acc6ab]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getcwd
   
   Library: Visual Studio 2010 Release */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getdcwd_nolock(0,_DstBuf,_SizeInBytes);
  FUN_00acc6ac();
  return pcVar1;
}

