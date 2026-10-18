// FID_conflict:__get_dstbias @ 00ac01fc body=[[00ac01fc, 00ac0228]]


/* Library Function - Multiple Matches With Different Base Names
    __get_daylight
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
  *_Timezone = DAT_00ef319c;
  return 0;
}

