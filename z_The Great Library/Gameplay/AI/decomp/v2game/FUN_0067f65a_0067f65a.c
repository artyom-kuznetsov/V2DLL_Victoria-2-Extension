// Catch@0067f65a @ 0067f65a body=[[0067f65a, 0067f70c]]


undefined * Catch_0067f65a(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00988fa0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004015b0(unaff_EBP + -0x4c,0x306,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (*(uint *)(unaff_EBP + -0x1c) < 0x10) {
    iVar2 = unaff_EBP + -0x30;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00401650();
  FUN_00408ad0();
  FUN_00408ad0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_0067f70d;
}

