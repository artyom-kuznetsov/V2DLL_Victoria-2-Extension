// FUN_00822c70 @ 00822c70 body=[[00822c70, 00822ce6]]


void FUN_00822c70(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x68);
joined_r0x00822c78:
  do {
    do {
      do {
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[2];
      } while ((0 < *(int *)(iVar2 + 0xa0)) || (*(int *)(iVar2 + 0x74) != 0));
      iVar4 = FUN_008252b0(unaff_EDI,iVar2,0);
      iVar2 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x58);
    } while (iVar2 == iVar4);
    for (piVar3 = *(int **)(unaff_EDI + 0xa8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == iVar2) goto joined_r0x00822c78;
    }
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4);
    if (*(int *)(iVar2 + 0x58) != 0) {
      FUN_008255a0(unaff_EDI,iVar2,0);
    }
  } while( true );
}

