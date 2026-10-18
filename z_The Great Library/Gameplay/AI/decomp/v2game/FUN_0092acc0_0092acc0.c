// FUN_0092acc0 @ 0092acc0 body=[[0092acc0, 0092ad9b]]


void FUN_0092acc0(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_8;
  
  if ((in_EAX[1] - *in_EAX & 0xffffffc0U) != 0) {
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
    iVar1 = *in_EAX;
    if (0 < (int)(in_EAX[1] - iVar1 & 0xffffffc0U)) {
      local_8 = 0;
      iVar2 = 0;
      do {
        (**(code **)(*(int *)(local_8 + iVar1) + 4))();
        iVar1 = *in_EAX;
        local_8 = local_8 + 0x40;
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_EAX[1] - iVar1 >> 6);
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

