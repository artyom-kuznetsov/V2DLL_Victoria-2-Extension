// FUN_00567650 @ 00567650 body=[[00567650, 0056768a] [0056768e, 005676ad] [005676b1, 005676c4]]


void FUN_00567650(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  puVar2 = DAT_0125e99c;
  *unaff_EDI = CNullReligion::vftable;
  for (piVar1 = (int *)*puVar2; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != unaff_EDI));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if ((uint)unaff_EDI[0x10] < 0x10) {
    unaff_EDI[0x10] = 0xf;
    unaff_EDI[0xf] = 0;
    *(undefined1 *)(unaff_EDI + 0xb) = 0;
    if ((uint)unaff_EDI[9] < 0x10) {
      unaff_EDI[9] = 0xf;
      unaff_EDI[8] = 0;
      *(undefined1 *)(unaff_EDI + 4) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI[4]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_EDI[0xb]);
}

