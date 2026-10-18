// FUN_00561130 @ 00561130 body=[[00561130, 00561174] [00561178, 0056117f]]


void FUN_00561130(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0125e38c + 8);
  *in_ECX = CNullCulture::vftable;
  for (piVar1 = (int *)*puVar2; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  FUN_00560d10();
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

