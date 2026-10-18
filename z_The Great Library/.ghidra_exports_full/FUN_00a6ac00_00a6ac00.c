// FUN_00a6ac00 @ 00a6ac00 body=[[00a6ac00, 00a6acbb]]


void FUN_00a6ac00(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  if (in_EAX[2] != 0) {
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
    for (puVar1 = (undefined4 *)*in_EAX; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      piVar2 = (int *)*puVar1;
      FUN_009a0940(unaff_ESI);
      (**(code **)(*piVar2 + 4))();
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

