// FUN_00808c90 @ 00808c90 body=[[00808c90, 00808cfc]]


void FUN_00808c90(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  
  uVar1 = unaff_ESI[1] - *unaff_ESI >> 3;
  if (param_1 < uVar1) {
    FUN_00808d80(unaff_ESI,*unaff_ESI + param_1 * 8,unaff_ESI[1]);
    return;
  }
  if (uVar1 < param_1) {
    FUN_00808de0();
    uVar1 = param_1 - (unaff_ESI[1] - *unaff_ESI >> 3);
    if (uVar1 != 0) {
      puVar3 = (undefined4 *)unaff_ESI[1];
      for (iVar2 = (uVar1 & 0x1fffffff) * 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    unaff_ESI[1] = unaff_ESI[1] + (param_1 - (unaff_ESI[1] - *unaff_ESI >> 3)) * 8;
  }
  return;
}

