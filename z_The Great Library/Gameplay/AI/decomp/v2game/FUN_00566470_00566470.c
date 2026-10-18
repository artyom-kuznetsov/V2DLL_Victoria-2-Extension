// FUN_00566470 @ 00566470 body=[[00566470, 0056647e] [00566482, 005664a2] [005664a6, 005664bd] [005664c7, 005664d1]]


void FUN_00566470(void)

{
  int *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xb]);
  }
  unaff_ESI[0x10] = 0xf;
  unaff_ESI[0xf] = 0;
  *(undefined1 *)(unaff_ESI + 0xb) = 0;
  if (0xf < (uint)unaff_ESI[9]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[4]);
  }
  unaff_ESI[9] = 0xf;
  unaff_ESI[8] = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

