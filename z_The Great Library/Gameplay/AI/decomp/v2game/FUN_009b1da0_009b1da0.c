// FUN_009b1da0 @ 009b1da0 body=[[009b1da0, 009b1dce] [009b1dd8, 009b1ded]]


void FUN_009b1da0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_EDI;
  
  piVar3 = (int *)*unaff_EDI;
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (*unaff_EDI != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_EDI);
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  return;
}

