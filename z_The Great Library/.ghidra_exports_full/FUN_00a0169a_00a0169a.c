// Catch@00a0169a @ 00a0169a body=[[00a0169a, 00a01711]]


undefined4 Catch_00a0169a(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  FUN_004015b0(unaff_EBP + -0x288,0x387,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x7c);
  if (*(uint *)(unaff_EBP + -0x68) < 0x10) {
    iVar2 = unaff_EBP + -0x7c;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  FUN_00401650();
  FUN_00408ad0();
  return 0xa01a19;
}

