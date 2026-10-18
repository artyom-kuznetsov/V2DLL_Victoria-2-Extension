// FUN_0069be80 @ 0069be80 body=[[0069be80, 0069be93] [0069be97, 0069bebc] [0069bec1, 0069bed8] [0069bedc, 0069beed]]


void FUN_0069be80(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x48));
  }
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  if (*(int *)(unaff_ESI + 0x30) != 0) {
    FUN_006a2140();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  return;
}

