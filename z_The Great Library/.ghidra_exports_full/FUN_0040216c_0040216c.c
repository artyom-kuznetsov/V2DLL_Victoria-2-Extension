// Catch@0040216c @ 0040216c body=[[0040216c, 00402221]]


undefined4 Catch_0040216c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(*(int *)(unaff_EBP + 8) + 0x210) = 0;
  uVar2 = (**(code **)(*piVar1 + 4))(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00988fa0(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004015b0(unaff_EBP + -0x7c,0xb2,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar2 = FUN_00987d20();
  iVar3 = *(int *)(unaff_EBP + -0x60);
  if (*(uint *)(unaff_EBP + -0x4c) < 0x10) {
    iVar3 = unaff_EBP + -0x60;
  }
  uVar2 = FUN_00418e30(uVar2,iVar3);
  FUN_00401280(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00401650();
  FUN_00408ad0();
  FUN_00408ad0();
  return 0x402159;
}

