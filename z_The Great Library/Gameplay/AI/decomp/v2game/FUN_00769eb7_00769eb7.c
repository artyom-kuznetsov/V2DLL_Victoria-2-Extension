// FUN_00769eb7 @ 00769eb7 body=[[00769eb7, 00769ecf] [00769ed3, 00769f01] [00769f05, 00769f19]]


void FUN_00769eb7(void)

{
  int unaff_EBP;
  
  if (0xf < *(uint *)(unaff_EBP + -0x94)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xa8));
  }
  *(undefined4 *)(unaff_EBP + -0x94) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x98) = 0;
  *(undefined1 *)(unaff_EBP + -0xa8) = 0;
  if (0xf < *(uint *)(unaff_EBP + -0xb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0xc4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

