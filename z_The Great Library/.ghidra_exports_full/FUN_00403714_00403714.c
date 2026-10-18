// Catch@00403714 @ 00403714 body=[[00403714, 004037bf]]


undefined4 Catch_00403714(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 4))(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00988fa0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004015b0(unaff_EBP + -0x74,0x229,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x58);
  if (*(uint *)(unaff_EBP + -0x44) < 0x10) {
    iVar2 = unaff_EBP + -0x58;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00401650();
  FUN_00408ad0();
  FUN_00408ad0();
  return 0x403701;
}

