// FUN_0068ea30 @ 0068ea30 body=[[0068ea30, 0068ea94]]


void FUN_0068ea30(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  
  uVar1 = unaff_ESI[1] - *unaff_ESI >> 2;
  if (uVar1 <= param_1) {
    if (uVar1 < param_1) {
      FUN_007b94a0();
      puVar3 = (undefined4 *)unaff_ESI[1];
      iVar2 = param_1 - ((int)puVar3 - *unaff_ESI >> 2);
      if (iVar2 != 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      unaff_ESI[1] = unaff_ESI[1] + (param_1 - (unaff_ESI[1] - *unaff_ESI >> 2)) * 4;
    }
    return;
  }
  FUN_0054ab90(unaff_ESI,*unaff_ESI + param_1 * 4,unaff_ESI[1]);
  return;
}

