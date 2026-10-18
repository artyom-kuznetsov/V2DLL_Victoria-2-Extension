// FUN_007d85d0 @ 007d85d0 body=[[007d85d0, 007d8654]]


void FUN_007d85d0(uint param_1)

{
  void *_Dst;
  void *_Src;
  uint uVar1;
  uint uVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  
  _Src = (void *)unaff_ESI[1];
  uVar1 = (int)_Src - *unaff_ESI >> 1;
  if (param_1 < uVar1) {
    _Dst = (void *)(*unaff_ESI + param_1 * 2);
    if (_Dst != _Src) {
      FID_conflict__memcpy(_Dst,_Src,0);
      unaff_ESI[1] = (int)_Dst;
      return;
    }
  }
  else if (uVar1 < param_1) {
    FUN_005c58c0();
    uVar1 = param_1 - (unaff_ESI[1] - *unaff_ESI >> 1);
    if (uVar1 != 0) {
      puVar3 = (undefined4 *)unaff_ESI[1];
      for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = (uint)((uVar1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined2 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
    }
    unaff_ESI[1] = unaff_ESI[1] + (param_1 - (unaff_ESI[1] - *unaff_ESI >> 1)) * 2;
  }
  return;
}

