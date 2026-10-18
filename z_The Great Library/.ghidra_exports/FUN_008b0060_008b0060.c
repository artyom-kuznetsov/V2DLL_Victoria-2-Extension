// FUN_008b0060 @ 008b0060  (requested 008B0060, first bytes: 33 C9 B8 FF 01 00 00 89)


void FUN_008b0060(void)

{
  void *_Dst;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x1ff;
  *unaff_ESI = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  unaff_ESI[2] = _Dst;
  _memset(_Dst,0,unaff_ESI[1] * 4);
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  return;
}

