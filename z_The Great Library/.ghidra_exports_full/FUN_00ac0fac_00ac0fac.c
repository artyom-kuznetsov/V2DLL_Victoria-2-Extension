// __mbctolower @ 00ac0fac body=[[00ac0fac, 00ac0fbe]]


/* Library Function - Single Match
    __mbctolower
   
   Library: Visual Studio 2010 Release */

uint __cdecl __mbctolower(uint _Ch)

{
  uint uVar1;
  
  uVar1 = __mbctolower_l(_Ch,(_locale_t)0x0);
  return uVar1;
}

