// FUN_009c1c70 @ 009c1c70 body=[[009c1c70, 009c1cac]]


void FUN_009c1c70(void)

{
  void *_Dst;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x1fff;
  *unaff_ESI = 0;
  _Dst = (void *)FUN_00aad56b(0x7ffc);
  unaff_ESI[2] = _Dst;
  _memset(_Dst,0,unaff_ESI[1] * 4);
  return;
}

