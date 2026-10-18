// FUN_0068b650 @ 0068b650 body=[[0068b650, 0068b676] [0068b680, 0068b6bc]]


void FUN_0068b650(void)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_0067a300(unaff_ESI + 0x18);
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xaf0) - *(int *)(unaff_ESI + 0xaec) & 0xfffffffcU)) {
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0xaec) + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0xaf0) - *(int *)(unaff_ESI + 0xaec) >> 2);
  }
  *(undefined4 *)(unaff_ESI + 0xb5c) = 0x2d2d2d;
  *(undefined4 *)(unaff_ESI + 0xb60) = 0;
  return;
}

