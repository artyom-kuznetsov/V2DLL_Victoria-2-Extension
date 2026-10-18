// FUN_004017f0 @ 004017f0 body=[[004017f0, 0040180e] [00401813, 0040182a]]


void FUN_004017f0(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_0040a190();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

