// Catch_All@0067f469 @ 0067f469 body=[[0067f469, 0067f526]]


undefined4 Catch_All_0067f469(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined1 **)(unaff_EBP + -0x1c) = auStack_1c;
  FUN_009885d0();
  uVar1 = 0;
  FUN_00992740(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + 0xc),0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_4 = 0x67f4a9;
  FUN_009885d0();
  iStack_4 = 0x114;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_8 = 0x67f4b7;
  iStack_4 = FUN_00aae9af();
  *(int *)(unaff_EBP + -0x1c) = iStack_4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iStack_4 != 0) {
    uStack_8 = 0x67f4d3;
    uVar1 = FUN_00990900();
  }
  iStack_4 = 1;
  iStack_c = unaff_EBP + -0x410;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_10 = 0x67f4eb;
  uStack_8 = uVar1;
  FUN_009a0bf0();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_4 = 0x67f4f7;
  FUN_00408ad0();
  uStack_8 = *(undefined4 *)(unaff_EBP + 8);
  iStack_4 = unaff_EBP + -0x410;
  iStack_c = 0x67f507;
  FUN_0067f5b0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_4 = 0x67f516;
  FUN_009a0dc0();
  iStack_4 = 0x67f521;
  FUN_00992d60();
  return 0x67f454;
}

