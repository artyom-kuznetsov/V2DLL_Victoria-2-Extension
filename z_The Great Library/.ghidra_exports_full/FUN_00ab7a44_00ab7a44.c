// _inconsistency @ 00ab7a44 body=[[00ab7a44, 00ab7a67] [00ab7a6f, 00ab7a7b]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = DecodePointer(Ptr_00f202b4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

