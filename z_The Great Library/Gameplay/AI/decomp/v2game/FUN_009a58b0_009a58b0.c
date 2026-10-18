// FUN_009a58b0 @ 009a58b0 body=[[009a58b0, 009a58ce] [009a58d9, 009a58e0]]


void FUN_009a58b0(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  iVar2 = *piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*unaff_ESI + 4) = *unaff_ESI;
  unaff_ESI[1] = 0;
  if (iVar2 != *unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_ESI);
}

