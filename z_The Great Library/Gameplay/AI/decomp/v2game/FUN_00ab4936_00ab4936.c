// _abort @ 00ab4936 body=[[00ab4936, 00ab4968]]


/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2010 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00abee6f();
  if (iVar2 != 0) {
    _raise(0x16);
  }
  if (((byte)DAT_00ef25b0 & 2) != 0) {
    __call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

