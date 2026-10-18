// Catch@0049b728 @ 0049b728 body=[[0049b728, 0049b7e5]]


undefined4 Catch_0049b728(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = unaff_EBP + -0x3c;
  uStack_8 = 0x49b736;
  uStack_8 = (**(code **)(**(int **)(unaff_EBP + -0x70) + 4))();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_c = 0x49b74b;
  FUN_00988fa0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_8 = 0x49b75a;
  FUN_00408ad0();
  uStack_8 = 0x49b76a;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined1 **)(unaff_EBP + 8) = auStack_20;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uVar1 = FUN_004015b0(unaff_EBP + -200,0x3ec,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_8 = 0x49b7ca;
  FUN_00401650();
  uStack_8 = 0x49b7d5;
  FUN_00408ad0();
  uStack_8 = 0x49b7e0;
  FUN_00408ad0();
  return 0x49b709;
}

