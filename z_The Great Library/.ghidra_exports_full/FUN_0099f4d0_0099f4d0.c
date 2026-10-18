// FUN_0099f4d0 @ 0099f4d0 body=[[0099f4d0, 0099f600]]


void FUN_0099f4d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  char local_104 [256];
  
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
  uVar1 = *param_1;
  FUN_009a0940(unaff_ESI);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  uVar1 = param_1[1];
  FUN_009a0940(unaff_ESI);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
  if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
    FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
  }
  if (*(int *)(unaff_ESI + 4) != -1) {
    FUN_004013e0(unaff_ESI);
    FUN_004013e0(unaff_ESI);
  }
  FUN_004013e0(unaff_ESI);
  return;
}

