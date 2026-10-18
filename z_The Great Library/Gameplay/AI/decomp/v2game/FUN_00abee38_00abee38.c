// siglookup @ 00abee38 body=[[00abee38, 00abee6e]]


/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2010 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_1 + 0x90);
  if ((param_1 + 0x90 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}

