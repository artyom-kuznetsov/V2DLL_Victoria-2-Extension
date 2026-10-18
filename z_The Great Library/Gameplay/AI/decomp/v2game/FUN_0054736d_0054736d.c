// Catch_All@0054736d @ 0054736d body=[[0054736d, 00547396]]


void Catch_All_0054736d(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  uVar2 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0xc);
  uVar3 = uVar2 | 2;
  if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x38) == 0) {
    uVar3 = uVar2 | 6;
  }
  FUN_00401120(uVar3,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

