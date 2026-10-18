// FUN_00724460 @ 00724460 body=[[00724460, 00724489] [0072448d, 00724492] [0072449d, 007244aa]]


void FUN_00724460(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    *(undefined ***)(iVar2 + 0x38) = CButtonObserver::vftable;
    *(undefined ***)(iVar2 + 0xc) = CButtonObserver::vftable;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

