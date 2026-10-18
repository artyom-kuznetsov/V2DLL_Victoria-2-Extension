// FUN_004094e0 @ 004094e0 body=[[004094e0, 00409548] [0040954f, 0040958a]]


bool FUN_004094e0(uint param_1,char param_2)

{
  uint uVar1;
  void *_Src;
  undefined4 *in_ECX;
  uint _Size;
  
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  uVar1 = in_ECX[5];
  if (uVar1 < param_1) {
    FUN_00409640(param_1,in_ECX[4]);
    return param_1 != 0;
  }
  if ((param_2 == '\0') || (0xf < param_1)) {
    if (param_1 == 0) {
      in_ECX[4] = 0;
      if (0xf < uVar1) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      *(undefined1 *)in_ECX = 0;
    }
    return param_1 != 0;
  }
  _Size = in_ECX[4];
  if (param_1 < (uint)in_ECX[4]) {
    _Size = param_1;
  }
  if (0xf < uVar1) {
    _Src = (void *)*in_ECX;
    if (_Size != 0) {
      FID_conflict__memcpy(in_ECX,_Src,_Size);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(_Src);
  }
  in_ECX[4] = _Size;
  in_ECX[5] = 0xf;
  *(undefined1 *)(_Size + (int)in_ECX) = 0;
  return param_1 != 0;
}

