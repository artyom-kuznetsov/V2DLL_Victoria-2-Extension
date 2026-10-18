// Catch@009fc0b6 @ 009fc0b6 body=[[009fc0b6, 009fc10e]]


undefined4 Catch_009fc0b6(void)

{
  int iVar1;
  int unaff_EBP;
  undefined1 auStack_30 [40];
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = 0x68;
  uStack_8 = 0x9fc0bd;
  iVar1 = FUN_00aae9af();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  if (iVar1 == 0) {
    uStack_4 = 0;
  }
  else {
    uStack_4 = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x20) + 0x28);
    uStack_8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x24);
    *(undefined1 **)(unaff_EBP + -0x1c) = auStack_30;
    FUN_009fb110();
    uStack_4 = FUN_009fc730(iVar1,0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  uStack_8 = 0x9fc109;
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x28) + 0x38) + 0x18))();
  return 0x9fb323;
}

