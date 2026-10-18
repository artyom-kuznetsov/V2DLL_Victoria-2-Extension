// FUN_00a12420 @ 00a12420 body=[[00a12420, 00a12505]]


void FUN_00a12420(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  if ((param_1[1] - *param_1 & 0xfffffffcU) != 0) {
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
    iVar2 = *param_1;
    iVar3 = 0;
    if (0 < (int)(param_1[1] - iVar2 & 0xfffffffcU)) {
      do {
        piVar1 = *(int **)(iVar2 + iVar3 * 4);
        FUN_009a0940(unaff_ESI);
        (**(code **)(*piVar1 + 4))();
        iVar2 = *param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1] - iVar2 >> 2);
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

