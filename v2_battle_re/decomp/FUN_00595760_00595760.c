// FUN_00595760 @ 00595760

void FUN_00595760(void)

{
  int iVar1;
  void **ppvVar2;
  int unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  iVar1 = *(int *)(unaff_ESI + 0x28);
  ppvVar2 = &local_14;
  local_14 = ExceptionList;
  while (ExceptionList = ppvVar2, iVar1 != 0) {
    FUN_0068aa10(**(undefined4 **)(unaff_ESI + 0x20));
    ppvVar2 = ExceptionList;
    iVar1 = *(int *)(unaff_ESI + 0x28);
  }
  ExceptionList = local_14;
  return;
}


