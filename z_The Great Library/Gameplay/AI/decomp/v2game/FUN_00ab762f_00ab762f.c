// __GET_RTERRMSG @ 00ab762f body=[[00ab762f, 00ab7654]]


/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00dda6a8)[uVar1 * 2]) {
      return *(wchar_t **)(&UNK_00dda6ac + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return (wchar_t *)0x0;
}

