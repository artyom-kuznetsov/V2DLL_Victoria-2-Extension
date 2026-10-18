// __set_abort_behavior @ 00ab4969 body=[[00ab4969, 00ab4989]]


/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2010 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_00ef25b0;
  DAT_00ef25b0 = ~_Mask & DAT_00ef25b0 | _Flags & _Mask;
  return uVar1;
}

