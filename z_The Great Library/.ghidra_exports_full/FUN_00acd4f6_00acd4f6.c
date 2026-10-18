// ___hw_cw_sse2 @ 00acd4f6 body=[[00acd4f6, 00acd595]]


/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2010 Release */

uint ___hw_cw_sse2(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EDX;
  
  uVar1 = 0;
  if ((in_EDX & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((in_EDX & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_EDX & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((in_EDX & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((in_EDX & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((in_EDX & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = in_EDX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = in_EDX & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}

