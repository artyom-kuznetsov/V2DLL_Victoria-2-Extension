// FUN_0043c390 @ 0043c390 body=[[0043c390, 0043c3cd] [0043c3d8, 0043c3e8]]


void FUN_0043c390(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI[1] != 0) {
    FUN_0043c6a0(unaff_ESI[1],0);
  }
  (**(code **)(*unaff_ESI + 0x1c))(unaff_ESI[1]);
  unaff_ESI[1] = 0;
  if (unaff_ESI[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[5]);
  }
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[3] = 0;
  return;
}

