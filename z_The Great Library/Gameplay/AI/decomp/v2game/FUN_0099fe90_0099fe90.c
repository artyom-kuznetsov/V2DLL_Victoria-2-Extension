// FUN_0099fe90 @ 0099fe90 body=[[0099fe90, 0099ff38]]


void FUN_0099fe90(char param_1)

{
  int unaff_ESI;
  char local_104 [256];
  
  if (param_1 != '\0') {
    FUN_004013e0(unaff_ESI);
    __snprintf(local_104,0xff,"%s",&DAT_00ded950,0xf);
    FUN_0099ff90(unaff_ESI);
    return;
  }
  if (*(int *)(unaff_ESI + 4) != -1) {
    FUN_004013e0(unaff_ESI);
    if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
      FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
    }
    FUN_004013e0(unaff_ESI);
    FUN_004013e0(unaff_ESI);
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
    return;
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
  return;
}

