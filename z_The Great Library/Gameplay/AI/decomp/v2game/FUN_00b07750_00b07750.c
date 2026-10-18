// FUN_00b07750 @ 00b07750 body=[[00b07750, 00b07780]]


void FUN_00b07750(void)

{
  void *_Src;
  void *_Dst;
  int *in_ECX;
  
  if ((char)in_ECX[2] != '\0') {
    _Src = (void *)(**(code **)(*in_ECX + 0x14))();
    _Dst = (void *)(**(code **)(*in_ECX + 0x10))();
    FID_conflict__memcpy(_Dst,_Src,in_ECX[5] * in_ECX[1]);
  }
  return;
}

