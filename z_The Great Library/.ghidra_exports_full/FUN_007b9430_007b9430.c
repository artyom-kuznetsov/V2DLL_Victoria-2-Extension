// FUN_007b9430 @ 007b9430 body=[[007b9430, 007b949b]]


void FUN_007b9430(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  
  uVar1 = unaff_ESI[1] - *unaff_ESI >> 2;
  if (uVar1 < 4) {
    if (uVar1 < 3) {
      FUN_007b94a0();
      puVar3 = (undefined4 *)unaff_ESI[1];
      iVar2 = 3 - ((int)puVar3 - *unaff_ESI >> 2);
      if (iVar2 != 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      unaff_ESI[1] = unaff_ESI[1] + (3 - (unaff_ESI[1] - *unaff_ESI >> 2)) * 4;
    }
    return;
  }
  FUN_0054ab90(unaff_ESI,*unaff_ESI + 0xc,unaff_ESI[1]);
  return;
}

