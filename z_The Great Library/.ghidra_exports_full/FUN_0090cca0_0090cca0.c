// FUN_0090cca0 @ 0090cca0 body=[[0090cca0, 0090ccfa]]


void FUN_0090cca0(void)

{
  undefined4 uVar1;
  void *_Dst;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x1ff;
  *unaff_ESI = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  unaff_ESI[2] = _Dst;
  _memset(_Dst,0,unaff_ESI[1] * 4);
  uVar1 = DAT_0131ac90;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[7] = uVar1;
  return;
}

