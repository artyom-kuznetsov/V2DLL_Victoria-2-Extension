// FUN_0099f610 @ 0099f610 body=[[0099f610, 0099f762]]


void FUN_0099f610(void)

{
  float fVar1;
  float *in_EAX;
  int unaff_ESI;
  char local_140 [316];
  
  FUN_009a0940();
  if (*(int *)(unaff_ESI + 4) == -1) {
    *(undefined4 *)(unaff_ESI + 4) = 0;
  }
  else {
    FUN_004013e0();
    if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
      FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
    }
    FUN_004013e0();
    FUN_004013e0();
  }
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
  fVar1 = *in_EAX;
  FUN_009a0940();
  _sprintf(local_140,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  fVar1 = in_EAX[1];
  FUN_009a0940();
  _sprintf(local_140,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
  if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
    FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
  }
  if (*(int *)(unaff_ESI + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  FUN_004013e0();
  return;
}

