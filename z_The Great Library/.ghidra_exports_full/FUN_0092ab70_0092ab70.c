// FUN_0092ab70 @ 0092ab70 body=[[0092ab70, 0092ac0c] [0092ac10, 0092ac50]]


void FUN_0092ab70(void)

{
  int iVar1;
  undefined4 in_ECX;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 0x3c) >> 6;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + 8 + *(int *)(unaff_ESI + 0x3c)) =
           *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < iVar1);
  }
  iVar1 = 0;
  iVar2 = *(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c) >> 6;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + 8 + *(int *)(unaff_ESI + 0x2c)) =
           *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < iVar2);
  }
  FUN_0092b050(*(int *)(unaff_ESI + 0x3c),*(int *)(unaff_ESI + 0x40),
               *(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 0x3c) >> 6);
  FUN_0092b050(*(int *)(unaff_ESI + 0x2c),*(int *)(unaff_ESI + 0x30),
               *(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c) >> 6,in_ECX);
  iVar1 = *(int *)(unaff_ESI + 0x40) - *(int *)(unaff_ESI + 0x3c) >> 6;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + iVar2 * 4) =
           *(undefined4 *)(iVar3 + 8 + *(int *)(unaff_ESI + 0x3c));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < iVar1);
  }
  iVar1 = 0;
  iVar2 = *(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c) >> 6;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + iVar1 * 4) =
           *(undefined4 *)(iVar3 + 8 + *(int *)(unaff_ESI + 0x2c));
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < iVar2);
  }
  return;
}

