// FUN_00a724c3 @ 00a724c3 body=[[00a724c3, 00a724f6]]


void FUN_00a724c3(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  FUN_009e6760(*(int *)(unaff_EBP + 8) + 0x68,*(undefined4 *)(unaff_EBP + 0xc));
  if (puVar1 != unaff_EBX) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

