// FUN_0068f020 @ 0068f020 body=[[0068f020, 0068f084]]


uint FUN_0068f020(void)

{
  void *_Dst;
  uint uVar1;
  undefined4 *in_ECX;
  uint *unaff_ESI;
  bool bVar2;
  
  uVar1 = unaff_ESI[1];
  if ((uVar1 - *unaff_ESI & 0xfffffffc) == 0) {
LAB_0068f032:
    return uVar1 & 0xffffff00;
  }
  _Dst = (void *)*in_ECX;
  if ((_Dst < *(void **)in_ECX[1]) || ((void *)((uint *)in_ECX[1])[1] <= _Dst)) goto LAB_0068f032;
  if (_Dst == (void *)(uVar1 - 4)) {
    bVar2 = *unaff_ESI == uVar1;
  }
  else {
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),((int)(uVar1 - ((int)_Dst + 4)) >> 2) * 4);
    uVar1 = unaff_ESI[1];
    if ((uVar1 - *unaff_ESI & 0xfffffffc) == 0) goto LAB_0068f081;
    bVar2 = *unaff_ESI == uVar1;
  }
  if (!bVar2) {
    uVar1 = uVar1 - 4;
    unaff_ESI[1] = uVar1;
  }
LAB_0068f081:
  return CONCAT31((int3)(uVar1 >> 8),1);
}

