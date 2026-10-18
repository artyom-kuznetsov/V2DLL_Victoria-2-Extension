// FUN_004cd2a0 @ 004cd2a0 body=[[004cd2a0, 004cd2f2]]


uint FUN_004cd2a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_EDX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(unaff_ESI + 0x94);
  do {
    if (puVar3[1] != 0) {
      if (in_EDX[1] != 0) {
        uVar1 = *(undefined4 *)(unaff_ESI + 0x94 + uVar2 * 0x1c);
        *unaff_EDI = uVar1;
        unaff_EDI[1] = *(undefined4 *)(unaff_ESI + 0x98 + uVar2 * 0x1c);
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      *in_EDX = *puVar3;
      in_EDX[1] = puVar3[1];
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 7;
  } while ((int)uVar2 < 4);
  return uVar2 & 0xffffff00;
}

