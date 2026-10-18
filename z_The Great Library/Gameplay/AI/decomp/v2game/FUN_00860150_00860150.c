// FUN_00860150 @ 00860150 body=[[00860150, 00860184] [0086018d, 00860198]]


undefined4 FUN_00860150(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar1 = (int *)(*(int *)(unaff_ESI + 8) +
                  (*(uint *)(unaff_EDI + 0xc) % *(uint *)(unaff_ESI + 4)) * 4);
  piVar2 = (int *)0x0;
  piVar3 = (int *)*piVar1;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    if (*piVar3 == unaff_EDI) break;
    piVar2 = piVar3;
    piVar3 = (int *)piVar3[1];
  }
  if (piVar2 != (int *)0x0) {
    piVar2[1] = piVar3[1];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3);
  }
  *piVar1 = piVar3[1];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

