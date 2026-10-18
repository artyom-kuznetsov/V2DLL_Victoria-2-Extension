// FUN_009b1040 @ 009b1040 body=[[009b1040, 009b107c] [009b1080, 009b1088] [009b1095, 009b10a7]]


void FUN_009b1040(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  *(undefined1 *)(unaff_EDI + 3) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

