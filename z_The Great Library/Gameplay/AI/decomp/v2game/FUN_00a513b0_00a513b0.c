// FUN_00a513b0 @ 00a513b0 body=[[00a513b0, 00a513d9] [00a513dd, 00a513e7]]


void FUN_00a513b0(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*in_EAX;
  iVar2 = in_EAX[1] - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        FUN_00a427a0(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
  }
  return;
}

