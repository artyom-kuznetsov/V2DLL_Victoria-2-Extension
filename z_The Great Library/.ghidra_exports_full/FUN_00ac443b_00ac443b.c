// __VEC_memzero @ 00ac443b body=[[00ac443b, 00ac4497] [00ac449b, 00ac44f4]]


/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

undefined1 (*) [16] __VEC_memzero(void)

{
  uint uVar1;
  undefined1 (*in_ECX) [16];
  undefined1 (*pauVar2) [16];
  uint in_EDX;
  uint uVar3;
  
  pauVar2 = in_ECX;
  if (((uint)in_ECX & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)in_ECX & 0xf);
    in_EDX = in_EDX - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)*pauVar2 = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
    }
  }
  for (uVar1 = in_EDX >> 7; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2[1] = (undefined1  [16])0x0;
    pauVar2[2] = (undefined1  [16])0x0;
    pauVar2[3] = (undefined1  [16])0x0;
    pauVar2[4] = (undefined1  [16])0x0;
    pauVar2[5] = (undefined1  [16])0x0;
    pauVar2[6] = (undefined1  [16])0x0;
    pauVar2[7] = (undefined1  [16])0x0;
    pauVar2 = pauVar2 + 8;
  }
  if ((in_EDX & 0x7f) != 0) {
    for (uVar1 = (in_EDX & 0x7f) >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2 = pauVar2 + 1;
    }
    if ((in_EDX & 0xf) != 0) {
      for (uVar1 = (in_EDX & 0xf) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)*pauVar2 = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
      }
      for (uVar1 = in_EDX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
      }
    }
  }
  return in_ECX;
}

