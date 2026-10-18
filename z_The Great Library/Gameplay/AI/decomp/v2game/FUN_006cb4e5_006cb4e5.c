// FUN_006cb4e5 @ 006cb4e5 body=[[006cb4e5, 006cb52c] [006cb530, 006cb570]]


void FUN_006cb4e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x18) =
       *(int *)(*(int *)(unaff_EBP + -0x4c) + 4) - **(int **)(unaff_EBP + -0x4c) >> 2;
  if (**(int **)(unaff_EBP + -0x4c) != 0) {
    *(undefined1 *)(unaff_EBP + -0x3d) = *(undefined1 *)(unaff_EBP + -0x3e);
    *(int *)(unaff_EBP + -0x48) =
         *(int *)(*(int *)(unaff_EBP + -0x4c) + 8) - **(int **)(unaff_EBP + -0x4c) >> 2;
    *(undefined4 *)(unaff_EBP + -0x44) = **(undefined4 **)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x44));
  }
  FUN_004010c0();
  *(int *)(*(int *)(unaff_EBP + -0x4c) + 8) =
       *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 8) * 4;
  *(int *)(*(int *)(unaff_EBP + -0x4c) + 4) =
       *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x18) * 4;
  **(undefined4 **)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

