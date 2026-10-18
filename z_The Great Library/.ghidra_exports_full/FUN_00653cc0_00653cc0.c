// Catch@00653cc0 @ 00653cc0 body=[[00653cc0, 00653d97]]


undefined * Catch_00653cc0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0xc0) + 4))(unaff_EBP + -0xe8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00988fa0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004015b0(unaff_EBP + -0x68,0xa3b,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (*(uint *)(unaff_EBP + -0x1c) < 0x10) {
    iVar2 = unaff_EBP + -0x30;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00408ad0();
  (**(code **)(**(int **)(*(int *)(*(int *)(unaff_EBP + 8) + 0x17e8) + 0xe4) + 0x10))(0);
  FUN_00408ad0();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  return &DAT_00653d98;
}

