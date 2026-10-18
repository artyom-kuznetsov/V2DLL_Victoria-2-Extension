// FUN_00a6faa0 @ 00a6faa0 body=[[00a6faa0, 00a6faec] [00a6faf0, 00a6fb30] [00a6fb34, 00a6fb4e] [00a6fb52, 00a6fb56]]


void FUN_00a6faa0(void)

{
  undefined4 *puVar1;
  int *unaff_EDI;
  
  if (unaff_EDI == (int *)0x0) {
    return;
  }
  for (puVar1 = *(undefined4 **)*unaff_EDI;
      (puVar1 != (undefined4 *)((undefined4 *)*unaff_EDI)[1] && ((int *)*puVar1 != unaff_EDI));
      puVar1 = puVar1 + 1) {
  }
  FUN_0068f020();
  for (puVar1 = *(undefined4 **)(*unaff_EDI + 0x10);
      (puVar1 != *(undefined4 **)(*unaff_EDI + 0x14) && ((int *)*puVar1 != unaff_EDI));
      puVar1 = puVar1 + 1) {
  }
  FUN_0068f020();
  _free((void *)unaff_EDI[3]);
  _free((void *)unaff_EDI[4]);
  if (unaff_EDI[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI[0x11]);
  }
  unaff_EDI[0x11] = 0;
  unaff_EDI[0x12] = 0;
  unaff_EDI[0x13] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

