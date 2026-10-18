// FUN_009880e0 @ 009880e0 body=[[009880e0, 0098811c]]


void FUN_009880e0(void)

{
  void *_Dst;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x1ff;
  *unaff_ESI = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  unaff_ESI[2] = _Dst;
  _memset(_Dst,0,unaff_ESI[1] * 4);
  return;
}

