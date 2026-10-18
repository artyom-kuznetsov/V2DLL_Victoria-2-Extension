// FUN_00a21320 @ 00a21320 body=[[00a21320, 00a213e4]]


void FUN_00a21320(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  (**(code **)(**(int **)(unaff_ESI + 0x1c) + 4))();
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0xc);
  uVar3 = DAT_00f092fc;
  while (iVar2 != 4) {
    cVar1 = (char)(*(int **)(unaff_ESI + 0x1c))[4];
    DAT_00f092fc = uVar3;
    (**(code **)(**(int **)(unaff_ESI + 0x1c) + 4))();
    (**(code **)(**(int **)(unaff_ESI + 0x1c) + 4))();
    FUN_009b6ea0();
    (**(code **)(**(int **)(unaff_ESI + 0x1c) + 4))();
    pcVar4 = (char *)(cVar1 * 0x20 + unaff_EDI);
    if (*pcVar4 == -0x59) {
      *pcVar4 = cVar1;
      pcVar4[8] = -0x73;
      pcVar4[9] = '\x01';
      pcVar4[10] = '\0';
      pcVar4[0xb] = '\0';
      *(ulonglong *)(pcVar4 + 0xc) = CONCAT44(uVar3,uVar3);
      *(ulonglong *)(pcVar4 + 0x14) = CONCAT44(uVar3,uVar3);
      pcVar4[0x1c] = '\x01';
    }
    uVar3 = DAT_00f092fc;
    iVar2 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0xc);
  }
  DAT_00f092fc = uVar3;
  return;
}

