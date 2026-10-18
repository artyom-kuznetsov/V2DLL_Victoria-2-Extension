// FUN_00aa8390 @ 00aa8390 body=[[00aa8390, 00aa8411]]


void FUN_00aa8390(uint param_1)

{
  void *_Dst;
  void *_Src;
  uint uVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  _Src = (void *)in_ECX[1];
  uVar1 = (int)_Src - *in_ECX >> 2;
  if (param_1 < uVar1) {
    _Dst = (void *)(*in_ECX + param_1 * 4);
    if (_Dst != _Src) {
      FID_conflict__memcpy(_Dst,_Src,0);
      in_ECX[1] = (int)_Dst;
      return;
    }
  }
  else if (uVar1 < param_1) {
    FUN_00aa8220(param_1 - uVar1);
    puVar3 = (undefined4 *)in_ECX[1];
    iVar2 = param_1 - ((int)puVar3 - *in_ECX >> 2);
    if (iVar2 != 0) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    in_ECX[1] = in_ECX[1] + (param_1 - (in_ECX[1] - *in_ECX >> 2)) * 4;
  }
  return;
}

