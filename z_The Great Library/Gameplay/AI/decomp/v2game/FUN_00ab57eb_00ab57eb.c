// __get_errno_from_oserr @ 00ab57eb body=[[00ab57eb, 00ab582c]]


/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2010 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00ef25e0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0xef25e4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}

