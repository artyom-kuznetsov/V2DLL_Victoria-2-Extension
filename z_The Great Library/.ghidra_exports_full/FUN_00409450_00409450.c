// FUN_00409450 @ 00409450 body=[[00409450, 004094d0]]


void FUN_00409450(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint extraout_ECX;
  int *piVar4;
  
  uVar2 = in_ECX[4];
  if (uVar2 < param_1) {
    uVar2 = FUN_00aad3fa("invalid string position");
    param_1 = extraout_ECX;
  }
  uVar2 = uVar2 - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    piVar4 = in_ECX;
    piVar1 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar4 = (int *)*in_ECX;
      piVar1 = (int *)*in_ECX;
    }
    FID_conflict__memcpy
              ((void *)((int)piVar4 + param_1),(void *)((int)piVar1 + param_2 + param_1),
               uVar2 - param_2);
    iVar3 = in_ECX[4] - param_2;
    in_ECX[4] = iVar3;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + iVar3) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + iVar3) = 0;
  }
  return;
}

