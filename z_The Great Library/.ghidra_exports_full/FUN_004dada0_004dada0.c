// FUN_004dada0 @ 004dada0 body=[[004dada0, 004daded]]


void FUN_004dada0(void)

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
  return;
}

