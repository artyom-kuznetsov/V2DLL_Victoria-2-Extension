// FUN_00b264e0 @ 00b264e0 body=[[00b264e0, 00b26502]]


void FUN_00b264e0(void)

{
  void *unaff_ESI;
  
  _memset(unaff_ESI,0,0x38);
  *(code **)((int)unaff_ESI + 0x20) = FUN_00b264a0;
  *(code **)((int)unaff_ESI + 0x24) = FUN_00b264c0;
  *(undefined4 **)((int)unaff_ESI + 0x28) = &DAT_013f3aa0;
  return;
}

