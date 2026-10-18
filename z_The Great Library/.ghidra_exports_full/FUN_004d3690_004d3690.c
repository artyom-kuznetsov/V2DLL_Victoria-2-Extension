// FUN_004d3690 @ 004d3690 body=[[004d3690, 004d36f7]]


bool FUN_004d3690(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = -1;
  iVar1 = -1;
  if (*(int *)(in_EAX + 4) != 0) {
    iVar2 = *(int *)(*(int *)(*unaff_EDI + 0x48) +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4
                                              ) + 0xe64) + 8) * 4);
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    iVar1 = *(int *)(*(int *)(*unaff_EDI + 0x48) +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(unaff_ESI + 4) * 4) + 0xe64) + 8) * 4);
  }
  return iVar1 < iVar2;
}

