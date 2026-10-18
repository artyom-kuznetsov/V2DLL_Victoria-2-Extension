// FUN_007bfe20 @ 007bfe20 body=[[007bfe20, 007bfe36] [007bfe44, 007bfe70]]


void FUN_007bfe20(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x19c);
  if (iVar1 != 0) {
    FUN_00748c40(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (*(int *)(unaff_ESI + 0x1a0) != 0) {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x1a0) + 0x18) + 0x38))();
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x50))();
    *(undefined4 *)(unaff_ESI + 0x1a0) = 0;
  }
  return;
}

