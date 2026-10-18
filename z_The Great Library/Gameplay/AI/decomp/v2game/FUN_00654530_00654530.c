// FUN_00654530 @ 00654530 body=[[00654530, 0065454c] [00654550, 00654612]]


void FUN_00654530(void)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  int *unaff_ESI;
  
  if (*(int *)(unaff_ESI[9] + unaff_ESI[0x36d] * 4) == 1) {
    FUN_00679a70();
  }
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + unaff_ESI[9]) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x58);
  uVar1 = unaff_ESI[0x1d];
  if (uVar1 != 0) {
    if (((uVar1 & 0x100) != 0) || ((uVar1 & 0xf) != 0)) {
      FUN_00679a70();
    }
    uVar1 = unaff_ESI[0x1d];
    if ((uVar1 & 0xf) != 0) {
      iVar2 = (**(code **)(*unaff_ESI + 0x38))();
      FUN_007fc360(iVar2 + 0x20bc,uVar1,unaff_ESI + 0x1e);
      iVar2 = (**(code **)(*unaff_ESI + 0x38))();
      FUN_0081a450(*(undefined4 *)(iVar2 + 0x3648));
    }
    if ((unaff_ESI[0x1d] & 0x200U) != 0) {
      (**(code **)(*unaff_ESI + 0x38))();
      FUN_00819830();
    }
    unaff_ESI[0x1d] = 0;
    _Dst = (void *)unaff_ESI[0x1e];
    if (_Dst != (void *)unaff_ESI[0x1f]) {
      FID_conflict__memcpy(_Dst,(void *)unaff_ESI[0x1f],0);
      unaff_ESI[0x1f] = (int)_Dst;
    }
  }
  return;
}

