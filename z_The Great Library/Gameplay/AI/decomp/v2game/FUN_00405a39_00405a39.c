// Catch@00405a39 @ 00405a39 body=[[00405a39, 00405ae4]]


undefined4 Catch_00405a39(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 4))(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00988fa0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004015b0(unaff_EBP + -0x54,0x305,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  if (*(uint *)(unaff_EBP + -0x18) < 0x10) {
    iVar2 = unaff_EBP + -0x2c;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00401650();
  FUN_00408ad0();
  FUN_00408ad0();
  return 0x405a26;
}

