// ___set_fpsr_sse2 @ 00acdaf8 body=[[00acdaf8, 00acdb24] [00acdb53, 00acdb69]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2010 Release */

void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_013f3be0 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_00ef368c == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}

