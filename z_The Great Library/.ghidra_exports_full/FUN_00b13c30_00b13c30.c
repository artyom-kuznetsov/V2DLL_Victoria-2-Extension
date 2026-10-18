// FUN_00b13c30 @ 00b13c30 body=[[00b13c30, 00b13c80]]


void FUN_00b13c30(char param_1)

{
  undefined1 *_Dst;
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  _Dst = (undefined1 *)*in_ECX;
  if (_Dst != (undefined1 *)0x0) {
    uVar1 = in_ECX[1];
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (_Dst[uVar2] != param_1) {
          if (uVar2 == 0) {
            return;
          }
          FID_conflict__memcpy(_Dst,_Dst + uVar2,(uVar1 - uVar2) + 1);
          in_ECX[1] = in_ECX[1] - uVar2;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    in_ECX[1] = 0;
    if (_Dst != (undefined1 *)0x0) {
      *_Dst = 0;
    }
  }
  return;
}

