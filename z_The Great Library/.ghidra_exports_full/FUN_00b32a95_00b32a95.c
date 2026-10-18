// __fload_withFB @ 00b32a95 body=[[00b32a95, 00b32ad7]]


/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fload_withFB(void)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_EDX + 4);
}

