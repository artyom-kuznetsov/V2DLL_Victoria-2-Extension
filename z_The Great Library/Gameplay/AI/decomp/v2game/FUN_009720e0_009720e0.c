// FUN_009720e0 @ 009720e0 body=[[009720e0, 00972137]]


void FUN_009720e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  uint unaff_EDI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (unaff_EDI != 0) {
    if (0x3fffffff < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    puVar1 = (undefined4 *)FUN_007055a0();
    unaff_ESI[2] = puVar1 + unaff_EDI;
    *unaff_ESI = puVar1;
    unaff_ESI[1] = puVar1;
    puVar3 = puVar1;
    for (uVar2 = unaff_EDI; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_1;
      puVar3 = puVar3 + 1;
    }
    unaff_ESI[1] = puVar1 + unaff_EDI;
  }
  return;
}

