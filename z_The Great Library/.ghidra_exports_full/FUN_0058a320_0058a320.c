// FUN_0058a320 @ 0058a320 body=[[0058a320, 0058a3a6] [0058a3b0, 0058a429]]


void FUN_0058a320(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  char local_108 [260];
  
  if ((param_1[1] - *param_1 & 0xfffffff8U) != 0) {
    FUN_009a0940(unaff_ESI);
    if (*(int *)(unaff_ESI + 4) == -1) {
      *(undefined4 *)(unaff_ESI + 4) = 0;
    }
    else {
      FUN_004013e0(unaff_ESI);
      if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
        FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
      }
      FUN_004013e0(unaff_ESI);
      FUN_004013e0(unaff_ESI);
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
    iVar1 = *param_1;
    iVar2 = 0;
    if (0 < (int)(param_1[1] - iVar1 & 0xfffffff8U)) {
      do {
        _sprintf(local_108,"%lld",*(undefined4 *)(iVar1 + iVar2 * 8),
                 *(undefined4 *)(iVar1 + 4 + iVar2 * 8));
        FUN_0099ff90(unaff_ESI);
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[1] - iVar1 >> 3);
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
    if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
      FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
    }
    if (*(int *)(unaff_ESI + 4) != -1) {
      FUN_004013e0(unaff_ESI);
      FUN_004013e0(unaff_ESI);
    }
  }
  return;
}

