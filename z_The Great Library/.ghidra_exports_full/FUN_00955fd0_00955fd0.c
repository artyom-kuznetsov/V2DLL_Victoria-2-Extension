// FUN_00955fd0 @ 00955fd0 body=[[00955fd0, 00956054]]


void FUN_00955fd0(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int unaff_ESI;
  int local_8;
  
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  else if (2000000 < in_EAX) {
    in_EAX = 2000000;
  }
  if (*(char *)(*(int *)(unaff_ESI + 0x68) + 0x40) == '\0') {
    *(int *)(unaff_ESI + 0x60) = in_EAX;
  }
  else if (in_EAX < *(int *)(unaff_ESI + 0x60)) {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 100) + 0x58);
    local_8 = *(int *)(unaff_ESI + 0x60) - in_EAX;
    piVar2 = (int *)FUN_004c25b0();
    FUN_004ee550(iVar1 * 0xb0 + 0x10 + *piVar2,&local_8);
    FUN_004d1020(unaff_ESI,&local_8);
  }
  iVar1 = *(int *)(unaff_ESI + 0x58);
  *(int *)(unaff_ESI + 0x5c) = iVar1;
  *(int *)(unaff_ESI + 0x58) = in_EAX;
  if (iVar1 == 0) {
    *(int *)(unaff_ESI + 0x5c) = in_EAX;
  }
  return;
}

