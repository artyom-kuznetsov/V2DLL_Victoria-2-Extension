// FID_conflict:__get_dstbias @ 00ac0256 body=[[00ac0256, 00ac0282]]


/* Library Function - Multiple Matches With Different Base Names
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl FID_conflict___get_dstbias(long *_Timezone)

{
  int *piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return 0x16;
  }
  *_Timezone = DAT_00ef3198;
  return 0;
}

