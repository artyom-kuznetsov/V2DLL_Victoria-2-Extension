// FUN_00566260 @ 00566260 body=[[00566260, 005662bc]]


void FUN_00566260(void)

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
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  unaff_ESI[0xf] = 0;
  return;
}

