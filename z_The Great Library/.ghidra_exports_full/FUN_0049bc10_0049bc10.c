// Catch@0049bc10 @ 0049bc10 body=[[0049bc10, 0049bcc7]]


undefined4 Catch_0049bc10(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = unaff_EBP + -0x44;
  uStack_8 = 0x49bc21;
  uStack_8 = (**(code **)(**(int **)(unaff_EBP + -0xac) + 4))();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_c = 0x49bc33;
  FUN_00988fa0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_8 = 0x49bc42;
  FUN_00408ad0();
  uStack_8 = 0x49bc52;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined1 **)(unaff_EBP + 8) = auStack_20;
  FUN_00401320();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar1 = FUN_004015b0(unaff_EBP + -0x8c,0x433,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar1 = FUN_004238b0(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_8 = 0x49bcaf;
  FUN_00401650();
  uStack_8 = 0x49bcba;
  FUN_00408ad0();
  uStack_8 = 0x49bcc2;
  FUN_00408ad0();
  return 0x49b9b9;
}

