// FUN_004b9c60 @ 004b9c60 body=[[004b9c60, 004b9cb8]]


void FUN_004b9c60(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x198) - *(int *)(unaff_ESI + 0x194) & 0xfffffff0U)) {
    iVar3 = 0;
    do {
      for (iVar1 = *(int *)(iVar3 + *(int *)(unaff_ESI + 0x194)); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 0x27c)) {
        iVar1 = FUN_0095ebf0();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_ESI + 0x198) - *(int *)(unaff_ESI + 0x194) >> 4);
  }
  return;
}

