// FUN_00a12680 @ 00a12680 body=[[00a12680, 00a1279b]]


void FUN_00a12680(int *param_1)

{
  int *piVar1;
  int unaff_ESI;
  int iVar2;
  int local_8;
  
  piVar1 = param_1;
  iVar2 = param_1[1] - *param_1 >> 0x1f;
  if ((param_1[1] - *param_1) / 0x50 + iVar2 != iVar2) {
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
    local_8 = 0;
    if (0 < (param_1[1] - iVar2) / 0x50) {
      param_1 = (int *)0x0;
      do {
        FUN_009a0940(unaff_ESI);
        (**(code **)(*(int *)(iVar2 + (int)param_1) + 4))();
        iVar2 = *piVar1;
        local_8 = local_8 + 1;
        param_1 = (int *)((int)param_1 + 0x50);
      } while (local_8 < (piVar1[1] - iVar2) / 0x50);
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

