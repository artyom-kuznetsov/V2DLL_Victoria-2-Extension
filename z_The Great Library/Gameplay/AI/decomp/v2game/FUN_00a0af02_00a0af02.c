// Catch@00a0af02 @ 00a0af02 body=[[00a0af02, 00a0af8e]]


undefined * Catch_00a0af02(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_004015b0(unaff_EBP + -0x3c,0x8f0,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0xf4);
  if (*(uint *)(unaff_EBP + -0xe0) < 0x10) {
    iVar2 = unaff_EBP + -0xf4;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  uVar1 = FUN_00418e30(uVar1," caused exception,");
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00401650();
  FUN_00408ad0();
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  return &DAT_00a0af8f;
}

