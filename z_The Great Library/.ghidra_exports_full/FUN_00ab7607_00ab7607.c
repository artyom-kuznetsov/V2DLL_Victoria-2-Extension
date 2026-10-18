// __callnewh @ 00ab7607 body=[[00ab7607, 00ab762e]]


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2010 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DecodePointer(Ptr_00f1fc84);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

