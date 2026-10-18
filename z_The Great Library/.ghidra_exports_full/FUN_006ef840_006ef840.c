// FUN_006ef840 @ 006ef840 body=[[006ef840, 006ef856] [006ef864, 006ef890]]


void FUN_006ef840(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x8c);
  if (iVar1 != 0) {
    FUN_00748c40(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (*(int *)(unaff_ESI + 0x90) != 0) {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x90) + 0x18) + 0x38))();
    (**(code **)(**(int **)(unaff_ESI + 0x90) + 0x50))();
    *(undefined4 *)(unaff_ESI + 0x90) = 0;
  }
  return;
}

