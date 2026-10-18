// FUN_00814210 @ 00814210 body=[[00814210, 0081425b]]


void FUN_00814210(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int unaff_ESI;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    do {
      FUN_008116b0();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(unaff_ESI + 0x14));
  }
  uVar3 = *(int *)(unaff_ESI + 0x44) - *(int *)(unaff_ESI + 0x40) >> 2;
  if ((uVar3 != 0) && (*(int *)(unaff_ESI + 0xb4) == 0)) {
    lVar1 = (ulonglong)uVar3 * 4;
    uVar2 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(undefined4 *)(unaff_ESI + 0xb4) = uVar2;
  }
  return;
}

