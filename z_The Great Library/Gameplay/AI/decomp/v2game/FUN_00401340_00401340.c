// FUN_00401340 @ 00401340 body=[[00401340, 004013db]]


void FUN_00401340(void)

{
  int iVar1;
  int *in_EAX;
  int in_ECX;
  
  if (in_EAX[2] != 0) {
    FUN_009a0940(in_ECX);
    FUN_0099fe90(0);
    if ((*(char *)(in_ECX + 0xc) == '\0') && (*(int *)(in_ECX + 4) != 0)) {
      FUN_009a08a0(in_ECX,*(int *)(in_ECX + 4) + -1);
    }
    for (iVar1 = *in_EAX; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
      FUN_0099f770(in_ECX,1);
      if (*(char *)(in_ECX + 0xc) == '\0') {
        FUN_004013e0(in_ECX);
      }
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
    if ((*(char *)(in_ECX + 0xc) == '\0') && (*(int *)(in_ECX + 4) != 0)) {
      FUN_009a08a0(in_ECX,*(int *)(in_ECX + 4) + -1);
    }
    if (*(int *)(in_ECX + 4) != -1) {
      FUN_004013e0(in_ECX);
      FUN_004013e0(in_ECX);
    }
  }
  return;
}

