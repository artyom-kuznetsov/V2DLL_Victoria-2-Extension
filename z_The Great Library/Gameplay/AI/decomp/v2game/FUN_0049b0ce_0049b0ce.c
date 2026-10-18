// Catch@0049b0ce @ 0049b0ce body=[[0049b0ce, 0049b179]]


undefined4 Catch_0049b0ce(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = unaff_EBP + -0x34;
  uStack_8 = 0x49b0dc;
  uStack_8 = (**(code **)(**(int **)(unaff_EBP + -0x58) + 4))();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_c = 0x49b0ee;
  FUN_00988fa0();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_8 = 0x49b0fd;
  FUN_00408ad0();
  uStack_8 = 0x49b10a;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined1 **)(unaff_EBP + 8) = auStack_20;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar1 = FUN_004015b0(unaff_EBP + -0x50,0x360,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_8 = 0x49b164;
  FUN_00401650();
  uStack_8 = 0x49b16c;
  FUN_00408ad0();
  uStack_8 = 0x49b174;
  FUN_00408ad0();
  return 0x49b04e;
}

