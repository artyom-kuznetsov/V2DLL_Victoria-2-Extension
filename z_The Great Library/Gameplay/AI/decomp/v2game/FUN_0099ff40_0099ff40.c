// FUN_0099ff40 @ 0099ff40 body=[[0099ff40, 0099ff82]]


void FUN_0099ff40(char param_1)

{
  int unaff_ESI;
  
  if (param_1 == '\0') {
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
    if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
      FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
    }
    if (*(int *)(unaff_ESI + 4) == -1) {
      return;
    }
  }
  FUN_004013e0(unaff_ESI);
  FUN_004013e0(unaff_ESI);
  return;
}

