// ___tzset @ 00abff33 body=[[00abff33, 00abff78]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_00f2094c == 0) {
    __lock(6);
    if (DAT_00f2094c == 0) {
      FUN_00abf852();
      DAT_00f2094c = DAT_00f2094c + 1;
    }
    FUN_00abff79();
  }
  return;
}

