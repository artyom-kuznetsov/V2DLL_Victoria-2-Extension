// FUN_007b4340 @ 007b4340 body=[[007b4340, 007b43c3]]


void FUN_007b4340(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  do {
    cVar1 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x74) + 4) + 0xc))();
    if ((cVar1 == '\0') && (*(char *)(*(int *)(**(int **)(unaff_EDI + 0x74) + 4) + 0x67) == '\0')) {
      if ((*(int *)(*(int *)(unaff_EDI + 0x84) + iVar3) != 0) &&
         (iVar2 = *(int *)(*(int *)(unaff_EDI + 0x84) + iVar3), *(char *)(iVar2 + 0x142) == '\0')) {
        *(undefined1 *)(iVar2 + 0x142) = 1;
LAB_007b43a2:
        FUN_009a8550(iVar2);
      }
    }
    else if ((*(int *)(*(int *)(unaff_EDI + 0x84) + iVar3) != 0) &&
            (iVar2 = *(int *)(*(int *)(unaff_EDI + 0x84) + iVar3), *(char *)(iVar2 + 0x142) != '\0')
            ) {
      *(undefined1 *)(iVar2 + 0x142) = 0;
      goto LAB_007b43a2;
    }
    iVar3 = iVar3 + 4;
    if (0xb < iVar3) {
                    /* WARNING: Could not recover jumptable at 0x007b43c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x74) + *(int *)(unaff_EDI + 0x144) * 4) + 4))();
      return;
    }
  } while( true );
}

