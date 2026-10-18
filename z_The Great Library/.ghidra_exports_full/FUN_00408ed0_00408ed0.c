// FUN_00408ed0 @ 00408ed0 body=[[00408ed0, 00408fb5]]


void FUN_00408ed0(int *param_1,uint param_2,uint param_3)

{
  int *_Dst;
  int *in_ECX;
  int *extraout_ECX;
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_1[4];
  piVar1 = param_1;
  if (uVar2 < param_2) {
    FUN_00aad3fa("invalid string position");
    piVar1 = extraout_ECX;
  }
  uVar2 = uVar2 - param_2;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (in_ECX == piVar1) {
    FUN_00409450(uVar2 + param_2,0xffffffff);
    FUN_00409450(0,param_2);
    return;
  }
  if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if ((uint)in_ECX[5] < uVar2) {
    FUN_00409640(uVar2,in_ECX[4]);
    piVar1 = param_1;
    if (uVar2 == 0) {
      return;
    }
  }
  else if (uVar2 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  if (0xf < (uint)piVar1[5]) {
    piVar1 = (int *)*piVar1;
  }
  _Dst = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    _Dst = (int *)*in_ECX;
  }
  FID_conflict__memcpy(_Dst,(void *)((int)piVar1 + param_2),uVar2);
  in_ECX[4] = uVar2;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + uVar2) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + uVar2) = 0;
  return;
}

