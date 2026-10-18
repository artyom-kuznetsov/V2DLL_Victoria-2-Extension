// FUN_004c01c0 @ 004c01c0 body=[[004c01c0, 004c0261]]


void FUN_004c01c0(int param_1)

{
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(unaff_EDI + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(unaff_EDI + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_004c02a0(unaff_EDI + 0x10,param_1 + 0x10);
  *(undefined4 *)(unaff_EDI + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(unaff_EDI + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(unaff_EDI + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(unaff_EDI + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(unaff_EDI + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(unaff_EDI + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(unaff_EDI + 0x48) = *(undefined4 *)(param_1 + 0x48);
  if (unaff_EDI + 0x4c != param_1 + 0x4c) {
    FUN_00445600(**(undefined4 **)(unaff_EDI + 0x50),*(undefined4 **)(unaff_EDI + 0x50));
    FUN_004c03c0(param_1 + 0x4c);
  }
  FUN_009beeb0(param_1 + 0x5c);
  return;
}

