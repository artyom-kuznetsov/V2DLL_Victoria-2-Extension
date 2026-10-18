// FUN_00929070 @ 00929070 body=[[00929070, 00929147]]


undefined4 FUN_00929070(int *param_1)

{
  int *_Dst;
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  int local_8;
  
  if ((int)(param_1[1] - *param_1 & 0xffffffc0U) < 0x41) {
    return 0;
  }
  _Dst = (int *)*unaff_EDI;
  iVar1 = *_Dst;
  if (_Dst != (int *)unaff_EDI[1]) {
    local_8 = 0;
    FID_conflict__memcpy(_Dst,(int *)unaff_EDI[1],0);
    unaff_EDI[1] = local_8 + (int)_Dst;
  }
  do {
    iVar2 = iVar1 / 10;
    local_8 = iVar1 % 10;
    FUN_0043cb20(unaff_EDI,*unaff_EDI,&local_8);
    iVar1 = iVar2;
  } while (0 < iVar2);
  iVar2 = unaff_EDI[1] - *unaff_EDI >> 2;
  iVar1 = param_1[1] - *param_1 >> 6;
  if (iVar2 < iVar1) {
    iVar1 = iVar1 - iVar2;
    if (0 < iVar1) {
      param_1 = (int *)0x0;
      do {
        FUN_0043cb20(unaff_EDI,*unaff_EDI,&param_1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    return 0;
  }
  return 1;
}

