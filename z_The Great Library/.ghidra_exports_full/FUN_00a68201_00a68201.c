// FUN_00a68201 @ 00a68201 body=[[00a68201, 00a68216] [00a6821a, 00a68233] [00a68237, 00a6824c] [00a68250, 00a68271]]


void FUN_00a68201(void)

{
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(int *)(unaff_EBP + -0x3c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x4c) = (char)unaff_EBX;
  if (*(int *)(unaff_EBP + -0x5c) != unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EBP + -0x5c));
  }
  *(int *)(unaff_EBP + -0x5c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x58) = unaff_EBX;
  *(int *)(unaff_EBP + -0x54) = unaff_EBX;
  if (*(int *)(unaff_EBP + -0x6c) != unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EBP + -0x6c));
  }
  *(int *)(unaff_EBP + -0x6c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x68) = unaff_EBX;
  *(int *)(unaff_EBP + -100) = unaff_EBX;
  FUN_00a67f40();
  return;
}

