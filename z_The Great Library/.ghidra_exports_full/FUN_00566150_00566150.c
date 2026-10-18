// FUN_00566150 @ 00566150 body=[[00566150, 0056615f] [00566163, 0056618f] [00566193, 005661af]]


void FUN_00566150(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x28));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  FUN_0057afc0(unaff_ESI + 0x1c);
  FUN_00aaea59(*(undefined4 *)(unaff_ESI + 0x24));
  if (*(int *)(unaff_ESI + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  FUN_0057afc0(unaff_ESI);
  FUN_00aaea59(*(undefined4 *)(unaff_ESI + 8));
  return;
}

