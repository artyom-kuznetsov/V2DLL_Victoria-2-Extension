// FUN_004d0f60 @ 004d0f60 body=[[004d0f60, 004d0fac] [004d0fb0, 004d0fca]]


void FUN_004d0f60(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x74) - *(int *)(unaff_ESI + 0x70) >> 3;
  iVar6 = 0;
  if (0 < iVar2) {
    piVar4 = (int *)(*(int *)(unaff_ESI + 0x70) + 4);
    while (*(int *)(DAT_012588e8 + 0xb0c) <= *piVar4 + 0x2da) {
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 2;
      if (iVar2 <= iVar6) {
        return;
      }
    }
    puVar3 = (undefined4 *)(*(int *)(unaff_ESI + 0x70) + 8 + iVar6 * 8);
    puVar1 = *(undefined4 **)(unaff_ESI + 0x74);
    if (puVar3 != puVar1) {
      puVar5 = puVar3 + -2;
      do {
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (puVar3 != puVar1);
    }
    *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) + -8;
  }
  return;
}

